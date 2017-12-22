package es.ibermutuamur.eucaliptous;

import java.io.BufferedWriter;
import java.io.FileOutputStream;
import java.io.OutputStreamWriter;
import java.io.Writer;
import java.nio.charset.Charset;
import java.nio.file.FileSystems;
import java.nio.file.Files;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;

import es.ibermutuamur.eucaliptous.beans.Item;

public class App {
	private static String ADVENTURE_FILE = "eucaliptous.txt";
	private static String SAVE_PATH = "../src/";
	private static String OUTPUT_BASE = "textos";
	
	public static void main(String[] args) {
		List<String> lines = new ArrayList<String>();
		try {
			lines = Files.readAllLines(FileSystems.getDefault().getPath("", ADVENTURE_FILE), Charset.forName("ISO-8859-1"));
		} catch (Exception e) {
			System.err.println("Error leyendo líneas de " + ADVENTURE_FILE);
		}
		
		List<Item> items = new ArrayList<Item>();
		List<String> statuses = null;
		
		List<String> buffer = new ArrayList<String>();
		for (String line : lines) {
			if (line.startsWith("---")) {
				Item item = new Item();
				item.setLines(buffer);
				item.process();
				items.add(item);
				buffer = new ArrayList<String>();
			} else {				
				buffer.add(line);
			}
		}
		statuses = buffer;
		for (String status : statuses) {
			if (status.length() > 39) {
				System.err.println("Status con más de 39 caracteres: " + status);
			}
		}
		
		items.sort(new Comparator<Item>() {
			public int compare(Item o1, Item o2) {				
				return Integer.compare(o1.getNumber(), o2.getNumber());
			}
		});
		
		generateFiles(items, statuses);
	}
	
	public static void generateFiles(List<Item> items, List<String> statuses) {
		String fileH = "#ifndef _TEXTOS_H_\r\n" + 
				"#define _TEXTOS_H_\r\n" + 
				"\r\n" + 
				"#include <types.h>\r\n" + 
				"\r\n" + 
				"#define STATUSES " + statuses.size() + "\r\n" + 
				"#define TEXT_ITEMS " + items.size() + "\r\n" + 
				"\r\n" + 
				"extern const u8 *statuses[STATUSES];\r\n" + 
				"extern const u8 *headers[TEXT_ITEMS];\r\n" + 
				"extern const u8 *texts[TEXT_ITEMS];\r\n" + 
				"extern const u8 options[TEXT_ITEMS][4];\r\n" + 
				"\r\n" + 
				"void ec_initTexts();\r\n" + 
				"\r\n" + 
				"#endif";
		
		String fileC = "#include \"textos.h\"\r\n" + 
				"\r\n" + 
				"const u8 *statuses[STATUSES];\r\n" + 
				"const u8 *headers[TEXT_ITEMS];\r\n" + 
				"const u8 *texts[TEXT_ITEMS];\r\n" +
				"\r\n" + 
				"const u8 options[TEXT_ITEMS][4] = {\r\n";
		
		for (int i = 0; i < items.size(); i++) {
			fileC += "	{";
			Item item = items.get(i);
			int j = 0;
			for (; j < item.getOptions().size(); j++) {
				fileC += item.getOptions().get(j).getNext() + (j < item.getOptions().size() ? ", " : "");
			}
			for (; j < 4; j++) {
				fileC += 255 + (j < 3 ? ", " : "");
			}
			fileC += "}" + (i < items.size() - 1 ? "," : "")  + "\r\n";
		}
		fileC += "};\r\n\r\n";
		
		fileC += "void ec_initTexts() {\r\n";
		
		for (int i = 0; i < items.size(); i++) {
			fileC += "	headers[" + i + "] = \"" + items.get(i).getHeader() + "\";\r\n";
		}
		fileC += "\r\n";
		
		for (int i = 0; i < items.size(); i++) {
			fileC += "	texts[" + i + "] = \"" + items.get(i).getText().replace("\n", "\\n").replace("\"", "\\\"") + "\";\r\n";
		}
		fileC += "\r\n";		
		
		for (int i = 0; i < statuses.size(); i++) {
			fileC += "	statuses[" + i + "] = \"" + statuses.get(i).replace("\"", "\\\"") + "\";\r\n";
		}
		
		fileC += "}";
		
		try (Writer writer = new BufferedWriter(new OutputStreamWriter(
	              new FileOutputStream(SAVE_PATH + OUTPUT_BASE + ".h"), "iso-8859-1"))) {
		   writer.write(fileH);
		} catch (Exception e) {
			System.err.println("Error al guardar fichero .h");
		}
		
		try (Writer writer = new BufferedWriter(new OutputStreamWriter(
	              new FileOutputStream(SAVE_PATH + OUTPUT_BASE + ".c"), "iso-8859-1"))) {
		   writer.write(fileC);
		} catch (Exception e) {
			System.err.println("Error al guardar fichero .c");
		}
	}
}

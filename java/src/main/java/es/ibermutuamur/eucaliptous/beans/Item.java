package es.ibermutuamur.eucaliptous.beans;

import java.util.ArrayList;
import java.util.List;

public class Item {
	private int number;
	private String header;
	private String text;
	private List<Option> options = new ArrayList<Option>();
	private List<String> lines;
	
	public int getNumber() {
		return number;
	}
	public void setNumber(int number) {
		this.number = number;
	}
	public String getHeader() {
		return header;
	}
	public void setHeader(String header) {
		this.header = header;
	}
	public String getText() {
		return text;
	}
	public void setText(String text) {
		this.text = text;
	}
	public List<Option> getOptions() {
		return options;
	}
	public void setOptions(List<Option> options) {
		this.options = options;
	}
	public List<String> getLines() {
		return lines;
	}
	public void setLines(List<String> lines) {
		this.lines = lines;
	}
	
	public void process() {
		if (lines.size() > 0) {
			String first = lines.get(0);
			String[] aux = first.split("\\:");
			
			// Number and header
			if (aux.length != 2) {
				System.err.println("Error al procesar item");
				return;
			} else {
				try {
					number = Integer.parseInt(aux[0].substring(1));
				} catch (Exception e) {
					System.err.println("Número inválido: " + aux[0].substring(1));
					return;
				}
				header = aux[1].substring(0, aux[1].length() - 1);
				if (header.length() > 39) {
					System.err.println("Cabecera con más de 39 caracteres: " + number);
				}
				header = header.replace("\"", "\\\"");
			}
			
			// Text
			List<String> textLines = new ArrayList<String>();
			int i = 1;
			while (!lines.get(i).startsWith("[]")) {
				textLines.add(lines.get(i++).trim());
			}
			text = "";
			for (String line : textLines) {
				if (!line.trim().isEmpty()) {
					line = "  " + line;
				}
				text += line + "\n";
			}
			
			// Options
			while (i < lines.size()) {
				String optionRaw = lines.get(i++);
				if (!optionRaw.startsWith("[]") || !optionRaw.contains(">")) {
					System.err.println("Error en opción de elemento " + number);
				} else {
					aux = optionRaw.split(">");
					int optionNext = 255;
					
					try {
						optionNext = Integer.parseInt(aux[1].trim());
					} catch (Exception e) {
						System.err.println("Número inválido en opción: " + aux[1].trim());
						return;
					}
					
					Option option = new Option();
					option.setNext(optionNext);
					option.setText(aux[0].substring(2).trim());
					options.add(option);
				}
			}
			if (options.size() > 4) {
				System.err.println("Hay más de cuatro opciones en el item " + number);
				return;
			}
			
			// Merge text and options
			for (int o = 0; o < options.size(); o++) {
				char no;
				switch (o) {
					case 0:
						no = 'ä';
						break;
						
					case 1:
						no = 'ë';
						break;
						
					case 2:
						no = 'ï';
						break;
						
					case 3:
						no = 'ö';
						break;
						
					default:
						no = ' ';
						break;
				}			
				
				String optionText = no + " ";
				int chars = 2;
				String[] words = options.get(o).getText().split(" ");
				for (String word : words) {					
					if (chars + word.length() > 40) {
						optionText = optionText.substring(0, optionText.length() - 1) + "\n  " + word + " ";
						chars = word.length() + 3;
					} else {
						optionText += word + " ";
						chars += word.length() + 1;
					}
				}
				
				text += optionText.substring(0, optionText.length() - 1) + (o != options.size() - 1 ? "\n\n" : "");						
			}
			
			// Check number of lines (rough)
			int l = 1, col = 0;
			for (int c = 0; c < text.length(); c++) {
				col++;
				if (text.charAt(c) == '\n') {
					col = 0;
					l++;
				} else if (col > 40) {
					col = 0;
					l++;
				}
			}
			if (l > 16) {
				System.err.println("El texto supera las 16 líneas: " + number);
			}
		} else {
			System.err.println("Item sin líneas");
		}
	}
}

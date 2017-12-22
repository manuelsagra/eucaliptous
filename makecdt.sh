#!/bin/bash
rm -f eucaliptous.cdt
cdtutil="${CPCT_PATH}/tools/2cdt/bin/2cdt"
$cdtutil -n . eucaliptous.cdt > /dev/null
$cdtutil -r EUCALIPTOUS dsk_files/juego.bas eucaliptous.cdt > /dev/null
$cdtutil -r screen.scr -L 0xC000 dsk_files/screen.scr eucaliptous.cdt> /dev/null
$cdtutil -r eucalipt.bin -L 0x4000 -X 0x729A obj/eucaliptous.bin eucaliptous.cdt > /dev/null
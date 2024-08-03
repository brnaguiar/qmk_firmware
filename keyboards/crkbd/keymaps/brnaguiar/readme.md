### Instructions:

#### Compile keymaps:
```
qmk compile -kb crkbd -km brnaguiar
```

#### Flash firmware:
```
qmkdefault flash -kb crkbd -km brnaguiar -bl avrdude 
```

If that doesn't work, flash the halves individually:
1. Disconnect the keyboard
2. Remove the TRSS cable
3. Plug the USB cable in the left half and run:
```
qmk flash -kb crkbd -km brnaguiar -bl avrdude-split-left
```
4. Plug the USB cable in the right half and run:
```
qmk flash -kb crkbd -km brnaguiar -bl avrdude-split-right #s
```
5. Connect the TRSS cable
6. Connect the keyboard to the PC

#### [NOTE: NEVER disconnect the TRSS cable while the keyboard is plugged](https://docs.qmk.fm/features/split_keyboard#considerations)

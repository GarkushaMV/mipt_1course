"xor %ecx, %ecx\n"
"xor %edx, %ecx\n"
"mov %al, %cl\n"
"mov $1, %al\n"
"lb1:"
"imul %cl\n"
"dec %cl\n"
"cmp $1, %cl\n"
"jne lb1\n"
"mov %ax, %dx\n"

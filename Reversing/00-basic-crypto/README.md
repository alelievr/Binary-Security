## Final purpose
Find the parameter value to display "GGWP"

## About the binary
they are all compiled in 32 bit and stripped.  
This is a reverse Exercise so all available protections are activated (you cant exploit this binary to find the code).

## Compilation line
### x86_64
gcc -Wall -Wextra -Wformat-security -Werror -fstack-protector-all -Wstack-protector --param ssp-buffer-size=5 -Wl,-pie -fPIE -ftrapv -O2 Solution/reverse-me-section.c -m32 -o reverse-me-\`uname -m\`_\`uname -s\`

strip reverse-me-\`uname -m\`_\`uname -s\`

### mips
mips-linux-gnu-gcc -march=mips64r2 -Wall -Wextra -Wformat-security -Werror -fstack-protector-all -Wstack-protector --param ssp-buffer-size=5 -Wl,-pie -fPIE -ftrapv -O2 Solution/reverse-me.c -o reverse-me-MIPS64r2

mips-linux-gnu-strip reverse-me-MIPS64r2 

### arm
arm-linux-gnueabihf-gcc -march=armv8-a -Wall -Wextra -Wformat-security -Werror -fstack-protector-all -Wstack-protector --param ssp-buffer-size=5 -Wl,-pie -fPIE -ftrapv -O2 Solution/reverse-me.c -o reverse-me-ARMv8

arm-linux-gnueabihf-strip reverse-me-ARMv8 

### avr
avr-gcc -Wall -Wextra -Wformat-security -Werror -Wstack-protector --param ssp-buffer-size=5 -ftrapv -O2 Solution/reverse-me.c -o reverse-me-AVR

avr-strip reverse-me-AVR

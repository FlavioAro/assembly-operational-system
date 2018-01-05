#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"
kmain()
{
isr_install();
clearScreen();
print("CYRAX\nBem vindo ao Sistem Operacional\n\nDigite o comando help para ajuda\n\n\n");
launch_shell(0);    
}

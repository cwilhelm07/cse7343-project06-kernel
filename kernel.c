/* kernel.c
   A simple kernel that displays "Hello World!"
   Chris Wilhelm
*/

 int main() {
 	putInMemory(0xB000, 0x8140, 'A');
 	putInMemory(0xB000, 0x8141, 7);

 	while(1);
 	return 0;
 }
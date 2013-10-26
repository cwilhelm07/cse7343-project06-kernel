/* kernel.c
   A simple kernel that displays "Hello World!".
   Will write each byte (ascii then color) starting
   on the leftmost column of row 3.
   
   Chris Wilhelm
*/

#define VIDEO_SEGMENT 0xB000
#define LINE3_OFFSET  0x8140

#define CYAN    0x03
#define MAGENTA 0x05
#define GREEN   0x02
#define YELLOW  0x0E
#define WHITE   0x0F
#define RED     0x0C

int main() {

   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 0, 'H');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 1, CYAN);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 2, 'e');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 3, MAGENTA);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 4, 'l');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 5, GREEN);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 6, 'l');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 7, YELLOW);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 8, 'o');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 9, WHITE);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 10, ' ');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 11, RED);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 12, 'W');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 13, CYAN);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 14, 'o');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 15, MAGENTA);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 16, 'r');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 17, GREEN);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 18, 'l');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 19, YELLOW);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 20, 'd');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 21, WHITE);
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 22, '!');
   putInMemory(VIDEO_SEGMENT, LINE3_OFFSET + 23, RED);

   while(1);
   return 0;
}
#include <stdio.h>
#include <stdint.h>
// Signature, FileSize, Reserved, DataOffset



 int main() {
   int width = 2;
   int height = 2;

   int bits_per_px = 24;
   int bytes_per_px = bits_per_px / 8;
   int row_size = width * bytes_per_px;

   int padding = 0;
   
   // alight to a 4 byte boundary
   while (row_size % 4 != 0) {
      padding++;      
      row_size++;
}


   int pixel_data_size = row_size * height;
   int pixel_data_offset = 14 + 40;

   int file_size = pixel_data_size + pixel_data_offset;

	printf("BM"); // Signature
   printf("%x",file_size);
	return 0;
} 


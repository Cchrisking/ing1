#include <stdio.h>
int main() {
  int data[]={
    1000000001,
    1000000002,
    1000000003,
    1000000004,
    1000000005,
    1000000006,
    1000000007,
    1000000008,
  };
  FILE *myfile;
  myfile = fopen("file.bin", "wb");
  fwrite(data, sizeof(data),1,myfile);
  fclose(myfile);
  myfile = fopen("file.bin", "rb");
  for(int i=0; i < sizeof(data)/sizeof(int); i++){
    printf("%d\n", data[i]);
  }
  return 0;

}

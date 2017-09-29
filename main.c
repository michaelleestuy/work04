#include <stdio.h>
#include <string.h>


int main(){
  char source[] = "lalallalalaskdfda";
  char dest[123];

  printf("Before strcpy:\n source = \"%s\"\n dest = \"%s\"\n", source, dest);

  strcpy(dest, source);
  
  printf("After strcpy:\n source = \"%s\"\n dest = \"%s\"\n", source, dest);

  /////////////////////////////////////////////////////////////////


  char source1[] = "123456789";
  char dest1[1223];

  
  printf("Before strncpy:\n source1 = \"%s\"\n dest1 = \"%s\"\n", source1, dest1);

  strncpy(dest1, source1, 4);

  printf("After strncpy:\n source1 = \"%s\"\n dest1 = \"%s\"\n", source1, dest1);


  
  return 0;
}

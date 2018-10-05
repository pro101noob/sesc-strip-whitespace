#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
  char a[1000] = "", s[1000] = "";
  scanf("%s\n", a);
  while (a[0] == ' ') {
    for (int i=1; i<strlen(a); i++ ) a[0]=a[1];
    a[strlen(a)-1]='\0';
  }
  while (a[strlen(a)-1] == ' ') {
    for (int i=strlen(a)-1; i>0; i-- ) a[i]=a[i-1];
    a[0]='\0';
  }
  for (int i=0; i<strlen(a)-1; i++ ) {
  while (a[i] == ' ') if (a[i+1] == ' ') a[i+1]='\0';
  }
  printf("%s\n", a);
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern) {
	int count;
	int sLen = strlen(s);
	int pLen = strlen(pattern);
	for (int i = 0; i < sLen; i++) {
		count = 0;
		while ( s[count + i]!= '\0' && pattern[count]!= '\0' && s[count + i] == pattern[count]) 
			count++;
		if(count == pLen) {
			strcpy(s + i, s + pLen + i);
			break;
		} 
	}
	return s;
}
int main(){
	char s[50] = "Ana are mere";
	char *pattern = "re";
	printf("%s\n", delete_first(s, pattern));
	return 0;
}

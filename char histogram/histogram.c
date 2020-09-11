#include <stdio.h>
main(){
	int c;
	int tab[127] = {0};
	int empty = 0;
	while((c = getchar()) != EOF){
		if( c >= 48 && c <= 127){
			tab[c-'0']++;
		}
	}
	/* Build histogram **/
	printf("\n");
	while(empty == 0){
		empty = 1;
		for(int i = 48; i < 127; i++){
			if(tab[i-48] > 0){
				printf("|");
				tab[i-48]--;
				empty = 0;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	/* Build base of histogram **/
	for(int i = 48; i < 127; i++){
		printf("%c", (i));
	}
	printf("\n");
	return 0;
}

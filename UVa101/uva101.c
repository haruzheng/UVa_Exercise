#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n,sw;
	char cmd[5],cmd2[5];
	while(scanf("%d",&n) != EOF){
		sw = 1;
		while(sw){
			scanf("%s",&cmd);
			switch(cmd[0]){
				case 'm':
					break;
                                case 'p':
                                        break;
                                case 'q':
					sw = 0;
					break;
			}
		}
	}
	return 0;
}

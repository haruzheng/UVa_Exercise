#include <stdio.h>
#include <stdlib.h>

int main(void){
        long i,j,max,k,first,last,tmp,count;
        while(scanf("%ld %ld",&i,&j) != EOF){
                max = 0;
                if(i<j){
                        first = i;
                        last = j;
                }else{
                        first = j;
                        last = i;
                }
                for(k=first;k<=last;k++){
                        count = 1;
                        tmp = k;
                        while(tmp > 1){
                                if(tmp&1){
                                        tmp = tmp*3+1;
                                }else{
                                        tmp /=2;
                                }
                                count++;
                        }
                        if(count > max){
                                max = count;
                        }
                }
                printf("%ld %ld %ld\n",i,j,max);
        }
	return 0;
}


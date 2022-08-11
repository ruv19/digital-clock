#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main (void) {
	
	int saniye=0,dakika=0,saat=0;

	while(1) {
		
		printf("\n %02d:%02d:%02d",saat,dakika,saniye);
		fflush(stdout);
		saniye++;

	if(saniye == 60) {

		dakika=dakika+1;
		saniye=0;
	}
	if(dakika == 60) {

		saat=saat+1;
		dakika=0;
	}
	if(saat = 24) {

		saat=0;
		dakika=0;
		saniye=0;
	}
	sleep(1);
   } 
   return 0;
   
}

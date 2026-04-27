#include <stdio.h>
#include <string.h>
#include <math.h>

int max(int a, int b){
	return (a>b)?a:b;
}

int main(){
	int i, nRect, rect[1000][2], dp[1000][2];
	
	scanf("%d", &nRect);
	for(i=0; i<nRect; i++)
		scanf("%d %d", &rect[i][0], &rect[i][1]);
		
	dp[0][0] = rect[0][0];
	dp[0][1] = rect[0][1];
	for(i=1; i<nRect; i++){
		dp[i][0] = rect[i][0]+max(dp[i-1][0]+abs(rect[i-1][1]-rect[i][1]), dp[i-1][1]+abs(rect[i-1][0]-rect[i][1]));
		dp[i][1] = rect[i][1]+max(dp[i-1][0]+abs(rect[i-1][1]-rect[i][0]), dp[i-1][1]+abs(rect[i-1][0]-rect[i][0]));
	}
	printf("%d\n", max(dp[nRect-1][0], dp[nRect-1][1]));

	return 0;
}

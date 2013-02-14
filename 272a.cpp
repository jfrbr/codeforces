#include <cstdio>
#include <cstring>

using namespace std;

int main(){

	
	int n,fingers[101],sum=0,nfingers=0;
	memset(fingers,0,sizeof(fingers));

	scanf("%d\n",&n);
	

	for (int i=0;i<n;i++){
		scanf("%d",&fingers[i]);
		sum += fingers[i];
	}
	
	for (int i=1;i<=5;i++){
		if ( (sum + i) %  (n + 1)  != 1 ) nfingers++;
	}

	printf("%d\n",nfingers);

	


	return 0;
}

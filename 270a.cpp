#include <cstdio>
#include <cmath>

using namespace std;

int t,a;
float num;

int main(){

		scanf("%d\n",&t);

		for (int i=0;i<t;i++){
			scanf("%d\n",&a);
			num = (float)360/(180-a);

			if ( ceil(num) == floor(num) ) printf("YES\n");
			else printf("NO\n");
		}
		return 0;
}

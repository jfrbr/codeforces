#include <cstdio>
#include <cstring>
#include <vector>

using namespace std;

int main(){

	int n,v,vendors=0,k,price, first = 1;
	scanf("%d %d\n",&n,&v);
	vector<int> s;

	for (int i=0; i < n;++i){
		scanf("%d",&k);
		first = 1;
		for (int j=0; j < k; ++j){
			scanf("%d",&price);
			if (price < v && first){
				vendors++;
				first = 0;
				s.push_back(i+1);
			}
		}
	}
	printf("%d\n",vendors);

	for (int i=0;i < (int) s.size(); ++i){
		printf("%d ", s[i]);
	}



	return 0;
}

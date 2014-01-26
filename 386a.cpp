#include <cstdio>
#include <cstring>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<int,int> ii;

int main(){

	int n,bid;
	vector<ii> p;

	scanf("%d\n",&n);

	for (int i=1; i <= n; ++i){
		scanf("%d ",&bid);
		p.push_back( ii(bid,i) );
	}
	
	sort( p.begin(), p.end());

	scanf("\n");

	printf("%d %d\n",p[n-1].second,p[n-2].first);

	return 0;
}

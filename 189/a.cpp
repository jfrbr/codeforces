#include <cstring>
#include <cstdio>

using namespace std;

int flag = -1;

char number[15];

int main(){

    scanf("%s\n",number);

    for (int i=0; i < strlen(number);i++){
        if (number[i] == '1'){
            flag = 0;
        }else if (number[i] == '4' && flag == 0){
            flag = 1;
        }else if (number[i] == '4' && flag == 1){
            flag = -1;
        }else{
            flag = 2;
            break;
        }
    }

    if (flag == 2) printf("NO\n");
    else printf("YES\n");
    
    return 0;
}

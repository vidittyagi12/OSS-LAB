#include <stdio.h>

int main() {
    int n,s=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        s+=x;
    }
    printf("%d",(s/n));
   
    return 0;
}

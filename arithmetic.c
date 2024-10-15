#include <stdio.h>
int main(){
/*    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);

    if (y==0){
        printf("%d %d %d n/a", x+y, x-y, x*y);
    }
    else{
        printf("%d %d %d %d", x+y, x-y, x*y, x/y); 
    }

    return 0;
}*/
int x;
char y;
if (scanf("%d%c",&x,&y) != 2 || y!="\n"){
    printf("n/a");
}
else{
    if (y==0){
        printf("%d %d %d n/a", x+y, x-y, x*y);
    }
    else{
        printf("%d %d %d %d", x+y, x-y, x*y, x/y); 
    }
}
return 0;
}
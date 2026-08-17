#include<stdio.h>
int main()
{
    char name[] = "racecar";
    int sizeOfName = sizeof(name) - 1;
    int ispalindrom = 1;
    int j = sizeOfName = 1;
    int i = 0;

while(i < sizeOfName / 2){
    if(name[i] == name[j]){
        i++;
        j--;
    }else{
        ispalindrom = 0;
        break;
    }

}

if(ispalindrom){
    printf("%s is palindrom",name);
}else{
    printf("%s is not palindrom,name");
}

    return 0;
}
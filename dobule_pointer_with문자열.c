#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void InputName(char **pName)
{

// /* case1 : 동적할당하여 head에 문자열 배치 */
//     *pName=(char *)malloc(12);
//     strcpy(*pName,"Cabin");

/* case2 : 문자열 상수가 DATA에 저장된 후 그 주소가 PName에 대입 */
    *pName = "Cabin";
}

void main()
{
    char *Name;

    InputName(&Name);
    // printf("Name Value : %#08x\n\r", Name);
    printf("Name is %s!\n",Name);
    free(Name);
}
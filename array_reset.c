#include <stdio.h>

int main(void) {

  char str[] = "AAA BBB CCC";
  printf("<%s>\n", str);
  // 출력 결과: <AAA BBB CCC>

  //'\0'은 0x00에 해당하는 Null 문자인데 문자열의 끝을 의미한다.
  //따라서 이 문자가 문자열 맨 앞에 있으면 버퍼가 지워지게 됨 
  str[0] = '\0'; // 배열 내용 지움
  printf("<%s>\n", str);
  // 출력 결과: <>
  // (이제 빈 배열이 되었음)

  return 0;
}
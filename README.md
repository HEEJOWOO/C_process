# C_process
  * C 개념을 다시 파악하기 위해 "초보자를 위한 C언어 300제"를 이용하여 진행하였습니다.
  * 하루에 15문제씩 진행
  * Visual Studio 2019 사용 
  * 시작 : 10월 3일, 종료 : 

# Chapter 1
 * 변수, 상수, 연산자, 조건문, 순환문, 문자열, 함수, 주석 ,컴파일 개념
 * 컴파일러는 프로그래머가 입력한 코드에 에러가 있는지 여부를 검사하여 목적 코드를 생성하는 역할
 * 목적 코드는 링커 라는 프로그램에 의해 실행 가능한 프로그램으로 변환
 * 소스코드 -> 컴파일러 -> 목적코드 -> 링커 -> 실행 가능한 프로그램 
 * 링커는 컴파일러에 의해 생성된 목적 코드를 실행에 필요한 정보를 담아서 실행 프로그램으로 생성, 하나의 목적 코드뿐 아니라, 여러 개의 목적 코드를 동시에 묶어 하나의 실행 프로그램으로 생성 

# Chapter 2
 * 논리형 : 0을 제외한 양수, 음수 는 모두 참, 0은
 * 문자열 형 변수 : 배열(문자열 변수) 또는 포인터(문자열 상수)로 선언
 * 문자열 끝에는 항상 Null(0)로 
 * 연산자 종류 : 대입, 부호, 증감, 관계, 논리, 비트 연산자
 * 논리 연산자 종류 : 논리곱 연산자(&&), 논리합 연산자(||), 부정 연산자(!)
 * 조건 연산자(if~else 문 대체 사용) : ex) x>y?x:y 이면 x>y가 참이면 x를 사용, 거짓이면 y를 사용
 * & : 논리 곱 연산, ~ : 비트값 반전, ^ : 배타적 비트 합, >>>,<<< : 쉬프트 연산 
 * 캐스트 연산자 : 데이터 형 변환하는데 사용 
 * switch 문 비교 값으로 함수식 또는 문자도 사용할 수 있음
 * 조건순환문 : while, do~while 
 * goto문은 여러 개의 중첩된 문장을 한 번에 빠져나가고자 할 때 유용
 * 모든 변수들은 그 변수가 저장되는 메모리 번지를 갖고 있음, 메모리의 번지에 의해 변수가 구분되고 값이 저장
 * c언어로 메모리를 직접 접근하기 위해 사용되는것을 포인터라함
 * 일반적인 문자형, 정수형 ,실수형 등은 모두 번지 연산자를 사용, 문자열형, 배열형 등은 번지 지정연산자를 사용하지 않음 
 * *pointer은 pointer이 가리키는 번지에 저장되어 있는 값을 의미, pointer은 문자열의 선두 번지를 의미 
 * 배열은 동일한 데이터형에 대하여 여러개 정의, 구조체는 서로 다른 데이터형을 하나의 묶음으로 처리하기 위한 것 
 * 공용체(union) : 변수가 사용하는 메모리 공간이 중첩됨
 * 열거형(enum) : 상수를 나열하는것과 같은 효과,모든 상수 값은 새로운 값을 설정할 수 있음 설정하지 않는 경우 이전 값에 1이 더해진 값이 사용, enum을 사용하지 않을시 #define으로 하나하나 설정 필요
 * 2장 내용 : 문자형 정수형, 실수형 논리형, 문자열형 변수 / 문자형, 정수형, 실수형 논리형, 문자열형 상수 / 대입, 부호, 사칙 증감, 관계, 논리 , 조건, 쉼표, 비트, 캐스트 sizeof 연산자, 중첩 조건문, 중첩 순환문, 조건 선택문, 조건 순환문, 무조건 분기문, 문자열, 배열, 메모리, 포인터, 널 문자, 구조체, 공용체, 열거형, 데이터형, 함수와 인수, 변수의 범위, #include, 

# Chapter 3
 * 한 개의 문자 입력 : getch, 한 개의 문자 출력 : putch, 정수값 입력 : scanf(번지를 넘겨줘야함), 문자열 입력 : gets
 * 문자열 복사 : strcpy( char* strcpy(char* dest, const char* src))
 * 문자열 대소문자 구분 : strcmp(int strcmp(const char* src1, const char* src2))
 * 문자열 대소문자 구분하지않고 비교 : stricmp
 * 문자열 일정 크기 비교, 대소문자 구분 : strncmp(int strncmp(const char* src1, const char* src2, unsigned int count))
 * 문자열 일정 크기 비교, 대소문자 구분 하지 않음 : strnicmp(int strnicmp(const char* src1, const char* src2, unsigned int count))
 * 문자열 열결 : strcat(char *strcat(char* dest, const char*src))
 * 문자열 길이 : strlen(unsigned int strlen(const char* string))
 * 문자열 검색 : strstr(char* strstr(const char* string, const char* strCharSet) / strCharSet을 string에서 검색 성공 시 검색된 위치의 포인터 값을 반환, 실패시 NULL 반환 
 * 문자열 중 문자 검색 : strchr(char* strchr(const char* string, int c))
 * 문자열 중에서 일치되는 첫 문자의 위치 : strcspn(unsigned int strcspn(const char* src1, const char*src2))
 * 문자열 중에서 일치되지않는 첫 문자의 위치 : strspn(unsigned int strspn(const char* src1, const char*src2))
 * 문자열 특정 문자로 채우기 : strset(char* strset(char* string, int c)), strnset(char* strnset(char* string, int c, unsigned int count))
 * 문자열 중복 생성 : strdup, 문자열 복사 : strcpy
 * 문자열 정수 변환 : atoi, atol
 * 문자열 실수 변환 : atof
 * 정수 문자열 변환 : itoa, ltoa
 * 실수 문자열 변환 : fcvt, ecvt, gcvt
 * 문자열 내 알파벳 검사 : isalpha
 * 문자열 내 숫자 검사 : isdigit
 * 문자열 내 알파벳, 숫자 검사 : isalnum
 * 문자열 내 대문자 검사 : isupper
 * 문자열 내 소문자 검사 : islower
 * 문자열 내 공백, 탭문자 또는 개행문자 검사 : isspace

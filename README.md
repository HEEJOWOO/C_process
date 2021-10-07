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

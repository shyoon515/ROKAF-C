/*
* 작성자: 윤승혁
* 내용: 열혈 C++ 프로그래밍 OOP프로젝트 1단계 구현, 책의 예제와 합친 버전
* 시작일: 2021-08-19
* 종료일: 2021-08-19
*/

#include <iostream>
using namespace std;

typedef struct account
{
    int acNo;    // 계좌번호
    char name[30];    // 고객 이름
    int balance;    // 잔액
} Account;

Account accArr[100];    // 계좌 배열
int accNum=0;    // 계좌 개수

void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void PrintAllAccount(void);

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

int main(void)
{
    int status=0;
    
    while(1)
    {
        cout<<"-----Menu------"<<endl;
        cout<<"1. 계좌개설"<<endl;
        cout<<"2. 입 급"<<endl;
        cout<<"3. 출 금"<<endl;
        cout<<"4. 계좌정보 전체 출력"<<endl;
        cout<<"5. 프로그램 종료"<<endl;
        cout<<"선택: ";
        cin>>status;
        
        switch(status)
        {
            case MAKE:
                MakeAccount();
                break;
            case DEPOSIT:
                DepositMoney();
                break;
            case WITHDRAW:
                WithdrawMoney();
                break;
            case INQUIRE:
                PrintAllAccount();
                break;
            case EXIT:
                cout<<"Bye"<<endl;
                return 0;
            default:
                cout<<"유효하지 않은 입력"<<endl;
        }
    }
    return 0;
}


void MakeAccount(void)
{
    cout<<endl<<endl<<"[계좌개설]"<<endl;
    cout<<"계좌ID: ";
    cin>>accArr[accNum].acNo;
    cout<<"이름: ";
    cin>>accArr[accNum].name;
    cout<<"입금액: ";
    cin>>accArr[accNum].balance;
    cout<<"입금완료"<<endl<<endl;
    accNum++;
}


void DepositMoney(void)
{
    int input_accNo;    // 사용자가 검색하는 ID를 받음
    int search_idx;
    int deposit;    // 입금할 금액을 받는 변수
    
    cout<<endl<<endl<<"[입  금]"<<endl;
    cout<<"계좌ID: ";
    cin>>input_accNo;
    
    for(search_idx=0; accArr[search_idx].acNo != input_accNo; search_idx++)
    {
        if(search_idx>accNum)
        {
            cout<<"해당 계좌가 없습니다."<<endl;
            return;
        }
    }

    cout<<"입금액: ";
    cin>>deposit;
    accArr[search_idx].balance += deposit;
    cout<<"입금완료"<<endl<<endl;
}

void WithdrawMoney(void)
{
    int input_accNo;    // 사용자가 검색하는 ID를 받음
    int search_idx;
    int withdraw;    // 입금할 금액을 받는 변수
    
    cout<<endl<<endl<<"[출  금]"<<endl;
    cout<<"계좌ID: ";
    cin>>input_accNo;
    
    for(search_idx=0; accArr[search_idx].acNo != input_accNo; search_idx++)
    {
        if(search_idx>accNum)
        {
            cout<<"해당 계좌가 없습니다."<<endl;
            return;
        }
    }

    cout<<"출금액: ";
    cin>>withdraw;
    accArr[search_idx].balance -= withdraw;
    cout<<"출금완료"<<endl<<endl;
}

void PrintAllAccount(void)
{
    cout<<endl<<endl;
    for(int i=0; i<accNum; i++)
    {
        cout<<"계좌ID: "<<accArr[i].acNo<<endl;
        cout<<"이 름: "<<accArr[i].name<<endl;
        cout<<"잔 액: "<<accArr[i].balance<<endl<<endl;
    }
}
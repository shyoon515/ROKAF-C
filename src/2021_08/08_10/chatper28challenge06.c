#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pinfo
{
    int data_st;    // 데이터가 차 있으면 1 저장, 아니면 0 저장
    char name[30];
    char phoneNum[30];
} Pinfo;

int MainMenu(void)
{
    int status;
    
    puts("***** MENU *****");
    puts("1. Insert");
    puts("2. Delete");
    puts("3. Search");
    puts("4. Print All");
    puts("5. Exit");
    printf("Choose the item: ");
    scanf("%d", &status);
    getchar();    // 버퍼에 남아있는 \n 삭제
    return status;
}

Pinfo * InsertInfo(Pinfo * phonebook)
{
    int i=0;
    
    while(phonebook[i].data_st==1)
    {
        if(i%5==3 && phonebook[i+1].data_st==0)    // 5n+4번째 데이터가 차 있고, 5(n+1)번째 데이터가 비어있을 때
        {
            phonebook=(Pinfo *)realloc(phonebook, sizeof(Pinfo)*(i+7));    //5의 배수 단위씩 메모리 동적 할당
            for(int j=i+1; j<i+7; j++)
            {
                phonebook[j].data_st=0;
            }
            i++;
            break;
        }
        i++;
    }
    
    puts("[INSERT]");
    printf("Input Name: ");
    fgets(phonebook[i].name, sizeof(phonebook[i].name), stdin);
    phonebook[i].name[strlen(phonebook[i].name)-1]=0;    // \n이 함께 저장되므로, \n 대신 '0'을 저장
    printf("Input Tel Number: ");
    fgets(phonebook[i].phoneNum, sizeof(phonebook[i].phoneNum), stdin);
    phonebook[i].phoneNum[strlen(phonebook[i].phoneNum)-1]=0;
    phonebook[i].data_st=1;
    puts("                Data Inserted\n");
    return phonebook;
}

void DeleteInfo(Pinfo * phonebook, int * search_target_idx)
{
    int i=0, idx, input_index, del_index, shift;
    Pinfo temp;
    
    if(search_target_idx[0]==0)
    {
        puts("There is no matching name. \n");
        return;
    }
    
    while(search_target_idx[i]!=0)
    {
        idx = search_target_idx[i]-1;
        printf("[%d] Name: %s    Tel: %s\n", i, phonebook[idx].name, phonebook[idx].phoneNum);
        i++;
    }
    printf("Input index of deletion: ");
    scanf("%d", &input_index);
    
    if(0>input_index || input_index>i)
    {
        printf("Invalid input\n");
        return;
    }
    
    del_index = search_target_idx[input_index]-1;
    phonebook[del_index].data_st=0;
    
    shift = del_index;
    while(phonebook[shift+1].data_st!=0)
    {
        strcpy(phonebook[shift].name, phonebook[shift+1].name);
        strcpy(phonebook[shift].phoneNum, phonebook[shift+1].phoneNum);
        phonebook[shift].data_st=1;
        phonebook[shift+1].data_st=0;
        shift++;
    }
    
    puts("            Data Deleted\n");
    free(search_target_idx);
    return;
}

int * SearchGetIndices(Pinfo * phonebook, int deletion)
{
    int * search_target_idx;
    int idx_of_data=0, i=0, j=0;
    char search_name[30];
    
    while(phonebook[idx_of_data].data_st==1)
    {
        idx_of_data++;
    }
    
    search_target_idx = (int *)calloc(sizeof(int)*(idx_of_data+2), 1);
    
    if(deletion)
    {
        puts("[DELETE]");
        printf("Input Name for Deletion: ");
    }
    else{
        puts("[SEARCH]");
        printf("Search by name: ");
    }
    
    fgets(search_name, sizeof(search_name), stdin);
    search_name[strlen(search_name)-1]=0;
    
    while(phonebook[i].data_st==1)
    {
        if(strncmp(search_name, phonebook[i].name, strlen(search_name) > strlen(phonebook[i].name) ? strlen(phonebook[i].name) : strlen(search_name))==0)
        {
            search_target_idx[j]=i+1;
            j++;
        }
        i++;
    }
    return search_target_idx;
}

void SearchInfo(Pinfo * phonebook, int * search_target_idx)
{
    int i=0;
    int idx;
    
    if(search_target_idx[0]==0)
    {
        puts("There is no matching name. \n");
        return;
    }
    
    while(search_target_idx[i]!=0)
    {
        idx = search_target_idx[i]-1;
        printf("Name: %s    Tel: %s\n", phonebook[idx].name, phonebook[idx].phoneNum);
        i++;
    }
    printf("\n");
    free(search_target_idx);
}

void PrintAllInfo(Pinfo * phonebook)
{
    int i=0;
    puts("[Print All Data]");
    while(phonebook[i].data_st==1)
    {
        printf("Name: %s    Tel: %s\n", phonebook[i].name, phonebook[i].phoneNum);
        i++;
    }
    printf("\n");
    return;
}

int main(void)
{
    int status=0;
    int * search_target_idx;
    Pinfo * phonebook = (Pinfo *)malloc(sizeof(Pinfo)*5);
    
    for(int i=0; i<5; i++)
    {
        phonebook[i].data_st=0;
    }
    
    while(status==0)
    {
        status = MainMenu();
        
        switch(status)
        {
            case 1:
                phonebook=InsertInfo(phonebook);
                break;
            case 2:
                search_target_idx = SearchGetIndices(phonebook, 1);
                DeleteInfo(phonebook, search_target_idx);
                break;
            case 3:
                search_target_idx = SearchGetIndices(phonebook, 0);
                SearchInfo(phonebook, search_target_idx);
                break;
            case 4:
                PrintAllInfo(phonebook);
                break;
            case 5:
                printf("Bye \n");
                free(phonebook);
                return 0;
            default:
                puts("Invalid input\n");
                break;
        }
        status = 0;
    }
}
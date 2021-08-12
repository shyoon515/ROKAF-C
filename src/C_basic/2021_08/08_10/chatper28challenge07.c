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

Pinfo * DownloadDBFile(void)
{
    FILE * fp=fopen("/workspace/ROKAF-C/src/2021_08/08_10/phonebookDB.txt", "rt");
    char str[100];
    int j=0, k=0, n=0;
    Pinfo* phonebook = (Pinfo *)malloc(sizeof(Pinfo)*5);
    
    for(int i=0; i<5; i++)
        phonebook[i].data_st=0;
    
    if(fp==NULL) {
        return phonebook;
    }
    
    for(int i=0; feof(fp)==0; i++)
    {
        j=0, k=0, n=0;
        if(i%5==3)
        {
            phonebook=(Pinfo *)realloc(phonebook, sizeof(Pinfo)*(i+7));
            for(int l=i+1; l<i+7; l++)
            {
                phonebook[l].data_st=0;
            }
        }
        fgets(str, sizeof(str), fp);
        
        while(!(str[j]==' '&&str[j+1]==' '&&str[j+2]=='T'&&str[j+3]=='e'&&str[j+4]=='l'&&str[j+5]==':'&&str[j+6]==' '))
        {
            if(j>=150)
            {
                break;
            }  
            j++;
        }
        
        if(j>=150)
        {
            continue;
        }
        
        for(k=0; k<j-6; k++)
        {
            phonebook[i].name[k] = str[6+k];
            phonebook[i].data_st=1;
        }
        phonebook[i].name[k]=0;
        
        for(n=0; str[j+7+n]!='\n'; n++)
        {
            phonebook[i].phoneNum[n] = str[j+7+n];
        }
        phonebook[i].phoneNum[n]=0;
    }
    
    return phonebook;    
}

void UpdateDBFiile(Pinfo * phonebook)    // 프로그램을 종료할 때, DB 파일(txt파일)을 업데이트시키는 함수.
{
    char path[]={"/workspace/ROKAF-C/src/2021_08/08_10/phonebookDB.txt"};
    remove(path);
    FILE * fp=fopen("/workspace/ROKAF-C/src/2021_08/08_10/phonebookDB.txt", "wt");
    int i=0;
    
    if(fp==NULL) {
        puts("파일오픈 실패!");
        return;
    }
    
    while(phonebook[i].data_st==1)
    {
        fprintf(fp, "Name: %s  Tel: %s \n", phonebook[i].name, phonebook[i].phoneNum);
        i++;
    }
    fprintf(fp, "Total Data: %d\n", i);
    fclose(fp);
}

int main(void)
{
    int status=0;
    int * search_target_idx;
    Pinfo * phonebook = DownloadDBFile();
    
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
                free(search_target_idx);
                break;
            case 3:
                search_target_idx = SearchGetIndices(phonebook, 0);
                SearchInfo(phonebook, search_target_idx);
                free(search_target_idx);
                break;
            case 4:
                PrintAllInfo(phonebook);
                break;
            case 5:
                printf("Bye \n");
                UpdateDBFiile(phonebook);
                free(phonebook);
                return 0;
            default:
                puts("Invalid input\n");
                break;
        }
        status = 0;
    }
}
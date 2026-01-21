#include<stdio.h>
#include<stdlib.h>

    //마지막 노드의 링크가 첫 노드로 연결
    //공백 리스트 확인 - temp = CL, temp가 CL이 아닐 때까지
    //temp = temp->link - new->link = temp->link - temp->link = new
    // - CL = new;
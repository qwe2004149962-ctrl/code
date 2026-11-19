/* 001 旋转链表 —— 把单链表左移 k 位 */
#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct LNode { ElemType data; struct LNode *next; } LNode, *LinkList;

LinkList initList(void)
{
    LinkList h = (LinkList)malloc(sizeof(LNode));
    if (!h) return NULL;
    h->next = NULL;
    return h;
}

int insertList(LinkList head, int pos, ElemType e)
{
    LinkList p = head, s;
    int i = 0;
    if (!head || pos < 1) return 0;
    while (p && i < pos - 1) { p = p->next; i++; }
    if (!p) return 0;
    s = (LinkList)malloc(sizeof(LNode));
    if (!s) return 0;
    s->data = e; s->next = p->next; p->next = s;
    return 1;
}

void moveLeft(LinkList head, int k)
{
    LinkList p, tail, cut, s;
    int n = 0, i;
    if (!head || !head->next) return;
    for (p = head->next; p; p = p->next) n++;
    k %= n;
    if (k == 0) return;
    s = head->next;
    tail = head->next;
    for (i = 1; i < n; i++) tail = tail->next;
    cut = head->next;
    for (i = 1; i < k; i++) cut = cut->next;
    tail->next = s;
    head->next = cut->next;
    cut->next = NULL;
}

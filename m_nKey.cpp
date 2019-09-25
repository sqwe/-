// Date: 2019.9.25
// Author: sqwe
// Description: 找出单向链表中的一个节点，该节点到尾指针的距离为K。链表的倒数第0个结点为链表的尾指针。要求时间复杂度为O(n)。
// 链表结点定义如下：
// struct ListNode
// {
//    int m_nKey;
//    ListNode* m_pNext;
// }
// 链表节点的值初始化为1，2，3，4，5，6，7。
// 思路：使用相距k的两个节点同时移动至后面的节点到链表尾部

#include <isotream>
using namespace std;

typedef struct ListNode{
    int m_nKey;
    ListNode * m_pNext;
    ListNode(int x): m_nKey(x), m_pNext(NULL) {}
}

int main(){
    ListNode *LstNode = new ListNode(1);
    ListNode *p = LstNode, *q = LstNode;
    for(int i=2; i<=7; i++){
        p->m_pNext = new ListNode(i);
        p = p->m_pNext;
    }
    int k = 0;
    cin >> k;
    p = LstNode;
    while(k!=0){
        p = p->m_pNext;
        k -= 1;
    }
    while(p->m_pNext != NULL){
        q = q->m_pNext;
        p = p->m_pNext;
    }
    cout << "结果是： " << q->m_nKey << endl;
    return 0;
}    

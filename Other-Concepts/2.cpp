/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * curr1 = l1;
        ListNode * curr2 = l2;
        ListNode * result = new ListNode();
        int count = 0;
        ListNode * headList=new ListNode();
        ListNode *headListiterator=headList; // yeni iterator
            
        int sum = 0;
        int elde = 0;
        int flag=0; // ilk valueyu eklemek için
        
        while(curr1 != NULL || curr2 != NULL)
        {   
            if(curr1 != NULL && curr2 != NULL)
                sum = curr1 -> val + curr2 -> val;
            
            else if(curr1 != NULL && curr2 == NULL)
                sum = curr1 -> val;
            
            else if(curr1 == NULL && curr2 != NULL)
                sum = curr2 -> val;
                
            
            if(elde != 0)
            {
                sum = sum + elde;
                elde = 0;
            }
            
            if(sum >= 10)
            {    
                elde++;
                sum = sum - 10;
            }
            
            ListNode* temp = new ListNode(sum); 
            result = temp;
            cout << result -> val;
            if(flag){ // ekleme koşulumuz
                ListNode * Temp=new ListNode(); // geçici node
                headListiterator -> next=Temp; // nextine ekliyoruz
                headListiterator = headListiterator -> next; // iterator ilerliyor
                headListiterator -> val=sum; // yeni değerimiz
               
            }else{
                headListiterator -> val=sum;
                flag=1; // ekledik daha işimiz yok bu kısımla
            }
            sum = 0;
            
            result = result -> next;
            
            if(curr1 != NULL)
                curr1 = curr1 -> next;
            if(curr2 != NULL)
                curr2 = curr2 -> next;
        }
        if(elde!=0){ // son basamağı unutmayalım basamak atlayabilriz!!!! [9] + [9] =[8,1]
            ListNode * Temp=new ListNode(); // geçici node
            headListiterator -> next=Temp; // nextine ekliyoruz
            headListiterator = headListiterator -> next; // iterator ilerliyor
            headListiterator -> val=elde; // yeni değerimiz eldeyi ekliyoruz bu sefer
        }
        return headList;
    }
};
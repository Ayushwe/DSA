/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        if(head.next == null){
            return null;
        }
        int length = 0;
        ListNode temp = head;
        while(temp!=null){
            length++;
            temp = temp.next;
        }
        int prevElement = length-n; 
        if(prevElement == 0){
            return head.next;
        }
        temp = head;
        int count = 1;
        while(count != prevElement){
            temp = temp.next;
            count++;
        }
        temp.next = temp.next.next;
        return head;
    }
}
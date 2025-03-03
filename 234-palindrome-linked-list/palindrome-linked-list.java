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

    ListNode reverse(ListNode head){
        ListNode temp = head;
        ListNode prev = null;
        while(temp != null){
            ListNode forward = temp.next;
            temp.next = prev;
            prev =  temp;
            temp = forward;
        }
        return prev;
    }

    public boolean isPalindrome(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
        }
        ListNode NewHead = reverse(slow);
        ListNode temp = head;
        while(NewHead != null){
            if(NewHead.val != temp.val){
                return false;
            }
            NewHead = NewHead.next;
            temp = temp.next;
        }
        return true;
    }
}
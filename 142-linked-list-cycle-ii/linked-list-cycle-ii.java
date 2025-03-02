/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {

    ListNode FindStart(ListNode head,ListNode slow,ListNode fast){
        slow = head;
        while(slow!= fast){
            slow = slow.next;
            fast = fast.next;
        }
        return slow;
    }

    public ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        while(fast!=null && fast.next!= null){
            slow =  slow.next;
            fast = fast.next.next;
            if(slow == fast){
                return FindStart(head,slow,fast);
                // break;
            }
        }
        return null;
    }
}
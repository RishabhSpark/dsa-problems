/*
class Node {
    int data;
    Node next;
    
    public Node(int data){
        this.data = data;
        this.next = null;
    }
}*/

class Solution {
    
    //Function to check whether two linked lists are identical or not.
    public boolean isIdentical (Node head1, Node head2){
        //write your code here
        Node curr1 = head1;
        Node curr2 = head2;
        while(curr1!=null && curr2!=null){
            int ele1 = curr1.data;
            int ele2 = curr2.data;
            curr1 = curr1.next;
            curr2 = curr2.next;
            if((ele1!=ele2) || (curr1==null && curr2!=null) || (curr1!=null &&curr2==null)) return false;
        }
        return true;
    }
}
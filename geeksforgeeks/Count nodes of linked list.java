/*Complete the function below*/
/*
class Node{
    int data;
    Node next;
    Node(int a){  data = a; next = null; }
}*/

class Solution
{
    //Function to count nodes of a linked list.
    public static int getCount(Node head)
    {
        //Code here
        int count=0;
        Node curr = head;
        while(curr!=null){
            count++;
            curr = curr.next;
        }
        return count;
    }
}
import java.io.*;
import java.util.*;

class Node {
	int data;
	Node next;
	Node(int d) {
        data = d;
        next = null;
    }
}

class Solution {

    public static Node insert(Node head,int data){
        //Complete this method
        if(head==null){
            Node q= new Node(data);
            head=q;
            return head;
        }
        Node p=head;
        while(p.next!=null){
            p=p.next;
        }
        Node q= new Node(data);
        //q.data=data;
        //q.next=null;
        p.next=q;
        return head;
    }
	public static void display(Node head) {
        Node start = head;
        while(start != null) {
            System.out.print(start.data + " ");
            start = start.next;
        }
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Node head = null;
        int N = sc.nextInt();

        while(N-- > 0) {
            int ele = sc.nextInt();
            head = insert(head,ele);
        }
        display(head);
        sc.close();
    }
}

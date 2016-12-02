
# Question
Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.

Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, the linked list should become 1 -> 2 -> 4 after calling your function.



# Answer:
This is a very typical operation of Linked List, we have learned many times of how to handle it. Loop the list from head, find the pre_node of destination node, then make pre_node->next = dest_node->next, then delete dest_node.

But how to make it as faster?
Time cost of typical way is to find the pre_node.
One way to speed up is to copy the value of post_node to dest_node, then delete post_node.

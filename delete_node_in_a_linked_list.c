/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
	if( node->next ) {
		node->val = node->next->val;
		node->next = node->next->next;
//        free(node->next);
	}
	else {
//        free(node);
	}
}


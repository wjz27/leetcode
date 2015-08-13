/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max( int a, int b)
{
	return a>b? a : b;
}
int maxDepth(struct TreeNode* root) {
	int rel;
	if( NULL==root ) {
		return 0;
	} 
	else {
		rel=1;
		rel += max( maxDepth(root->left), maxDepth( root->right ) );
		return rel;
	}
}

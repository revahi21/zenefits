//function for inorder transversal
void inorder(Node* root)
{
	if(root==NULL)
	return ;
	cout<<root->data;
	inorder(root->left);
	inorder(root->right);
}

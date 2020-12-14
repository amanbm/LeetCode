/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 *
class Solution {
    public boolean isSymmetric(TreeNode root) {
        if(root != null){
            return isMirror(root.left, root.right);
        }
        return true;
    }
    
    private boolean isMirror(TreeNode a, TreeNode b){
        if(a == null && b == null){
            return true;
        } else if(a == null || b == null){
            return false;
        }
        return a.val == b.val && isMirror(a.right, b.left) && isMirror(a.left, b.right);
    }
}
*/

class Solution {
    public boolean isSymmetric(TreeNode root){
        Queue<TreeNode> q = new LinkedList<>();
        if(root == null){
            return true;
        }
        q.add(root.left);
        q.add(root.right);
        while(!q.isEmpty()){
            TreeNode a = q.remove();
            TreeNode b = q.remove();
            if(a != null && b != null){
                if(a.val != b.val){
                    return false;
                }
            }
            if((a == null && b != null) || (a != null && b == null)){
                return false;
            }
            if(a != null && b != null){
                q.add(a.left);
                q.add(b.right);
                q.add(a.right);
                q.add(b.left);
            }
        }
        return true;
    }
}


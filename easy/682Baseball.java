class Solution {
    public int calPoints(String[] ops) {
        Stack<Integer> s = new Stack<>();
        for(int i = 0; i < ops.length; i++){
            if(ops[i].equals("C")){
                s.pop();
            } else if(ops[i].equals("D")){
                s.push(s.peek()*2);
            } else if(ops[i].equals("+")){
                int temp = s.pop();
                int temp2 = s.peek();
                s.push(temp);
                s.push(temp + temp2);
            } else {
                s.push(Integer.parseInt(ops[i]));
            }            
        }
        int result = 0;
        while(!s.isEmpty()){
            result += s.pop();
        }
        return result;
    }
}

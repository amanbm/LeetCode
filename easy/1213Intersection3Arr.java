class Solution {
    public List<Integer> arraysIntersection(int[] arr1, int[] arr2, int[] arr3) {
        int p1 = 0;
        int p2 = 0;
        int p3 = 0;
        List<Integer> res = new ArrayList<>();
        while(p1 < arr1.length && p2 < arr2.length && p3 < arr3.length){
            if(arr1[p1] == arr2[p2] && arr2[p2] == arr3[p3]){
                res.add(arr1[p1]);
                p1++;
                p2++;
                p3++;
            } else {
                int t1 = arr1[p1];
                int t2 = arr2[p2];
                int t3 = arr3[p3];
                if(t1 < t2 || t1 < t3){
                    p1++;
                }
                if(t2 < t1 || t2 < t3){
                    p2++;
                }
                if(t3 < t1 || t3 < t1){
                    p3++;
                }
            }
        }
        return res;

    }
}

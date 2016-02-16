class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        if(!source || !target) return -1;
        if(!*source && *target) return -1;
        if(!*source && !*target) return 0;
        if(!*target) return 0;
        char * p1 = (char*) source;
        char * p2 = (char*) target;
        while(*p1){
            char * p1store = p1;
            while(*p1 && *p2 && *p1 == *p2){
                p1 ++;
                p2 ++;
            }
            if(!*p2) return (int) (p1store - source);
            p1 = (char*) p1store + 1;
            p2 = (char*) target;
        }
        
        return -1;
    }
};

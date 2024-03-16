class Solution {
public:
    string simplifyPath(string path) {

        vector<string> stack;
        stringstream ss(path);
        string item;

        while(getline(ss, item, '/')) {
            if(item == "..") {
                if(!stack.empty()){
                    stack.pop_back();
                }
            } else if (!item.empty() && item != "."){
                stack.push_back(item);
            }


        }

        string simplifyPath;
        if(stack.empty()){
            return "/";
        }

        for(const string & path : stack){
            simplifyPath += "/" + path;
        }

        return simplifyPath;
        
    }
};
#include <vector>

using std::string;
using std::vector;

class customType {
 public:
    customType();
    vector<vector<string>> importData(string);
    string exportData(vector<vector<string>>);
};

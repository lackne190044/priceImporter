using std::string;

class FileReaderWriter {
 public:
    FileReaderWriter(string filepath);
    string readFile();
    void writeFile(string content);
};

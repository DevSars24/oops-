#include <iostream>
using namespace std;

class filesystem { // abstract class
public:
    virtual void readfile(const string& filename) = 0;
    virtual void writefile(const string& filename, const string& content) = 0;

    virtual ~filesystem() {}

    void commonoperation() {
        cout << "preparing file system" << endl;
    }
};

class localfilesystem : public filesystem {
    void readfile(const string& filename) override {
        cout << "reading from localfile: " << filename << endl;
    }

    void writefile(const string& filename, const string& content) override {
        cout << "writing to localfile: " << filename << " content: " << content << endl;
    }
};

int main() {
    filesystem* fs = new localfilesystem(); // polymorphic pointer

    fs->commonoperation();
    fs->readfile("data.txt");
    fs->writefile("data.txt", "hello");

    delete fs;
    return 0;
}

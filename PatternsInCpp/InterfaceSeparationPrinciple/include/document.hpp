#ifndef __DOCUMENT_HPP__
#define __DOCUMENT_HPP__

#include <string>

class Document {
public:
  Document(const std::string& path);
  const  std::string getPath() const;
private:
  std::string path;
};

#endif // __DOCUMENT_HPP__
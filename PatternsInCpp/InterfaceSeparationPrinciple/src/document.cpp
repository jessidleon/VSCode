#include "document.hpp"
Document::Document(const std::string& path) : path{ path } { }

const std::string Document::getPath() const {
  return path;
}


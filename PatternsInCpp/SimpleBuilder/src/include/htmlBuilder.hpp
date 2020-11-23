#pragma once

#include <memory>
#include <string>
#include <sstream>


#include "htmlElement.hpp"

class HtmlBuilder {

public:
  static std::shared_ptr<HtmlElement> build(const std::string& name, const std::string& body = "");
};
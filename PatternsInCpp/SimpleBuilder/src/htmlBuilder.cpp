#include "htmlBuilder.hpp"

std::shared_ptr<HtmlElement> HtmlBuilder::build(const std::string& name, const std::string& body) {
  HtmlElement element{ name, body };
  return std::make_shared<HtmlElement>(element);
}

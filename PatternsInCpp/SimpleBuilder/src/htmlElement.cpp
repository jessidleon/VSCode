#include "htmlElement.hpp"
#include <iostream>
#include <sstream>

HtmlElement::HtmlElement(const std::string& name, const std::string& body)
  : name{ name }, body{ body } {
  leftSpacing = 0;
}


HtmlElement::HtmlElement(const HtmlElement& other) {
  name = other.name;
  body = other.body;
  children = other.children;
  leftSpacing = other.leftSpacing;
}


const std::string& HtmlElement::getName() const {
  return name;
}

const std::string& HtmlElement::getBody() const {
  return body;
}

//// this is good!
//// std::string HtmlElement::format() const {
////   std::stringstream formattedElement;
////   formattedElement << std::string(leftSpacing, ' ') << "<" << name << ">";
////   formattedElement << body;
////   for (auto& element : children) {
////     formattedElement << (children.size() > 0 ? "\n" : "") << element->format();
////   }
////   formattedElement << (children.size() > 0 ? "\n" + std::string(leftSpacing, ' ') : "") << "</" << name << ">";
////   return formattedElement.str();
//// }

std::string HtmlElement::format() {
  std::stringstream formattedElement;
  formattedElement << std::string(leftSpacing, ' ') << "<" << name << ">";
  formattedElement << body;

  for (auto& element : children) {
    element->leftSpacing = leftSpacing + 2;
    formattedElement << (children.size() > 0 ? "\n" : "") << element->format();
  }

  formattedElement << (children.size() > 0 ? "\n" + std::string(leftSpacing, ' ') : "") << "</" << name << ">";
  return formattedElement.str();
}

std::shared_ptr<HtmlElement> HtmlElement::addChild(const std::shared_ptr<HtmlElement>& child) {
  children.push_back(child);
  return shared_from_this();
}

std::shared_ptr<HtmlElement> HtmlElement::addChild(const std::string& name, const std::string& body) {
  HtmlElement element{ name, body };
  std::shared_ptr<HtmlElement> elementPtr = std::make_shared<HtmlElement>(element);
  return addChild(elementPtr);
}

void HtmlElement::setLeftSpacing(int& _leftSpacing) {
  leftSpacing = _leftSpacing;
}

int HtmlElement::getLeftSpacing() {
  return leftSpacing;
}

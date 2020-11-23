#pragma once

#include <memory>
#include <string>
#include <vector>

class HtmlElement : public std::enable_shared_from_this<HtmlElement> {
private:
  std::string name;
  std::string body;
  std::vector<std::shared_ptr<HtmlElement>> children;
  int leftSpacing;

public:
  std::shared_ptr<HtmlElement> thisPtr;
  HtmlElement(const std::string& name, const std::string& body);
  HtmlElement(const HtmlElement& other);

  const std::string& getName() const;
  const std::string& getBody() const;
  std::shared_ptr<HtmlElement> addChild(const std::shared_ptr<HtmlElement>& child);
  std::shared_ptr<HtmlElement> addChild(const std::string& name, const std::string& body);
  void setLeftSpacing(int& leftSpacing);
  int  getLeftSpacing();
  std::string format();
};
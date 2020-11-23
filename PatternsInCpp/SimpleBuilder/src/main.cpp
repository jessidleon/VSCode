#include <iostream>
#include <string>
#include "htmlElement.hpp"

#include <sstream>

int main(int argc, char const* argv[]) {
  auto root = std::make_shared<HtmlElement>("html", "");
  auto  p_1 = std::make_shared<HtmlElement>("p", "");
  root->addChild(p_1);

  auto ul = std::make_shared<HtmlElement>("ul", "");
  p_1->addChild(ul);

  auto li_uno = std::make_shared<HtmlElement >("li", "uno");
  ul->addChild(li_uno);

  auto li_dos = std::make_shared<HtmlElement >("lidos", "");
  ul->addChild(li_dos);

  auto li_dos_ol = std::make_shared<HtmlElement >("ol", "");
  li_dos->addChild(li_dos_ol);

  li_dos_ol->addChild(std::make_shared<HtmlElement >("li", "item1"))->addChild(std::make_shared<HtmlElement >("li", "item2"))->addChild(std::make_shared<HtmlElement >("li", "item3"));

  auto li_tres = std::make_shared<HtmlElement >("li", "tres");
  li_dos->addChild(li_tres);

  std::cout << root->format() << std::endl << std::flush;

  return 0;
}

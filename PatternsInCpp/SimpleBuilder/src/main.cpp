#include <iostream>
#include <string>
#include "htmlBuilder.hpp"

#include <sstream>

int main(int argc, char const* argv[]) {

  auto root = HtmlBuilder::build("html");
  auto p1 = HtmlBuilder::build("p");
  auto h1 = HtmlBuilder::build("h1", "Esto me ha estado dando mucho, mucho por culo");
  auto h2 = HtmlBuilder::build("h2", "Pero al final le estoy ganando!");
  auto ol = HtmlBuilder::build("ol");
  auto li_1 = HtmlBuilder::build("li", "first Item");
  auto li_2 = HtmlBuilder::build("li", "second Item");
  auto li_3 = HtmlBuilder::build("li", "third Item");

  root->addChild(h1);
  root->addChild(h2);
  root->addChild(p1);
  p1->addChild(ol);
  ol->addChild(li_1)->addChild(li_2)->addChild(li_3);

  std::cout << root->format() << std::endl << std::flush;


  return 0;
}

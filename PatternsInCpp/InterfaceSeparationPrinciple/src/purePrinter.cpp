#include <iostream>
#include "purePrinter.hpp"

void PurePrinter::print(std::vector<std::shared_ptr<Document>> documents) {
  for (auto& aDocument : documents) {
    std::cout << "From PurePrinter, printing document: " << aDocument->getPath() << std::endl << std::flush;
  }
}

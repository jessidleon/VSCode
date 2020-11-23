#include <iostream>
#include "printerScanner.hpp"

void PrinterScanner::print(std::vector<std::shared_ptr<Document>> documents) {
  for (auto& aDocument : documents) {
    std::cout << "From PrinterScanner, printing document " << aDocument->getPath() << std::endl << std::flush;
  }
}

void PrinterScanner::scan(std::vector<std::shared_ptr<Document>> documents) {
  for (auto& aDocument : documents) {
    std::cout << "from PrinterScanner Scanning, document " << aDocument->getPath() << std::endl << std::flush;
  }
}


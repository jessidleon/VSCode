#include <memory>
#include <iostream>

#include "printerInterface.hpp"
#include "purePrinter.hpp"
#include "printerScannerInterface.hpp"
#include "printerScanner.hpp"

#include "document.hpp"

int main(int argc, char const* argv[]) {
  std::shared_ptr<Document> documentOne{ std::make_shared<Document>("/primer/documento.txt") };
  std::shared_ptr<Document> documentTwo{ std::make_shared<Document>("/segundo/documento.txt") };
  std::shared_ptr<Document> documentThree{ std::make_shared<Document>("/tercer/documento.txt") };

  std::vector<std::shared_ptr<Document>> documentsInDisk{
    documentOne,
    documentTwo,
    documentThree
  };

  std::shared_ptr<PrinterScannerInterface> printerScannerPtr{ std::make_shared<PrinterScanner>() };
  printerScannerPtr->print(documentsInDisk);
  printerScannerPtr->scan(documentsInDisk);

  std::shared_ptr<PrinterInterface> printerPtr{ std::make_shared<PurePrinter>() };
  printerPtr->print(documentsInDisk);

  return 0;
}
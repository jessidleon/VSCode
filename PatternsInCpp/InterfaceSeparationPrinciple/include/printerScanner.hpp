#ifndef __PRINTERSCANNER_HPP__
#define __PRINTERSCANNER_HPP__

#include "printerScannerInterface.hpp"

class PrinterScanner : public PrinterScannerInterface {
  void print(std::vector<std::shared_ptr<Document>> documents) override;
  void scan(std::vector<std::shared_ptr<Document>> documents) override;
};


#endif // __PRINTERSCANNER_H__
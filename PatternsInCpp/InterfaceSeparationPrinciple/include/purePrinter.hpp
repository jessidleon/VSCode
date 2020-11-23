#ifndef __PUREPRINTER_HPP__
#define __PUREPRINTER_HPP


#include "printerInterface.hpp"

class PurePrinter : public PrinterInterface {
public:
  void print(std::vector<std::shared_ptr<Document>> documents) override;
};


#endif // __PUREPRINTER_H__
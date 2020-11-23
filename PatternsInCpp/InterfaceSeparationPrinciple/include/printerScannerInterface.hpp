#ifndef __PRINTERSCANNERINTERFACE_HPP__
#define __PRINTERSCANNERINTERFACE_HPP__

#include "printerInterface.hpp"
#include "scannerInterface.hpp"

class PrinterScannerInterface : public PrinterInterface, public ScannerInterface { };


#endif // __PRINTERSCANNERINTERFACE_H__
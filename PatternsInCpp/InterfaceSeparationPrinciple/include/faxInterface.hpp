º#ifndef __FAXINTERFACE_HPP__
#define __FAXINTERFACE_HPP__

#include <memory>
#include <vector>

#include "document.hpp"

class FaxInterface {
public:
    virtual void fax(std::vector<std::shared_ptr<Document>> documentsToFax) = 0;
};
#endif


#include "ClonPastel.h"


class Sacher : public ClonPastel<Pastel, Sacher>
{
public:
    Sacher()
    {
        this->type = "Pastel de sacher";
    }
    
};


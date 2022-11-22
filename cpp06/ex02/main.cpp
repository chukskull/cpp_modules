#include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include  "C.hpp"






int main(void)
{
    Base *pb = generate();
    Base &pbp = *generate();

    identify(pb);
    identify(pbp);
    return 0;
}
#include <iostream>

using namespace std;

namespace SamSung {
    namespace Develop1 {
        class Math {

        };

    }
}


namespace LG {
    class Math {

    };
}

namespace HyunDai {
    class Math {

    };
}
int main() {

    std::cout << "monster" << endl;

    cout << "monster" << endl;
    using namespace SamSung;

    Develop1::Math math;
    LG::Math math2;

    HyunDai::Math math3;



    return 0;
}

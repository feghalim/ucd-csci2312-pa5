//
// Created by Mario on 5/5/2016.
//

#ifndef UCD_CSCI2312_PA5_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_LESS_FUNCTOR_H

#endif //UCD_CSCI2312_PA5_LESS_FUNCTOR_H

namespace CS2312 {
    template <typename T>
    class less {
    public:
        bool operator()(const T &lhs, const T &rhs) { return lhs < rhs;};
    };
    template <>
    class less<const char*> {
    public:
        bool operator()(const char * lhs, const char * rhs) {
            string _a, _b;
            _a = lhs;
            _b = rhs;
            return (_a < _b);
        };
    };
}
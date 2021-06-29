#include <iostream>
#include <tuple>
constexpr auto PC_1=std::make_tuple(7, 15, 23, 31, 39, 47, 55, 63, 6, 14, 22, 30, 38, 46, 54, 62, 5, 13, 21, 29, 37, 45, 53, 61, 4, 12, 20, 28, 1, 9, 17, 25, 33, 41, 49, 57, 2, 10, 18, 26, 34, 42, 50, 58, 3, 11, 19, 27, 35, 43, 51, 59, 36, 44, 52, 60);
constexpr auto PC_2=std::make_tuple(42, 39, 45, 32, 55, 51, 53, 28, 41, 50, 35, 46, 33, 37, 44, 52, 30, 48, 40, 49, 29, 36, 43, 54, 15, 4, 25, 19, 9, 1, 26, 16, 5, 11, 23, 8, 12, 7, 17, 0, 22, 3, 10, 14, 6, 20, 27, 24);
constexpr auto IP=std::make_tuple(6, 14, 22, 30, 38, 46, 54, 62, 4, 12, 20, 28, 36, 44, 52, 60, 2, 10, 18, 26, 34, 42, 50, 58, 0, 8, 16, 24, 32, 40, 48, 56, 7, 15, 23, 31, 39, 47, 55, 63, 5, 13, 21, 29, 37, 45, 53, 61, 3, 11, 19, 27, 35, 43, 51, 59, 1, 9, 17, 25, 33, 41, 49, 57);
constexpr auto IP_1=std::make_tuple(24, 56, 16, 48, 8, 40, 0, 32, 25, 57, 17, 49, 9, 41, 1, 33, 26, 58, 18, 50, 10, 42, 2, 34, 27, 59, 19, 51, 11, 43, 3, 35, 28, 60, 20, 52, 12, 44, 4, 36, 29, 61, 21, 53, 13, 45, 5, 37, 30, 62, 22, 54, 14, 46, 6, 38, 31, 63, 23, 55, 15, 47, 7, 39);
constexpr auto shift=std::make_tuple(1,2,4,6,8,10,12,14,15,17,19,21,23,25,27,28);
constexpr auto E=std::make_tuple(0, 31, 30, 29, 28, 27, 28, 27, 26, 25, 24, 23, 24, 23, 22, 21, 20, 19, 20, 19, 18, 17, 16, 15, 16, 15, 14, 13, 12, 11, 12, 11, 10, 9, 8, 7, 8, 7, 6, 5, 4, 3, 4, 3, 2, 1, 0, 31);
constexpr auto P=std::make_tuple(16, 25, 12, 11, 3, 20, 4, 15, 31, 17, 9, 6, 27, 14, 1, 22, 30, 24, 8, 18, 0, 5, 29, 23, 13, 19, 2, 26, 10, 21, 28, 7);
constexpr auto SBox=std::make_tuple(
            std::make_tuple(
                std::make_tuple(14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7),
                std::make_tuple(0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8),
                std::make_tuple(4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0),
                std::make_tuple(15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13)
            ),
            std::make_tuple(
                std::make_tuple(15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10),
                std::make_tuple(3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5),
                std::make_tuple(0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15),
                std::make_tuple(13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9)
            ),
            std::make_tuple(
                std::make_tuple(10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8),
                std::make_tuple(13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1),
                std::make_tuple(13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7),
                std::make_tuple(1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12)
            ),
            std::make_tuple(
                std::make_tuple(7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15),
                std::make_tuple(13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9),
                std::make_tuple(10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4),
                std::make_tuple(3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14)
            ),
            std::make_tuple(
                std::make_tuple(2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9),
                std::make_tuple(14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6),
                std::make_tuple(4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14),
                std::make_tuple(11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3)
            ),
            std::make_tuple(
                std::make_tuple(12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11),
                std::make_tuple(10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8),
                std::make_tuple(9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6),
                std::make_tuple(4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13)
            ),
            std::make_tuple(
                std::make_tuple(4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1),
                std::make_tuple(13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6),
                std::make_tuple(1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2),
                std::make_tuple(6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12)
            ),
            std::make_tuple(
                std::make_tuple(13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7),
                std::make_tuple(1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2),
                std::make_tuple(7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8),
                std::make_tuple(2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11)
            )
        );

constexpr auto lshift(const unsigned long long num,const int bits)
{
    return ((num<<bits)&(0b1111111111111111111111111111))|(num>>(28-bits));
}
template <typename T,int bit>
constexpr T getBit(const T num)
{
    return !((num&((T)1<<(bit)))==0);
}
#define createTransfer(what) template  <long long num,int step>\
struct transfer_##what\
{\
    static constexpr long long value=((getBit<long long,std::get<std::tuple_size<decltype (what)>::value-step-1>(what)>(num))<<step)|transfer_##what<num,step-1>::value;\
};\
template <long long num>\
struct transfer_##what<num,-1>\
{\
  static constexpr long long value=0;\
};
createTransfer(PC_1);
createTransfer(PC_2);
createTransfer(IP);
createTransfer(E);
createTransfer(P);
createTransfer(IP_1);
template <long long key,int step>
struct getKeys
{
    static constexpr auto value=std::tuple_cat(std::make_tuple(transfer_PC_2<lshift(key>>28,std::get<15-step>(shift))<<28|(lshift(key&0b1111111111111111111111111111,std::get<15-step>(shift))),47>::value),getKeys<key,step-1>::value);
};
template <long long key>
struct getKeys<key,-1>
{
    static constexpr auto value=std::make_tuple();
};
template <long long num,int steps>
struct SBOX
{
    static constexpr auto now=num&0b111111;
    static constexpr auto value=SBOX<(num>>6),steps-1>::value|((long long)((std::get<(now>>1)&0xf>(std::get<(((now&0b100000)>>4)|(now&1))>(std::get<steps>(SBox)))))<<((7-steps)*4));
};
template <long long num>
struct SBOX<num,-1>
{
    static constexpr auto value=0;
};
template <long long l0,long long r0,long long key,int steps,bool mode>
struct _encrypt
{
    using keys=getKeys<transfer_PC_1<key,55>::value,15>;
    static constexpr auto r=transfer_P<SBOX<transfer_E<_encrypt<l0,r0,key,steps-1,mode>::r,47>::value^std::get<mode?steps:15-steps>(keys::value),7>::value,31>::value^_encrypt<l0,r0,key,steps-1,mode>::l;
    static constexpr auto l=_encrypt<l0,r0,key,steps-1,mode>::r;
};
template  <long long l0,long long r0,long long key,bool mode>
struct _encrypt<l0,r0,key,-1,mode>
{
    static constexpr auto l=l0;
    static constexpr auto r=r0;
};
template  <long long message,long long key,bool mode>
struct encrypt
{
    using _message=transfer_IP<message,63>;
    using cycle=_encrypt<(_message::value>>32),_message::value&0xffffffff,key,15,mode>;
    static constexpr auto value=transfer_IP_1<(cycle::r<<32)|(cycle::l&0xffffffff),63>::value;
};
template  <char... args>
struct getMessage
{
    static constexpr char value[sizeof...(args)+3]={'0','x',args...,'\0'};
};
constexpr auto hex=std::make_tuple('0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f');
template <int depth,long long num,char... args>
struct _getHex
{
    static constexpr auto value=_getHex<depth-4,num,args...,std::get<((num&((long long)0xf<<depth))>>depth)&0xf>(hex)>::value;
};
template <long long num,char ...args>
struct _getHex<-4,num,args...>
{
    static constexpr auto value=getMessage<args...>::value;
};
template <long long num>
using getHex=_getHex<60,num>;
int main()
{
    const auto key=0b0001001100110100010101110111100110011011101111001101111111110001;
    const auto message=0b0000000100100011010001010110011110001001101010111100110111101111;
   static_assert (encrypt<message,key,true>::value==0b1000010111101000000100110101010000001111000010101011010000000101,"error");
   const auto enc=encrypt<message,key,true>::value;
   static_assert (encrypt<enc,key,false>::value==message, "error");

    const auto key0=0x0f1571c947d9e859;
    const auto message0=0x02468aceeca86420;
    const auto en=encrypt<message0,key0,true>::value;
    std::cout<<(getHex<en>::value)<<std::endl;

#define print(num,_message,_key,perform) const long long key##num=_key;\
    const long long message##num=_message;\
    std::cout<<(getHex<encrypt<message##num,key##num,perform>::value>::value)<<std::endl;
    print(1,0x12468aceeca86420,0x0f1571c947d9e859,true);
    print(2,0x0123456789abcdef,0x1f1571c947d9e859,true);
    print(3,0x0000000000000000,0x3abb72cbe0204027,true);
    print(4,0x0123456789abcdef,0xbcca87bb9320ef40,false);
    print(5,0x72ae4683e14940cd,0xda8483580415016b,false);
}

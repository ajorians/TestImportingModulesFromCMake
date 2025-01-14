//#include <MathLib/MathLib.h>

export module MathLib;

export namespace MathLib
{
   export class Addition
   {
   public:
      int Add(int a, int b);
   };

   int Addition::Add(int a, int b)
   {
      return a + b + 123;
   }
}
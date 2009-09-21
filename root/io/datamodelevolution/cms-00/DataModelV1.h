//--------------------------------------------------------------------*- C++ -*-
// file:   DataModelV1.h
// author: Lukasz Janyst <ljanyst@cern.ch>
//------------------------------------------------------------------------------

#include <utility>
#include <vector>

class ClassAIns
{
   public:
      ClassAIns(): m_a( 12 ), m_b( 32.23 ) {}
   private:
      int    m_a;
      double m_b;
};

class ClassABase
{
   public:
      ClassABase(): m_a( 3 ), m_b( 123.33 ) {}
      virtual ~ClassABase() {};
   private:
      int    m_a;
      double m_b;
};

class ClassA: public ClassABase
{
   public:
      ClassA(): m_c( 65.22 ), m_e( 8 ), m_unit(1) {}
      virtual ~ClassA() {}
   private:
      double    m_c;
      ClassAIns m_d;
      int       m_e;
      int       m_unit;
};

class ClassB: public ClassA
{
   public:
      ClassB(): m_f( 34 ), m_g( 12.22 ) {}
      virtual ~ClassB() {};
   private:
      int    m_f;
      double m_g;
};

class ClassC: public ClassABase
{
   public:
      ClassC(): m_f( 74.22 ), m_g( 199.22 ) {}
      virtual ~ClassC() {};
   private:
      double m_f;
      double m_g;
//      std::vector<std::pair<double, int> > m_h;
};

class ClassD 
   {
   public:
      ClassD(): m_c( 65.22 ), m_e( 8 ) {}
      virtual ~ClassD() {}
   private:
      float      m_c;
      ClassAIns  m_d;
      int        m_e;
   };      

struct _dummy
{
   std::vector<double>                  a1;
   std::pair<int,double>                a2;
   std::vector<std::pair<int, double> > a3;
   std::vector<ClassA>                  a4;
   std::vector<ClassA*>                 a5;
   std::vector<ClassB>                  a6;
   std::vector<ClassB*>                 a7;
   std::vector<ClassC>                  a8;
   std::vector<ClassC*>                 a9;
   std::vector<ClassD>                  a10;
   std::vector<ClassD*>                 a11;
};

// Generated at Tue Jan  8 11:22:42 2013. Do not modify it

#ifdef _WIN32
#pragma warning ( disable : 4786 )
#pragma warning ( disable : 4345 )
#elif defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3)) && !defined(__INTEL_COMPILER) 
# pragma GCC diagnostic ignored "-Warray-bounds"
#endif
#include "src/classes.h"
#ifdef CONST
# undef CONST
#endif
#include "Reflex/Builder/ReflexBuilder.h"
#include <typeinfo>

namespace {
  ::Reflex::NamespaceBuilder nsb0( Reflex::Literal("std") );
  ::Reflex::NamespaceBuilder nsb1( Reflex::Literal("ROOT::Math") );
  ::Reflex::Type type_31 = ::Reflex::TypeBuilder(Reflex::Literal("int"));
  ::Reflex::Type type_74 = ::Reflex::TypeBuilder(Reflex::Literal("long"));
  ::Reflex::Type type_void = ::Reflex::TypeBuilder(Reflex::Literal("void"));
  ::Reflex::Type type_446 = ::Reflex::TypeBuilder(Reflex::Literal("float"));
  ::Reflex::Type type_1892 = ::Reflex::TypeBuilder(Reflex::Literal("bool"));
  ::Reflex::Type type_1942 = ::Reflex::TypeBuilder(Reflex::Literal("void"));
  ::Reflex::Type type_394 = ::Reflex::TypeBuilder(Reflex::Literal("double"));
  ::Reflex::Type type_630 = ::Reflex::TypeBuilder(Reflex::Literal("KITAMet"));
  ::Reflex::Type type_448 = ::Reflex::TypeBuilder(Reflex::Literal("KITAMuon"));
  ::Reflex::Type type_561 = ::Reflex::TypeBuilder(Reflex::Literal("KITAMisc"));
  ::Reflex::Type type_1023 = ::Reflex::TypeBuilder(Reflex::Literal("KITAJet"));
  ::Reflex::Type type_1097 = ::Reflex::TypeBuilder(Reflex::Literal("KITAHlt"));
  ::Reflex::Type type_463 = ::Reflex::TypeBuilder(Reflex::Literal("KITAPFMet"));
  ::Reflex::Type type_367 = ::Reflex::TypeBuilder(Reflex::Literal("KITAObject"));
  ::Reflex::Type type_429 = ::Reflex::TypeBuilder(Reflex::Literal("KITAGenJet"));
  ::Reflex::Type type_736 = ::Reflex::TypeBuilder(Reflex::Literal("KITATopJet"));
  ::Reflex::Type type_931 = ::Reflex::TypeBuilder(Reflex::Literal("KITASemiSol"));
  ::Reflex::Type type_1289 = ::Reflex::TypeBuilder(Reflex::Literal("KITAGenMet"));
  ::Reflex::Type type_7 = ::Reflex::TypeBuilder(Reflex::Literal("KITAMcParticle"));
  ::Reflex::Type type_123 = ::Reflex::TypeBuilder(Reflex::Literal("unsigned int"));
  ::Reflex::Type type_904 = ::Reflex::TypeBuilder(Reflex::Literal("KITASemiSols"));
  ::Reflex::Type type_23 = ::Reflex::TypeBuilder(Reflex::Literal("unsigned long"));
  ::Reflex::Type type_1300 = ::Reflex::TypeBuilder(Reflex::Literal("KITAGenInfo"));
  ::Reflex::Type type_511 = ::Reflex::TypeBuilder(Reflex::Literal("KITAGenFlavor"));
  ::Reflex::Type type_1106 = ::Reflex::TypeBuilder(Reflex::Literal("KITAElectron"));
  ::Reflex::Type type_853 = ::Reflex::TypeBuilder(Reflex::Literal("KITAGenWFlavor"));
  ::Reflex::Type type_1316 = ::Reflex::TypeBuilder(Reflex::Literal("KITAGenTprime"));
  ::Reflex::Type type_516 = ::Reflex::TypeBuilder(Reflex::Literal("KITAGenParticle"));
  ::Reflex::Type type_1824 = ::Reflex::TypeBuilder(Reflex::Literal("std::less<int>"));
  ::Reflex::Type type_82 = ::Reflex::TypeBuilder(Reflex::Literal("KITAJet_PFlowVars"));
  ::Reflex::Type type_354 = ::Reflex::TypeBuilder(Reflex::Literal("KITADataCleaning"));
  ::Reflex::Type type_594 = ::Reflex::TypeBuilder(Reflex::Literal("KITAJet_CaloVars"));
  ::Reflex::Type type_1271 = ::Reflex::TypeBuilder(Reflex::Literal("KITAGenTopEvent"));
  ::Reflex::Type type_2497 = ::Reflex::TypeBuilder(Reflex::Literal("KITAMuon::point"));
  ::Reflex::Type type_1421 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<int>"));
  ::Reflex::Type type_958 = ::Reflex::TypeBuilder(Reflex::Literal("KITAPrimaryVertex"));
  ::Reflex::Type type_1420 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<float>"));
  ::Reflex::Type type_897 = ::Reflex::TypeBuilder(Reflex::Literal("KITAJet_svBTagInfos"));
  ::Reflex::Type type_1030 = ::Reflex::TypeBuilder(Reflex::Literal("KITAJetWithSubjets"));
  ::Reflex::Type type_647 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAJet>"));
  ::Reflex::Type type_1631 = ::Reflex::TypeBuilder(Reflex::Literal("std::map<int,float>"));
  ::Reflex::Type type_3385 = ::Reflex::TypeBuilder(Reflex::Literal("KITAElectron::point"));
  ::Reflex::Type type_1422 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<double>"));
  ::Reflex::Type type_544 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAMuon>"));
  ::Reflex::Type type_3386 = ::Reflex::TypeBuilder(Reflex::Literal("KITAElectron::vector"));
  ::Reflex::Type type_1003 = ::Reflex::TypeBuilder(Reflex::Literal("KITAGenJetWithSubjets"));
  ::Reflex::Type type_1205 = ::Reflex::TypeBuilder(Reflex::Literal("KITAGenSingleTopEvent"));
  ::Reflex::Type type_170 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITATopJet>"));
  ::Reflex::Type type_841 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAGenJet>"));
  ::Reflex::Type type_1162 = ::Reflex::TypeBuilder(Reflex::Literal("KITAJet_TrackbTagInfos"));
  ::Reflex::Type type_1434 = ::Reflex::TypeBuilder(Reflex::Literal("std::basic_string<char>"));
  ::Reflex::Type type_1548 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAJet>"));
  ::Reflex::Type type_1419 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITASemiSol>"));
  ::Reflex::Type type_1536 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAMuon>"));
  ::Reflex::Type type_1189 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAElectron>"));
  ::Reflex::Type type_3274 = ::Reflex::TypeBuilder(Reflex::Literal("KITAHlt::KITATriggerObject"));
  ::Reflex::Type type_1380 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<const int,float>"));
  ::Reflex::Type type_1528 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITATopJet>"));
  ::Reflex::Type type_1547 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAGenJet>"));
  ::Reflex::Type type_351 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAGenParticle>"));
  ::Reflex::Type type_728 = ::Reflex::TypeBuilder(Reflex::Literal("ROOT::Math::PxPyPzE4D<float>"));
  ::Reflex::Type type_1195 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAMcParticle>"));
  ::Reflex::Type type_1537 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAElectron>"));
  ::Reflex::Type type_1416 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAJet_CaloVars>"));
  ::Reflex::Type type_408 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAJetWithSubjets>"));
  ::Reflex::Type type_1417 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAJet_PFlowVars>"));
  ::Reflex::Type type_1167 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAPrimaryVertex>"));
  ::Reflex::Type type_1544 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAMcParticle>"));
  ::Reflex::Type type_1555 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAGenParticle>"));
  ::Reflex::Type type_1415 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAJet_svBTagInfos>"));
  ::Reflex::Type type_1540 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAJet_CaloVars>"));
  ::Reflex::Type type_491 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAGenJetWithSubjets>"));
  ::Reflex::Type type_1535 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAPrimaryVertex>"));
  ::Reflex::Type type_1541 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAJet_PFlowVars>"));
  ::Reflex::Type type_1530 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAJetWithSubjets>"));
  ::Reflex::Type type_1414 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>"));
  ::Reflex::Type type_1539 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAJet_svBTagInfos>"));
  ::Reflex::Type type_1825 = ::Reflex::TypeBuilder(Reflex::Literal("std::less<std::basic_string<char> >"));
  ::Reflex::Type type_1052 = ::Reflex::TypeBuilder(Reflex::Literal("std::map<std::basic_string<char>,int>"));
  ::Reflex::Type type_1529 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAGenJetWithSubjets>"));
  ::Reflex::Type type_255 = ::Reflex::TypeBuilder(Reflex::Literal("std::map<std::basic_string<char>,float>"));
  ::Reflex::Type type_1538 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAJet_TrackbTagInfos>"));
  ::Reflex::Type type_1413 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>"));
  ::Reflex::Type type_1418 = ::Reflex::TypeBuilder(Reflex::Literal("std::vector<ROOT::Math::PxPyPzE4D<float> >"));
  ::Reflex::Type type_1527 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<KITAHlt::KITATriggerObject>"));
  ::Reflex::Type type_1543 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<std::pair<const int,float> >"));
  ::Reflex::Type type_1372 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<const std::basic_string<char>,int>"));
  ::Reflex::Type type_1376 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<const std::basic_string<char>,float>"));
  ::Reflex::Type type_1630 = ::Reflex::TypeBuilder(Reflex::Literal("std::map<std::basic_string<char>,unsigned long>"));
  ::Reflex::Type type_1478 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree_iterator<std::pair<const int,float> >"));
  ::Reflex::Type type_1758 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJet,std::allocator<KITAJet> >"));
  ::Reflex::Type type_1754 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAMuon,std::allocator<KITAMuon> >"));
  ::Reflex::Type type_1629 = ::Reflex::TypeBuilder(Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >"));
  ::Reflex::Type type_1379 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<const std::basic_string<char>,unsigned long>"));
  ::Reflex::Type type_1719 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree_const_iterator<std::pair<const int,float> >"));
  ::Reflex::Type type_1750 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITATopJet,std::allocator<KITATopJet> >"));
  ::Reflex::Type type_1757 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAGenJet,std::allocator<KITAGenJet> >"));
  ::Reflex::Type type_2192 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >"));
  ::Reflex::Type type_1370 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<const int,std::vector<KITAHlt::KITATriggerObject> >"));
  ::Reflex::Type type_1532 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<std::pair<const std::basic_string<char>,int> >"));
  ::Reflex::Type type_1755 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAElectron,std::allocator<KITAElectron> >"));
  ::Reflex::Type type_2184 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >"));
  ::Reflex::Type type_1534 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<std::pair<const std::basic_string<char>,float> >"));
  ::Reflex::Type type_1756 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAMcParticle,std::allocator<KITAMcParticle> >"));
  ::Reflex::Type type_1979 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >"));
  ::Reflex::Type type_2193 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAJet*,std::vector<KITAJet> >"));
  ::Reflex::Type type_2190 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >"));
  ::Reflex::Type type_1383 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_iterator<std::pair<const int,float> >,bool>"));
  ::Reflex::Type type_1767 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAGenParticle,std::allocator<KITAGenParticle> >"));
  ::Reflex::Type type_2185 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAMuon*,std::vector<KITAMuon> >"));
  ::Reflex::Type type_1764 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJet_CaloVars,std::allocator<KITAJet_CaloVars> >"));
  ::Reflex::Type type_1476 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >"));
  ::Reflex::Type type_2186 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >"));
  ::Reflex::Type type_1753 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAPrimaryVertex,std::allocator<KITAPrimaryVertex> >"));
  ::Reflex::Type type_1763 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJet_PFlowVars,std::allocator<KITAJet_PFlowVars> >"));
  ::Reflex::Type type_1477 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >"));
  ::Reflex::Type type_1542 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<std::pair<const std::basic_string<char>,unsigned long> >"));
  ::Reflex::Type type_1981 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITATopJet*,std::vector<KITATopJet> >"));
  ::Reflex::Type type_2191 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAGenJet*,std::vector<KITAGenJet> >"));
  ::Reflex::Type type_1752 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJetWithSubjets,std::allocator<KITAJetWithSubjets> >"));
  ::Reflex::Type type_2188 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >"));
  ::Reflex::Type type_1761 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJet_svBTagInfos,std::allocator<KITAJet_svBTagInfos> >"));
  ::Reflex::Type type_1688 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<std::_Rb_tree_iterator<std::pair<const int,float> > >"));
  ::Reflex::Type type_1717 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> >"));
  ::Reflex::Type type_2210 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >"));
  ::Reflex::Type type_2187 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAElectron*,std::vector<KITAElectron> >"));
  ::Reflex::Type type_1718 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> >"));
  ::Reflex::Type type_2204 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >"));
  ::Reflex::Type type_1526 = ::Reflex::TypeBuilder(Reflex::Literal("std::allocator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >"));
  ::Reflex::Type type_1751 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAGenJetWithSubjets,std::allocator<KITAGenJetWithSubjets> >"));
  ::Reflex::Type type_1480 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >"));
  ::Reflex::Type type_2182 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >"));
  ::Reflex::Type type_2202 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >"));
  ::Reflex::Type type_2189 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAMcParticle*,std::vector<KITAMcParticle> >"));
  ::Reflex::Type type_1762 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJet_TrackbTagInfos,std::allocator<KITAJet_TrackbTagInfos> >"));
  ::Reflex::Type type_1687 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<const int,float> > >"));
  ::Reflex::Type type_2211 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAGenParticle*,std::vector<KITAGenParticle> >"));
  ::Reflex::Type type_2180 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >"));
  ::Reflex::Type type_2198 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >"));
  ::Reflex::Type type_2205 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >"));
  ::Reflex::Type type_1674 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> > >"));
  ::Reflex::Type type_1374 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >,bool>"));
  ::Reflex::Type type_1721 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> >"));
  ::Reflex::Type type_2183 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >"));
  ::Reflex::Type type_2203 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >"));
  ::Reflex::Type type_1479 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >"));
  ::Reflex::Type type_1666 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> > >"));
  ::Reflex::Type type_1378 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >,bool>"));
  ::Reflex::Type type_2181 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >"));
  ::Reflex::Type type_2178 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >"));
  ::Reflex::Type type_1749 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAHlt::KITATriggerObject,std::allocator<KITAHlt::KITATriggerObject> >"));
  ::Reflex::Type type_2200 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >"));
  ::Reflex::Type type_2199 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >"));
  ::Reflex::Type type_1654 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> > >"));
  ::Reflex::Type type_1673 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAJet*,std::vector<KITAJet> > >"));
  ::Reflex::Type type_1672 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> > >"));
  ::Reflex::Type type_1720 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >"));
  ::Reflex::Type type_1665 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAMuon*,std::vector<KITAMuon> > >"));
  ::Reflex::Type type_1660 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> > >"));
  ::Reflex::Type type_2179 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >"));
  ::Reflex::Type type_1668 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> > >"));
  ::Reflex::Type type_1662 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> > >"));
  ::Reflex::Type type_1389 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >,bool>"));
  ::Reflex::Type type_2201 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >"));
  ::Reflex::Type type_1653 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITATopJet*,std::vector<KITATopJet> > >"));
  ::Reflex::Type type_1671 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAGenJet*,std::vector<KITAGenJet> > >"));
  ::Reflex::Type type_2176 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >"));
  ::Reflex::Type type_1670 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> > >"));
  ::Reflex::Type type_1659 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> > >"));
  ::Reflex::Type type_1698 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> > >"));
  ::Reflex::Type type_1667 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAElectron*,std::vector<KITAElectron> > >"));
  ::Reflex::Type type_1661 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> > >"));
  ::Reflex::Type type_1686 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> > >"));
  ::Reflex::Type type_1386 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >,bool>"));
  ::Reflex::Type type_1692 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> > >"));
  ::Reflex::Type type_1664 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> > >"));
  ::Reflex::Type type_2177 = ::Reflex::TypeBuilder(Reflex::Literal("__gnu_cxx::__normal_iterator<const KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >"));
  ::Reflex::Type type_1684 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> > >"));
  ::Reflex::Type type_1669 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAMcParticle*,std::vector<KITAMcParticle> > >"));
  ::Reflex::Type type_1697 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAGenParticle*,std::vector<KITAGenParticle> > >"));
  ::Reflex::Type type_1658 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> > >"));
  ::Reflex::Type type_1680 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> > >"));
  ::Reflex::Type type_1685 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> > >"));
  ::Reflex::Type type_1691 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> > >"));
  ::Reflex::Type type_1663 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> > >"));
  ::Reflex::Type type_1683 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> > >"));
  ::Reflex::Type type_1690 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > > >"));
  ::Reflex::Type type_1657 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> > >"));
  ::Reflex::Type type_1656 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> > >"));
  ::Reflex::Type type_1682 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> > >"));
  ::Reflex::Type type_1679 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> > >"));
  ::Reflex::Type type_1382 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_iterator<std::pair<const int,float> >,std::_Rb_tree_iterator<std::pair<const int,float> > >"));
  ::Reflex::Type type_1689 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > > >"));
  ::Reflex::Type type_1655 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> > >"));
  ::Reflex::Type type_1681 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> > >"));
  ::Reflex::Type type_1652 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> > >"));
  ::Reflex::Type type_1381 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_const_iterator<std::pair<const int,float> >,std::_Rb_tree_const_iterator<std::pair<const int,float> > >"));
  ::Reflex::Type type_1651 = ::Reflex::TypeBuilder(Reflex::Literal("std::reverse_iterator<__gnu_cxx::__normal_iterator<const KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> > >"));
  ::Reflex::Type type_1443 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree<int,std::pair<const int,float>,std::_Select1st<std::pair<const int,float> >,std::less<int>,std::allocator<std::pair<const int,float> > >"));
  ::Reflex::Type type_1373 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >,std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> > >"));
  ::Reflex::Type type_1377 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >,std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> > >"));
  ::Reflex::Type type_1371 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> >,std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> > >"));
  ::Reflex::Type type_1375 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> >,std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> > >"));
  ::Reflex::Type type_1388 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >,std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> > >"));
  ::Reflex::Type type_1387 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> >,std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> > >"));
  ::Reflex::Type type_1385 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >,std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > > >"));
  ::Reflex::Type type_1384 = ::Reflex::TypeBuilder(Reflex::Literal("std::pair<std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >,std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > > >"));
  ::Reflex::Type type_1441 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree<std::basic_string<char>,std::pair<const std::basic_string<char>,int>,std::_Select1st<std::pair<const std::basic_string<char>,int> >,std::less<std::basic_string<char> >,std::allocator<std::pair<const std::basic_string<char>,int> > >"));
  ::Reflex::Type type_1442 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree<std::basic_string<char>,std::pair<const std::basic_string<char>,float>,std::_Select1st<std::pair<const std::basic_string<char>,float> >,std::less<std::basic_string<char> >,std::allocator<std::pair<const std::basic_string<char>,float> > >"));
  ::Reflex::Type type_1444 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree<int,std::pair<const int,std::vector<KITAHlt::KITATriggerObject> >,std::_Select1st<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >,std::less<int>,std::allocator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > > >"));
  ::Reflex::Type type_1445 = ::Reflex::TypeBuilder(Reflex::Literal("std::_Rb_tree<std::basic_string<char>,std::pair<const std::basic_string<char>,unsigned long>,std::_Select1st<std::pair<const std::basic_string<char>,unsigned long> >,std::less<std::basic_string<char> >,std::allocator<std::pair<const std::basic_string<char>,unsigned long> > >"));
  ::Reflex::Type type_171 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITATopJets"), type_170);
  ::Reflex::Type type_256 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITAMap"), type_255);
  ::Reflex::Type type_352 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITAGenParticles"), type_351);
  ::Reflex::Type type_409 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITAJetsWithSubjets"), type_408);
  ::Reflex::Type type_492 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITAGenJetsWithSubjets"), type_491);
  ::Reflex::Type type_545 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITAMuons"), type_544);
  ::Reflex::Type type_648 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITAJets"), type_647);
  ::Reflex::Type type_729 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITA4Vector"), type_728);
  ::Reflex::Type type_842 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITAGenJets"), type_841);
  ::Reflex::Type type_1053 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITAIntMap"), type_1052);
  ::Reflex::Type type_1190 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITAElectrons"), type_1189);
  ::Reflex::Type type_1196 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("KITAMcParticles"), type_1195);
  ::Reflex::Type type_3578 = ::Reflex::ReferenceBuilder(type_7);
  ::Reflex::Type type_7c = ::Reflex::ConstBuilder(type_7);
  ::Reflex::Type type_3580 = ::Reflex::ReferenceBuilder(type_7c);
  ::Reflex::Type type_4191 = ::Reflex::ReferenceBuilder(type_82);
  ::Reflex::Type type_82c = ::Reflex::ConstBuilder(type_82);
  ::Reflex::Type type_4193 = ::Reflex::ReferenceBuilder(type_82c);
  ::Reflex::Type type_8121 = ::Reflex::ReferenceBuilder(type_354);
  ::Reflex::Type type_354c = ::Reflex::ConstBuilder(type_354);
  ::Reflex::Type type_8122 = ::Reflex::ReferenceBuilder(type_354c);
  ::Reflex::Type type_8126 = ::Reflex::ReferenceBuilder(type_367);
  ::Reflex::Type type_367c = ::Reflex::ConstBuilder(type_367);
  ::Reflex::Type type_8127 = ::Reflex::ReferenceBuilder(type_367c);
  ::Reflex::Type type_2929 = ::Reflex::ReferenceBuilder(type_429);
  ::Reflex::Type type_429c = ::Reflex::ConstBuilder(type_429);
  ::Reflex::Type type_2931 = ::Reflex::ReferenceBuilder(type_429c);
  ::Reflex::Type type_2626 = ::Reflex::ReferenceBuilder(type_448);
  ::Reflex::Type type_448c = ::Reflex::ConstBuilder(type_448);
  ::Reflex::Type type_2628 = ::Reflex::ReferenceBuilder(type_448c);
  ::Reflex::Type type_8159 = ::Reflex::ReferenceBuilder(type_463);
  ::Reflex::Type type_463c = ::Reflex::ConstBuilder(type_463);
  ::Reflex::Type type_8160 = ::Reflex::ReferenceBuilder(type_463c);
  ::Reflex::Type type_8167 = ::Reflex::ReferenceBuilder(type_511);
  ::Reflex::Type type_511c = ::Reflex::ConstBuilder(type_511);
  ::Reflex::Type type_8168 = ::Reflex::ReferenceBuilder(type_511c);
  ::Reflex::Type type_2263 = ::Reflex::ReferenceBuilder(type_516);
  ::Reflex::Type type_516c = ::Reflex::ConstBuilder(type_516);
  ::Reflex::Type type_2265 = ::Reflex::ReferenceBuilder(type_516c);
  ::Reflex::Type type_8176 = ::Reflex::ReferenceBuilder(type_561);
  ::Reflex::Type type_561c = ::Reflex::ConstBuilder(type_561);
  ::Reflex::Type type_8177 = ::Reflex::ReferenceBuilder(type_561c);
  ::Reflex::Type type_4126 = ::Reflex::ReferenceBuilder(type_594);
  ::Reflex::Type type_594c = ::Reflex::ConstBuilder(type_594);
  ::Reflex::Type type_4128 = ::Reflex::ReferenceBuilder(type_594c);
  ::Reflex::Type type_8201 = ::Reflex::ReferenceBuilder(type_630);
  ::Reflex::Type type_630c = ::Reflex::ConstBuilder(type_630);
  ::Reflex::Type type_8202 = ::Reflex::ReferenceBuilder(type_630c);
  ::Reflex::Type type_1975 = ::Reflex::ReferenceBuilder(type_736);
  ::Reflex::Type type_736c = ::Reflex::ConstBuilder(type_736);
  ::Reflex::Type type_1977 = ::Reflex::ReferenceBuilder(type_736c);
  ::Reflex::Type type_8242 = ::Reflex::ReferenceBuilder(type_853);
  ::Reflex::Type type_853c = ::Reflex::ConstBuilder(type_853);
  ::Reflex::Type type_8243 = ::Reflex::ReferenceBuilder(type_853c);
  ::Reflex::Type type_4061 = ::Reflex::ReferenceBuilder(type_897);
  ::Reflex::Type type_897c = ::Reflex::ConstBuilder(type_897);
  ::Reflex::Type type_4063 = ::Reflex::ReferenceBuilder(type_897c);
  ::Reflex::Type type_8244 = ::Reflex::ReferenceBuilder(type_904);
  ::Reflex::Type type_904c = ::Reflex::ConstBuilder(type_904);
  ::Reflex::Type type_8245 = ::Reflex::ReferenceBuilder(type_904c);
  ::Reflex::Type type_4321 = ::Reflex::ReferenceBuilder(type_931);
  ::Reflex::Type type_931c = ::Reflex::ConstBuilder(type_931);
  ::Reflex::Type type_4323 = ::Reflex::ReferenceBuilder(type_931c);
  ::Reflex::Type type_3438 = ::Reflex::ReferenceBuilder(type_958);
  ::Reflex::Type type_958c = ::Reflex::ConstBuilder(type_958);
  ::Reflex::Type type_3440 = ::Reflex::ReferenceBuilder(type_958c);
  ::Reflex::Type type_2542 = ::Reflex::ReferenceBuilder(type_1003);
  ::Reflex::Type type_1003c = ::Reflex::ConstBuilder(type_1003);
  ::Reflex::Type type_2544 = ::Reflex::ReferenceBuilder(type_1003c);
  ::Reflex::Type type_2773 = ::Reflex::ReferenceBuilder(type_1023);
  ::Reflex::Type type_1023c = ::Reflex::ConstBuilder(type_1023);
  ::Reflex::Type type_2775 = ::Reflex::ReferenceBuilder(type_1023c);
  ::Reflex::Type type_2364 = ::Reflex::ReferenceBuilder(type_1030);
  ::Reflex::Type type_1030c = ::Reflex::ConstBuilder(type_1030);
  ::Reflex::Type type_2366 = ::Reflex::ReferenceBuilder(type_1030c);
  ::Reflex::Type type_8268 = ::Reflex::ReferenceBuilder(type_1097);
  ::Reflex::Type type_1097c = ::Reflex::ConstBuilder(type_1097);
  ::Reflex::Type type_8269 = ::Reflex::ReferenceBuilder(type_1097c);
  ::Reflex::Type type_1334 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("uint64_t"), type_23);
  ::Reflex::Type type_3505 = ::Reflex::ReferenceBuilder(type_1106);
  ::Reflex::Type type_1106c = ::Reflex::ConstBuilder(type_1106);
  ::Reflex::Type type_3507 = ::Reflex::ReferenceBuilder(type_1106c);
  ::Reflex::Type type_3996 = ::Reflex::ReferenceBuilder(type_1162);
  ::Reflex::Type type_1162c = ::Reflex::ConstBuilder(type_1162);
  ::Reflex::Type type_3998 = ::Reflex::ReferenceBuilder(type_1162c);
  ::Reflex::Type type_3434 = ::Reflex::PointerBuilder(type_958);
  ::Reflex::Type type_3436 = ::Reflex::PointerBuilder(type_958c);
  ::Reflex::Type type_1639 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("std::size_t"), type_23);
  ::Reflex::Type type_1601 = ::Reflex::TypedefTypeBuilder(Reflex::Literal("std::ptrdiff_t"), type_74);
  ::Reflex::Type type_1535c = ::Reflex::ConstBuilder(type_1535);
  ::Reflex::Type type_8292 = ::Reflex::ReferenceBuilder(type_1535c);
  ::Reflex::Type type_1167c = ::Reflex::ConstBuilder(type_1167);
  ::Reflex::Type type_8293 = ::Reflex::ReferenceBuilder(type_1167c);
  ::Reflex::Type type_8294 = ::Reflex::ReferenceBuilder(type_1167);
  ::Reflex::Type type_8364 = ::Reflex::ReferenceBuilder(type_1205);
  ::Reflex::Type type_1205c = ::Reflex::ConstBuilder(type_1205);
  ::Reflex::Type type_8365 = ::Reflex::ReferenceBuilder(type_1205c);
  ::Reflex::Type type_8366 = ::Reflex::ReferenceBuilder(type_1271);
  ::Reflex::Type type_1271c = ::Reflex::ConstBuilder(type_1271);
  ::Reflex::Type type_8367 = ::Reflex::ReferenceBuilder(type_1271c);
  ::Reflex::Type type_8368 = ::Reflex::ReferenceBuilder(type_1289);
  ::Reflex::Type type_1289c = ::Reflex::ConstBuilder(type_1289);
  ::Reflex::Type type_8369 = ::Reflex::ReferenceBuilder(type_1289c);
  ::Reflex::Type type_8370 = ::Reflex::ReferenceBuilder(type_1300);
  ::Reflex::Type type_1300c = ::Reflex::ConstBuilder(type_1300);
  ::Reflex::Type type_8371 = ::Reflex::ReferenceBuilder(type_1300c);
  ::Reflex::Type type_8252 = ::Reflex::ArrayBuilder(type_31, 2);
  ::Reflex::Type type_8372 = ::Reflex::ReferenceBuilder(type_1316);
  ::Reflex::Type type_1316c = ::Reflex::ConstBuilder(type_1316);
  ::Reflex::Type type_8373 = ::Reflex::ReferenceBuilder(type_1316c);
  ::Reflex::Type type_3931 = ::Reflex::ReferenceBuilder(type_3274);
  ::Reflex::Type type_3274c = ::Reflex::ConstBuilder(type_3274);
  ::Reflex::Type type_3933 = ::Reflex::ReferenceBuilder(type_3274c);
  ::Reflex::Type type_3927 = ::Reflex::PointerBuilder(type_3274);
  ::Reflex::Type type_3929 = ::Reflex::PointerBuilder(type_3274c);
  ::Reflex::Type type_1527c = ::Reflex::ConstBuilder(type_1527);
  ::Reflex::Type type_8433 = ::Reflex::ReferenceBuilder(type_1527c);
  ::Reflex::Type type_1413c = ::Reflex::ConstBuilder(type_1413);
  ::Reflex::Type type_8434 = ::Reflex::ReferenceBuilder(type_1413c);
  ::Reflex::Type type_8435 = ::Reflex::ReferenceBuilder(type_1413);
  ::Reflex::Type type_3992 = ::Reflex::PointerBuilder(type_1162);
  ::Reflex::Type type_3994 = ::Reflex::PointerBuilder(type_1162c);
  ::Reflex::Type type_1538c = ::Reflex::ConstBuilder(type_1538);
  ::Reflex::Type type_8437 = ::Reflex::ReferenceBuilder(type_1538c);
  ::Reflex::Type type_1414c = ::Reflex::ConstBuilder(type_1414);
  ::Reflex::Type type_8438 = ::Reflex::ReferenceBuilder(type_1414c);
  ::Reflex::Type type_8439 = ::Reflex::ReferenceBuilder(type_1414);
  ::Reflex::Type type_4057 = ::Reflex::PointerBuilder(type_897);
  ::Reflex::Type type_4059 = ::Reflex::PointerBuilder(type_897c);
  ::Reflex::Type type_1539c = ::Reflex::ConstBuilder(type_1539);
  ::Reflex::Type type_8441 = ::Reflex::ReferenceBuilder(type_1539c);
  ::Reflex::Type type_1415c = ::Reflex::ConstBuilder(type_1415);
  ::Reflex::Type type_8442 = ::Reflex::ReferenceBuilder(type_1415c);
  ::Reflex::Type type_8443 = ::Reflex::ReferenceBuilder(type_1415);
  ::Reflex::Type type_4122 = ::Reflex::PointerBuilder(type_594);
  ::Reflex::Type type_4124 = ::Reflex::PointerBuilder(type_594c);
  ::Reflex::Type type_1540c = ::Reflex::ConstBuilder(type_1540);
  ::Reflex::Type type_8445 = ::Reflex::ReferenceBuilder(type_1540c);
  ::Reflex::Type type_1416c = ::Reflex::ConstBuilder(type_1416);
  ::Reflex::Type type_8446 = ::Reflex::ReferenceBuilder(type_1416c);
  ::Reflex::Type type_8447 = ::Reflex::ReferenceBuilder(type_1416);
  ::Reflex::Type type_4187 = ::Reflex::PointerBuilder(type_82);
  ::Reflex::Type type_4189 = ::Reflex::PointerBuilder(type_82c);
  ::Reflex::Type type_1541c = ::Reflex::ConstBuilder(type_1541);
  ::Reflex::Type type_8449 = ::Reflex::ReferenceBuilder(type_1541c);
  ::Reflex::Type type_1417c = ::Reflex::ConstBuilder(type_1417);
  ::Reflex::Type type_8450 = ::Reflex::ReferenceBuilder(type_1417c);
  ::Reflex::Type type_8451 = ::Reflex::ReferenceBuilder(type_1417);
  ::Reflex::Type type_5059 = ::Reflex::PointerBuilder(type_1370);
  ::Reflex::Type type_1370c = ::Reflex::ConstBuilder(type_1370);
  ::Reflex::Type type_5061 = ::Reflex::PointerBuilder(type_1370c);
  ::Reflex::Type type_5063 = ::Reflex::ReferenceBuilder(type_1370);
  ::Reflex::Type type_5065 = ::Reflex::ReferenceBuilder(type_1370c);
  ::Reflex::Type type_1824c = ::Reflex::ConstBuilder(type_1824);
  ::Reflex::Type type_8530 = ::Reflex::ReferenceBuilder(type_1824c);
  ::Reflex::Type type_1526c = ::Reflex::ConstBuilder(type_1526);
  ::Reflex::Type type_8538 = ::Reflex::ReferenceBuilder(type_1526c);
  ::Reflex::Type type_1629c = ::Reflex::ConstBuilder(type_1629);
  ::Reflex::Type type_8733 = ::Reflex::ReferenceBuilder(type_1629c);
  ::Reflex::Type type_8734 = ::Reflex::ReferenceBuilder(type_1629);
  ::Reflex::Type type_31c = ::Reflex::ConstBuilder(type_31);
  ::Reflex::Type type_4451 = ::Reflex::ReferenceBuilder(type_31c);
  ::Reflex::Type type_4954 = ::Reflex::PointerBuilder(type_1380);
  ::Reflex::Type type_1380c = ::Reflex::ConstBuilder(type_1380);
  ::Reflex::Type type_4956 = ::Reflex::PointerBuilder(type_1380c);
  ::Reflex::Type type_4958 = ::Reflex::ReferenceBuilder(type_1380);
  ::Reflex::Type type_4960 = ::Reflex::ReferenceBuilder(type_1380c);
  ::Reflex::Type type_1543c = ::Reflex::ConstBuilder(type_1543);
  ::Reflex::Type type_8531 = ::Reflex::ReferenceBuilder(type_1543c);
  ::Reflex::Type type_1631c = ::Reflex::ConstBuilder(type_1631);
  ::Reflex::Type type_8739 = ::Reflex::ReferenceBuilder(type_1631c);
  ::Reflex::Type type_8740 = ::Reflex::ReferenceBuilder(type_1631);
  ::Reflex::Type type_4385 = ::Reflex::ReferenceBuilder(type_446);
  ::Reflex::Type type_446c = ::Reflex::ConstBuilder(type_446);
  ::Reflex::Type type_4387 = ::Reflex::ReferenceBuilder(type_446c);
  ::Reflex::Type type_9152 = ::Reflex::ReferenceBuilder(type_2497);
  ::Reflex::Type type_2497c = ::Reflex::ConstBuilder(type_2497);
  ::Reflex::Type type_9153 = ::Reflex::ReferenceBuilder(type_2497c);
  ::Reflex::Type type_9195 = ::Reflex::ReferenceBuilder(type_3385);
  ::Reflex::Type type_3385c = ::Reflex::ConstBuilder(type_3385);
  ::Reflex::Type type_9196 = ::Reflex::ReferenceBuilder(type_3385c);
  ::Reflex::Type type_9197 = ::Reflex::ReferenceBuilder(type_3386);
  ::Reflex::Type type_3386c = ::Reflex::ConstBuilder(type_3386);
  ::Reflex::Type type_9198 = ::Reflex::ReferenceBuilder(type_3386c);
  ::Reflex::Type type_1971 = ::Reflex::PointerBuilder(type_736);
  ::Reflex::Type type_1973 = ::Reflex::PointerBuilder(type_736c);
  ::Reflex::Type type_1528c = ::Reflex::ConstBuilder(type_1528);
  ::Reflex::Type type_7417 = ::Reflex::ReferenceBuilder(type_1528c);
  ::Reflex::Type type_170c = ::Reflex::ConstBuilder(type_170);
  ::Reflex::Type type_7418 = ::Reflex::ReferenceBuilder(type_170c);
  ::Reflex::Type type_7419 = ::Reflex::ReferenceBuilder(type_170);
  ::Reflex::Type type_2058 = ::Reflex::PointerBuilder(type_1376);
  ::Reflex::Type type_1376c = ::Reflex::ConstBuilder(type_1376);
  ::Reflex::Type type_2060 = ::Reflex::PointerBuilder(type_1376c);
  ::Reflex::Type type_2062 = ::Reflex::ReferenceBuilder(type_1376);
  ::Reflex::Type type_2064 = ::Reflex::ReferenceBuilder(type_1376c);
  ::Reflex::Type type_1825c = ::Reflex::ConstBuilder(type_1825);
  ::Reflex::Type type_7424 = ::Reflex::ReferenceBuilder(type_1825c);
  ::Reflex::Type type_1534c = ::Reflex::ConstBuilder(type_1534);
  ::Reflex::Type type_7425 = ::Reflex::ReferenceBuilder(type_1534c);
  ::Reflex::Type type_255c = ::Reflex::ConstBuilder(type_255);
  ::Reflex::Type type_7426 = ::Reflex::ReferenceBuilder(type_255c);
  ::Reflex::Type type_7427 = ::Reflex::ReferenceBuilder(type_255);
  ::Reflex::Type type_1434c = ::Reflex::ConstBuilder(type_1434);
  ::Reflex::Type type_6427 = ::Reflex::ReferenceBuilder(type_1434c);
  ::Reflex::Type type_2259 = ::Reflex::PointerBuilder(type_516);
  ::Reflex::Type type_2261 = ::Reflex::PointerBuilder(type_516c);
  ::Reflex::Type type_1555c = ::Reflex::ConstBuilder(type_1555);
  ::Reflex::Type type_8118 = ::Reflex::ReferenceBuilder(type_1555c);
  ::Reflex::Type type_351c = ::Reflex::ConstBuilder(type_351);
  ::Reflex::Type type_8119 = ::Reflex::ReferenceBuilder(type_351c);
  ::Reflex::Type type_8120 = ::Reflex::ReferenceBuilder(type_351);
  ::Reflex::Type type_2360 = ::Reflex::PointerBuilder(type_1030);
  ::Reflex::Type type_2362 = ::Reflex::PointerBuilder(type_1030c);
  ::Reflex::Type type_1530c = ::Reflex::ConstBuilder(type_1530);
  ::Reflex::Type type_8147 = ::Reflex::ReferenceBuilder(type_1530c);
  ::Reflex::Type type_408c = ::Reflex::ConstBuilder(type_408);
  ::Reflex::Type type_8148 = ::Reflex::ReferenceBuilder(type_408c);
  ::Reflex::Type type_8149 = ::Reflex::ReferenceBuilder(type_408);
  ::Reflex::Type type_2538 = ::Reflex::PointerBuilder(type_1003);
  ::Reflex::Type type_2540 = ::Reflex::PointerBuilder(type_1003c);
  ::Reflex::Type type_1529c = ::Reflex::ConstBuilder(type_1529);
  ::Reflex::Type type_8164 = ::Reflex::ReferenceBuilder(type_1529c);
  ::Reflex::Type type_491c = ::Reflex::ConstBuilder(type_491);
  ::Reflex::Type type_8165 = ::Reflex::ReferenceBuilder(type_491c);
  ::Reflex::Type type_8166 = ::Reflex::ReferenceBuilder(type_491);
  ::Reflex::Type type_2622 = ::Reflex::PointerBuilder(type_448);
  ::Reflex::Type type_2624 = ::Reflex::PointerBuilder(type_448c);
  ::Reflex::Type type_1536c = ::Reflex::ConstBuilder(type_1536);
  ::Reflex::Type type_8170 = ::Reflex::ReferenceBuilder(type_1536c);
  ::Reflex::Type type_544c = ::Reflex::ConstBuilder(type_544);
  ::Reflex::Type type_8171 = ::Reflex::ReferenceBuilder(type_544c);
  ::Reflex::Type type_8172 = ::Reflex::ReferenceBuilder(type_544);
  ::Reflex::Type type_2769 = ::Reflex::PointerBuilder(type_1023);
  ::Reflex::Type type_2771 = ::Reflex::PointerBuilder(type_1023c);
  ::Reflex::Type type_1548c = ::Reflex::ConstBuilder(type_1548);
  ::Reflex::Type type_8211 = ::Reflex::ReferenceBuilder(type_1548c);
  ::Reflex::Type type_647c = ::Reflex::ConstBuilder(type_647);
  ::Reflex::Type type_8212 = ::Reflex::ReferenceBuilder(type_647c);
  ::Reflex::Type type_8213 = ::Reflex::ReferenceBuilder(type_647);
  ::Reflex::Type type_728c = ::Reflex::ConstBuilder(type_728);
  ::Reflex::Type type_4258 = ::Reflex::ReferenceBuilder(type_728c);
  ::Reflex::Type type_4256 = ::Reflex::ReferenceBuilder(type_728);
  ::Reflex::Type type_4383 = ::Reflex::PointerBuilder(type_446c);
  ::Reflex::Type type_1943 = ::Reflex::PointerBuilder(type_446);
  ::Reflex::Type type_2925 = ::Reflex::PointerBuilder(type_429);
  ::Reflex::Type type_2927 = ::Reflex::PointerBuilder(type_429c);
  ::Reflex::Type type_1547c = ::Reflex::ConstBuilder(type_1547);
  ::Reflex::Type type_8237 = ::Reflex::ReferenceBuilder(type_1547c);
  ::Reflex::Type type_841c = ::Reflex::ConstBuilder(type_841);
  ::Reflex::Type type_8238 = ::Reflex::ReferenceBuilder(type_841c);
  ::Reflex::Type type_8239 = ::Reflex::ReferenceBuilder(type_841);
  ::Reflex::Type type_3185 = ::Reflex::PointerBuilder(type_1372);
  ::Reflex::Type type_1372c = ::Reflex::ConstBuilder(type_1372);
  ::Reflex::Type type_3187 = ::Reflex::PointerBuilder(type_1372c);
  ::Reflex::Type type_3189 = ::Reflex::ReferenceBuilder(type_1372);
  ::Reflex::Type type_3191 = ::Reflex::ReferenceBuilder(type_1372c);
  ::Reflex::Type type_1532c = ::Reflex::ConstBuilder(type_1532);
  ::Reflex::Type type_8256 = ::Reflex::ReferenceBuilder(type_1532c);
  ::Reflex::Type type_1052c = ::Reflex::ConstBuilder(type_1052);
  ::Reflex::Type type_8257 = ::Reflex::ReferenceBuilder(type_1052c);
  ::Reflex::Type type_8258 = ::Reflex::ReferenceBuilder(type_1052);
  ::Reflex::Type type_4449 = ::Reflex::ReferenceBuilder(type_31);
  ::Reflex::Type type_3501 = ::Reflex::PointerBuilder(type_1106);
  ::Reflex::Type type_3503 = ::Reflex::PointerBuilder(type_1106c);
  ::Reflex::Type type_1537c = ::Reflex::ConstBuilder(type_1537);
  ::Reflex::Type type_8340 = ::Reflex::ReferenceBuilder(type_1537c);
  ::Reflex::Type type_1189c = ::Reflex::ConstBuilder(type_1189);
  ::Reflex::Type type_8341 = ::Reflex::ReferenceBuilder(type_1189c);
  ::Reflex::Type type_8342 = ::Reflex::ReferenceBuilder(type_1189);
  ::Reflex::Type type_3574 = ::Reflex::PointerBuilder(type_7);
  ::Reflex::Type type_3576 = ::Reflex::PointerBuilder(type_7c);
  ::Reflex::Type type_1544c = ::Reflex::ConstBuilder(type_1544);
  ::Reflex::Type type_8361 = ::Reflex::ReferenceBuilder(type_1544c);
  ::Reflex::Type type_1195c = ::Reflex::ConstBuilder(type_1195);
  ::Reflex::Type type_8362 = ::Reflex::ReferenceBuilder(type_1195c);
  ::Reflex::Type type_8363 = ::Reflex::ReferenceBuilder(type_1195);
  ::Reflex::Type type_5164 = ::Reflex::PointerBuilder(type_1379);
  ::Reflex::Type type_1379c = ::Reflex::ConstBuilder(type_1379);
  ::Reflex::Type type_5166 = ::Reflex::PointerBuilder(type_1379c);
  ::Reflex::Type type_5168 = ::Reflex::ReferenceBuilder(type_1379);
  ::Reflex::Type type_5170 = ::Reflex::ReferenceBuilder(type_1379c);
  ::Reflex::Type type_1542c = ::Reflex::ConstBuilder(type_1542);
  ::Reflex::Type type_8545 = ::Reflex::ReferenceBuilder(type_1542c);
  ::Reflex::Type type_1630c = ::Reflex::ConstBuilder(type_1630);
  ::Reflex::Type type_8735 = ::Reflex::ReferenceBuilder(type_1630c);
  ::Reflex::Type type_8736 = ::Reflex::ReferenceBuilder(type_1630);
  ::Reflex::Type type_8737 = ::Reflex::ReferenceBuilder(type_23);
  ::Reflex::Type type_23c = ::Reflex::ConstBuilder(type_23);
  ::Reflex::Type type_8738 = ::Reflex::ReferenceBuilder(type_23c);
  ::Reflex::Type type_1630f = ::Reflex::TypedefTypeBuilder(Reflex::Literal("std::map<std::string, uint64_t>"), type_1630);
} // unnamed namespace

#ifndef __CINT__

// Shadow classes to obtain the data member offsets 
namespace __shadow__ {
#ifdef __KITAMcParticle
#undef __KITAMcParticle
#endif
class __KITAMcParticle : public ::KITAObject {
  public:
  __KITAMcParticle();
  int idx;
  int pid;
  int status;
  int mother1;
  int mother2;
  int daug1;
  int daug2;
  float ch;
};
#ifdef __KITAJet_PFlowVars
#undef __KITAJet_PFlowVars
#endif
struct __KITAJet_PFlowVars {
  public:
  __KITAJet_PFlowVars();
  float ChHadronEnergy;
  float NHadronEnergy;
  float PhEnergy;
  float EleEnergy;
  float MuEnergy;
  float HFHadronEnergy;
  float HFEmEnergy;
  int ChHadronMult;
  int NHadronMult;
  int PhMult;
  int EleMult;
  int MuMult;
  int HFHadronMult;
  int HFEmMult;
};
#ifdef __KITADataCleaning
#undef __KITADataCleaning
#endif
class __KITADataCleaning {
  public:
  __KITADataCleaning();
  bool filteredByHBHENoiseFilter;
};
#ifdef __KITAObject
#undef __KITAObject
#endif
class __KITAObject {
  public:
  __KITAObject();
  ::KITA4Vector vec;
};
#ifdef __KITAGenJet
#undef __KITAGenJet
#endif
class __KITAGenJet : public ::KITAObject {
  public:
  __KITAGenJet();
};
#ifdef __KITAMuon
#undef __KITAMuon
#endif
class __KITAMuon : public ::KITAObject {
  public:
  __KITAMuon();
  int charge;
  ::KITA4Vector genVec;
  int genLeptonCharge;
  bool isGlobalMuonPromptTight;
  bool isGlobalMuon;
  bool isStandAloneMuon;
  bool isTrackerMuon;
  bool isCaloMuon;
  float pf_iso_particle;
  float pf_iso_neutrals;
  float pf_iso_charged;
  float pf_iso_photon;
  float NoOfHits;
  float NoOfLostHits;
  float redChi2;
  float d0;
  float d0Error;
  float trackerNoOfHits;
  float trackerNoOfLostHits;
  float trackerChi2;
  float trackerd0;
  float trackerd0Error;
  float trackerPt;
  float trSaNoOfHits;
  float trSaChi2;
  int NoOfMatches;
  int trackerNoOfValidTrackerHits;
  int trackerNoOfValidPixelHits;
  int trackerNoOfValidStripHits;
  int trackerNoOfValidMuonHits;
  int NoOfValidTrackerHits;
  int NoOfValidPixelHits;
  int NoOfValidStripHits;
  int NoOfValidMuonHits;
  int PixelLayersWithMeasurements;
  int trackerPixelLayersWithMeasurements;
  float dxyPV;
  float dxyBSp;
  float dB;
  float dBSig;
  float IPPV;
  float IPPVErr;
  float IPPVSig;
  float trackerIPPV;
  float trackerIPPVErr;
  float trackerIPPVSig;
  float IP3DPV;
  float IP3DPVErr;
  float IP3DPVSig;
  float trackerIP3DPV;
  float trackerIP3DPVErr;
  float trackerIP3DPVSig;
  float GMvtxX;
  float GMvtxY;
  float GMvtxZ;
  float vtxX;
  float vtxY;
  float vtxZ;
  float distGlobalMuVtxPV;
  float distMuVtxPV;
  float distGlobalMuVtxBSp;
  float distMuVtxBSp;
  ::std::vector<int> trigMatchFilterIdxs;
  ::std::vector<ROOT::Math::PxPyPzE4D<float> > trigMatchVecs;
  int numberOfChambers;
  int jet_index;
};
#ifdef __KITAPFMet
#undef __KITAPFMet
#endif
class __KITAPFMet {
  public:
  __KITAPFMet();
  ::KITA4Vector vec;
  float ucorrPt_full;
  float ucorrPhi_full;
  float ucorrPt_JES;
  float ucorrPhi_JES;
  float ucorrPt_Mu;
  float ucorrPhi_Mu;
  double sumEt;
  double METsig;
  double NeutralEMEtFraction;
  double NeutralEMEt;
  double NeutralHadEtFraction;
  double NeutralHadEt;
  double ChargedEMEtFraction;
  double ChargedEMEt;
  double ChargedHadEtFraction;
  double ChargedHadEt;
  double MuonEtFraction;
  double MuonEt;
  double Type6EtFraction;
  double Type6Et;
  double Type7EtFraction;
  double Type7Et;
};
#ifdef __KITAGenFlavor
#undef __KITAGenFlavor
#endif
class __KITAGenFlavor {
  public:
  __KITAGenFlavor();
  int path;
  int decay;
};
#ifdef __KITAGenParticle
#undef __KITAGenParticle
#endif
class __KITAGenParticle : public ::KITAObject {
  public:
  __KITAGenParticle();
  int pid;
  int MoID;
  float Charge;
  int Tau_decay;
};
#ifdef __KITAMisc
#undef __KITAMisc
#endif
class __KITAMisc {
  public:
  __KITAMisc();
  int nRun;
  int nEvent;
  int luminosityBlock;
  int storeNumber;
  int bunchCrossing;
  int orbitNumber;
  bool isRealData;
  float BSpX;
  float BSpY;
  float BSpZ;
  ::std::map<int,float> rhos;
  bool filteredByScraping;
};
#ifdef __KITAJet_CaloVars
#undef __KITAJet_CaloVars
#endif
struct __KITAJet_CaloVars {
  public:
  __KITAJet_CaloVars();
  float emFrac;
  float fHPD;
  float fRBX;
  int n90Hits;
  float fSubDetector1;
  float fSubDetector2;
  float fSubDetector3;
  float fSubDetector4;
  float restrictedEMF;
  int nHCALTowers;
  int nECALTowers;
  float approximatefHPD;
  float approximatefRBX;
  int hitsInN90;
  int numberOfHits2RPC;
  int numberOfHits3RPC;
  int numberOfHitsRPC;
};
#ifdef __KITAMet
#undef __KITAMet
#endif
class __KITAMet {
  public:
  __KITAMet();
  ::KITA4Vector vec;
  float ucorrPt_full;
  float ucorrPhi_full;
  float ucorrPt_JES;
  float ucorrPhi_JES;
  float ucorrPt_Mu;
  float ucorrPhi_Mu;
  double sumEt;
  double METsig;
};
#ifdef __KITATopJet
#undef __KITATopJet
#endif
class __KITATopJet {
  public:
  __KITATopJet();
  ::KITAJet fat_jet;
  ::std::vector<ROOT::Math::PxPyPzE4D<float> > subjets;
};
#ifdef __KITAGenWFlavor
#undef __KITAGenWFlavor
#endif
class __KITAGenWFlavor {
  public:
  __KITAGenWFlavor();
  int nChains_;
  ::std::vector<int> pdgId_;
  ::std::vector<int> flavorSource_;
  ::std::vector<float> pt_;
  ::std::vector<float> eta_;
  ::std::vector<float> phi_;
  ::std::vector<float> energy_;
  ::std::vector<int> length2_;
  ::std::vector<int> length3_;
  ::std::vector<int> nParents_;
  int nParentsGlobal_;
  ::std::vector<int> parentsPdgId_;
  int nSistersGlobal_;
  ::std::vector<int> nSisters_;
  ::std::vector<int> sisters_;
  unsigned int processId_;
  int pdfIdFirst_;
  int pdfIdSecond_;
  float xFirst_;
  float xSecond_;
  float ptFirst_;
  float etaFirst_;
  float phiFirst_;
  float energyFirst_;
  float ptSecond_;
  float etaSecond_;
  float phiSecond_;
  float energySecond_;
  int nLight_;
  ::std::vector<int> pdgIdLight_;
  ::std::vector<float> ptLight_;
  ::std::vector<float> etaLight_;
  ::std::vector<float> phiLight_;
  ::std::vector<float> energyLight_;
  int nJets;
  ::std::vector<float> ptJet_;
  ::std::vector<float> etaJet_;
  ::std::vector<float> phiJet_;
  ::std::vector<float> energyJet_;
};
#ifdef __KITAJet_svBTagInfos
#undef __KITAJet_svBTagInfos
#endif
struct __KITAJet_svBTagInfos {
  public:
  __KITAJet_svBTagInfos();
  int svt_nSelectedTracks;
  int svt_nVertexTracks;
  int svt_nVertices;
  int svt_nVertexCandidates;
  int svt_vertexType;
  int svt_isValid;
  int svt_isFake;
  int svt_hasRefittedTracks;
  float svt_vertexMass;
  float svt_vertexPt;
  double svt_chi2;
  double svt_ndof;
  double svt_normalizedChi2;
  double svt_x;
  double svt_y;
  double svt_z;
  double svt_xError;
  double svt_yError;
  double svt_zError;
};
#ifdef __KITASemiSols
#undef __KITASemiSols
#endif
class __KITASemiSols {
  public:
  __KITASemiSols();
  int IndMcBest;
  int IndSimpleBest;
  int IndLRBest;
  int ChangeWq;
  ::std::vector<KITASemiSol> Sols;
};
#ifdef __KITASemiSol
#undef __KITASemiSol
#endif
class __KITASemiSol {
  public:
  __KITASemiSol();
  int IndMuon;
  int IndHadP;
  int IndHadQ;
  int IndHadB;
  int IndLepB;
  float MtRec;
  float MwRec;
  float FitProb;
  float MtFit;
  float MwFit;
  float SigLRVal;
  float SigLRProb;
  float JetCombLRVal;
  float JetCombLRProb;
  ::std::vector<float> SigLRVar;
  ::std::vector<float> JetCombLRVar;
};
#ifdef __KITAPrimaryVertex
#undef __KITAPrimaryVertex
#endif
class __KITAPrimaryVertex {
  public:
  __KITAPrimaryVertex();
  float x;
  float y;
  float z;
  int ntracks;
  bool isFake;
  float ndof;
  float redChi2;
  float rho;
  float phi;
  float distBSp;
};
#ifdef __KITAGenJetWithSubjets
#undef __KITAGenJetWithSubjets
#endif
class __KITAGenJetWithSubjets {
  public:
  __KITAGenJetWithSubjets();
  ::KITAGenJet fat_jet;
  ::std::vector<KITAGenJet> subjets;
};
#ifdef __KITAJet
#undef __KITAJet
#endif
class __KITAJet : public ::KITAObject {
  public:
  __KITAJet();
  int partonFlav;
  ::KITA4Vector partonVec;
  ::KITA4Vector genJetVec;
  float btag_simpleSVHE;
  float btag_simpleSVHP;
  float btag_combSV;
  float btag_combSVMVA;
  float btag_trkcntHE;
  float btag_trkcntHP;
  float btag_softele;
  float btag_softmuon;
  ::std::map<int,float> jec_factors;
  float jetCharge;
  int nTracks;
  float area;
  float pileup_energy;
  ::std::vector<KITAJet_CaloVars> calovars;
  ::std::vector<KITAJet_PFlowVars> pflowvars;
  ::std::vector<KITAJet_TrackbTagInfos> btagtrackinfos;
  ::std::vector<KITAJet_svBTagInfos> btagsvtaginfos;
};
#ifdef __KITAJetWithSubjets
#undef __KITAJetWithSubjets
#endif
class __KITAJetWithSubjets {
  public:
  __KITAJetWithSubjets();
  ::KITAJet fat_jet;
  ::std::vector<KITAJet> subjets;
};
#ifdef __KITAHlt
#undef __KITAHlt
#endif
class __KITAHlt {
  public:
  __KITAHlt();
  ::std::map<std::basic_string<char>,unsigned long> triggerInfos;
  ::std::map<int,std::vector<KITAHlt::KITATriggerObject> > triggerObjects;
};
#ifdef __KITAElectron
#undef __KITAElectron
#endif
class __KITAElectron : public ::KITAObject {
  public:
  __KITAElectron();
  int charge;
  ::KITA4Vector genVec;
  int genLeptonCharge;
  float vtxX;
  float vtxY;
  float vtxZ;
  int category;
  int myClass;
  float fBremMode;
  float caloEnergy;
  float ptIn;
  float ptCalo;
  float ptOut;
  float eOverPIn;
  float eOverPScOut;
  float dEtaIn;
  float dEtaOut;
  float dPhiIn;
  float dPhiOut;
  float hadOverEm;
  float errorECalo;
  float errorPTrack;
  float pf_iso_particle;
  float pf_iso_neutrals;
  float pf_iso_charged;
  float pf_iso_photon;
  float electronIdLoose;
  float electronIdRobustHE;
  float electronIdRobustLoose;
  float electronIdRobustTight;
  float electronIdTight;
  float trNoOfHits;
  float trNoOfLostHits;
  float trChi2;
  float d0;
  float d0Error;
  int trNoOfValidPxHits;
  int trNoOfECL_Inner;
  float dB;
  float dxyPV;
  float dxyBSp;
  float IPPV;
  float IPPVErr;
  float IPPVSig;
  float IP3DPV;
  float IP3DPVErr;
  float IP3DPVSig;
  float distEleVtxPV;
  float distEleVtxBSp;
  float sclE;
  float sclEt;
  float sclEta;
  float sclPhi;
  double dist;
  double dcot;
  double radiusOfConversion;
  int conv_flag;
  double sclphiwidth;
  double scletawidth;
  double trackp;
  double trackpt;
  double trackpx;
  double trackpy;
  double trackpz;
  double trackphi;
  double tracketa;
  double trackouterp;
  double trackouterpt;
  double trackoutereta;
  double trackouterphi;
  bool isEcaldriven;
  bool isTrackerdriven;
  float eSuperClusterOverP;
  float eSeedClusterOverP;
  float eSeedClusterOverPout;
  float eEleClusterOverPout;
  float deltaEtaSuperClusterAtVtx;
  float deltaEtaSeedClusterAtCalo;
  float deltaEtaEleClusterAtCalo;
  float deltaPhiEleClusterAtCalo;
  float deltaPhiSuperClusterAtVtx;
  float deltaPhiSeedClusterAtCalo;
  ::KITAElectron::point trackPositionAtVtx;
  ::KITAElectron::point trackPositionAtCalo;
  ::KITAElectron::vector trackMomentumAtVtx;
  ::KITAElectron::vector trackMomentumAtCalo;
  ::KITAElectron::vector trackMomentumOut;
  ::KITAElectron::vector trackMomentumAtEleClus;
  ::KITAElectron::vector trackMomentumAtVtxWithConstraint;
  bool isEB;
  bool isEE;
  bool isGap;
  float sigmaEtaEta;
  float sigmaIetaIeta;
  float e1x5;
  float e2x5Max;
  float e5x5;
  float hcalDepth1OverEcal;
  float hcalDepth2OverEcal;
  int BCsize;
  int jet_index;
};
#ifdef __KITAJet_TrackbTagInfos
#undef __KITAJet_TrackbTagInfos
#endif
struct __KITAJet_TrackbTagInfos {
  public:
  __KITAJet_TrackbTagInfos();
  float ip_trackMomentum;
  float ip_trackEta;
  float ip_trackEtaRel;
  float ip_trackPtRel;
  float ip_trackPPar;
  float ip_trackDeltaR;
  float ip_trackPtRatio;
  float ip_trackPParRatio;
  float ip_trackSip3dVal;
  float ip_trackSip3dSig;
  float ip_trackSip2dVal;
  float ip_trackSip2dSig;
  float ip_trackDecayLenVal;
  float ip_trackJetDistVal;
  float ip_trackJetDistSig;
  float ip_trackGhostTrackDistVal;
  float ip_trackGhostTrackDistSig;
  float ip_trackGhostTrackWeight;
  float ip_trackChi2;
  float ip_trackNTotalHits;
  float ip_trackNPixelHits;
};
#ifdef __std__vector_KITAPrimaryVertex_
#undef __std__vector_KITAPrimaryVertex_
#endif
class __std__vector_KITAPrimaryVertex_ : protected ::std::_Vector_base<KITAPrimaryVertex,std::allocator<KITAPrimaryVertex> > {
  public:
  __std__vector_KITAPrimaryVertex_();
};
#ifdef __KITAGenSingleTopEvent
#undef __KITAGenSingleTopEvent
#endif
class __KITAGenSingleTopEvent {
  public:
  __KITAGenSingleTopEvent();
  ::KITAGenParticle q1;
  ::KITAGenParticle q2;
  ::KITAGenParticle secb;
  ::KITAGenParticle top;
  ::KITAGenParticle Wtop;
  ::KITAGenParticle btop;
  ::KITAGenParticle lep;
  ::KITAGenParticle nu;
  int DecChan;
  int procID;
  int mcLepID;
  int btop_id;
  int secb_id;
  double eventWeight;
  double QLep_gen;
};
#ifdef __KITAGenTopEvent
#undef __KITAGenTopEvent
#endif
class __KITAGenTopEvent {
  public:
  __KITAGenTopEvent();
  ::std::vector<KITAGenParticle> quarks;
  ::std::vector<KITAGenParticle> leptons;
  ::std::vector<KITAGenParticle> neutrinos;
  ::std::vector<KITAGenParticle> tops;
  ::std::vector<KITAGenParticle> ws;
  ::std::vector<KITAGenParticle> initialpartons;
  ::std::vector<KITAGenParticle> topbottoms;
  ::std::vector<KITAGenParticle> higgs;
  ::std::vector<KITAGenParticle> higgsbottoms;
  ::std::vector<KITAGenParticle> otherbottoms;
  int DecChan;
  int ProdProc;
};
#ifdef __KITAGenMet
#undef __KITAGenMet
#endif
class __KITAGenMet : public ::KITAObject {
  public:
  __KITAGenMet();
};
#ifdef __KITAGenInfo
#undef __KITAGenInfo
#endif
class __KITAGenInfo {
  public:
  __KITAGenInfo();
  ::std::vector<double> binningValues;
  ::std::vector<double> weights;
  int id1;
  int id2;
  float x1;
  float x2;
  float scale;
  float pdf1;
  float pdf2;
  int pileup_intime;
  int pileup_ootbefore;
  int pileup_ootafter;
  float poisson_mean;
};
#ifdef __KITAGenTprime
#undef __KITAGenTprime
#endif
class __KITAGenTprime {
  public:
  __KITAGenTprime();
  ::KITA4Vector p4Parton1_gen;
  ::KITA4Vector p4Parton2_gen;
  ::KITA4Vector p4Top_lep_gen;
  ::KITA4Vector p4Top_had_gen;
  ::KITA4Vector p4Lep_gen;
  ::KITA4Vector p4Nu_gen;
  ::KITA4Vector p4W_lep_gen;
  ::KITA4Vector p4B_lep_gen;
  ::KITA4Vector p4Q1_had_gen;
  ::KITA4Vector p4Q2_had_gen;
  ::KITA4Vector p4W_had_gen;
  ::KITA4Vector p4B_had_gen;
  int QLep_gen;
  int ProdProc;
  int DecChan;
  int mc_LepID;
  int Q1id;
  int Q2id;
  int ptype[2];
};
#ifdef __KITAHlt__KITATriggerObject
#undef __KITAHlt__KITATriggerObject
#endif
struct __KITAHlt__KITATriggerObject {
  public:
  __KITAHlt__KITATriggerObject();
  ::KITA4Vector vec;
};
#ifdef __std__vector_KITAHlt__KITATriggerObject_
#undef __std__vector_KITAHlt__KITATriggerObject_
#endif
class __std__vector_KITAHlt__KITATriggerObject_ : protected ::std::_Vector_base<KITAHlt::KITATriggerObject,std::allocator<KITAHlt::KITATriggerObject> > {
  public:
  __std__vector_KITAHlt__KITATriggerObject_();
};
#ifdef __std__vector_KITAJet_TrackbTagInfos_
#undef __std__vector_KITAJet_TrackbTagInfos_
#endif
class __std__vector_KITAJet_TrackbTagInfos_ : protected ::std::_Vector_base<KITAJet_TrackbTagInfos,std::allocator<KITAJet_TrackbTagInfos> > {
  public:
  __std__vector_KITAJet_TrackbTagInfos_();
};
#ifdef __std__vector_KITAJet_svBTagInfos_
#undef __std__vector_KITAJet_svBTagInfos_
#endif
class __std__vector_KITAJet_svBTagInfos_ : protected ::std::_Vector_base<KITAJet_svBTagInfos,std::allocator<KITAJet_svBTagInfos> > {
  public:
  __std__vector_KITAJet_svBTagInfos_();
};
#ifdef __std__vector_KITAJet_CaloVars_
#undef __std__vector_KITAJet_CaloVars_
#endif
class __std__vector_KITAJet_CaloVars_ : protected ::std::_Vector_base<KITAJet_CaloVars,std::allocator<KITAJet_CaloVars> > {
  public:
  __std__vector_KITAJet_CaloVars_();
};
#ifdef __std__vector_KITAJet_PFlowVars_
#undef __std__vector_KITAJet_PFlowVars_
#endif
class __std__vector_KITAJet_PFlowVars_ : protected ::std::_Vector_base<KITAJet_PFlowVars,std::allocator<KITAJet_PFlowVars> > {
  public:
  __std__vector_KITAJet_PFlowVars_();
};
#ifdef __std__map_int_std__vector_KITAHlt__KITATriggerObject_s_
#undef __std__map_int_std__vector_KITAHlt__KITATriggerObject_s_
#endif
class __std__map_int_std__vector_KITAHlt__KITATriggerObject_s_ {
  public:
  __std__map_int_std__vector_KITAHlt__KITATriggerObject_s_();
  ::std::_Rb_tree<int,std::pair<const int,std::vector<KITAHlt::KITATriggerObject> >,std::_Select1st<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >,std::less<int>,std::allocator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > > > _M_t;
};
#ifdef __std__map_int_float_
#undef __std__map_int_float_
#endif
class __std__map_int_float_ {
  public:
  __std__map_int_float_();
  ::std::_Rb_tree<int,std::pair<const int,float>,std::_Select1st<std::pair<const int,float> >,std::less<int>,std::allocator<std::pair<const int,float> > > _M_t;
};
#ifdef __KITAMuon__point
#undef __KITAMuon__point
#endif
struct __KITAMuon__point {
  public:
  __KITAMuon__point();
  float x;
  float y;
  float z;
};
#ifdef __KITAElectron__point
#undef __KITAElectron__point
#endif
struct __KITAElectron__point {
  public:
  __KITAElectron__point();
  float x;
  float y;
  float z;
};
#ifdef __KITAElectron__vector
#undef __KITAElectron__vector
#endif
struct __KITAElectron__vector {
  public:
  __KITAElectron__vector();
  float x;
  float y;
  float z;
};
#ifdef __std__vector_KITATopJet_
#undef __std__vector_KITATopJet_
#endif
class __std__vector_KITATopJet_ : protected ::std::_Vector_base<KITATopJet,std::allocator<KITATopJet> > {
  public:
  __std__vector_KITATopJet_();
};
#ifdef __std__map_std__basic_string_char__float_
#undef __std__map_std__basic_string_char__float_
#endif
class __std__map_std__basic_string_char__float_ {
  public:
  __std__map_std__basic_string_char__float_();
  ::std::_Rb_tree<std::basic_string<char>,std::pair<const std::basic_string<char>,float>,std::_Select1st<std::pair<const std::basic_string<char>,float> >,std::less<std::basic_string<char> >,std::allocator<std::pair<const std::basic_string<char>,float> > > _M_t;
};
#ifdef __std__vector_KITAGenParticle_
#undef __std__vector_KITAGenParticle_
#endif
class __std__vector_KITAGenParticle_ : protected ::std::_Vector_base<KITAGenParticle,std::allocator<KITAGenParticle> > {
  public:
  __std__vector_KITAGenParticle_();
};
#ifdef __std__vector_KITAJetWithSubjets_
#undef __std__vector_KITAJetWithSubjets_
#endif
class __std__vector_KITAJetWithSubjets_ : protected ::std::_Vector_base<KITAJetWithSubjets,std::allocator<KITAJetWithSubjets> > {
  public:
  __std__vector_KITAJetWithSubjets_();
};
#ifdef __std__vector_KITAGenJetWithSubjets_
#undef __std__vector_KITAGenJetWithSubjets_
#endif
class __std__vector_KITAGenJetWithSubjets_ : protected ::std::_Vector_base<KITAGenJetWithSubjets,std::allocator<KITAGenJetWithSubjets> > {
  public:
  __std__vector_KITAGenJetWithSubjets_();
};
#ifdef __std__vector_KITAMuon_
#undef __std__vector_KITAMuon_
#endif
class __std__vector_KITAMuon_ : protected ::std::_Vector_base<KITAMuon,std::allocator<KITAMuon> > {
  public:
  __std__vector_KITAMuon_();
};
#ifdef __std__vector_KITAJet_
#undef __std__vector_KITAJet_
#endif
class __std__vector_KITAJet_ : protected ::std::_Vector_base<KITAJet,std::allocator<KITAJet> > {
  public:
  __std__vector_KITAJet_();
};
#ifdef __ROOT__Math__PxPyPzE4D_float_
#undef __ROOT__Math__PxPyPzE4D_float_
#endif
class __ROOT__Math__PxPyPzE4D_float_ {
  public:
  __ROOT__Math__PxPyPzE4D_float_();
  float fX;
  float fY;
  float fZ;
  float fT;
};
#ifdef __std__vector_KITAGenJet_
#undef __std__vector_KITAGenJet_
#endif
class __std__vector_KITAGenJet_ : protected ::std::_Vector_base<KITAGenJet,std::allocator<KITAGenJet> > {
  public:
  __std__vector_KITAGenJet_();
};
#ifdef __std__map_std__basic_string_char__int_
#undef __std__map_std__basic_string_char__int_
#endif
class __std__map_std__basic_string_char__int_ {
  public:
  __std__map_std__basic_string_char__int_();
  ::std::_Rb_tree<std::basic_string<char>,std::pair<const std::basic_string<char>,int>,std::_Select1st<std::pair<const std::basic_string<char>,int> >,std::less<std::basic_string<char> >,std::allocator<std::pair<const std::basic_string<char>,int> > > _M_t;
};
#ifdef __std__vector_KITAElectron_
#undef __std__vector_KITAElectron_
#endif
class __std__vector_KITAElectron_ : protected ::std::_Vector_base<KITAElectron,std::allocator<KITAElectron> > {
  public:
  __std__vector_KITAElectron_();
};
#ifdef __std__vector_KITAMcParticle_
#undef __std__vector_KITAMcParticle_
#endif
class __std__vector_KITAMcParticle_ : protected ::std::_Vector_base<KITAMcParticle,std::allocator<KITAMcParticle> > {
  public:
  __std__vector_KITAMcParticle_();
};
#ifdef __std__map_std__basic_string_char__unsignedslong_
#undef __std__map_std__basic_string_char__unsignedslong_
#endif
class __std__map_std__basic_string_char__unsignedslong_ {
  public:
  __std__map_std__basic_string_char__unsignedslong_();
  ::std::_Rb_tree<std::basic_string<char>,std::pair<const std::basic_string<char>,unsigned long>,std::_Select1st<std::pair<const std::basic_string<char>,unsigned long> >,std::less<std::basic_string<char> >,std::allocator<std::pair<const std::basic_string<char>,unsigned long> > > _M_t;
};
}


#endif // __CINT__
namespace {
//------Stub functions for class KITAMcParticle -------------------------------
static void destructor_1858(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAMcParticle*)o)->::KITAMcParticle::~KITAMcParticle)();
}
static  void operator_1859( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAMcParticle*)o)->operator=)(*(const ::KITAMcParticle*)arg[0]);
  else   (((::KITAMcParticle*)o)->operator=)(*(const ::KITAMcParticle*)arg[0]);
}

static void constructor_1860( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMcParticle(*(const ::KITAMcParticle*)arg[0]);
  else ::new(mem) ::KITAMcParticle(*(const ::KITAMcParticle*)arg[0]);
}

static void constructor_1861( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMcParticle();
  else ::new(mem) ::KITAMcParticle();
}

static void constructor_1862( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMcParticle(*(::KITA4Vector*)arg[0],
      *(int*)arg[1],
      *(int*)arg[2],
      *(int*)arg[3],
      *(int*)arg[4],
      *(int*)arg[5],
      *(int*)arg[6],
      *(int*)arg[7],
      *(float*)arg[8]);
  else ::new(mem) ::KITAMcParticle(*(::KITA4Vector*)arg[0],
      *(int*)arg[1],
      *(int*)arg[2],
      *(int*)arg[3],
      *(int*)arg[4],
      *(int*)arg[5],
      *(int*)arg[6],
      *(int*)arg[7],
      *(float*)arg[8]);
}

static void constructor_1863( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMcParticle(*(float*)arg[0],
      *(float*)arg[1],
      *(float*)arg[2],
      *(float*)arg[3],
      *(int*)arg[4],
      *(int*)arg[5],
      *(int*)arg[6],
      *(int*)arg[7],
      *(int*)arg[8],
      *(int*)arg[9],
      *(int*)arg[10],
      *(float*)arg[11]);
  else ::new(mem) ::KITAMcParticle(*(float*)arg[0],
      *(float*)arg[1],
      *(float*)arg[2],
      *(float*)arg[3],
      *(int*)arg[4],
      *(int*)arg[5],
      *(int*)arg[6],
      *(int*)arg[7],
      *(int*)arg[8],
      *(int*)arg[9],
      *(int*)arg[10],
      *(float*)arg[11]);
}

static void method_newdel_7( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAMcParticle >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAMcParticle >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAMcParticle >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAMcParticle >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAMcParticle >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x1( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("KITAObject")), ::Reflex::BaseOffset< ::KITAMcParticle,::KITAObject >::Get(),::Reflex::PUBLIC), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

//------Dictionary for class KITAMcParticle -------------------------------
void __KITAMcParticle_db_datamem(Reflex::Class*);
void __KITAMcParticle_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAMcParticle_datamem_bld(&__KITAMcParticle_db_datamem);
Reflex::GenreflexMemberBuilder __KITAMcParticle_funcmem_bld(&__KITAMcParticle_db_funcmem);
void __KITAMcParticle_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAMcParticle"), typeid(::KITAMcParticle), sizeof(::KITAMcParticle), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAMcParticle*")
  .AddBase(type_367, ::Reflex::BaseOffset< ::KITAMcParticle, ::KITAObject >::Get(), ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAMcParticle"), destructor_1858, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3578, type_3580), Reflex::Literal("operator="), operator_1859, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_3580), Reflex::Literal("KITAMcParticle"), constructor_1860, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAMcParticle"), constructor_1861, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_729, type_31, type_31, type_31, type_31, type_31, type_31, type_31, type_446), Reflex::Literal("KITAMcParticle"), constructor_1862, 0, "vec1;idx1;pid1;status1;mo1;mo2;d1;d2;ch1", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_446, type_446, type_446, type_446, type_31, type_31, type_31, type_31, type_31, type_31, type_31, type_446), Reflex::Literal("KITAMcParticle"), constructor_1863, 0, "px;py;pz;e;idx1;pid1;status1;mo1;mo2;d1;d2;ch1", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_7, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x1, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAMcParticle_datamem_bld);
}

//------Delayed data member builder for class KITAMcParticle -------------------
void __KITAMcParticle_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("idx"), OffsetOf(__shadow__::__KITAMcParticle, idx), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("pid"), OffsetOf(__shadow__::__KITAMcParticle, pid), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("status"), OffsetOf(__shadow__::__KITAMcParticle, status), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("mother1"), OffsetOf(__shadow__::__KITAMcParticle, mother1), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("mother2"), OffsetOf(__shadow__::__KITAMcParticle, mother2), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("daug1"), OffsetOf(__shadow__::__KITAMcParticle, daug1), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("daug2"), OffsetOf(__shadow__::__KITAMcParticle, daug2), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ch"), OffsetOf(__shadow__::__KITAMcParticle, ch), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAMcParticle -------------------
void __KITAMcParticle_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAJet_PFlowVars -------------------------------
static void destructor_1928(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAJet_PFlowVars*)o)->::KITAJet_PFlowVars::~KITAJet_PFlowVars)();
}
static  void operator_1929( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAJet_PFlowVars*)o)->operator=)(*(const ::KITAJet_PFlowVars*)arg[0]);
  else   (((::KITAJet_PFlowVars*)o)->operator=)(*(const ::KITAJet_PFlowVars*)arg[0]);
}

static void constructor_1930( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJet_PFlowVars(*(const ::KITAJet_PFlowVars*)arg[0]);
  else ::new(mem) ::KITAJet_PFlowVars(*(const ::KITAJet_PFlowVars*)arg[0]);
}

static void constructor_1931( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJet_PFlowVars();
  else ::new(mem) ::KITAJet_PFlowVars();
}

static void method_newdel_82( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAJet_PFlowVars >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAJet_PFlowVars >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAJet_PFlowVars >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAJet_PFlowVars >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAJet_PFlowVars >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAJet_PFlowVars -------------------------------
void __KITAJet_PFlowVars_db_datamem(Reflex::Class*);
void __KITAJet_PFlowVars_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAJet_PFlowVars_datamem_bld(&__KITAJet_PFlowVars_db_datamem);
Reflex::GenreflexMemberBuilder __KITAJet_PFlowVars_funcmem_bld(&__KITAJet_PFlowVars_db_funcmem);
void __KITAJet_PFlowVars_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAJet_PFlowVars"), typeid(::KITAJet_PFlowVars), sizeof(::KITAJet_PFlowVars), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::STRUCT)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAJet*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAJet_PFlowVars"), destructor_1928, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4191, type_4193), Reflex::Literal("operator="), operator_1929, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_4193), Reflex::Literal("KITAJet_PFlowVars"), constructor_1930, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAJet_PFlowVars"), constructor_1931, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_82, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAJet_PFlowVars_datamem_bld);
}

//------Delayed data member builder for class KITAJet_PFlowVars -------------------
void __KITAJet_PFlowVars_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_446, Reflex::Literal("ChHadronEnergy"), OffsetOf(__shadow__::__KITAJet_PFlowVars, ChHadronEnergy), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("NHadronEnergy"), OffsetOf(__shadow__::__KITAJet_PFlowVars, NHadronEnergy), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("PhEnergy"), OffsetOf(__shadow__::__KITAJet_PFlowVars, PhEnergy), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("EleEnergy"), OffsetOf(__shadow__::__KITAJet_PFlowVars, EleEnergy), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("MuEnergy"), OffsetOf(__shadow__::__KITAJet_PFlowVars, MuEnergy), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("HFHadronEnergy"), OffsetOf(__shadow__::__KITAJet_PFlowVars, HFHadronEnergy), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("HFEmEnergy"), OffsetOf(__shadow__::__KITAJet_PFlowVars, HFEmEnergy), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("ChHadronMult"), OffsetOf(__shadow__::__KITAJet_PFlowVars, ChHadronMult), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("NHadronMult"), OffsetOf(__shadow__::__KITAJet_PFlowVars, NHadronMult), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("PhMult"), OffsetOf(__shadow__::__KITAJet_PFlowVars, PhMult), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("EleMult"), OffsetOf(__shadow__::__KITAJet_PFlowVars, EleMult), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("MuMult"), OffsetOf(__shadow__::__KITAJet_PFlowVars, MuMult), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("HFHadronMult"), OffsetOf(__shadow__::__KITAJet_PFlowVars, HFHadronMult), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("HFEmMult"), OffsetOf(__shadow__::__KITAJet_PFlowVars, HFEmMult), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAJet_PFlowVars -------------------
void __KITAJet_PFlowVars_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITADataCleaning -------------------------------
static void destructor_2321(void*, void * o, const std::vector<void*>&, void *) {
(((::KITADataCleaning*)o)->::KITADataCleaning::~KITADataCleaning)();
}
static  void operator_2322( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITADataCleaning*)o)->operator=)(*(const ::KITADataCleaning*)arg[0]);
  else   (((::KITADataCleaning*)o)->operator=)(*(const ::KITADataCleaning*)arg[0]);
}

static void constructor_2323( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITADataCleaning(*(const ::KITADataCleaning*)arg[0]);
  else ::new(mem) ::KITADataCleaning(*(const ::KITADataCleaning*)arg[0]);
}

static void constructor_2324( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITADataCleaning();
  else ::new(mem) ::KITADataCleaning();
}

static void method_newdel_354( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITADataCleaning >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITADataCleaning >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITADataCleaning >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITADataCleaning >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITADataCleaning >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITADataCleaning -------------------------------
void __KITADataCleaning_db_datamem(Reflex::Class*);
void __KITADataCleaning_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITADataCleaning_datamem_bld(&__KITADataCleaning_db_datamem);
Reflex::GenreflexMemberBuilder __KITADataCleaning_funcmem_bld(&__KITADataCleaning_db_funcmem);
void __KITADataCleaning_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITADataCleaning"), typeid(::KITADataCleaning), sizeof(::KITADataCleaning), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITADataCleaning"), destructor_2321, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8121, type_8122), Reflex::Literal("operator="), operator_2322, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8122), Reflex::Literal("KITADataCleaning"), constructor_2323, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITADataCleaning"), constructor_2324, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_354, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITADataCleaning_datamem_bld);
}

//------Delayed data member builder for class KITADataCleaning -------------------
void __KITADataCleaning_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_1892, Reflex::Literal("filteredByHBHENoiseFilter"), OffsetOf(__shadow__::__KITADataCleaning, filteredByHBHENoiseFilter), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITADataCleaning -------------------
void __KITADataCleaning_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAObject -------------------------------
static void destructor_2337(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAObject*)o)->::KITAObject::~KITAObject)();
}
static  void operator_2338( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAObject*)o)->operator=)(*(const ::KITAObject*)arg[0]);
  else   (((::KITAObject*)o)->operator=)(*(const ::KITAObject*)arg[0]);
}

static void constructor_2339( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAObject(*(const ::KITAObject*)arg[0]);
  else ::new(mem) ::KITAObject(*(const ::KITAObject*)arg[0]);
}

static void constructor_2340( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAObject();
  else ::new(mem) ::KITAObject();
}

static void constructor_2341( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAObject(*(::KITA4Vector*)arg[0]);
  else ::new(mem) ::KITAObject(*(::KITA4Vector*)arg[0]);
}

static void method_newdel_367( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAObject >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAObject >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAObject >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAObject >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAObject >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAObject -------------------------------
void __KITAObject_db_datamem(Reflex::Class*);
void __KITAObject_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAObject_datamem_bld(&__KITAObject_db_datamem);
Reflex::GenreflexMemberBuilder __KITAObject_funcmem_bld(&__KITAObject_db_funcmem);
void __KITAObject_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAObject"), typeid(::KITAObject), sizeof(::KITAObject), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAObject"), destructor_2337, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8126, type_8127), Reflex::Literal("operator="), operator_2338, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8127), Reflex::Literal("KITAObject"), constructor_2339, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAObject"), constructor_2340, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_729), Reflex::Literal("KITAObject"), constructor_2341, 0, "vec1", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_367, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAObject_datamem_bld);
}

//------Delayed data member builder for class KITAObject -------------------
void __KITAObject_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_729, Reflex::Literal("vec"), OffsetOf(__shadow__::__KITAObject, vec), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAObject -------------------
void __KITAObject_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAGenJet -------------------------------
static void destructor_2424(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAGenJet*)o)->::KITAGenJet::~KITAGenJet)();
}
static  void operator_2425( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAGenJet*)o)->operator=)(*(const ::KITAGenJet*)arg[0]);
  else   (((::KITAGenJet*)o)->operator=)(*(const ::KITAGenJet*)arg[0]);
}

static void constructor_2426( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenJet(*(const ::KITAGenJet*)arg[0]);
  else ::new(mem) ::KITAGenJet(*(const ::KITAGenJet*)arg[0]);
}

static void constructor_2427( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenJet();
  else ::new(mem) ::KITAGenJet();
}

static void method_newdel_429( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAGenJet >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAGenJet >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAGenJet >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAGenJet >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAGenJet >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x6( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("KITAObject")), ::Reflex::BaseOffset< ::KITAGenJet,::KITAObject >::Get(),::Reflex::PUBLIC), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

//------Dictionary for class KITAGenJet -------------------------------
void __KITAGenJet_db_datamem(Reflex::Class*);
void __KITAGenJet_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAGenJet_datamem_bld(&__KITAGenJet_db_datamem);
Reflex::GenreflexMemberBuilder __KITAGenJet_funcmem_bld(&__KITAGenJet_db_funcmem);
void __KITAGenJet_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAGenJet"), typeid(::KITAGenJet), sizeof(::KITAGenJet), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAGenJet*")
  .AddBase(type_367, ::Reflex::BaseOffset< ::KITAGenJet, ::KITAObject >::Get(), ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAGenJet"), destructor_2424, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2929, type_2931), Reflex::Literal("operator="), operator_2425, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_2931), Reflex::Literal("KITAGenJet"), constructor_2426, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAGenJet"), constructor_2427, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_429, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x6, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL);
}

//------Delayed data member builder for class KITAGenJet -------------------
void __KITAGenJet_db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class KITAGenJet -------------------
void __KITAGenJet_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAMuon -------------------------------
static void destructor_2498(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAMuon*)o)->::KITAMuon::~KITAMuon)();
}
static  void operator_2499( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAMuon*)o)->operator=)(*(const ::KITAMuon*)arg[0]);
  else   (((::KITAMuon*)o)->operator=)(*(const ::KITAMuon*)arg[0]);
}

static void constructor_2500( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMuon(*(const ::KITAMuon*)arg[0]);
  else ::new(mem) ::KITAMuon(*(const ::KITAMuon*)arg[0]);
}

static void constructor_2501( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMuon();
  else ::new(mem) ::KITAMuon();
}

static void method_newdel_448( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAMuon >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAMuon >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAMuon >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAMuon >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAMuon >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x8( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("KITAObject")), ::Reflex::BaseOffset< ::KITAMuon,::KITAObject >::Get(),::Reflex::PUBLIC), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

//------Dictionary for class KITAMuon -------------------------------
void __KITAMuon_db_datamem(Reflex::Class*);
void __KITAMuon_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAMuon_datamem_bld(&__KITAMuon_db_datamem);
Reflex::GenreflexMemberBuilder __KITAMuon_funcmem_bld(&__KITAMuon_db_funcmem);
void __KITAMuon_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAMuon"), typeid(::KITAMuon), sizeof(::KITAMuon), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAMuon*")
  .AddBase(type_367, ::Reflex::BaseOffset< ::KITAMuon, ::KITAObject >::Get(), ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAMuon"), destructor_2498, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2626, type_2628), Reflex::Literal("operator="), operator_2499, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_2628), Reflex::Literal("KITAMuon"), constructor_2500, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAMuon"), constructor_2501, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_448, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x8, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAMuon_datamem_bld);
}

//------Delayed data member builder for class KITAMuon -------------------
void __KITAMuon_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("charge"), OffsetOf(__shadow__::__KITAMuon, charge), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("genVec"), OffsetOf(__shadow__::__KITAMuon, genVec), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("genLeptonCharge"), OffsetOf(__shadow__::__KITAMuon, genLeptonCharge), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isGlobalMuonPromptTight"), OffsetOf(__shadow__::__KITAMuon, isGlobalMuonPromptTight), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isGlobalMuon"), OffsetOf(__shadow__::__KITAMuon, isGlobalMuon), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isStandAloneMuon"), OffsetOf(__shadow__::__KITAMuon, isStandAloneMuon), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isTrackerMuon"), OffsetOf(__shadow__::__KITAMuon, isTrackerMuon), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isCaloMuon"), OffsetOf(__shadow__::__KITAMuon, isCaloMuon), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pf_iso_particle"), OffsetOf(__shadow__::__KITAMuon, pf_iso_particle), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pf_iso_neutrals"), OffsetOf(__shadow__::__KITAMuon, pf_iso_neutrals), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pf_iso_charged"), OffsetOf(__shadow__::__KITAMuon, pf_iso_charged), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pf_iso_photon"), OffsetOf(__shadow__::__KITAMuon, pf_iso_photon), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("NoOfHits"), OffsetOf(__shadow__::__KITAMuon, NoOfHits), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("NoOfLostHits"), OffsetOf(__shadow__::__KITAMuon, NoOfLostHits), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("redChi2"), OffsetOf(__shadow__::__KITAMuon, redChi2), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("d0"), OffsetOf(__shadow__::__KITAMuon, d0), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("d0Error"), OffsetOf(__shadow__::__KITAMuon, d0Error), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerNoOfHits"), OffsetOf(__shadow__::__KITAMuon, trackerNoOfHits), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerNoOfLostHits"), OffsetOf(__shadow__::__KITAMuon, trackerNoOfLostHits), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerChi2"), OffsetOf(__shadow__::__KITAMuon, trackerChi2), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerd0"), OffsetOf(__shadow__::__KITAMuon, trackerd0), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerd0Error"), OffsetOf(__shadow__::__KITAMuon, trackerd0Error), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerPt"), OffsetOf(__shadow__::__KITAMuon, trackerPt), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trSaNoOfHits"), OffsetOf(__shadow__::__KITAMuon, trSaNoOfHits), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trSaChi2"), OffsetOf(__shadow__::__KITAMuon, trSaChi2), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("NoOfMatches"), OffsetOf(__shadow__::__KITAMuon, NoOfMatches), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("trackerNoOfValidTrackerHits"), OffsetOf(__shadow__::__KITAMuon, trackerNoOfValidTrackerHits), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("trackerNoOfValidPixelHits"), OffsetOf(__shadow__::__KITAMuon, trackerNoOfValidPixelHits), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("trackerNoOfValidStripHits"), OffsetOf(__shadow__::__KITAMuon, trackerNoOfValidStripHits), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("trackerNoOfValidMuonHits"), OffsetOf(__shadow__::__KITAMuon, trackerNoOfValidMuonHits), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("NoOfValidTrackerHits"), OffsetOf(__shadow__::__KITAMuon, NoOfValidTrackerHits), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("NoOfValidPixelHits"), OffsetOf(__shadow__::__KITAMuon, NoOfValidPixelHits), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("NoOfValidStripHits"), OffsetOf(__shadow__::__KITAMuon, NoOfValidStripHits), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("NoOfValidMuonHits"), OffsetOf(__shadow__::__KITAMuon, NoOfValidMuonHits), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("PixelLayersWithMeasurements"), OffsetOf(__shadow__::__KITAMuon, PixelLayersWithMeasurements), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("trackerPixelLayersWithMeasurements"), OffsetOf(__shadow__::__KITAMuon, trackerPixelLayersWithMeasurements), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dxyPV"), OffsetOf(__shadow__::__KITAMuon, dxyPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dxyBSp"), OffsetOf(__shadow__::__KITAMuon, dxyBSp), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dB"), OffsetOf(__shadow__::__KITAMuon, dB), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dBSig"), OffsetOf(__shadow__::__KITAMuon, dBSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IPPV"), OffsetOf(__shadow__::__KITAMuon, IPPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IPPVErr"), OffsetOf(__shadow__::__KITAMuon, IPPVErr), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IPPVSig"), OffsetOf(__shadow__::__KITAMuon, IPPVSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerIPPV"), OffsetOf(__shadow__::__KITAMuon, trackerIPPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerIPPVErr"), OffsetOf(__shadow__::__KITAMuon, trackerIPPVErr), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerIPPVSig"), OffsetOf(__shadow__::__KITAMuon, trackerIPPVSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IP3DPV"), OffsetOf(__shadow__::__KITAMuon, IP3DPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IP3DPVErr"), OffsetOf(__shadow__::__KITAMuon, IP3DPVErr), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IP3DPVSig"), OffsetOf(__shadow__::__KITAMuon, IP3DPVSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerIP3DPV"), OffsetOf(__shadow__::__KITAMuon, trackerIP3DPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerIP3DPVErr"), OffsetOf(__shadow__::__KITAMuon, trackerIP3DPVErr), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trackerIP3DPVSig"), OffsetOf(__shadow__::__KITAMuon, trackerIP3DPVSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("GMvtxX"), OffsetOf(__shadow__::__KITAMuon, GMvtxX), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("GMvtxY"), OffsetOf(__shadow__::__KITAMuon, GMvtxY), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("GMvtxZ"), OffsetOf(__shadow__::__KITAMuon, GMvtxZ), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("vtxX"), OffsetOf(__shadow__::__KITAMuon, vtxX), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("vtxY"), OffsetOf(__shadow__::__KITAMuon, vtxY), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("vtxZ"), OffsetOf(__shadow__::__KITAMuon, vtxZ), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("distGlobalMuVtxPV"), OffsetOf(__shadow__::__KITAMuon, distGlobalMuVtxPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("distMuVtxPV"), OffsetOf(__shadow__::__KITAMuon, distMuVtxPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("distGlobalMuVtxBSp"), OffsetOf(__shadow__::__KITAMuon, distGlobalMuVtxBSp), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("distMuVtxBSp"), OffsetOf(__shadow__::__KITAMuon, distMuVtxBSp), ::Reflex::PUBLIC)
  .AddDataMember(type_1421, Reflex::Literal("trigMatchFilterIdxs"), OffsetOf(__shadow__::__KITAMuon, trigMatchFilterIdxs), ::Reflex::PUBLIC)
  .AddDataMember(type_1418, Reflex::Literal("trigMatchVecs"), OffsetOf(__shadow__::__KITAMuon, trigMatchVecs), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("numberOfChambers"), OffsetOf(__shadow__::__KITAMuon, numberOfChambers), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("jet_index"), OffsetOf(__shadow__::__KITAMuon, jet_index), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAMuon -------------------
void __KITAMuon_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAPFMet -------------------------------
static void destructor_2525(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAPFMet*)o)->::KITAPFMet::~KITAPFMet)();
}
static  void operator_2526( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAPFMet*)o)->operator=)(*(const ::KITAPFMet*)arg[0]);
  else   (((::KITAPFMet*)o)->operator=)(*(const ::KITAPFMet*)arg[0]);
}

static void constructor_2527( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAPFMet(*(const ::KITAPFMet*)arg[0]);
  else ::new(mem) ::KITAPFMet(*(const ::KITAPFMet*)arg[0]);
}

static void constructor_2528( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAPFMet();
  else ::new(mem) ::KITAPFMet();
}

static void method_newdel_463( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAPFMet >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAPFMet >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAPFMet >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAPFMet >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAPFMet >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAPFMet -------------------------------
void __KITAPFMet_db_datamem(Reflex::Class*);
void __KITAPFMet_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAPFMet_datamem_bld(&__KITAPFMet_db_datamem);
Reflex::GenreflexMemberBuilder __KITAPFMet_funcmem_bld(&__KITAPFMet_db_funcmem);
void __KITAPFMet_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAPFMet"), typeid(::KITAPFMet), sizeof(::KITAPFMet), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAPFMet"), destructor_2525, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8159, type_8160), Reflex::Literal("operator="), operator_2526, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8160), Reflex::Literal("KITAPFMet"), constructor_2527, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAPFMet"), constructor_2528, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_463, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAPFMet_datamem_bld);
}

//------Delayed data member builder for class KITAPFMet -------------------
void __KITAPFMet_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_729, Reflex::Literal("vec"), OffsetOf(__shadow__::__KITAPFMet, vec), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPt_full"), OffsetOf(__shadow__::__KITAPFMet, ucorrPt_full), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPhi_full"), OffsetOf(__shadow__::__KITAPFMet, ucorrPhi_full), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPt_JES"), OffsetOf(__shadow__::__KITAPFMet, ucorrPt_JES), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPhi_JES"), OffsetOf(__shadow__::__KITAPFMet, ucorrPhi_JES), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPt_Mu"), OffsetOf(__shadow__::__KITAPFMet, ucorrPt_Mu), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPhi_Mu"), OffsetOf(__shadow__::__KITAPFMet, ucorrPhi_Mu), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("sumEt"), OffsetOf(__shadow__::__KITAPFMet, sumEt), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("METsig"), OffsetOf(__shadow__::__KITAPFMet, METsig), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("NeutralEMEtFraction"), OffsetOf(__shadow__::__KITAPFMet, NeutralEMEtFraction), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("NeutralEMEt"), OffsetOf(__shadow__::__KITAPFMet, NeutralEMEt), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("NeutralHadEtFraction"), OffsetOf(__shadow__::__KITAPFMet, NeutralHadEtFraction), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("NeutralHadEt"), OffsetOf(__shadow__::__KITAPFMet, NeutralHadEt), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("ChargedEMEtFraction"), OffsetOf(__shadow__::__KITAPFMet, ChargedEMEtFraction), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("ChargedEMEt"), OffsetOf(__shadow__::__KITAPFMet, ChargedEMEt), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("ChargedHadEtFraction"), OffsetOf(__shadow__::__KITAPFMet, ChargedHadEtFraction), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("ChargedHadEt"), OffsetOf(__shadow__::__KITAPFMet, ChargedHadEt), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("MuonEtFraction"), OffsetOf(__shadow__::__KITAPFMet, MuonEtFraction), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("MuonEt"), OffsetOf(__shadow__::__KITAPFMet, MuonEt), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("Type6EtFraction"), OffsetOf(__shadow__::__KITAPFMet, Type6EtFraction), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("Type6Et"), OffsetOf(__shadow__::__KITAPFMet, Type6Et), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("Type7EtFraction"), OffsetOf(__shadow__::__KITAPFMet, Type7EtFraction), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("Type7Et"), OffsetOf(__shadow__::__KITAPFMet, Type7Et), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAPFMet -------------------
void __KITAPFMet_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAGenFlavor -------------------------------
static void destructor_2601(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAGenFlavor*)o)->::KITAGenFlavor::~KITAGenFlavor)();
}
static  void operator_2602( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAGenFlavor*)o)->operator=)(*(const ::KITAGenFlavor*)arg[0]);
  else   (((::KITAGenFlavor*)o)->operator=)(*(const ::KITAGenFlavor*)arg[0]);
}

static void constructor_2603( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenFlavor(*(const ::KITAGenFlavor*)arg[0]);
  else ::new(mem) ::KITAGenFlavor(*(const ::KITAGenFlavor*)arg[0]);
}

static void constructor_2604( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenFlavor();
  else ::new(mem) ::KITAGenFlavor();
}

static void method_newdel_511( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAGenFlavor >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAGenFlavor >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAGenFlavor >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAGenFlavor >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAGenFlavor >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAGenFlavor -------------------------------
void __KITAGenFlavor_db_datamem(Reflex::Class*);
void __KITAGenFlavor_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAGenFlavor_datamem_bld(&__KITAGenFlavor_db_datamem);
Reflex::GenreflexMemberBuilder __KITAGenFlavor_funcmem_bld(&__KITAGenFlavor_db_funcmem);
void __KITAGenFlavor_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAGenFlavor"), typeid(::KITAGenFlavor), sizeof(::KITAGenFlavor), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAGenFlavor"), destructor_2601, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8167, type_8168), Reflex::Literal("operator="), operator_2602, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8168), Reflex::Literal("KITAGenFlavor"), constructor_2603, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAGenFlavor"), constructor_2604, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_511, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAGenFlavor_datamem_bld);
}

//------Delayed data member builder for class KITAGenFlavor -------------------
void __KITAGenFlavor_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("path"), OffsetOf(__shadow__::__KITAGenFlavor, path), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("decay"), OffsetOf(__shadow__::__KITAGenFlavor, decay), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAGenFlavor -------------------
void __KITAGenFlavor_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAGenParticle -------------------------------
static void destructor_2610(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAGenParticle*)o)->::KITAGenParticle::~KITAGenParticle)();
}
static  void operator_2611( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAGenParticle*)o)->operator=)(*(const ::KITAGenParticle*)arg[0]);
  else   (((::KITAGenParticle*)o)->operator=)(*(const ::KITAGenParticle*)arg[0]);
}

static void constructor_2612( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenParticle(*(const ::KITAGenParticle*)arg[0]);
  else ::new(mem) ::KITAGenParticle(*(const ::KITAGenParticle*)arg[0]);
}

static void constructor_2613( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenParticle();
  else ::new(mem) ::KITAGenParticle();
}

static void constructor_2614( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenParticle(*(::KITA4Vector*)arg[0],
      *(int*)arg[1]);
  else ::new(mem) ::KITAGenParticle(*(::KITA4Vector*)arg[0],
      *(int*)arg[1]);
}

static void constructor_2615( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenParticle(*(float*)arg[0],
      *(float*)arg[1],
      *(float*)arg[2],
      *(float*)arg[3],
      *(int*)arg[4]);
  else ::new(mem) ::KITAGenParticle(*(float*)arg[0],
      *(float*)arg[1],
      *(float*)arg[2],
      *(float*)arg[3],
      *(int*)arg[4]);
}

static void constructor_2616( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenParticle(*(::KITA4Vector*)arg[0],
      *(int*)arg[1],
      *(float*)arg[2]);
  else ::new(mem) ::KITAGenParticle(*(::KITA4Vector*)arg[0],
      *(int*)arg[1],
      *(float*)arg[2]);
}

static void constructor_2617( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenParticle(*(float*)arg[0],
      *(float*)arg[1],
      *(float*)arg[2],
      *(float*)arg[3],
      *(int*)arg[4],
      *(float*)arg[5]);
  else ::new(mem) ::KITAGenParticle(*(float*)arg[0],
      *(float*)arg[1],
      *(float*)arg[2],
      *(float*)arg[3],
      *(int*)arg[4],
      *(float*)arg[5]);
}

static void method_newdel_516( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAGenParticle >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAGenParticle >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAGenParticle >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAGenParticle >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAGenParticle >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x12( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("KITAObject")), ::Reflex::BaseOffset< ::KITAGenParticle,::KITAObject >::Get(),::Reflex::PUBLIC), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

//------Dictionary for class KITAGenParticle -------------------------------
void __KITAGenParticle_db_datamem(Reflex::Class*);
void __KITAGenParticle_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAGenParticle_datamem_bld(&__KITAGenParticle_db_datamem);
Reflex::GenreflexMemberBuilder __KITAGenParticle_funcmem_bld(&__KITAGenParticle_db_funcmem);
void __KITAGenParticle_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAGenParticle"), typeid(::KITAGenParticle), sizeof(::KITAGenParticle), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAGenParticle*")
  .AddBase(type_367, ::Reflex::BaseOffset< ::KITAGenParticle, ::KITAObject >::Get(), ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAGenParticle"), destructor_2610, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2263, type_2265), Reflex::Literal("operator="), operator_2611, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_2265), Reflex::Literal("KITAGenParticle"), constructor_2612, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAGenParticle"), constructor_2613, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_729, type_31), Reflex::Literal("KITAGenParticle"), constructor_2614, 0, "vec1;pid1", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_446, type_446, type_446, type_446, type_31), Reflex::Literal("KITAGenParticle"), constructor_2615, 0, "px;py;pz;e;pid1", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_729, type_31, type_446), Reflex::Literal("KITAGenParticle"), constructor_2616, 0, "vec1;pid1;Charge1", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_446, type_446, type_446, type_446, type_31, type_446), Reflex::Literal("KITAGenParticle"), constructor_2617, 0, "px;py;pz;e;pid1;Charge1", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_516, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x12, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAGenParticle_datamem_bld);
}

//------Delayed data member builder for class KITAGenParticle -------------------
void __KITAGenParticle_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("pid"), OffsetOf(__shadow__::__KITAGenParticle, pid), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("MoID"), OffsetOf(__shadow__::__KITAGenParticle, MoID), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("Charge"), OffsetOf(__shadow__::__KITAGenParticle, Charge), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("Tau_decay"), OffsetOf(__shadow__::__KITAGenParticle, Tau_decay), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAGenParticle -------------------
void __KITAGenParticle_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAMisc -------------------------------
static void destructor_2702(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAMisc*)o)->::KITAMisc::~KITAMisc)();
}
static  void operator_2703( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAMisc*)o)->operator=)(*(const ::KITAMisc*)arg[0]);
  else   (((::KITAMisc*)o)->operator=)(*(const ::KITAMisc*)arg[0]);
}

static void constructor_2704( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMisc(*(const ::KITAMisc*)arg[0]);
  else ::new(mem) ::KITAMisc(*(const ::KITAMisc*)arg[0]);
}

static void constructor_2705( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMisc();
  else ::new(mem) ::KITAMisc();
}

static void method_newdel_561( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAMisc >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAMisc >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAMisc >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAMisc >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAMisc >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAMisc -------------------------------
void __KITAMisc_db_datamem(Reflex::Class*);
void __KITAMisc_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAMisc_datamem_bld(&__KITAMisc_db_datamem);
Reflex::GenreflexMemberBuilder __KITAMisc_funcmem_bld(&__KITAMisc_db_funcmem);
void __KITAMisc_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAMisc"), typeid(::KITAMisc), sizeof(::KITAMisc), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddEnum(Reflex::Literal("KITAMisc::rho_keys"), Reflex::Literal("pf_kt6=0;pf_nopileup_kt6=1;pf_kt6_eta25=2;pf_nopileup_kt6_eta25=3"), &typeid(KITAMisc::rho_keys), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAMisc"), destructor_2702, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8176, type_8177), Reflex::Literal("operator="), operator_2703, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8177), Reflex::Literal("KITAMisc"), constructor_2704, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAMisc"), constructor_2705, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_561, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAMisc_datamem_bld);
}

//------Delayed data member builder for class KITAMisc -------------------
void __KITAMisc_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("nRun"), OffsetOf(__shadow__::__KITAMisc, nRun), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("nEvent"), OffsetOf(__shadow__::__KITAMisc, nEvent), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("luminosityBlock"), OffsetOf(__shadow__::__KITAMisc, luminosityBlock), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("storeNumber"), OffsetOf(__shadow__::__KITAMisc, storeNumber), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("bunchCrossing"), OffsetOf(__shadow__::__KITAMisc, bunchCrossing), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("orbitNumber"), OffsetOf(__shadow__::__KITAMisc, orbitNumber), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isRealData"), OffsetOf(__shadow__::__KITAMisc, isRealData), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("BSpX"), OffsetOf(__shadow__::__KITAMisc, BSpX), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("BSpY"), OffsetOf(__shadow__::__KITAMisc, BSpY), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("BSpZ"), OffsetOf(__shadow__::__KITAMisc, BSpZ), ::Reflex::PUBLIC)
  .AddDataMember(type_1631, Reflex::Literal("rhos"), OffsetOf(__shadow__::__KITAMisc, rhos), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("filteredByScraping"), OffsetOf(__shadow__::__KITAMisc, filteredByScraping), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAMisc -------------------
void __KITAMisc_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAJet_CaloVars -------------------------------
static void destructor_2732(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAJet_CaloVars*)o)->::KITAJet_CaloVars::~KITAJet_CaloVars)();
}
static  void operator_2733( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAJet_CaloVars*)o)->operator=)(*(const ::KITAJet_CaloVars*)arg[0]);
  else   (((::KITAJet_CaloVars*)o)->operator=)(*(const ::KITAJet_CaloVars*)arg[0]);
}

static void constructor_2734( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJet_CaloVars(*(const ::KITAJet_CaloVars*)arg[0]);
  else ::new(mem) ::KITAJet_CaloVars(*(const ::KITAJet_CaloVars*)arg[0]);
}

static void constructor_2735( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJet_CaloVars();
  else ::new(mem) ::KITAJet_CaloVars();
}

static void method_newdel_594( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAJet_CaloVars >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAJet_CaloVars >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAJet_CaloVars >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAJet_CaloVars >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAJet_CaloVars >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAJet_CaloVars -------------------------------
void __KITAJet_CaloVars_db_datamem(Reflex::Class*);
void __KITAJet_CaloVars_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAJet_CaloVars_datamem_bld(&__KITAJet_CaloVars_db_datamem);
Reflex::GenreflexMemberBuilder __KITAJet_CaloVars_funcmem_bld(&__KITAJet_CaloVars_db_funcmem);
void __KITAJet_CaloVars_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAJet_CaloVars"), typeid(::KITAJet_CaloVars), sizeof(::KITAJet_CaloVars), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::STRUCT)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAJet*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAJet_CaloVars"), destructor_2732, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4126, type_4128), Reflex::Literal("operator="), operator_2733, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_4128), Reflex::Literal("KITAJet_CaloVars"), constructor_2734, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAJet_CaloVars"), constructor_2735, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_594, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAJet_CaloVars_datamem_bld);
}

//------Delayed data member builder for class KITAJet_CaloVars -------------------
void __KITAJet_CaloVars_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_446, Reflex::Literal("emFrac"), OffsetOf(__shadow__::__KITAJet_CaloVars, emFrac), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("fHPD"), OffsetOf(__shadow__::__KITAJet_CaloVars, fHPD), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("fRBX"), OffsetOf(__shadow__::__KITAJet_CaloVars, fRBX), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("n90Hits"), OffsetOf(__shadow__::__KITAJet_CaloVars, n90Hits), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("fSubDetector1"), OffsetOf(__shadow__::__KITAJet_CaloVars, fSubDetector1), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("fSubDetector2"), OffsetOf(__shadow__::__KITAJet_CaloVars, fSubDetector2), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("fSubDetector3"), OffsetOf(__shadow__::__KITAJet_CaloVars, fSubDetector3), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("fSubDetector4"), OffsetOf(__shadow__::__KITAJet_CaloVars, fSubDetector4), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("restrictedEMF"), OffsetOf(__shadow__::__KITAJet_CaloVars, restrictedEMF), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("nHCALTowers"), OffsetOf(__shadow__::__KITAJet_CaloVars, nHCALTowers), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("nECALTowers"), OffsetOf(__shadow__::__KITAJet_CaloVars, nECALTowers), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("approximatefHPD"), OffsetOf(__shadow__::__KITAJet_CaloVars, approximatefHPD), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("approximatefRBX"), OffsetOf(__shadow__::__KITAJet_CaloVars, approximatefRBX), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("hitsInN90"), OffsetOf(__shadow__::__KITAJet_CaloVars, hitsInN90), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("numberOfHits2RPC"), OffsetOf(__shadow__::__KITAJet_CaloVars, numberOfHits2RPC), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("numberOfHits3RPC"), OffsetOf(__shadow__::__KITAJet_CaloVars, numberOfHits3RPC), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("numberOfHitsRPC"), OffsetOf(__shadow__::__KITAJet_CaloVars, numberOfHitsRPC), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAJet_CaloVars -------------------
void __KITAJet_CaloVars_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAMet -------------------------------
static void destructor_2754(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAMet*)o)->::KITAMet::~KITAMet)();
}
static  void operator_2755( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAMet*)o)->operator=)(*(const ::KITAMet*)arg[0]);
  else   (((::KITAMet*)o)->operator=)(*(const ::KITAMet*)arg[0]);
}

static void constructor_2756( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMet(*(const ::KITAMet*)arg[0]);
  else ::new(mem) ::KITAMet(*(const ::KITAMet*)arg[0]);
}

static void constructor_2757( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMet();
  else ::new(mem) ::KITAMet();
}

static void method_newdel_630( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAMet >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAMet >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAMet >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAMet >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAMet >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAMet -------------------------------
void __KITAMet_db_datamem(Reflex::Class*);
void __KITAMet_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAMet_datamem_bld(&__KITAMet_db_datamem);
Reflex::GenreflexMemberBuilder __KITAMet_funcmem_bld(&__KITAMet_db_funcmem);
void __KITAMet_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAMet"), typeid(::KITAMet), sizeof(::KITAMet), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAMet"), destructor_2754, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8201, type_8202), Reflex::Literal("operator="), operator_2755, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8202), Reflex::Literal("KITAMet"), constructor_2756, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAMet"), constructor_2757, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_630, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAMet_datamem_bld);
}

//------Delayed data member builder for class KITAMet -------------------
void __KITAMet_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_729, Reflex::Literal("vec"), OffsetOf(__shadow__::__KITAMet, vec), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPt_full"), OffsetOf(__shadow__::__KITAMet, ucorrPt_full), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPhi_full"), OffsetOf(__shadow__::__KITAMet, ucorrPhi_full), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPt_JES"), OffsetOf(__shadow__::__KITAMet, ucorrPt_JES), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPhi_JES"), OffsetOf(__shadow__::__KITAMet, ucorrPhi_JES), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPt_Mu"), OffsetOf(__shadow__::__KITAMet, ucorrPt_Mu), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ucorrPhi_Mu"), OffsetOf(__shadow__::__KITAMet, ucorrPhi_Mu), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("sumEt"), OffsetOf(__shadow__::__KITAMet, sumEt), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("METsig"), OffsetOf(__shadow__::__KITAMet, METsig), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAMet -------------------
void __KITAMet_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITATopJet -------------------------------
static void destructor_2908(void*, void * o, const std::vector<void*>&, void *) {
(((::KITATopJet*)o)->::KITATopJet::~KITATopJet)();
}
static  void operator_2909( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITATopJet*)o)->operator=)(*(const ::KITATopJet*)arg[0]);
  else   (((::KITATopJet*)o)->operator=)(*(const ::KITATopJet*)arg[0]);
}

static void constructor_2910( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITATopJet(*(const ::KITATopJet*)arg[0]);
  else ::new(mem) ::KITATopJet(*(const ::KITATopJet*)arg[0]);
}

static void constructor_2911( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITATopJet();
  else ::new(mem) ::KITATopJet();
}

static void method_newdel_736( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITATopJet >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITATopJet >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITATopJet >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITATopJet >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITATopJet >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITATopJet -------------------------------
void __KITATopJet_db_datamem(Reflex::Class*);
void __KITATopJet_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITATopJet_datamem_bld(&__KITATopJet_db_datamem);
Reflex::GenreflexMemberBuilder __KITATopJet_funcmem_bld(&__KITATopJet_db_funcmem);
void __KITATopJet_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITATopJet"), typeid(::KITATopJet), sizeof(::KITATopJet), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITATopJet*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITATopJet"), destructor_2908, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1975, type_1977), Reflex::Literal("operator="), operator_2909, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1977), Reflex::Literal("KITATopJet"), constructor_2910, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITATopJet"), constructor_2911, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_736, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITATopJet_datamem_bld);
}

//------Delayed data member builder for class KITATopJet -------------------
void __KITATopJet_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_1023, Reflex::Literal("fat_jet"), OffsetOf(__shadow__::__KITATopJet, fat_jet), ::Reflex::PUBLIC)
  .AddDataMember(type_1418, Reflex::Literal("subjets"), OffsetOf(__shadow__::__KITATopJet, subjets), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITATopJet -------------------
void __KITATopJet_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAGenWFlavor -------------------------------
static void destructor_3036(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAGenWFlavor*)o)->::KITAGenWFlavor::~KITAGenWFlavor)();
}
static  void operator_3037( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAGenWFlavor*)o)->operator=)(*(const ::KITAGenWFlavor*)arg[0]);
  else   (((::KITAGenWFlavor*)o)->operator=)(*(const ::KITAGenWFlavor*)arg[0]);
}

static void constructor_3038( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenWFlavor(*(const ::KITAGenWFlavor*)arg[0]);
  else ::new(mem) ::KITAGenWFlavor(*(const ::KITAGenWFlavor*)arg[0]);
}

static void constructor_3039( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenWFlavor();
  else ::new(mem) ::KITAGenWFlavor();
}

static  void method_3040( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::KITAGenWFlavor*)o)->setnChains)(*(int*)arg[0]);
}

static  void method_3041( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::KITAGenWFlavor*)o)->setMaxnParents)(*(int*)arg[0]);
}

static  void method_3042( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (int)((((::KITAGenWFlavor*)o)->getnChains)());
  else   (((::KITAGenWFlavor*)o)->getnChains)();
}

static  void method_3043( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::KITAGenWFlavor*)o)->setMaxnSisters)(*(int*)arg[0]);
}

static  void method_3044( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::KITAGenWFlavor*)o)->setnLight)(*(int*)arg[0]);
}

static  void method_3045( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::KITAGenWFlavor*)o)->setnJets)(*(int*)arg[0]);
}

static  void method_3046( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (int)((((::KITAGenWFlavor*)o)->getnJets)());
  else   (((::KITAGenWFlavor*)o)->getnJets)();
}

static void method_newdel_853( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAGenWFlavor >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAGenWFlavor >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAGenWFlavor >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAGenWFlavor >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAGenWFlavor >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAGenWFlavor -------------------------------
void __KITAGenWFlavor_db_datamem(Reflex::Class*);
void __KITAGenWFlavor_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAGenWFlavor_datamem_bld(&__KITAGenWFlavor_db_datamem);
Reflex::GenreflexMemberBuilder __KITAGenWFlavor_funcmem_bld(&__KITAGenWFlavor_db_funcmem);
void __KITAGenWFlavor_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAGenWFlavor"), typeid(::KITAGenWFlavor), sizeof(::KITAGenWFlavor), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAGenWFlavor"), destructor_3036, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8242, type_8243), Reflex::Literal("operator="), operator_3037, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8243), Reflex::Literal("KITAGenWFlavor"), constructor_3038, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAGenWFlavor"), constructor_3039, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_853, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAGenWFlavor_datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__KITAGenWFlavor_funcmem_bld);
}

//------Delayed data member builder for class KITAGenWFlavor -------------------
void __KITAGenWFlavor_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("nChains_"), OffsetOf(__shadow__::__KITAGenWFlavor, nChains_), ::Reflex::PRIVATE)
  .AddDataMember(type_1421, Reflex::Literal("pdgId_"), OffsetOf(__shadow__::__KITAGenWFlavor, pdgId_), ::Reflex::PUBLIC)
  .AddDataMember(type_1421, Reflex::Literal("flavorSource_"), OffsetOf(__shadow__::__KITAGenWFlavor, flavorSource_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("pt_"), OffsetOf(__shadow__::__KITAGenWFlavor, pt_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("eta_"), OffsetOf(__shadow__::__KITAGenWFlavor, eta_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("phi_"), OffsetOf(__shadow__::__KITAGenWFlavor, phi_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("energy_"), OffsetOf(__shadow__::__KITAGenWFlavor, energy_), ::Reflex::PUBLIC)
  .AddDataMember(type_1421, Reflex::Literal("length2_"), OffsetOf(__shadow__::__KITAGenWFlavor, length2_), ::Reflex::PUBLIC)
  .AddDataMember(type_1421, Reflex::Literal("length3_"), OffsetOf(__shadow__::__KITAGenWFlavor, length3_), ::Reflex::PUBLIC)
  .AddDataMember(type_1421, Reflex::Literal("nParents_"), OffsetOf(__shadow__::__KITAGenWFlavor, nParents_), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("nParentsGlobal_"), OffsetOf(__shadow__::__KITAGenWFlavor, nParentsGlobal_), ::Reflex::PUBLIC)
  .AddDataMember(type_1421, Reflex::Literal("parentsPdgId_"), OffsetOf(__shadow__::__KITAGenWFlavor, parentsPdgId_), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("nSistersGlobal_"), OffsetOf(__shadow__::__KITAGenWFlavor, nSistersGlobal_), ::Reflex::PUBLIC)
  .AddDataMember(type_1421, Reflex::Literal("nSisters_"), OffsetOf(__shadow__::__KITAGenWFlavor, nSisters_), ::Reflex::PUBLIC)
  .AddDataMember(type_1421, Reflex::Literal("sisters_"), OffsetOf(__shadow__::__KITAGenWFlavor, sisters_), ::Reflex::PUBLIC)
  .AddDataMember(type_123, Reflex::Literal("processId_"), OffsetOf(__shadow__::__KITAGenWFlavor, processId_), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("pdfIdFirst_"), OffsetOf(__shadow__::__KITAGenWFlavor, pdfIdFirst_), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("pdfIdSecond_"), OffsetOf(__shadow__::__KITAGenWFlavor, pdfIdSecond_), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("xFirst_"), OffsetOf(__shadow__::__KITAGenWFlavor, xFirst_), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("xSecond_"), OffsetOf(__shadow__::__KITAGenWFlavor, xSecond_), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ptFirst_"), OffsetOf(__shadow__::__KITAGenWFlavor, ptFirst_), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("etaFirst_"), OffsetOf(__shadow__::__KITAGenWFlavor, etaFirst_), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("phiFirst_"), OffsetOf(__shadow__::__KITAGenWFlavor, phiFirst_), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("energyFirst_"), OffsetOf(__shadow__::__KITAGenWFlavor, energyFirst_), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ptSecond_"), OffsetOf(__shadow__::__KITAGenWFlavor, ptSecond_), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("etaSecond_"), OffsetOf(__shadow__::__KITAGenWFlavor, etaSecond_), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("phiSecond_"), OffsetOf(__shadow__::__KITAGenWFlavor, phiSecond_), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("energySecond_"), OffsetOf(__shadow__::__KITAGenWFlavor, energySecond_), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("nLight_"), OffsetOf(__shadow__::__KITAGenWFlavor, nLight_), ::Reflex::PRIVATE)
  .AddDataMember(type_1421, Reflex::Literal("pdgIdLight_"), OffsetOf(__shadow__::__KITAGenWFlavor, pdgIdLight_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("ptLight_"), OffsetOf(__shadow__::__KITAGenWFlavor, ptLight_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("etaLight_"), OffsetOf(__shadow__::__KITAGenWFlavor, etaLight_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("phiLight_"), OffsetOf(__shadow__::__KITAGenWFlavor, phiLight_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("energyLight_"), OffsetOf(__shadow__::__KITAGenWFlavor, energyLight_), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("nJets"), OffsetOf(__shadow__::__KITAGenWFlavor, nJets), ::Reflex::PRIVATE)
  .AddDataMember(type_1420, Reflex::Literal("ptJet_"), OffsetOf(__shadow__::__KITAGenWFlavor, ptJet_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("etaJet_"), OffsetOf(__shadow__::__KITAGenWFlavor, etaJet_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("phiJet_"), OffsetOf(__shadow__::__KITAGenWFlavor, phiJet_), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("energyJet_"), OffsetOf(__shadow__::__KITAGenWFlavor, energyJet_), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAGenWFlavor -------------------
void __KITAGenWFlavor_db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_31), Reflex::Literal("setnChains"), method_3040, 0, "newN", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_31), Reflex::Literal("setMaxnParents"), method_3041, 0, "maxParents", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_31), Reflex::Literal("getnChains"), method_3042, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_31), Reflex::Literal("setMaxnSisters"), method_3043, 0, "maxSisters", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_31), Reflex::Literal("setnLight"), method_3044, 0, "nLight", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_31), Reflex::Literal("setnJets"), method_3045, 0, "nJets_", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_31), Reflex::Literal("getnJets"), method_3046, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class KITAJet_svBTagInfos -------------------------------
static void destructor_3066(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAJet_svBTagInfos*)o)->::KITAJet_svBTagInfos::~KITAJet_svBTagInfos)();
}
static  void operator_3067( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAJet_svBTagInfos*)o)->operator=)(*(const ::KITAJet_svBTagInfos*)arg[0]);
  else   (((::KITAJet_svBTagInfos*)o)->operator=)(*(const ::KITAJet_svBTagInfos*)arg[0]);
}

static void constructor_3068( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJet_svBTagInfos(*(const ::KITAJet_svBTagInfos*)arg[0]);
  else ::new(mem) ::KITAJet_svBTagInfos(*(const ::KITAJet_svBTagInfos*)arg[0]);
}

static void constructor_3069( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJet_svBTagInfos();
  else ::new(mem) ::KITAJet_svBTagInfos();
}

static void method_newdel_897( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAJet_svBTagInfos >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAJet_svBTagInfos >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAJet_svBTagInfos >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAJet_svBTagInfos >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAJet_svBTagInfos >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAJet_svBTagInfos -------------------------------
void __KITAJet_svBTagInfos_db_datamem(Reflex::Class*);
void __KITAJet_svBTagInfos_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAJet_svBTagInfos_datamem_bld(&__KITAJet_svBTagInfos_db_datamem);
Reflex::GenreflexMemberBuilder __KITAJet_svBTagInfos_funcmem_bld(&__KITAJet_svBTagInfos_db_funcmem);
void __KITAJet_svBTagInfos_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAJet_svBTagInfos"), typeid(::KITAJet_svBTagInfos), sizeof(::KITAJet_svBTagInfos), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::STRUCT)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAJet*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAJet_svBTagInfos"), destructor_3066, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4061, type_4063), Reflex::Literal("operator="), operator_3067, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_4063), Reflex::Literal("KITAJet_svBTagInfos"), constructor_3068, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAJet_svBTagInfos"), constructor_3069, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_897, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAJet_svBTagInfos_datamem_bld);
}

//------Delayed data member builder for class KITAJet_svBTagInfos -------------------
void __KITAJet_svBTagInfos_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("svt_nSelectedTracks"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_nSelectedTracks), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("svt_nVertexTracks"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_nVertexTracks), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("svt_nVertices"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_nVertices), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("svt_nVertexCandidates"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_nVertexCandidates), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("svt_vertexType"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_vertexType), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("svt_isValid"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_isValid), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("svt_isFake"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_isFake), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("svt_hasRefittedTracks"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_hasRefittedTracks), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("svt_vertexMass"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_vertexMass), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("svt_vertexPt"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_vertexPt), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("svt_chi2"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_chi2), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("svt_ndof"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_ndof), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("svt_normalizedChi2"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_normalizedChi2), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("svt_x"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_x), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("svt_y"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_y), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("svt_z"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_z), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("svt_xError"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_xError), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("svt_yError"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_yError), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("svt_zError"), OffsetOf(__shadow__::__KITAJet_svBTagInfos, svt_zError), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAJet_svBTagInfos -------------------
void __KITAJet_svBTagInfos_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITASemiSols -------------------------------
static void destructor_3075(void*, void * o, const std::vector<void*>&, void *) {
(((::KITASemiSols*)o)->::KITASemiSols::~KITASemiSols)();
}
static  void operator_3076( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITASemiSols*)o)->operator=)(*(const ::KITASemiSols*)arg[0]);
  else   (((::KITASemiSols*)o)->operator=)(*(const ::KITASemiSols*)arg[0]);
}

static void constructor_3077( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITASemiSols(*(const ::KITASemiSols*)arg[0]);
  else ::new(mem) ::KITASemiSols(*(const ::KITASemiSols*)arg[0]);
}

static void constructor_3078( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITASemiSols();
  else ::new(mem) ::KITASemiSols();
}

static void method_newdel_904( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITASemiSols >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITASemiSols >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITASemiSols >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITASemiSols >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITASemiSols >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITASemiSols -------------------------------
void __KITASemiSols_db_datamem(Reflex::Class*);
void __KITASemiSols_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITASemiSols_datamem_bld(&__KITASemiSols_db_datamem);
Reflex::GenreflexMemberBuilder __KITASemiSols_funcmem_bld(&__KITASemiSols_db_funcmem);
void __KITASemiSols_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITASemiSols"), typeid(::KITASemiSols), sizeof(::KITASemiSols), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITASemiSol*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITASemiSols"), destructor_3075, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8244, type_8245), Reflex::Literal("operator="), operator_3076, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8245), Reflex::Literal("KITASemiSols"), constructor_3077, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITASemiSols"), constructor_3078, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_904, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITASemiSols_datamem_bld);
}

//------Delayed data member builder for class KITASemiSols -------------------
void __KITASemiSols_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("IndMcBest"), OffsetOf(__shadow__::__KITASemiSols, IndMcBest), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("IndSimpleBest"), OffsetOf(__shadow__::__KITASemiSols, IndSimpleBest), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("IndLRBest"), OffsetOf(__shadow__::__KITASemiSols, IndLRBest), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("ChangeWq"), OffsetOf(__shadow__::__KITASemiSols, ChangeWq), ::Reflex::PUBLIC)
  .AddDataMember(type_1419, Reflex::Literal("Sols"), OffsetOf(__shadow__::__KITASemiSols, Sols), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITASemiSols -------------------
void __KITASemiSols_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITASemiSol -------------------------------
static void destructor_3097(void*, void * o, const std::vector<void*>&, void *) {
(((::KITASemiSol*)o)->::KITASemiSol::~KITASemiSol)();
}
static  void operator_3098( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITASemiSol*)o)->operator=)(*(const ::KITASemiSol*)arg[0]);
  else   (((::KITASemiSol*)o)->operator=)(*(const ::KITASemiSol*)arg[0]);
}

static void constructor_3099( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITASemiSol(*(const ::KITASemiSol*)arg[0]);
  else ::new(mem) ::KITASemiSol(*(const ::KITASemiSol*)arg[0]);
}

static void constructor_3100( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITASemiSol();
  else ::new(mem) ::KITASemiSol();
}

static void method_newdel_931( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITASemiSol >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITASemiSol >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITASemiSol >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITASemiSol >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITASemiSol >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITASemiSol -------------------------------
void __KITASemiSol_db_datamem(Reflex::Class*);
void __KITASemiSol_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITASemiSol_datamem_bld(&__KITASemiSol_db_datamem);
Reflex::GenreflexMemberBuilder __KITASemiSol_funcmem_bld(&__KITASemiSol_db_funcmem);
void __KITASemiSol_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITASemiSol"), typeid(::KITASemiSol), sizeof(::KITASemiSol), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITASemiSol*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITASemiSol"), destructor_3097, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4321, type_4323), Reflex::Literal("operator="), operator_3098, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_4323), Reflex::Literal("KITASemiSol"), constructor_3099, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITASemiSol"), constructor_3100, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_931, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITASemiSol_datamem_bld);
}

//------Delayed data member builder for class KITASemiSol -------------------
void __KITASemiSol_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("IndMuon"), OffsetOf(__shadow__::__KITASemiSol, IndMuon), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("IndHadP"), OffsetOf(__shadow__::__KITASemiSol, IndHadP), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("IndHadQ"), OffsetOf(__shadow__::__KITASemiSol, IndHadQ), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("IndHadB"), OffsetOf(__shadow__::__KITASemiSol, IndHadB), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("IndLepB"), OffsetOf(__shadow__::__KITASemiSol, IndLepB), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("MtRec"), OffsetOf(__shadow__::__KITASemiSol, MtRec), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("MwRec"), OffsetOf(__shadow__::__KITASemiSol, MwRec), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("FitProb"), OffsetOf(__shadow__::__KITASemiSol, FitProb), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("MtFit"), OffsetOf(__shadow__::__KITASemiSol, MtFit), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("MwFit"), OffsetOf(__shadow__::__KITASemiSol, MwFit), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("SigLRVal"), OffsetOf(__shadow__::__KITASemiSol, SigLRVal), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("SigLRProb"), OffsetOf(__shadow__::__KITASemiSol, SigLRProb), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("JetCombLRVal"), OffsetOf(__shadow__::__KITASemiSol, JetCombLRVal), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("JetCombLRProb"), OffsetOf(__shadow__::__KITASemiSol, JetCombLRProb), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("SigLRVar"), OffsetOf(__shadow__::__KITASemiSol, SigLRVar), ::Reflex::PUBLIC)
  .AddDataMember(type_1420, Reflex::Literal("JetCombLRVar"), OffsetOf(__shadow__::__KITASemiSol, JetCombLRVar), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITASemiSol -------------------
void __KITASemiSol_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAPrimaryVertex -------------------------------
static void destructor_3117(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAPrimaryVertex*)o)->::KITAPrimaryVertex::~KITAPrimaryVertex)();
}
static  void operator_3118( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAPrimaryVertex*)o)->operator=)(*(const ::KITAPrimaryVertex*)arg[0]);
  else   (((::KITAPrimaryVertex*)o)->operator=)(*(const ::KITAPrimaryVertex*)arg[0]);
}

static void constructor_3119( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAPrimaryVertex(*(const ::KITAPrimaryVertex*)arg[0]);
  else ::new(mem) ::KITAPrimaryVertex(*(const ::KITAPrimaryVertex*)arg[0]);
}

static void constructor_3120( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAPrimaryVertex();
  else ::new(mem) ::KITAPrimaryVertex();
}

static void method_newdel_958( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAPrimaryVertex >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAPrimaryVertex >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAPrimaryVertex >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAPrimaryVertex >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAPrimaryVertex >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAPrimaryVertex -------------------------------
void __KITAPrimaryVertex_db_datamem(Reflex::Class*);
void __KITAPrimaryVertex_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAPrimaryVertex_datamem_bld(&__KITAPrimaryVertex_db_datamem);
Reflex::GenreflexMemberBuilder __KITAPrimaryVertex_funcmem_bld(&__KITAPrimaryVertex_db_funcmem);
void __KITAPrimaryVertex_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAPrimaryVertex"), typeid(::KITAPrimaryVertex), sizeof(::KITAPrimaryVertex), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAPrimaryVertex*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAPrimaryVertex"), destructor_3117, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3438, type_3440), Reflex::Literal("operator="), operator_3118, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_3440), Reflex::Literal("KITAPrimaryVertex"), constructor_3119, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAPrimaryVertex"), constructor_3120, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_958, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAPrimaryVertex_datamem_bld);
}

//------Delayed data member builder for class KITAPrimaryVertex -------------------
void __KITAPrimaryVertex_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_446, Reflex::Literal("x"), OffsetOf(__shadow__::__KITAPrimaryVertex, x), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("y"), OffsetOf(__shadow__::__KITAPrimaryVertex, y), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("z"), OffsetOf(__shadow__::__KITAPrimaryVertex, z), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("ntracks"), OffsetOf(__shadow__::__KITAPrimaryVertex, ntracks), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isFake"), OffsetOf(__shadow__::__KITAPrimaryVertex, isFake), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ndof"), OffsetOf(__shadow__::__KITAPrimaryVertex, ndof), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("redChi2"), OffsetOf(__shadow__::__KITAPrimaryVertex, redChi2), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("rho"), OffsetOf(__shadow__::__KITAPrimaryVertex, rho), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("phi"), OffsetOf(__shadow__::__KITAPrimaryVertex, phi), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("distBSp"), OffsetOf(__shadow__::__KITAPrimaryVertex, distBSp), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAPrimaryVertex -------------------
void __KITAPrimaryVertex_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAGenJetWithSubjets -------------------------------
static void destructor_3130(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAGenJetWithSubjets*)o)->::KITAGenJetWithSubjets::~KITAGenJetWithSubjets)();
}
static  void operator_3131( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAGenJetWithSubjets*)o)->operator=)(*(const ::KITAGenJetWithSubjets*)arg[0]);
  else   (((::KITAGenJetWithSubjets*)o)->operator=)(*(const ::KITAGenJetWithSubjets*)arg[0]);
}

static void constructor_3132( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenJetWithSubjets(*(const ::KITAGenJetWithSubjets*)arg[0]);
  else ::new(mem) ::KITAGenJetWithSubjets(*(const ::KITAGenJetWithSubjets*)arg[0]);
}

static void constructor_3133( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenJetWithSubjets();
  else ::new(mem) ::KITAGenJetWithSubjets();
}

static void method_newdel_1003( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAGenJetWithSubjets >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAGenJetWithSubjets >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAGenJetWithSubjets >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAGenJetWithSubjets >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAGenJetWithSubjets >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAGenJetWithSubjets -------------------------------
void __KITAGenJetWithSubjets_db_datamem(Reflex::Class*);
void __KITAGenJetWithSubjets_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAGenJetWithSubjets_datamem_bld(&__KITAGenJetWithSubjets_db_datamem);
Reflex::GenreflexMemberBuilder __KITAGenJetWithSubjets_funcmem_bld(&__KITAGenJetWithSubjets_db_funcmem);
void __KITAGenJetWithSubjets_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAGenJetWithSubjets"), typeid(::KITAGenJetWithSubjets), sizeof(::KITAGenJetWithSubjets), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAGenJet*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAGenJetWithSubjets"), destructor_3130, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2542, type_2544), Reflex::Literal("operator="), operator_3131, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_2544), Reflex::Literal("KITAGenJetWithSubjets"), constructor_3132, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAGenJetWithSubjets"), constructor_3133, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1003, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAGenJetWithSubjets_datamem_bld);
}

//------Delayed data member builder for class KITAGenJetWithSubjets -------------------
void __KITAGenJetWithSubjets_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_429, Reflex::Literal("fat_jet"), OffsetOf(__shadow__::__KITAGenJetWithSubjets, fat_jet), ::Reflex::PUBLIC)
  .AddDataMember(type_841, Reflex::Literal("subjets"), OffsetOf(__shadow__::__KITAGenJetWithSubjets, subjets), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAGenJetWithSubjets -------------------
void __KITAGenJetWithSubjets_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAJet -------------------------------
static void destructor_3156(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAJet*)o)->::KITAJet::~KITAJet)();
}
static  void operator_3157( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAJet*)o)->operator=)(*(const ::KITAJet*)arg[0]);
  else   (((::KITAJet*)o)->operator=)(*(const ::KITAJet*)arg[0]);
}

static void constructor_3158( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJet(*(const ::KITAJet*)arg[0]);
  else ::new(mem) ::KITAJet(*(const ::KITAJet*)arg[0]);
}

static void constructor_3159( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJet();
  else ::new(mem) ::KITAJet();
}

static void method_newdel_1023( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAJet >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAJet >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAJet >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAJet >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAJet >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x24( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("KITAObject")), ::Reflex::BaseOffset< ::KITAJet,::KITAObject >::Get(),::Reflex::PUBLIC), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

//------Dictionary for class KITAJet -------------------------------
void __KITAJet_db_datamem(Reflex::Class*);
void __KITAJet_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAJet_datamem_bld(&__KITAJet_db_datamem);
Reflex::GenreflexMemberBuilder __KITAJet_funcmem_bld(&__KITAJet_db_funcmem);
void __KITAJet_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAJet"), typeid(::KITAJet), sizeof(::KITAJet), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAJet*")
  .AddBase(type_367, ::Reflex::BaseOffset< ::KITAJet, ::KITAObject >::Get(), ::Reflex::PUBLIC)
  .AddEnum(Reflex::Literal("KITAJet::jec_factors_keys"), Reflex::Literal("RAW=0;L1=1;L2=2;L3=3;L2L3Res=4;L4=5;L5g=6;L5uds=7;L5c=8;L5b=9;L6g=10;L6uds=11;L6c=12;L6b=13;L7g=14;L7uds=15;L7c=16;L7b=17;Uncertainty=18"), &typeid(KITAJet::jec_factors_keys), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAJet"), destructor_3156, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2773, type_2775), Reflex::Literal("operator="), operator_3157, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_2775), Reflex::Literal("KITAJet"), constructor_3158, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAJet"), constructor_3159, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1023, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x24, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAJet_datamem_bld);
}

//------Delayed data member builder for class KITAJet -------------------
void __KITAJet_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("partonFlav"), OffsetOf(__shadow__::__KITAJet, partonFlav), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("partonVec"), OffsetOf(__shadow__::__KITAJet, partonVec), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("genJetVec"), OffsetOf(__shadow__::__KITAJet, genJetVec), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("btag_simpleSVHE"), OffsetOf(__shadow__::__KITAJet, btag_simpleSVHE), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("btag_simpleSVHP"), OffsetOf(__shadow__::__KITAJet, btag_simpleSVHP), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("btag_combSV"), OffsetOf(__shadow__::__KITAJet, btag_combSV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("btag_combSVMVA"), OffsetOf(__shadow__::__KITAJet, btag_combSVMVA), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("btag_trkcntHE"), OffsetOf(__shadow__::__KITAJet, btag_trkcntHE), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("btag_trkcntHP"), OffsetOf(__shadow__::__KITAJet, btag_trkcntHP), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("btag_softele"), OffsetOf(__shadow__::__KITAJet, btag_softele), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("btag_softmuon"), OffsetOf(__shadow__::__KITAJet, btag_softmuon), ::Reflex::PUBLIC)
  .AddDataMember(type_1631, Reflex::Literal("jec_factors"), OffsetOf(__shadow__::__KITAJet, jec_factors), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("jetCharge"), OffsetOf(__shadow__::__KITAJet, jetCharge), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("nTracks"), OffsetOf(__shadow__::__KITAJet, nTracks), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("area"), OffsetOf(__shadow__::__KITAJet, area), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pileup_energy"), OffsetOf(__shadow__::__KITAJet, pileup_energy), ::Reflex::PUBLIC)
  .AddDataMember(type_1416, Reflex::Literal("calovars"), OffsetOf(__shadow__::__KITAJet, calovars), ::Reflex::PUBLIC)
  .AddDataMember(type_1417, Reflex::Literal("pflowvars"), OffsetOf(__shadow__::__KITAJet, pflowvars), ::Reflex::PUBLIC)
  .AddDataMember(type_1414, Reflex::Literal("btagtrackinfos"), OffsetOf(__shadow__::__KITAJet, btagtrackinfos), ::Reflex::PUBLIC)
  .AddDataMember(type_1415, Reflex::Literal("btagsvtaginfos"), OffsetOf(__shadow__::__KITAJet, btagsvtaginfos), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAJet -------------------
void __KITAJet_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAJetWithSubjets -------------------------------
static void destructor_3163(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAJetWithSubjets*)o)->::KITAJetWithSubjets::~KITAJetWithSubjets)();
}
static  void operator_3164( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAJetWithSubjets*)o)->operator=)(*(const ::KITAJetWithSubjets*)arg[0]);
  else   (((::KITAJetWithSubjets*)o)->operator=)(*(const ::KITAJetWithSubjets*)arg[0]);
}

static void constructor_3165( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJetWithSubjets(*(const ::KITAJetWithSubjets*)arg[0]);
  else ::new(mem) ::KITAJetWithSubjets(*(const ::KITAJetWithSubjets*)arg[0]);
}

static void constructor_3166( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJetWithSubjets();
  else ::new(mem) ::KITAJetWithSubjets();
}

static void method_newdel_1030( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAJetWithSubjets >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAJetWithSubjets >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAJetWithSubjets >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAJetWithSubjets >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAJetWithSubjets >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAJetWithSubjets -------------------------------
void __KITAJetWithSubjets_db_datamem(Reflex::Class*);
void __KITAJetWithSubjets_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAJetWithSubjets_datamem_bld(&__KITAJetWithSubjets_db_datamem);
Reflex::GenreflexMemberBuilder __KITAJetWithSubjets_funcmem_bld(&__KITAJetWithSubjets_db_funcmem);
void __KITAJetWithSubjets_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAJetWithSubjets"), typeid(::KITAJetWithSubjets), sizeof(::KITAJetWithSubjets), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAJet*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAJetWithSubjets"), destructor_3163, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2364, type_2366), Reflex::Literal("operator="), operator_3164, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_2366), Reflex::Literal("KITAJetWithSubjets"), constructor_3165, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAJetWithSubjets"), constructor_3166, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1030, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAJetWithSubjets_datamem_bld);
}

//------Delayed data member builder for class KITAJetWithSubjets -------------------
void __KITAJetWithSubjets_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_1023, Reflex::Literal("fat_jet"), OffsetOf(__shadow__::__KITAJetWithSubjets, fat_jet), ::Reflex::PUBLIC)
  .AddDataMember(type_647, Reflex::Literal("subjets"), OffsetOf(__shadow__::__KITAJetWithSubjets, subjets), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAJetWithSubjets -------------------
void __KITAJetWithSubjets_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAHlt -------------------------------
static void destructor_3275(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAHlt*)o)->::KITAHlt::~KITAHlt)();
}
static  void operator_3276( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAHlt*)o)->operator=)(*(const ::KITAHlt*)arg[0]);
  else   (((::KITAHlt*)o)->operator=)(*(const ::KITAHlt*)arg[0]);
}

static void constructor_3277( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAHlt(*(const ::KITAHlt*)arg[0]);
  else ::new(mem) ::KITAHlt(*(const ::KITAHlt*)arg[0]);
}

static void constructor_3278( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAHlt();
  else ::new(mem) ::KITAHlt();
}

static  void method_3279( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (int)((((::KITAHlt*)o)->l1_prescale)(*(::uint64_t*)arg[0]));
  else   (((::KITAHlt*)o)->l1_prescale)(*(::uint64_t*)arg[0]);
}

static  void method_3280( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (int)((((::KITAHlt*)o)->hlt_prescale)(*(::uint64_t*)arg[0]));
  else   (((::KITAHlt*)o)->hlt_prescale)(*(::uint64_t*)arg[0]);
}

static  void method_3281( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (int)((((::KITAHlt*)o)->status)(*(::uint64_t*)arg[0]));
  else   (((::KITAHlt*)o)->status)(*(::uint64_t*)arg[0]);
}

static  void method_3282( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (uint64_t)((((::KITAHlt*)o)->build_trigger_info)(*(int*)arg[0],
    *(int*)arg[1],
    *(int*)arg[2]));
  else   (((::KITAHlt*)o)->build_trigger_info)(*(int*)arg[0],
    *(int*)arg[1],
    *(int*)arg[2]);
}

static void method_newdel_1097( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAHlt >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAHlt >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAHlt >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAHlt >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAHlt >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAHlt -------------------------------
void __KITAHlt_db_datamem(Reflex::Class*);
void __KITAHlt_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAHlt_datamem_bld(&__KITAHlt_db_datamem);
Reflex::GenreflexMemberBuilder __KITAHlt_funcmem_bld(&__KITAHlt_db_funcmem);
void __KITAHlt_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAHlt"), typeid(::KITAHlt), sizeof(::KITAHlt), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddEnum(Reflex::Literal("KITAHlt::triggerObjectCodes"), Reflex::Literal("jets=0;muonsl3=1;muons17iso=2;ele25=3;ele25iso=4;stmu_bjets=5;stele_bjets=6"), &typeid(KITAHlt::triggerObjectCodes), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAHlt"), destructor_3275, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8268, type_8269), Reflex::Literal("operator="), operator_3276, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8269), Reflex::Literal("KITAHlt"), constructor_3277, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAHlt"), constructor_3278, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1097, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAHlt_datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__KITAHlt_funcmem_bld);
}

//------Delayed data member builder for class KITAHlt -------------------
void __KITAHlt_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_1630, Reflex::Literal("triggerInfos"), OffsetOf(__shadow__::__KITAHlt, triggerInfos), ::Reflex::PUBLIC)
  .AddDataMember(type_1629, Reflex::Literal("triggerObjects"), OffsetOf(__shadow__::__KITAHlt, triggerObjects), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAHlt -------------------
void __KITAHlt_db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_31, type_1334), Reflex::Literal("l1_prescale"), method_3279, 0, "trigger_info", ::Reflex::PUBLIC | ::Reflex::STATIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_31, type_1334), Reflex::Literal("hlt_prescale"), method_3280, 0, "trigger_info", ::Reflex::PUBLIC | ::Reflex::STATIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_31, type_1334), Reflex::Literal("status"), method_3281, 0, "trigger_info", ::Reflex::PUBLIC | ::Reflex::STATIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1334, type_31, type_31, type_31), Reflex::Literal("build_trigger_info"), method_3282, 0, "l1_pre;hlt_pre;stat", ::Reflex::PUBLIC | ::Reflex::STATIC);
}
//------Stub functions for class KITAElectron -------------------------------
static void destructor_3387(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAElectron*)o)->::KITAElectron::~KITAElectron)();
}
static  void operator_3388( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAElectron*)o)->operator=)(*(const ::KITAElectron*)arg[0]);
  else   (((::KITAElectron*)o)->operator=)(*(const ::KITAElectron*)arg[0]);
}

static void constructor_3389( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAElectron(*(const ::KITAElectron*)arg[0]);
  else ::new(mem) ::KITAElectron(*(const ::KITAElectron*)arg[0]);
}

static void constructor_3390( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAElectron();
  else ::new(mem) ::KITAElectron();
}

static void method_newdel_1106( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAElectron >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAElectron >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAElectron >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAElectron >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAElectron >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x28( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("KITAObject")), ::Reflex::BaseOffset< ::KITAElectron,::KITAObject >::Get(),::Reflex::PUBLIC), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

//------Dictionary for class KITAElectron -------------------------------
void __KITAElectron_db_datamem(Reflex::Class*);
void __KITAElectron_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAElectron_datamem_bld(&__KITAElectron_db_datamem);
Reflex::GenreflexMemberBuilder __KITAElectron_funcmem_bld(&__KITAElectron_db_funcmem);
void __KITAElectron_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAElectron"), typeid(::KITAElectron), sizeof(::KITAElectron), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAElectron*")
  .AddBase(type_367, ::Reflex::BaseOffset< ::KITAElectron, ::KITAObject >::Get(), ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAElectron"), destructor_3387, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3505, type_3507), Reflex::Literal("operator="), operator_3388, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_3507), Reflex::Literal("KITAElectron"), constructor_3389, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAElectron"), constructor_3390, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1106, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x28, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAElectron_datamem_bld);
}

//------Delayed data member builder for class KITAElectron -------------------
void __KITAElectron_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_31, Reflex::Literal("charge"), OffsetOf(__shadow__::__KITAElectron, charge), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("genVec"), OffsetOf(__shadow__::__KITAElectron, genVec), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("genLeptonCharge"), OffsetOf(__shadow__::__KITAElectron, genLeptonCharge), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("vtxX"), OffsetOf(__shadow__::__KITAElectron, vtxX), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("vtxY"), OffsetOf(__shadow__::__KITAElectron, vtxY), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("vtxZ"), OffsetOf(__shadow__::__KITAElectron, vtxZ), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("category"), OffsetOf(__shadow__::__KITAElectron, category), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("myClass"), OffsetOf(__shadow__::__KITAElectron, myClass), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("fBremMode"), OffsetOf(__shadow__::__KITAElectron, fBremMode), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("caloEnergy"), OffsetOf(__shadow__::__KITAElectron, caloEnergy), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ptIn"), OffsetOf(__shadow__::__KITAElectron, ptIn), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ptCalo"), OffsetOf(__shadow__::__KITAElectron, ptCalo), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ptOut"), OffsetOf(__shadow__::__KITAElectron, ptOut), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("eOverPIn"), OffsetOf(__shadow__::__KITAElectron, eOverPIn), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("eOverPScOut"), OffsetOf(__shadow__::__KITAElectron, eOverPScOut), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dEtaIn"), OffsetOf(__shadow__::__KITAElectron, dEtaIn), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dEtaOut"), OffsetOf(__shadow__::__KITAElectron, dEtaOut), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dPhiIn"), OffsetOf(__shadow__::__KITAElectron, dPhiIn), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dPhiOut"), OffsetOf(__shadow__::__KITAElectron, dPhiOut), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("hadOverEm"), OffsetOf(__shadow__::__KITAElectron, hadOverEm), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("errorECalo"), OffsetOf(__shadow__::__KITAElectron, errorECalo), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("errorPTrack"), OffsetOf(__shadow__::__KITAElectron, errorPTrack), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pf_iso_particle"), OffsetOf(__shadow__::__KITAElectron, pf_iso_particle), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pf_iso_neutrals"), OffsetOf(__shadow__::__KITAElectron, pf_iso_neutrals), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pf_iso_charged"), OffsetOf(__shadow__::__KITAElectron, pf_iso_charged), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pf_iso_photon"), OffsetOf(__shadow__::__KITAElectron, pf_iso_photon), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("electronIdLoose"), OffsetOf(__shadow__::__KITAElectron, electronIdLoose), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("electronIdRobustHE"), OffsetOf(__shadow__::__KITAElectron, electronIdRobustHE), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("electronIdRobustLoose"), OffsetOf(__shadow__::__KITAElectron, electronIdRobustLoose), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("electronIdRobustTight"), OffsetOf(__shadow__::__KITAElectron, electronIdRobustTight), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("electronIdTight"), OffsetOf(__shadow__::__KITAElectron, electronIdTight), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trNoOfHits"), OffsetOf(__shadow__::__KITAElectron, trNoOfHits), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trNoOfLostHits"), OffsetOf(__shadow__::__KITAElectron, trNoOfLostHits), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("trChi2"), OffsetOf(__shadow__::__KITAElectron, trChi2), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("d0"), OffsetOf(__shadow__::__KITAElectron, d0), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("d0Error"), OffsetOf(__shadow__::__KITAElectron, d0Error), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("trNoOfValidPxHits"), OffsetOf(__shadow__::__KITAElectron, trNoOfValidPxHits), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("trNoOfECL_Inner"), OffsetOf(__shadow__::__KITAElectron, trNoOfECL_Inner), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dB"), OffsetOf(__shadow__::__KITAElectron, dB), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dxyPV"), OffsetOf(__shadow__::__KITAElectron, dxyPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("dxyBSp"), OffsetOf(__shadow__::__KITAElectron, dxyBSp), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IPPV"), OffsetOf(__shadow__::__KITAElectron, IPPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IPPVErr"), OffsetOf(__shadow__::__KITAElectron, IPPVErr), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IPPVSig"), OffsetOf(__shadow__::__KITAElectron, IPPVSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IP3DPV"), OffsetOf(__shadow__::__KITAElectron, IP3DPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IP3DPVErr"), OffsetOf(__shadow__::__KITAElectron, IP3DPVErr), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("IP3DPVSig"), OffsetOf(__shadow__::__KITAElectron, IP3DPVSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("distEleVtxPV"), OffsetOf(__shadow__::__KITAElectron, distEleVtxPV), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("distEleVtxBSp"), OffsetOf(__shadow__::__KITAElectron, distEleVtxBSp), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("sclE"), OffsetOf(__shadow__::__KITAElectron, sclE), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("sclEt"), OffsetOf(__shadow__::__KITAElectron, sclEt), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("sclEta"), OffsetOf(__shadow__::__KITAElectron, sclEta), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("sclPhi"), OffsetOf(__shadow__::__KITAElectron, sclPhi), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("dist"), OffsetOf(__shadow__::__KITAElectron, dist), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("dcot"), OffsetOf(__shadow__::__KITAElectron, dcot), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("radiusOfConversion"), OffsetOf(__shadow__::__KITAElectron, radiusOfConversion), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("conv_flag"), OffsetOf(__shadow__::__KITAElectron, conv_flag), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("sclphiwidth"), OffsetOf(__shadow__::__KITAElectron, sclphiwidth), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("scletawidth"), OffsetOf(__shadow__::__KITAElectron, scletawidth), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("trackp"), OffsetOf(__shadow__::__KITAElectron, trackp), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("trackpt"), OffsetOf(__shadow__::__KITAElectron, trackpt), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("trackpx"), OffsetOf(__shadow__::__KITAElectron, trackpx), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("trackpy"), OffsetOf(__shadow__::__KITAElectron, trackpy), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("trackpz"), OffsetOf(__shadow__::__KITAElectron, trackpz), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("trackphi"), OffsetOf(__shadow__::__KITAElectron, trackphi), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("tracketa"), OffsetOf(__shadow__::__KITAElectron, tracketa), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("trackouterp"), OffsetOf(__shadow__::__KITAElectron, trackouterp), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("trackouterpt"), OffsetOf(__shadow__::__KITAElectron, trackouterpt), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("trackoutereta"), OffsetOf(__shadow__::__KITAElectron, trackoutereta), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("trackouterphi"), OffsetOf(__shadow__::__KITAElectron, trackouterphi), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isEcaldriven"), OffsetOf(__shadow__::__KITAElectron, isEcaldriven), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isTrackerdriven"), OffsetOf(__shadow__::__KITAElectron, isTrackerdriven), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("eSuperClusterOverP"), OffsetOf(__shadow__::__KITAElectron, eSuperClusterOverP), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("eSeedClusterOverP"), OffsetOf(__shadow__::__KITAElectron, eSeedClusterOverP), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("eSeedClusterOverPout"), OffsetOf(__shadow__::__KITAElectron, eSeedClusterOverPout), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("eEleClusterOverPout"), OffsetOf(__shadow__::__KITAElectron, eEleClusterOverPout), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("deltaEtaSuperClusterAtVtx"), OffsetOf(__shadow__::__KITAElectron, deltaEtaSuperClusterAtVtx), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("deltaEtaSeedClusterAtCalo"), OffsetOf(__shadow__::__KITAElectron, deltaEtaSeedClusterAtCalo), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("deltaEtaEleClusterAtCalo"), OffsetOf(__shadow__::__KITAElectron, deltaEtaEleClusterAtCalo), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("deltaPhiEleClusterAtCalo"), OffsetOf(__shadow__::__KITAElectron, deltaPhiEleClusterAtCalo), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("deltaPhiSuperClusterAtVtx"), OffsetOf(__shadow__::__KITAElectron, deltaPhiSuperClusterAtVtx), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("deltaPhiSeedClusterAtCalo"), OffsetOf(__shadow__::__KITAElectron, deltaPhiSeedClusterAtCalo), ::Reflex::PUBLIC)
  .AddDataMember(type_3385, Reflex::Literal("trackPositionAtVtx"), OffsetOf(__shadow__::__KITAElectron, trackPositionAtVtx), ::Reflex::PUBLIC)
  .AddDataMember(type_3385, Reflex::Literal("trackPositionAtCalo"), OffsetOf(__shadow__::__KITAElectron, trackPositionAtCalo), ::Reflex::PUBLIC)
  .AddDataMember(type_3386, Reflex::Literal("trackMomentumAtVtx"), OffsetOf(__shadow__::__KITAElectron, trackMomentumAtVtx), ::Reflex::PUBLIC)
  .AddDataMember(type_3386, Reflex::Literal("trackMomentumAtCalo"), OffsetOf(__shadow__::__KITAElectron, trackMomentumAtCalo), ::Reflex::PUBLIC)
  .AddDataMember(type_3386, Reflex::Literal("trackMomentumOut"), OffsetOf(__shadow__::__KITAElectron, trackMomentumOut), ::Reflex::PUBLIC)
  .AddDataMember(type_3386, Reflex::Literal("trackMomentumAtEleClus"), OffsetOf(__shadow__::__KITAElectron, trackMomentumAtEleClus), ::Reflex::PUBLIC)
  .AddDataMember(type_3386, Reflex::Literal("trackMomentumAtVtxWithConstraint"), OffsetOf(__shadow__::__KITAElectron, trackMomentumAtVtxWithConstraint), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isEB"), OffsetOf(__shadow__::__KITAElectron, isEB), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isEE"), OffsetOf(__shadow__::__KITAElectron, isEE), ::Reflex::PUBLIC)
  .AddDataMember(type_1892, Reflex::Literal("isGap"), OffsetOf(__shadow__::__KITAElectron, isGap), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("sigmaEtaEta"), OffsetOf(__shadow__::__KITAElectron, sigmaEtaEta), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("sigmaIetaIeta"), OffsetOf(__shadow__::__KITAElectron, sigmaIetaIeta), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("e1x5"), OffsetOf(__shadow__::__KITAElectron, e1x5), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("e2x5Max"), OffsetOf(__shadow__::__KITAElectron, e2x5Max), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("e5x5"), OffsetOf(__shadow__::__KITAElectron, e5x5), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("hcalDepth1OverEcal"), OffsetOf(__shadow__::__KITAElectron, hcalDepth1OverEcal), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("hcalDepth2OverEcal"), OffsetOf(__shadow__::__KITAElectron, hcalDepth2OverEcal), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("BCsize"), OffsetOf(__shadow__::__KITAElectron, BCsize), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("jet_index"), OffsetOf(__shadow__::__KITAElectron, jet_index), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAElectron -------------------
void __KITAElectron_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAJet_TrackbTagInfos -------------------------------
static void destructor_3426(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAJet_TrackbTagInfos*)o)->::KITAJet_TrackbTagInfos::~KITAJet_TrackbTagInfos)();
}
static  void operator_3427( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAJet_TrackbTagInfos*)o)->operator=)(*(const ::KITAJet_TrackbTagInfos*)arg[0]);
  else   (((::KITAJet_TrackbTagInfos*)o)->operator=)(*(const ::KITAJet_TrackbTagInfos*)arg[0]);
}

static void constructor_3428( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJet_TrackbTagInfos(*(const ::KITAJet_TrackbTagInfos*)arg[0]);
  else ::new(mem) ::KITAJet_TrackbTagInfos(*(const ::KITAJet_TrackbTagInfos*)arg[0]);
}

static void constructor_3429( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAJet_TrackbTagInfos();
  else ::new(mem) ::KITAJet_TrackbTagInfos();
}

static void method_newdel_1162( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAJet_TrackbTagInfos >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAJet_TrackbTagInfos >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAJet_TrackbTagInfos >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAJet_TrackbTagInfos >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAJet_TrackbTagInfos >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAJet_TrackbTagInfos -------------------------------
void __KITAJet_TrackbTagInfos_db_datamem(Reflex::Class*);
void __KITAJet_TrackbTagInfos_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAJet_TrackbTagInfos_datamem_bld(&__KITAJet_TrackbTagInfos_db_datamem);
Reflex::GenreflexMemberBuilder __KITAJet_TrackbTagInfos_funcmem_bld(&__KITAJet_TrackbTagInfos_db_funcmem);
void __KITAJet_TrackbTagInfos_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAJet_TrackbTagInfos"), typeid(::KITAJet_TrackbTagInfos), sizeof(::KITAJet_TrackbTagInfos), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::STRUCT)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAJet*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAJet_TrackbTagInfos"), destructor_3426, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3996, type_3998), Reflex::Literal("operator="), operator_3427, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_3998), Reflex::Literal("KITAJet_TrackbTagInfos"), constructor_3428, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAJet_TrackbTagInfos"), constructor_3429, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1162, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAJet_TrackbTagInfos_datamem_bld);
}

//------Delayed data member builder for class KITAJet_TrackbTagInfos -------------------
void __KITAJet_TrackbTagInfos_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_446, Reflex::Literal("ip_trackMomentum"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackMomentum), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackEta"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackEta), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackEtaRel"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackEtaRel), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackPtRel"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackPtRel), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackPPar"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackPPar), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackDeltaR"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackDeltaR), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackPtRatio"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackPtRatio), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackPParRatio"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackPParRatio), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackSip3dVal"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackSip3dVal), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackSip3dSig"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackSip3dSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackSip2dVal"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackSip2dVal), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackSip2dSig"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackSip2dSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackDecayLenVal"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackDecayLenVal), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackJetDistVal"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackJetDistVal), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackJetDistSig"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackJetDistSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackGhostTrackDistVal"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackGhostTrackDistVal), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackGhostTrackDistSig"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackGhostTrackDistSig), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackGhostTrackWeight"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackGhostTrackWeight), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackChi2"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackChi2), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackNTotalHits"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackNTotalHits), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("ip_trackNPixelHits"), OffsetOf(__shadow__::__KITAJet_TrackbTagInfos, ip_trackNPixelHits), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAJet_TrackbTagInfos -------------------
void __KITAJet_TrackbTagInfos_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class vector<KITAPrimaryVertex,std::allocator<KITAPrimaryVertex> > -------------------------------
static void constructor_3449( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAPrimaryVertex>();
  else ::new(mem) ::std::vector<KITAPrimaryVertex>();
}

static void constructor_3450( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAPrimaryVertex>(*(const ::std::allocator<KITAPrimaryVertex>*)arg[0]);
  else ::new(mem) ::std::vector<KITAPrimaryVertex>(*(const ::std::allocator<KITAPrimaryVertex>*)arg[0]);
}

static void constructor_3451( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAPrimaryVertex>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAPrimaryVertex>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAPrimaryVertex>(*(::std::size_t*)arg[0],
      *(const ::KITAPrimaryVertex*)arg[1]);
  else ::new(mem) ::std::vector<KITAPrimaryVertex>(*(::std::size_t*)arg[0],
      *(const ::KITAPrimaryVertex*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAPrimaryVertex>(*(::std::size_t*)arg[0],
      *(const ::KITAPrimaryVertex*)arg[1],
      *(const ::std::allocator<KITAPrimaryVertex>*)arg[2]);
  else ::new(mem) ::std::vector<KITAPrimaryVertex>(*(::std::size_t*)arg[0],
      *(const ::KITAPrimaryVertex*)arg[1],
      *(const ::std::allocator<KITAPrimaryVertex>*)arg[2]);
  }
}

static void constructor_3452( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAPrimaryVertex>(*(const ::std::vector<KITAPrimaryVertex>*)arg[0]);
  else ::new(mem) ::std::vector<KITAPrimaryVertex>(*(const ::std::vector<KITAPrimaryVertex>*)arg[0]);
}

static void destructor_3453(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAPrimaryVertex>*)o)->::std::vector<KITAPrimaryVertex>::~vector)();
}
static  void operator_3454( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAPrimaryVertex>*)o)->operator=)(*(const ::std::vector<KITAPrimaryVertex>*)arg[0]);
  else   (((::std::vector<KITAPrimaryVertex>*)o)->operator=)(*(const ::std::vector<KITAPrimaryVertex>*)arg[0]);
}

static  void method_3455( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAPrimaryVertex>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAPrimaryVertex*)arg[1]);
}

static  void method_3456( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >)((((::std::vector<KITAPrimaryVertex>*)o)->begin)());
  else   (((::std::vector<KITAPrimaryVertex>*)o)->begin)();
}

static  void method_3457( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >)((((const ::std::vector<KITAPrimaryVertex>*)o)->begin)());
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->begin)();
}

static  void method_3458( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >)((((::std::vector<KITAPrimaryVertex>*)o)->end)());
  else   (((::std::vector<KITAPrimaryVertex>*)o)->end)();
}

static  void method_3459( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >)((((const ::std::vector<KITAPrimaryVertex>*)o)->end)());
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->end)();
}

static  void method_3464( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAPrimaryVertex>*)o)->size)());
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->size)();
}

static  void method_3465( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAPrimaryVertex>*)o)->max_size)());
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->max_size)();
}

static  void method_3466( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAPrimaryVertex>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAPrimaryVertex>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAPrimaryVertex*)arg[1]);
  }
}

static  void method_3467( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAPrimaryVertex>*)o)->capacity)());
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->capacity)();
}

static  void method_3468( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAPrimaryVertex>*)o)->empty)());
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->empty)();
}

static  void method_3469( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAPrimaryVertex>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_3470( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAPrimaryVertex>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAPrimaryVertex>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_3471( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAPrimaryVertex>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_3473( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAPrimaryVertex>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAPrimaryVertex>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_3474( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAPrimaryVertex>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_3475( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAPrimaryVertex>*)o)->front)();
  else   (((::std::vector<KITAPrimaryVertex>*)o)->front)();
}

static  void method_3476( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAPrimaryVertex>*)o)->front)();
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->front)();
}

static  void method_3477( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAPrimaryVertex>*)o)->back)();
  else   (((::std::vector<KITAPrimaryVertex>*)o)->back)();
}

static  void method_3478( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAPrimaryVertex>*)o)->back)();
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->back)();
}

static  void method_3479( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAPrimaryVertex>*)o)->data)());
  else   (((::std::vector<KITAPrimaryVertex>*)o)->data)();
}

static  void method_3480( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAPrimaryVertex>*)o)->data)());
  else   (((const ::std::vector<KITAPrimaryVertex>*)o)->data)();
}

static  void method_3481( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAPrimaryVertex>*)o)->push_back)(*(const ::KITAPrimaryVertex*)arg[0]);
}

static  void method_3482( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAPrimaryVertex>*)o)->pop_back)();
}

static  void method_3483( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >)((((::std::vector<KITAPrimaryVertex>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >*)arg[0],
    *(const ::KITAPrimaryVertex*)arg[1]));
  else   (((::std::vector<KITAPrimaryVertex>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >*)arg[0],
    *(const ::KITAPrimaryVertex*)arg[1]);
}

static  void method_3484( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAPrimaryVertex>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAPrimaryVertex*)arg[2]);
}

static  void method_3485( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >)((((::std::vector<KITAPrimaryVertex>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >*)arg[0]));
  else   (((::std::vector<KITAPrimaryVertex>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >*)arg[0]);
}

static  void method_3486( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >)((((::std::vector<KITAPrimaryVertex>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >*)arg[1]));
  else   (((::std::vector<KITAPrimaryVertex>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAPrimaryVertex*,std::vector<KITAPrimaryVertex> >*)arg[1]);
}

static  void method_3487( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAPrimaryVertex>*)o)->swap)(*(::std::vector<KITAPrimaryVertex>*)arg[0]);
}

static  void method_3488( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAPrimaryVertex>*)o)->clear)();
}

static void method_newdel_1167( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAPrimaryVertex> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAPrimaryVertex> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAPrimaryVertex> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAPrimaryVertex> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAPrimaryVertex> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x31( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAPrimaryVertex,std::allocator<KITAPrimaryVertex> >")), ::Reflex::BaseOffset< ::std::vector<KITAPrimaryVertex>,::std::_Vector_base<KITAPrimaryVertex,std::allocator<KITAPrimaryVertex> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x32( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAPrimaryVertex> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAPrimaryVertex> >::Generate();
}

//------Dictionary for class vector<KITAPrimaryVertex,std::allocator<KITAPrimaryVertex> > -------------------------------
void __std__vector_KITAPrimaryVertex__db_datamem(Reflex::Class*);
void __std__vector_KITAPrimaryVertex__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAPrimaryVertex__datamem_bld(&__std__vector_KITAPrimaryVertex__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAPrimaryVertex__funcmem_bld(&__std__vector_KITAPrimaryVertex__db_funcmem);
void __std__vector_KITAPrimaryVertex__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAPrimaryVertex>"), typeid(::std::vector<KITAPrimaryVertex>), sizeof(::std::vector<KITAPrimaryVertex>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "std::vector<KITAPrimaryVertex>")
  .AddBase(type_1753, ::Reflex::BaseOffset< ::std::vector<KITAPrimaryVertex>, ::std::_Vector_base<KITAPrimaryVertex,std::allocator<KITAPrimaryVertex> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_958, Reflex::Literal("std::vector<KITAPrimaryVertex>::_Alloc_value_type"))
  .AddTypedef(type_1753, Reflex::Literal("std::vector<KITAPrimaryVertex>::_Base"))
  .AddTypedef(type_1535, Reflex::Literal("std::vector<KITAPrimaryVertex>::_Tp_alloc_type"))
  .AddTypedef(type_958, Reflex::Literal("std::vector<KITAPrimaryVertex>::value_type"))
  .AddTypedef(type_3434, Reflex::Literal("std::vector<KITAPrimaryVertex>::pointer"))
  .AddTypedef(type_3436, Reflex::Literal("std::vector<KITAPrimaryVertex>::const_pointer"))
  .AddTypedef(type_3438, Reflex::Literal("std::vector<KITAPrimaryVertex>::reference"))
  .AddTypedef(type_3440, Reflex::Literal("std::vector<KITAPrimaryVertex>::const_reference"))
  .AddTypedef(type_2182, Reflex::Literal("std::vector<KITAPrimaryVertex>::iterator"))
  .AddTypedef(type_2183, Reflex::Literal("std::vector<KITAPrimaryVertex>::const_iterator"))
  .AddTypedef(type_1663, Reflex::Literal("std::vector<KITAPrimaryVertex>::const_reverse_iterator"))
  .AddTypedef(type_1664, Reflex::Literal("std::vector<KITAPrimaryVertex>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAPrimaryVertex>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAPrimaryVertex>::difference_type"))
  .AddTypedef(type_1535, Reflex::Literal("std::vector<KITAPrimaryVertex>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_3449, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8292), Reflex::Literal("vector"), constructor_3450, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_3440, type_8292), Reflex::Literal("vector"), constructor_3451, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8293), Reflex::Literal("vector"), constructor_3452, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_3453, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1167, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x31, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x32, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAPrimaryVertex__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAPrimaryVertex,std::allocator<KITAPrimaryVertex> > -------------------
void __std__vector_KITAPrimaryVertex__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAPrimaryVertex,std::allocator<KITAPrimaryVertex> > -------------------
void __std__vector_KITAPrimaryVertex__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8294, type_8293), Reflex::Literal("operator="), operator_3454, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_3440), Reflex::Literal("assign"), method_3455, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2182), Reflex::Literal("begin"), method_3456, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2183), Reflex::Literal("begin"), method_3457, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2182), Reflex::Literal("end"), method_3458, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2183), Reflex::Literal("end"), method_3459, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_3464, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_3465, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_958), Reflex::Literal("resize"), method_3466, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_3467, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_3468, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_3469, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3438, type_1639), Reflex::Literal("operator[]"), operator_3470, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3440, type_1639), Reflex::Literal("operator[]"), operator_3471, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3438, type_1639), Reflex::Literal("at"), method_3473, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3440, type_1639), Reflex::Literal("at"), method_3474, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3438), Reflex::Literal("front"), method_3475, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3440), Reflex::Literal("front"), method_3476, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3438), Reflex::Literal("back"), method_3477, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3440), Reflex::Literal("back"), method_3478, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3434), Reflex::Literal("data"), method_3479, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3436), Reflex::Literal("data"), method_3480, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_3440), Reflex::Literal("push_back"), method_3481, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_3482, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2182, type_2182, type_3440), Reflex::Literal("insert"), method_3483, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2182, type_1639, type_3440), Reflex::Literal("insert"), method_3484, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2182, type_2182), Reflex::Literal("erase"), method_3485, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2182, type_2182, type_2182), Reflex::Literal("erase"), method_3486, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8294), Reflex::Literal("swap"), method_3487, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_3488, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class KITAGenSingleTopEvent -------------------------------
static void destructor_3650(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAGenSingleTopEvent*)o)->::KITAGenSingleTopEvent::~KITAGenSingleTopEvent)();
}
static  void operator_3651( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAGenSingleTopEvent*)o)->operator=)(*(const ::KITAGenSingleTopEvent*)arg[0]);
  else   (((::KITAGenSingleTopEvent*)o)->operator=)(*(const ::KITAGenSingleTopEvent*)arg[0]);
}

static void constructor_3652( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenSingleTopEvent(*(const ::KITAGenSingleTopEvent*)arg[0]);
  else ::new(mem) ::KITAGenSingleTopEvent(*(const ::KITAGenSingleTopEvent*)arg[0]);
}

static void constructor_3653( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenSingleTopEvent();
  else ::new(mem) ::KITAGenSingleTopEvent();
}

static void method_newdel_1205( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAGenSingleTopEvent >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAGenSingleTopEvent >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAGenSingleTopEvent >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAGenSingleTopEvent >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAGenSingleTopEvent >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAGenSingleTopEvent -------------------------------
void __KITAGenSingleTopEvent_db_datamem(Reflex::Class*);
void __KITAGenSingleTopEvent_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAGenSingleTopEvent_datamem_bld(&__KITAGenSingleTopEvent_db_datamem);
Reflex::GenreflexMemberBuilder __KITAGenSingleTopEvent_funcmem_bld(&__KITAGenSingleTopEvent_db_funcmem);
void __KITAGenSingleTopEvent_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAGenSingleTopEvent"), typeid(::KITAGenSingleTopEvent), sizeof(::KITAGenSingleTopEvent), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAGenSingleTopEvent"), destructor_3650, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8364, type_8365), Reflex::Literal("operator="), operator_3651, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8365), Reflex::Literal("KITAGenSingleTopEvent"), constructor_3652, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAGenSingleTopEvent"), constructor_3653, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1205, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAGenSingleTopEvent_datamem_bld);
}

//------Delayed data member builder for class KITAGenSingleTopEvent -------------------
void __KITAGenSingleTopEvent_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_516, Reflex::Literal("q1"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, q1), ::Reflex::PUBLIC)
  .AddDataMember(type_516, Reflex::Literal("q2"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, q2), ::Reflex::PUBLIC)
  .AddDataMember(type_516, Reflex::Literal("secb"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, secb), ::Reflex::PUBLIC)
  .AddDataMember(type_516, Reflex::Literal("top"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, top), ::Reflex::PUBLIC)
  .AddDataMember(type_516, Reflex::Literal("Wtop"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, Wtop), ::Reflex::PUBLIC)
  .AddDataMember(type_516, Reflex::Literal("btop"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, btop), ::Reflex::PUBLIC)
  .AddDataMember(type_516, Reflex::Literal("lep"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, lep), ::Reflex::PUBLIC)
  .AddDataMember(type_516, Reflex::Literal("nu"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, nu), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("DecChan"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, DecChan), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("procID"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, procID), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("mcLepID"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, mcLepID), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("btop_id"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, btop_id), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("secb_id"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, secb_id), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("eventWeight"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, eventWeight), ::Reflex::PUBLIC)
  .AddDataMember(type_394, Reflex::Literal("QLep_gen"), OffsetOf(__shadow__::__KITAGenSingleTopEvent, QLep_gen), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAGenSingleTopEvent -------------------
void __KITAGenSingleTopEvent_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAGenTopEvent -------------------------------
static void destructor_3667(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAGenTopEvent*)o)->::KITAGenTopEvent::~KITAGenTopEvent)();
}
static  void operator_3668( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAGenTopEvent*)o)->operator=)(*(const ::KITAGenTopEvent*)arg[0]);
  else   (((::KITAGenTopEvent*)o)->operator=)(*(const ::KITAGenTopEvent*)arg[0]);
}

static void constructor_3669( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenTopEvent(*(const ::KITAGenTopEvent*)arg[0]);
  else ::new(mem) ::KITAGenTopEvent(*(const ::KITAGenTopEvent*)arg[0]);
}

static void constructor_3670( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenTopEvent();
  else ::new(mem) ::KITAGenTopEvent();
}

static void method_newdel_1271( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAGenTopEvent >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAGenTopEvent >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAGenTopEvent >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAGenTopEvent >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAGenTopEvent >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAGenTopEvent -------------------------------
void __KITAGenTopEvent_db_datamem(Reflex::Class*);
void __KITAGenTopEvent_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAGenTopEvent_datamem_bld(&__KITAGenTopEvent_db_datamem);
Reflex::GenreflexMemberBuilder __KITAGenTopEvent_funcmem_bld(&__KITAGenTopEvent_db_funcmem);
void __KITAGenTopEvent_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAGenTopEvent"), typeid(::KITAGenTopEvent), sizeof(::KITAGenTopEvent), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAGenTopEvent"), destructor_3667, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8366, type_8367), Reflex::Literal("operator="), operator_3668, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8367), Reflex::Literal("KITAGenTopEvent"), constructor_3669, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAGenTopEvent"), constructor_3670, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1271, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAGenTopEvent_datamem_bld);
}

//------Delayed data member builder for class KITAGenTopEvent -------------------
void __KITAGenTopEvent_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_351, Reflex::Literal("quarks"), OffsetOf(__shadow__::__KITAGenTopEvent, quarks), ::Reflex::PUBLIC)
  .AddDataMember(type_351, Reflex::Literal("leptons"), OffsetOf(__shadow__::__KITAGenTopEvent, leptons), ::Reflex::PUBLIC)
  .AddDataMember(type_351, Reflex::Literal("neutrinos"), OffsetOf(__shadow__::__KITAGenTopEvent, neutrinos), ::Reflex::PUBLIC)
  .AddDataMember(type_351, Reflex::Literal("tops"), OffsetOf(__shadow__::__KITAGenTopEvent, tops), ::Reflex::PUBLIC)
  .AddDataMember(type_351, Reflex::Literal("ws"), OffsetOf(__shadow__::__KITAGenTopEvent, ws), ::Reflex::PUBLIC)
  .AddDataMember(type_351, Reflex::Literal("initialpartons"), OffsetOf(__shadow__::__KITAGenTopEvent, initialpartons), ::Reflex::PUBLIC)
  .AddDataMember(type_351, Reflex::Literal("topbottoms"), OffsetOf(__shadow__::__KITAGenTopEvent, topbottoms), ::Reflex::PUBLIC)
  .AddDataMember(type_351, Reflex::Literal("higgs"), OffsetOf(__shadow__::__KITAGenTopEvent, higgs), ::Reflex::PUBLIC)
  .AddDataMember(type_351, Reflex::Literal("higgsbottoms"), OffsetOf(__shadow__::__KITAGenTopEvent, higgsbottoms), ::Reflex::PUBLIC)
  .AddDataMember(type_351, Reflex::Literal("otherbottoms"), OffsetOf(__shadow__::__KITAGenTopEvent, otherbottoms), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("DecChan"), OffsetOf(__shadow__::__KITAGenTopEvent, DecChan), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("ProdProc"), OffsetOf(__shadow__::__KITAGenTopEvent, ProdProc), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAGenTopEvent -------------------
void __KITAGenTopEvent_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAGenMet -------------------------------
static void destructor_3671(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAGenMet*)o)->::KITAGenMet::~KITAGenMet)();
}
static  void operator_3672( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAGenMet*)o)->operator=)(*(const ::KITAGenMet*)arg[0]);
  else   (((::KITAGenMet*)o)->operator=)(*(const ::KITAGenMet*)arg[0]);
}

static void constructor_3673( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenMet(*(const ::KITAGenMet*)arg[0]);
  else ::new(mem) ::KITAGenMet(*(const ::KITAGenMet*)arg[0]);
}

static void constructor_3674( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenMet();
  else ::new(mem) ::KITAGenMet();
}

static void method_newdel_1289( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAGenMet >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAGenMet >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAGenMet >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAGenMet >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAGenMet >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x36( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("KITAObject")), ::Reflex::BaseOffset< ::KITAGenMet,::KITAObject >::Get(),::Reflex::PUBLIC), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

//------Dictionary for class KITAGenMet -------------------------------
void __KITAGenMet_db_datamem(Reflex::Class*);
void __KITAGenMet_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAGenMet_datamem_bld(&__KITAGenMet_db_datamem);
Reflex::GenreflexMemberBuilder __KITAGenMet_funcmem_bld(&__KITAGenMet_db_funcmem);
void __KITAGenMet_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAGenMet"), typeid(::KITAGenMet), sizeof(::KITAGenMet), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddBase(type_367, ::Reflex::BaseOffset< ::KITAGenMet, ::KITAObject >::Get(), ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAGenMet"), destructor_3671, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8368, type_8369), Reflex::Literal("operator="), operator_3672, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8369), Reflex::Literal("KITAGenMet"), constructor_3673, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAGenMet"), constructor_3674, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1289, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x36, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL);
}

//------Delayed data member builder for class KITAGenMet -------------------
void __KITAGenMet_db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class KITAGenMet -------------------
void __KITAGenMet_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAGenInfo -------------------------------
static void destructor_3688(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAGenInfo*)o)->::KITAGenInfo::~KITAGenInfo)();
}
static  void operator_3689( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAGenInfo*)o)->operator=)(*(const ::KITAGenInfo*)arg[0]);
  else   (((::KITAGenInfo*)o)->operator=)(*(const ::KITAGenInfo*)arg[0]);
}

static void constructor_3690( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenInfo(*(const ::KITAGenInfo*)arg[0]);
  else ::new(mem) ::KITAGenInfo(*(const ::KITAGenInfo*)arg[0]);
}

static void constructor_3691( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenInfo();
  else ::new(mem) ::KITAGenInfo();
}

static void method_newdel_1300( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAGenInfo >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAGenInfo >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAGenInfo >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAGenInfo >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAGenInfo >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAGenInfo -------------------------------
void __KITAGenInfo_db_datamem(Reflex::Class*);
void __KITAGenInfo_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAGenInfo_datamem_bld(&__KITAGenInfo_db_datamem);
Reflex::GenreflexMemberBuilder __KITAGenInfo_funcmem_bld(&__KITAGenInfo_db_funcmem);
void __KITAGenInfo_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAGenInfo"), typeid(::KITAGenInfo), sizeof(::KITAGenInfo), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAGenInfo"), destructor_3688, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8370, type_8371), Reflex::Literal("operator="), operator_3689, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8371), Reflex::Literal("KITAGenInfo"), constructor_3690, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAGenInfo"), constructor_3691, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1300, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAGenInfo_datamem_bld);
}

//------Delayed data member builder for class KITAGenInfo -------------------
void __KITAGenInfo_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_1422, Reflex::Literal("binningValues"), OffsetOf(__shadow__::__KITAGenInfo, binningValues), ::Reflex::PUBLIC)
  .AddDataMember(type_1422, Reflex::Literal("weights"), OffsetOf(__shadow__::__KITAGenInfo, weights), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("id1"), OffsetOf(__shadow__::__KITAGenInfo, id1), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("id2"), OffsetOf(__shadow__::__KITAGenInfo, id2), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("x1"), OffsetOf(__shadow__::__KITAGenInfo, x1), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("x2"), OffsetOf(__shadow__::__KITAGenInfo, x2), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("scale"), OffsetOf(__shadow__::__KITAGenInfo, scale), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pdf1"), OffsetOf(__shadow__::__KITAGenInfo, pdf1), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("pdf2"), OffsetOf(__shadow__::__KITAGenInfo, pdf2), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("pileup_intime"), OffsetOf(__shadow__::__KITAGenInfo, pileup_intime), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("pileup_ootbefore"), OffsetOf(__shadow__::__KITAGenInfo, pileup_ootbefore), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("pileup_ootafter"), OffsetOf(__shadow__::__KITAGenInfo, pileup_ootafter), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("poisson_mean"), OffsetOf(__shadow__::__KITAGenInfo, poisson_mean), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAGenInfo -------------------
void __KITAGenInfo_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITAGenTprime -------------------------------
static void destructor_3711(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAGenTprime*)o)->::KITAGenTprime::~KITAGenTprime)();
}
static  void operator_3712( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAGenTprime*)o)->operator=)(*(const ::KITAGenTprime*)arg[0]);
  else   (((::KITAGenTprime*)o)->operator=)(*(const ::KITAGenTprime*)arg[0]);
}

static void constructor_3713( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenTprime(*(const ::KITAGenTprime*)arg[0]);
  else ::new(mem) ::KITAGenTprime(*(const ::KITAGenTprime*)arg[0]);
}

static void constructor_3714( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAGenTprime();
  else ::new(mem) ::KITAGenTprime();
}

static void method_newdel_1316( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAGenTprime >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAGenTprime >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAGenTprime >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAGenTprime >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAGenTprime >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITAGenTprime -------------------------------
void __KITAGenTprime_db_datamem(Reflex::Class*);
void __KITAGenTprime_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAGenTprime_datamem_bld(&__KITAGenTprime_db_datamem);
Reflex::GenreflexMemberBuilder __KITAGenTprime_funcmem_bld(&__KITAGenTprime_db_funcmem);
void __KITAGenTprime_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAGenTprime"), typeid(::KITAGenTprime), sizeof(::KITAGenTprime), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITAGenTprime"), destructor_3711, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8372, type_8373), Reflex::Literal("operator="), operator_3712, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8373), Reflex::Literal("KITAGenTprime"), constructor_3713, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITAGenTprime"), constructor_3714, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1316, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAGenTprime_datamem_bld);
}

//------Delayed data member builder for class KITAGenTprime -------------------
void __KITAGenTprime_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_729, Reflex::Literal("p4Parton1_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4Parton1_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4Parton2_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4Parton2_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4Top_lep_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4Top_lep_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4Top_had_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4Top_had_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4Lep_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4Lep_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4Nu_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4Nu_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4W_lep_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4W_lep_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4B_lep_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4B_lep_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4Q1_had_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4Q1_had_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4Q2_had_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4Q2_had_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4W_had_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4W_had_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_729, Reflex::Literal("p4B_had_gen"), OffsetOf(__shadow__::__KITAGenTprime, p4B_had_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("QLep_gen"), OffsetOf(__shadow__::__KITAGenTprime, QLep_gen), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("ProdProc"), OffsetOf(__shadow__::__KITAGenTprime, ProdProc), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("DecChan"), OffsetOf(__shadow__::__KITAGenTprime, DecChan), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("mc_LepID"), OffsetOf(__shadow__::__KITAGenTprime, mc_LepID), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("Q1id"), OffsetOf(__shadow__::__KITAGenTprime, Q1id), ::Reflex::PUBLIC)
  .AddDataMember(type_31, Reflex::Literal("Q2id"), OffsetOf(__shadow__::__KITAGenTprime, Q2id), ::Reflex::PUBLIC)
  .AddDataMember(type_8252, Reflex::Literal("ptype"), OffsetOf(__shadow__::__KITAGenTprime, ptype), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITAGenTprime -------------------
void __KITAGenTprime_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class KITATriggerObject -------------------------------
static void destructor_8264(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAHlt::KITATriggerObject*)o)->::KITAHlt::KITATriggerObject::~KITATriggerObject)();
}
static  void operator_8265( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAHlt::KITATriggerObject*)o)->operator=)(*(const ::KITAHlt::KITATriggerObject*)arg[0]);
  else   (((::KITAHlt::KITATriggerObject*)o)->operator=)(*(const ::KITAHlt::KITATriggerObject*)arg[0]);
}

static void constructor_8266( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAHlt::KITATriggerObject(*(const ::KITAHlt::KITATriggerObject*)arg[0]);
  else ::new(mem) ::KITAHlt::KITATriggerObject(*(const ::KITAHlt::KITATriggerObject*)arg[0]);
}

static void constructor_8267( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAHlt::KITATriggerObject();
  else ::new(mem) ::KITAHlt::KITATriggerObject();
}

static void method_newdel_3274( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAHlt::KITATriggerObject >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAHlt::KITATriggerObject >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAHlt::KITATriggerObject >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAHlt::KITATriggerObject >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAHlt::KITATriggerObject >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class KITATriggerObject -------------------------------
void __KITAHlt__KITATriggerObject_db_datamem(Reflex::Class*);
void __KITAHlt__KITATriggerObject_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAHlt__KITATriggerObject_datamem_bld(&__KITAHlt__KITATriggerObject_db_datamem);
Reflex::GenreflexMemberBuilder __KITAHlt__KITATriggerObject_funcmem_bld(&__KITAHlt__KITATriggerObject_db_funcmem);
void __KITAHlt__KITATriggerObject_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAHlt::KITATriggerObject"), typeid(::KITAHlt::KITATriggerObject), sizeof(::KITAHlt::KITATriggerObject), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::STRUCT)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~KITATriggerObject"), destructor_8264, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3931, type_3933), Reflex::Literal("operator="), operator_8265, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_3933), Reflex::Literal("KITATriggerObject"), constructor_8266, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("KITATriggerObject"), constructor_8267, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_3274, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAHlt__KITATriggerObject_datamem_bld);
}

//------Delayed data member builder for class KITATriggerObject -------------------
void __KITAHlt__KITATriggerObject_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_729, Reflex::Literal("vec"), OffsetOf(__shadow__::__KITAHlt__KITATriggerObject, vec), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class KITATriggerObject -------------------
void __KITAHlt__KITATriggerObject_db_funcmem(Reflex::Class*) {

}
//------Stub functions for class vector<KITAHlt::KITATriggerObject,std::allocator<KITAHlt::KITATriggerObject> > -------------------------------
static void constructor_3942( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>();
  else ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>();
}

static void constructor_3943( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>(*(const ::std::allocator<KITAHlt::KITATriggerObject>*)arg[0]);
  else ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>(*(const ::std::allocator<KITAHlt::KITATriggerObject>*)arg[0]);
}

static void constructor_3944( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>(*(::std::size_t*)arg[0],
      *(const ::KITAHlt::KITATriggerObject*)arg[1]);
  else ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>(*(::std::size_t*)arg[0],
      *(const ::KITAHlt::KITATriggerObject*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>(*(::std::size_t*)arg[0],
      *(const ::KITAHlt::KITATriggerObject*)arg[1],
      *(const ::std::allocator<KITAHlt::KITATriggerObject>*)arg[2]);
  else ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>(*(::std::size_t*)arg[0],
      *(const ::KITAHlt::KITATriggerObject*)arg[1],
      *(const ::std::allocator<KITAHlt::KITATriggerObject>*)arg[2]);
  }
}

static void constructor_3945( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>(*(const ::std::vector<KITAHlt::KITATriggerObject>*)arg[0]);
  else ::new(mem) ::std::vector<KITAHlt::KITATriggerObject>(*(const ::std::vector<KITAHlt::KITATriggerObject>*)arg[0]);
}

static void destructor_3946(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAHlt::KITATriggerObject>*)o)->::std::vector<KITAHlt::KITATriggerObject>::~vector)();
}
static  void operator_3947( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAHlt::KITATriggerObject>*)o)->operator=)(*(const ::std::vector<KITAHlt::KITATriggerObject>*)arg[0]);
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->operator=)(*(const ::std::vector<KITAHlt::KITATriggerObject>*)arg[0]);
}

static  void method_3948( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAHlt::KITATriggerObject>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAHlt::KITATriggerObject*)arg[1]);
}

static  void method_3949( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >)((((::std::vector<KITAHlt::KITATriggerObject>*)o)->begin)());
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->begin)();
}

static  void method_3950( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >)((((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->begin)());
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->begin)();
}

static  void method_3951( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >)((((::std::vector<KITAHlt::KITATriggerObject>*)o)->end)());
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->end)();
}

static  void method_3952( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >)((((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->end)());
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->end)();
}

static  void method_3957( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->size)());
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->size)();
}

static  void method_3958( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->max_size)());
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->max_size)();
}

static  void method_3959( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAHlt::KITATriggerObject>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAHlt::KITATriggerObject>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAHlt::KITATriggerObject*)arg[1]);
  }
}

static  void method_3960( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->capacity)());
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->capacity)();
}

static  void method_3961( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->empty)());
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->empty)();
}

static  void method_3962( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAHlt::KITATriggerObject>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_3963( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAHlt::KITATriggerObject>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_3964( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_3966( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAHlt::KITATriggerObject>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_3967( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_3968( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAHlt::KITATriggerObject>*)o)->front)();
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->front)();
}

static  void method_3969( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->front)();
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->front)();
}

static  void method_3970( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAHlt::KITATriggerObject>*)o)->back)();
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->back)();
}

static  void method_3971( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->back)();
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->back)();
}

static  void method_3972( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAHlt::KITATriggerObject>*)o)->data)());
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->data)();
}

static  void method_3973( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->data)());
  else   (((const ::std::vector<KITAHlt::KITATriggerObject>*)o)->data)();
}

static  void method_3974( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAHlt::KITATriggerObject>*)o)->push_back)(*(const ::KITAHlt::KITATriggerObject*)arg[0]);
}

static  void method_3975( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAHlt::KITATriggerObject>*)o)->pop_back)();
}

static  void method_3976( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >)((((::std::vector<KITAHlt::KITATriggerObject>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >*)arg[0],
    *(const ::KITAHlt::KITATriggerObject*)arg[1]));
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >*)arg[0],
    *(const ::KITAHlt::KITATriggerObject*)arg[1]);
}

static  void method_3977( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAHlt::KITATriggerObject>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAHlt::KITATriggerObject*)arg[2]);
}

static  void method_3978( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >)((((::std::vector<KITAHlt::KITATriggerObject>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >*)arg[0]));
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >*)arg[0]);
}

static  void method_3979( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >)((((::std::vector<KITAHlt::KITATriggerObject>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >*)arg[1]));
  else   (((::std::vector<KITAHlt::KITATriggerObject>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAHlt::KITATriggerObject*,std::vector<KITAHlt::KITATriggerObject> >*)arg[1]);
}

static  void method_3980( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAHlt::KITATriggerObject>*)o)->swap)(*(::std::vector<KITAHlt::KITATriggerObject>*)arg[0]);
}

static  void method_3981( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAHlt::KITATriggerObject>*)o)->clear)();
}

static void method_newdel_1413( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAHlt::KITATriggerObject> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAHlt::KITATriggerObject> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAHlt::KITATriggerObject> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAHlt::KITATriggerObject> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAHlt::KITATriggerObject> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x41( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAHlt::KITATriggerObject,std::allocator<KITAHlt::KITATriggerObject> >")), ::Reflex::BaseOffset< ::std::vector<KITAHlt::KITATriggerObject>,::std::_Vector_base<KITAHlt::KITATriggerObject,std::allocator<KITAHlt::KITATriggerObject> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x42( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAHlt::KITATriggerObject> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAHlt::KITATriggerObject> >::Generate();
}

//------Dictionary for class vector<KITAHlt::KITATriggerObject,std::allocator<KITAHlt::KITATriggerObject> > -------------------------------
void __std__vector_KITAHlt__KITATriggerObject__db_datamem(Reflex::Class*);
void __std__vector_KITAHlt__KITATriggerObject__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAHlt__KITATriggerObject__datamem_bld(&__std__vector_KITAHlt__KITATriggerObject__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAHlt__KITATriggerObject__funcmem_bld(&__std__vector_KITAHlt__KITATriggerObject__db_funcmem);
void __std__vector_KITAHlt__KITATriggerObject__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>"), typeid(::std::vector<KITAHlt::KITATriggerObject>), sizeof(::std::vector<KITAHlt::KITATriggerObject>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddBase(type_1749, ::Reflex::BaseOffset< ::std::vector<KITAHlt::KITATriggerObject>, ::std::_Vector_base<KITAHlt::KITATriggerObject,std::allocator<KITAHlt::KITATriggerObject> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_3274, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::_Alloc_value_type"))
  .AddTypedef(type_1749, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::_Base"))
  .AddTypedef(type_1527, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::_Tp_alloc_type"))
  .AddTypedef(type_3274, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::value_type"))
  .AddTypedef(type_3927, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::pointer"))
  .AddTypedef(type_3929, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::const_pointer"))
  .AddTypedef(type_3931, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::reference"))
  .AddTypedef(type_3933, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::const_reference"))
  .AddTypedef(type_2176, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::iterator"))
  .AddTypedef(type_2177, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::const_iterator"))
  .AddTypedef(type_1651, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::const_reverse_iterator"))
  .AddTypedef(type_1652, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::difference_type"))
  .AddTypedef(type_1527, Reflex::Literal("std::vector<KITAHlt::KITATriggerObject>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_3942, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8433), Reflex::Literal("vector"), constructor_3943, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_3933, type_8433), Reflex::Literal("vector"), constructor_3944, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8434), Reflex::Literal("vector"), constructor_3945, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_3946, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1413, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x41, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x42, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAHlt__KITATriggerObject__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAHlt::KITATriggerObject,std::allocator<KITAHlt::KITATriggerObject> > -------------------
void __std__vector_KITAHlt__KITATriggerObject__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAHlt::KITATriggerObject,std::allocator<KITAHlt::KITATriggerObject> > -------------------
void __std__vector_KITAHlt__KITATriggerObject__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8435, type_8434), Reflex::Literal("operator="), operator_3947, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_3933), Reflex::Literal("assign"), method_3948, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2176), Reflex::Literal("begin"), method_3949, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2177), Reflex::Literal("begin"), method_3950, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2176), Reflex::Literal("end"), method_3951, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2177), Reflex::Literal("end"), method_3952, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_3957, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_3958, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_3274), Reflex::Literal("resize"), method_3959, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_3960, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_3961, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_3962, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3931, type_1639), Reflex::Literal("operator[]"), operator_3963, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3933, type_1639), Reflex::Literal("operator[]"), operator_3964, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3931, type_1639), Reflex::Literal("at"), method_3966, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3933, type_1639), Reflex::Literal("at"), method_3967, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3931), Reflex::Literal("front"), method_3968, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3933), Reflex::Literal("front"), method_3969, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3931), Reflex::Literal("back"), method_3970, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3933), Reflex::Literal("back"), method_3971, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3927), Reflex::Literal("data"), method_3972, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3929), Reflex::Literal("data"), method_3973, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_3933), Reflex::Literal("push_back"), method_3974, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_3975, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2176, type_2176, type_3933), Reflex::Literal("insert"), method_3976, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2176, type_1639, type_3933), Reflex::Literal("insert"), method_3977, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2176, type_2176), Reflex::Literal("erase"), method_3978, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2176, type_2176, type_2176), Reflex::Literal("erase"), method_3979, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8435), Reflex::Literal("swap"), method_3980, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_3981, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class vector<KITAJet_TrackbTagInfos,std::allocator<KITAJet_TrackbTagInfos> > -------------------------------
static void constructor_4007( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>();
  else ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>();
}

static void constructor_4008( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>(*(const ::std::allocator<KITAJet_TrackbTagInfos>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>(*(const ::std::allocator<KITAJet_TrackbTagInfos>*)arg[0]);
}

static void constructor_4009( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_TrackbTagInfos*)arg[1]);
  else ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_TrackbTagInfos*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_TrackbTagInfos*)arg[1],
      *(const ::std::allocator<KITAJet_TrackbTagInfos>*)arg[2]);
  else ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_TrackbTagInfos*)arg[1],
      *(const ::std::allocator<KITAJet_TrackbTagInfos>*)arg[2]);
  }
}

static void constructor_4010( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>(*(const ::std::vector<KITAJet_TrackbTagInfos>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_TrackbTagInfos>(*(const ::std::vector<KITAJet_TrackbTagInfos>*)arg[0]);
}

static void destructor_4011(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAJet_TrackbTagInfos>*)o)->::std::vector<KITAJet_TrackbTagInfos>::~vector)();
}
static  void operator_4012( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_TrackbTagInfos>*)o)->operator=)(*(const ::std::vector<KITAJet_TrackbTagInfos>*)arg[0]);
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->operator=)(*(const ::std::vector<KITAJet_TrackbTagInfos>*)arg[0]);
}

static  void method_4013( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_TrackbTagInfos>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAJet_TrackbTagInfos*)arg[1]);
}

static  void method_4014( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >)((((::std::vector<KITAJet_TrackbTagInfos>*)o)->begin)());
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->begin)();
}

static  void method_4015( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >)((((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->begin)());
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->begin)();
}

static  void method_4016( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >)((((::std::vector<KITAJet_TrackbTagInfos>*)o)->end)());
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->end)();
}

static  void method_4017( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >)((((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->end)());
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->end)();
}

static  void method_4022( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->size)());
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->size)();
}

static  void method_4023( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->max_size)());
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->max_size)();
}

static  void method_4024( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAJet_TrackbTagInfos>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAJet_TrackbTagInfos>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAJet_TrackbTagInfos*)arg[1]);
  }
}

static  void method_4025( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->capacity)());
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->capacity)();
}

static  void method_4026( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->empty)());
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->empty)();
}

static  void method_4027( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_TrackbTagInfos>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_4028( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_TrackbTagInfos>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_4029( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_4031( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_TrackbTagInfos>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_4032( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_4033( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_TrackbTagInfos>*)o)->front)();
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->front)();
}

static  void method_4034( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->front)();
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->front)();
}

static  void method_4035( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_TrackbTagInfos>*)o)->back)();
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->back)();
}

static  void method_4036( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->back)();
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->back)();
}

static  void method_4037( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAJet_TrackbTagInfos>*)o)->data)());
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->data)();
}

static  void method_4038( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->data)());
  else   (((const ::std::vector<KITAJet_TrackbTagInfos>*)o)->data)();
}

static  void method_4039( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_TrackbTagInfos>*)o)->push_back)(*(const ::KITAJet_TrackbTagInfos*)arg[0]);
}

static  void method_4040( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJet_TrackbTagInfos>*)o)->pop_back)();
}

static  void method_4041( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >)((((::std::vector<KITAJet_TrackbTagInfos>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >*)arg[0],
    *(const ::KITAJet_TrackbTagInfos*)arg[1]));
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >*)arg[0],
    *(const ::KITAJet_TrackbTagInfos*)arg[1]);
}

static  void method_4042( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_TrackbTagInfos>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAJet_TrackbTagInfos*)arg[2]);
}

static  void method_4043( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >)((((::std::vector<KITAJet_TrackbTagInfos>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >*)arg[0]));
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >*)arg[0]);
}

static  void method_4044( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >)((((::std::vector<KITAJet_TrackbTagInfos>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >*)arg[1]));
  else   (((::std::vector<KITAJet_TrackbTagInfos>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJet_TrackbTagInfos*,std::vector<KITAJet_TrackbTagInfos> >*)arg[1]);
}

static  void method_4045( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_TrackbTagInfos>*)o)->swap)(*(::std::vector<KITAJet_TrackbTagInfos>*)arg[0]);
}

static  void method_4046( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJet_TrackbTagInfos>*)o)->clear)();
}

static void method_newdel_1414( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_TrackbTagInfos> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_TrackbTagInfos> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_TrackbTagInfos> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_TrackbTagInfos> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_TrackbTagInfos> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x44( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJet_TrackbTagInfos,std::allocator<KITAJet_TrackbTagInfos> >")), ::Reflex::BaseOffset< ::std::vector<KITAJet_TrackbTagInfos>,::std::_Vector_base<KITAJet_TrackbTagInfos,std::allocator<KITAJet_TrackbTagInfos> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x45( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAJet_TrackbTagInfos> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAJet_TrackbTagInfos> >::Generate();
}

//------Dictionary for class vector<KITAJet_TrackbTagInfos,std::allocator<KITAJet_TrackbTagInfos> > -------------------------------
void __std__vector_KITAJet_TrackbTagInfos__db_datamem(Reflex::Class*);
void __std__vector_KITAJet_TrackbTagInfos__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAJet_TrackbTagInfos__datamem_bld(&__std__vector_KITAJet_TrackbTagInfos__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAJet_TrackbTagInfos__funcmem_bld(&__std__vector_KITAJet_TrackbTagInfos__db_funcmem);
void __std__vector_KITAJet_TrackbTagInfos__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>"), typeid(::std::vector<KITAJet_TrackbTagInfos>), sizeof(::std::vector<KITAJet_TrackbTagInfos>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddBase(type_1762, ::Reflex::BaseOffset< ::std::vector<KITAJet_TrackbTagInfos>, ::std::_Vector_base<KITAJet_TrackbTagInfos,std::allocator<KITAJet_TrackbTagInfos> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_1162, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::_Alloc_value_type"))
  .AddTypedef(type_1762, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::_Base"))
  .AddTypedef(type_1538, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::_Tp_alloc_type"))
  .AddTypedef(type_1162, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::value_type"))
  .AddTypedef(type_3992, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::pointer"))
  .AddTypedef(type_3994, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::const_pointer"))
  .AddTypedef(type_3996, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::reference"))
  .AddTypedef(type_3998, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::const_reference"))
  .AddTypedef(type_2200, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::iterator"))
  .AddTypedef(type_2201, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::const_iterator"))
  .AddTypedef(type_1681, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::const_reverse_iterator"))
  .AddTypedef(type_1682, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::difference_type"))
  .AddTypedef(type_1538, Reflex::Literal("std::vector<KITAJet_TrackbTagInfos>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_4007, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8437), Reflex::Literal("vector"), constructor_4008, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_3998, type_8437), Reflex::Literal("vector"), constructor_4009, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8438), Reflex::Literal("vector"), constructor_4010, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_4011, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1414, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x44, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x45, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAJet_TrackbTagInfos__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAJet_TrackbTagInfos,std::allocator<KITAJet_TrackbTagInfos> > -------------------
void __std__vector_KITAJet_TrackbTagInfos__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAJet_TrackbTagInfos,std::allocator<KITAJet_TrackbTagInfos> > -------------------
void __std__vector_KITAJet_TrackbTagInfos__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8439, type_8438), Reflex::Literal("operator="), operator_4012, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_3998), Reflex::Literal("assign"), method_4013, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2200), Reflex::Literal("begin"), method_4014, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2201), Reflex::Literal("begin"), method_4015, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2200), Reflex::Literal("end"), method_4016, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2201), Reflex::Literal("end"), method_4017, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_4022, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_4023, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_1162), Reflex::Literal("resize"), method_4024, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_4025, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_4026, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_4027, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3996, type_1639), Reflex::Literal("operator[]"), operator_4028, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3998, type_1639), Reflex::Literal("operator[]"), operator_4029, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3996, type_1639), Reflex::Literal("at"), method_4031, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3998, type_1639), Reflex::Literal("at"), method_4032, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3996), Reflex::Literal("front"), method_4033, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3998), Reflex::Literal("front"), method_4034, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3996), Reflex::Literal("back"), method_4035, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3998), Reflex::Literal("back"), method_4036, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3992), Reflex::Literal("data"), method_4037, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3994), Reflex::Literal("data"), method_4038, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_3998), Reflex::Literal("push_back"), method_4039, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_4040, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2200, type_2200, type_3998), Reflex::Literal("insert"), method_4041, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2200, type_1639, type_3998), Reflex::Literal("insert"), method_4042, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2200, type_2200), Reflex::Literal("erase"), method_4043, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2200, type_2200, type_2200), Reflex::Literal("erase"), method_4044, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8439), Reflex::Literal("swap"), method_4045, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_4046, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class vector<KITAJet_svBTagInfos,std::allocator<KITAJet_svBTagInfos> > -------------------------------
static void constructor_4072( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_svBTagInfos>();
  else ::new(mem) ::std::vector<KITAJet_svBTagInfos>();
}

static void constructor_4073( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_svBTagInfos>(*(const ::std::allocator<KITAJet_svBTagInfos>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_svBTagInfos>(*(const ::std::allocator<KITAJet_svBTagInfos>*)arg[0]);
}

static void constructor_4074( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_svBTagInfos>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_svBTagInfos>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_svBTagInfos>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_svBTagInfos*)arg[1]);
  else ::new(mem) ::std::vector<KITAJet_svBTagInfos>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_svBTagInfos*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_svBTagInfos>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_svBTagInfos*)arg[1],
      *(const ::std::allocator<KITAJet_svBTagInfos>*)arg[2]);
  else ::new(mem) ::std::vector<KITAJet_svBTagInfos>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_svBTagInfos*)arg[1],
      *(const ::std::allocator<KITAJet_svBTagInfos>*)arg[2]);
  }
}

static void constructor_4075( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_svBTagInfos>(*(const ::std::vector<KITAJet_svBTagInfos>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_svBTagInfos>(*(const ::std::vector<KITAJet_svBTagInfos>*)arg[0]);
}

static void destructor_4076(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAJet_svBTagInfos>*)o)->::std::vector<KITAJet_svBTagInfos>::~vector)();
}
static  void operator_4077( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_svBTagInfos>*)o)->operator=)(*(const ::std::vector<KITAJet_svBTagInfos>*)arg[0]);
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->operator=)(*(const ::std::vector<KITAJet_svBTagInfos>*)arg[0]);
}

static  void method_4078( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_svBTagInfos>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAJet_svBTagInfos*)arg[1]);
}

static  void method_4079( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >)((((::std::vector<KITAJet_svBTagInfos>*)o)->begin)());
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->begin)();
}

static  void method_4080( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >)((((const ::std::vector<KITAJet_svBTagInfos>*)o)->begin)());
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->begin)();
}

static  void method_4081( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >)((((::std::vector<KITAJet_svBTagInfos>*)o)->end)());
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->end)();
}

static  void method_4082( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >)((((const ::std::vector<KITAJet_svBTagInfos>*)o)->end)());
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->end)();
}

static  void method_4087( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_svBTagInfos>*)o)->size)());
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->size)();
}

static  void method_4088( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_svBTagInfos>*)o)->max_size)());
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->max_size)();
}

static  void method_4089( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAJet_svBTagInfos>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAJet_svBTagInfos>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAJet_svBTagInfos*)arg[1]);
  }
}

static  void method_4090( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_svBTagInfos>*)o)->capacity)());
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->capacity)();
}

static  void method_4091( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAJet_svBTagInfos>*)o)->empty)());
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->empty)();
}

static  void method_4092( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_svBTagInfos>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_4093( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_svBTagInfos>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_4094( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_svBTagInfos>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_4096( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_svBTagInfos>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_4097( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_svBTagInfos>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_4098( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_svBTagInfos>*)o)->front)();
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->front)();
}

static  void method_4099( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_svBTagInfos>*)o)->front)();
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->front)();
}

static  void method_4100( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_svBTagInfos>*)o)->back)();
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->back)();
}

static  void method_4101( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_svBTagInfos>*)o)->back)();
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->back)();
}

static  void method_4102( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAJet_svBTagInfos>*)o)->data)());
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->data)();
}

static  void method_4103( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAJet_svBTagInfos>*)o)->data)());
  else   (((const ::std::vector<KITAJet_svBTagInfos>*)o)->data)();
}

static  void method_4104( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_svBTagInfos>*)o)->push_back)(*(const ::KITAJet_svBTagInfos*)arg[0]);
}

static  void method_4105( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJet_svBTagInfos>*)o)->pop_back)();
}

static  void method_4106( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >)((((::std::vector<KITAJet_svBTagInfos>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >*)arg[0],
    *(const ::KITAJet_svBTagInfos*)arg[1]));
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >*)arg[0],
    *(const ::KITAJet_svBTagInfos*)arg[1]);
}

static  void method_4107( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_svBTagInfos>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAJet_svBTagInfos*)arg[2]);
}

static  void method_4108( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >)((((::std::vector<KITAJet_svBTagInfos>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >*)arg[0]));
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >*)arg[0]);
}

static  void method_4109( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >)((((::std::vector<KITAJet_svBTagInfos>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >*)arg[1]));
  else   (((::std::vector<KITAJet_svBTagInfos>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJet_svBTagInfos*,std::vector<KITAJet_svBTagInfos> >*)arg[1]);
}

static  void method_4110( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_svBTagInfos>*)o)->swap)(*(::std::vector<KITAJet_svBTagInfos>*)arg[0]);
}

static  void method_4111( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJet_svBTagInfos>*)o)->clear)();
}

static void method_newdel_1415( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_svBTagInfos> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_svBTagInfos> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_svBTagInfos> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_svBTagInfos> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_svBTagInfos> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x47( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJet_svBTagInfos,std::allocator<KITAJet_svBTagInfos> >")), ::Reflex::BaseOffset< ::std::vector<KITAJet_svBTagInfos>,::std::_Vector_base<KITAJet_svBTagInfos,std::allocator<KITAJet_svBTagInfos> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x48( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAJet_svBTagInfos> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAJet_svBTagInfos> >::Generate();
}

//------Dictionary for class vector<KITAJet_svBTagInfos,std::allocator<KITAJet_svBTagInfos> > -------------------------------
void __std__vector_KITAJet_svBTagInfos__db_datamem(Reflex::Class*);
void __std__vector_KITAJet_svBTagInfos__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAJet_svBTagInfos__datamem_bld(&__std__vector_KITAJet_svBTagInfos__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAJet_svBTagInfos__funcmem_bld(&__std__vector_KITAJet_svBTagInfos__db_funcmem);
void __std__vector_KITAJet_svBTagInfos__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAJet_svBTagInfos>"), typeid(::std::vector<KITAJet_svBTagInfos>), sizeof(::std::vector<KITAJet_svBTagInfos>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddBase(type_1761, ::Reflex::BaseOffset< ::std::vector<KITAJet_svBTagInfos>, ::std::_Vector_base<KITAJet_svBTagInfos,std::allocator<KITAJet_svBTagInfos> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_897, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::_Alloc_value_type"))
  .AddTypedef(type_1761, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::_Base"))
  .AddTypedef(type_1539, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::_Tp_alloc_type"))
  .AddTypedef(type_897, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::value_type"))
  .AddTypedef(type_4057, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::pointer"))
  .AddTypedef(type_4059, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::const_pointer"))
  .AddTypedef(type_4061, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::reference"))
  .AddTypedef(type_4063, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::const_reference"))
  .AddTypedef(type_2198, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::iterator"))
  .AddTypedef(type_2199, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::const_iterator"))
  .AddTypedef(type_1679, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::const_reverse_iterator"))
  .AddTypedef(type_1680, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::difference_type"))
  .AddTypedef(type_1539, Reflex::Literal("std::vector<KITAJet_svBTagInfos>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_4072, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8441), Reflex::Literal("vector"), constructor_4073, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_4063, type_8441), Reflex::Literal("vector"), constructor_4074, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8442), Reflex::Literal("vector"), constructor_4075, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_4076, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1415, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x47, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x48, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAJet_svBTagInfos__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAJet_svBTagInfos,std::allocator<KITAJet_svBTagInfos> > -------------------
void __std__vector_KITAJet_svBTagInfos__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAJet_svBTagInfos,std::allocator<KITAJet_svBTagInfos> > -------------------
void __std__vector_KITAJet_svBTagInfos__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8443, type_8442), Reflex::Literal("operator="), operator_4077, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_4063), Reflex::Literal("assign"), method_4078, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2198), Reflex::Literal("begin"), method_4079, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2199), Reflex::Literal("begin"), method_4080, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2198), Reflex::Literal("end"), method_4081, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2199), Reflex::Literal("end"), method_4082, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_4087, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_4088, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_897), Reflex::Literal("resize"), method_4089, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_4090, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_4091, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_4092, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4061, type_1639), Reflex::Literal("operator[]"), operator_4093, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4063, type_1639), Reflex::Literal("operator[]"), operator_4094, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4061, type_1639), Reflex::Literal("at"), method_4096, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4063, type_1639), Reflex::Literal("at"), method_4097, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4061), Reflex::Literal("front"), method_4098, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4063), Reflex::Literal("front"), method_4099, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4061), Reflex::Literal("back"), method_4100, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4063), Reflex::Literal("back"), method_4101, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4057), Reflex::Literal("data"), method_4102, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4059), Reflex::Literal("data"), method_4103, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_4063), Reflex::Literal("push_back"), method_4104, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_4105, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2198, type_2198, type_4063), Reflex::Literal("insert"), method_4106, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2198, type_1639, type_4063), Reflex::Literal("insert"), method_4107, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2198, type_2198), Reflex::Literal("erase"), method_4108, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2198, type_2198, type_2198), Reflex::Literal("erase"), method_4109, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8443), Reflex::Literal("swap"), method_4110, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_4111, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class vector<KITAJet_CaloVars,std::allocator<KITAJet_CaloVars> > -------------------------------
static void constructor_4137( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_CaloVars>();
  else ::new(mem) ::std::vector<KITAJet_CaloVars>();
}

static void constructor_4138( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_CaloVars>(*(const ::std::allocator<KITAJet_CaloVars>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_CaloVars>(*(const ::std::allocator<KITAJet_CaloVars>*)arg[0]);
}

static void constructor_4139( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_CaloVars>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_CaloVars>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_CaloVars>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_CaloVars*)arg[1]);
  else ::new(mem) ::std::vector<KITAJet_CaloVars>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_CaloVars*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_CaloVars>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_CaloVars*)arg[1],
      *(const ::std::allocator<KITAJet_CaloVars>*)arg[2]);
  else ::new(mem) ::std::vector<KITAJet_CaloVars>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_CaloVars*)arg[1],
      *(const ::std::allocator<KITAJet_CaloVars>*)arg[2]);
  }
}

static void constructor_4140( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_CaloVars>(*(const ::std::vector<KITAJet_CaloVars>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_CaloVars>(*(const ::std::vector<KITAJet_CaloVars>*)arg[0]);
}

static void destructor_4141(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAJet_CaloVars>*)o)->::std::vector<KITAJet_CaloVars>::~vector)();
}
static  void operator_4142( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_CaloVars>*)o)->operator=)(*(const ::std::vector<KITAJet_CaloVars>*)arg[0]);
  else   (((::std::vector<KITAJet_CaloVars>*)o)->operator=)(*(const ::std::vector<KITAJet_CaloVars>*)arg[0]);
}

static  void method_4143( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_CaloVars>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAJet_CaloVars*)arg[1]);
}

static  void method_4144( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >)((((::std::vector<KITAJet_CaloVars>*)o)->begin)());
  else   (((::std::vector<KITAJet_CaloVars>*)o)->begin)();
}

static  void method_4145( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >)((((const ::std::vector<KITAJet_CaloVars>*)o)->begin)());
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->begin)();
}

static  void method_4146( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >)((((::std::vector<KITAJet_CaloVars>*)o)->end)());
  else   (((::std::vector<KITAJet_CaloVars>*)o)->end)();
}

static  void method_4147( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >)((((const ::std::vector<KITAJet_CaloVars>*)o)->end)());
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->end)();
}

static  void method_4152( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_CaloVars>*)o)->size)());
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->size)();
}

static  void method_4153( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_CaloVars>*)o)->max_size)());
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->max_size)();
}

static  void method_4154( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAJet_CaloVars>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAJet_CaloVars>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAJet_CaloVars*)arg[1]);
  }
}

static  void method_4155( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_CaloVars>*)o)->capacity)());
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->capacity)();
}

static  void method_4156( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAJet_CaloVars>*)o)->empty)());
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->empty)();
}

static  void method_4157( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_CaloVars>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_4158( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_CaloVars>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJet_CaloVars>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_4159( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_CaloVars>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_4161( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_CaloVars>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJet_CaloVars>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_4162( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_CaloVars>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_4163( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_CaloVars>*)o)->front)();
  else   (((::std::vector<KITAJet_CaloVars>*)o)->front)();
}

static  void method_4164( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_CaloVars>*)o)->front)();
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->front)();
}

static  void method_4165( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_CaloVars>*)o)->back)();
  else   (((::std::vector<KITAJet_CaloVars>*)o)->back)();
}

static  void method_4166( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_CaloVars>*)o)->back)();
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->back)();
}

static  void method_4167( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAJet_CaloVars>*)o)->data)());
  else   (((::std::vector<KITAJet_CaloVars>*)o)->data)();
}

static  void method_4168( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAJet_CaloVars>*)o)->data)());
  else   (((const ::std::vector<KITAJet_CaloVars>*)o)->data)();
}

static  void method_4169( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_CaloVars>*)o)->push_back)(*(const ::KITAJet_CaloVars*)arg[0]);
}

static  void method_4170( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJet_CaloVars>*)o)->pop_back)();
}

static  void method_4171( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >)((((::std::vector<KITAJet_CaloVars>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >*)arg[0],
    *(const ::KITAJet_CaloVars*)arg[1]));
  else   (((::std::vector<KITAJet_CaloVars>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >*)arg[0],
    *(const ::KITAJet_CaloVars*)arg[1]);
}

static  void method_4172( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_CaloVars>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAJet_CaloVars*)arg[2]);
}

static  void method_4173( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >)((((::std::vector<KITAJet_CaloVars>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >*)arg[0]));
  else   (((::std::vector<KITAJet_CaloVars>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >*)arg[0]);
}

static  void method_4174( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >)((((::std::vector<KITAJet_CaloVars>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >*)arg[1]));
  else   (((::std::vector<KITAJet_CaloVars>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJet_CaloVars*,std::vector<KITAJet_CaloVars> >*)arg[1]);
}

static  void method_4175( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_CaloVars>*)o)->swap)(*(::std::vector<KITAJet_CaloVars>*)arg[0]);
}

static  void method_4176( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJet_CaloVars>*)o)->clear)();
}

static void method_newdel_1416( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_CaloVars> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_CaloVars> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_CaloVars> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_CaloVars> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_CaloVars> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x50( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJet_CaloVars,std::allocator<KITAJet_CaloVars> >")), ::Reflex::BaseOffset< ::std::vector<KITAJet_CaloVars>,::std::_Vector_base<KITAJet_CaloVars,std::allocator<KITAJet_CaloVars> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x51( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAJet_CaloVars> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAJet_CaloVars> >::Generate();
}

//------Dictionary for class vector<KITAJet_CaloVars,std::allocator<KITAJet_CaloVars> > -------------------------------
void __std__vector_KITAJet_CaloVars__db_datamem(Reflex::Class*);
void __std__vector_KITAJet_CaloVars__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAJet_CaloVars__datamem_bld(&__std__vector_KITAJet_CaloVars__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAJet_CaloVars__funcmem_bld(&__std__vector_KITAJet_CaloVars__db_funcmem);
void __std__vector_KITAJet_CaloVars__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAJet_CaloVars>"), typeid(::std::vector<KITAJet_CaloVars>), sizeof(::std::vector<KITAJet_CaloVars>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddBase(type_1764, ::Reflex::BaseOffset< ::std::vector<KITAJet_CaloVars>, ::std::_Vector_base<KITAJet_CaloVars,std::allocator<KITAJet_CaloVars> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_594, Reflex::Literal("std::vector<KITAJet_CaloVars>::_Alloc_value_type"))
  .AddTypedef(type_1764, Reflex::Literal("std::vector<KITAJet_CaloVars>::_Base"))
  .AddTypedef(type_1540, Reflex::Literal("std::vector<KITAJet_CaloVars>::_Tp_alloc_type"))
  .AddTypedef(type_594, Reflex::Literal("std::vector<KITAJet_CaloVars>::value_type"))
  .AddTypedef(type_4122, Reflex::Literal("std::vector<KITAJet_CaloVars>::pointer"))
  .AddTypedef(type_4124, Reflex::Literal("std::vector<KITAJet_CaloVars>::const_pointer"))
  .AddTypedef(type_4126, Reflex::Literal("std::vector<KITAJet_CaloVars>::reference"))
  .AddTypedef(type_4128, Reflex::Literal("std::vector<KITAJet_CaloVars>::const_reference"))
  .AddTypedef(type_2204, Reflex::Literal("std::vector<KITAJet_CaloVars>::iterator"))
  .AddTypedef(type_2205, Reflex::Literal("std::vector<KITAJet_CaloVars>::const_iterator"))
  .AddTypedef(type_1685, Reflex::Literal("std::vector<KITAJet_CaloVars>::const_reverse_iterator"))
  .AddTypedef(type_1686, Reflex::Literal("std::vector<KITAJet_CaloVars>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAJet_CaloVars>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAJet_CaloVars>::difference_type"))
  .AddTypedef(type_1540, Reflex::Literal("std::vector<KITAJet_CaloVars>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_4137, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8445), Reflex::Literal("vector"), constructor_4138, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_4128, type_8445), Reflex::Literal("vector"), constructor_4139, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8446), Reflex::Literal("vector"), constructor_4140, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_4141, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1416, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x50, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x51, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAJet_CaloVars__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAJet_CaloVars,std::allocator<KITAJet_CaloVars> > -------------------
void __std__vector_KITAJet_CaloVars__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAJet_CaloVars,std::allocator<KITAJet_CaloVars> > -------------------
void __std__vector_KITAJet_CaloVars__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8447, type_8446), Reflex::Literal("operator="), operator_4142, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_4128), Reflex::Literal("assign"), method_4143, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2204), Reflex::Literal("begin"), method_4144, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2205), Reflex::Literal("begin"), method_4145, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2204), Reflex::Literal("end"), method_4146, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2205), Reflex::Literal("end"), method_4147, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_4152, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_4153, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_594), Reflex::Literal("resize"), method_4154, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_4155, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_4156, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_4157, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4126, type_1639), Reflex::Literal("operator[]"), operator_4158, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4128, type_1639), Reflex::Literal("operator[]"), operator_4159, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4126, type_1639), Reflex::Literal("at"), method_4161, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4128, type_1639), Reflex::Literal("at"), method_4162, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4126), Reflex::Literal("front"), method_4163, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4128), Reflex::Literal("front"), method_4164, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4126), Reflex::Literal("back"), method_4165, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4128), Reflex::Literal("back"), method_4166, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4122), Reflex::Literal("data"), method_4167, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4124), Reflex::Literal("data"), method_4168, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_4128), Reflex::Literal("push_back"), method_4169, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_4170, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2204, type_2204, type_4128), Reflex::Literal("insert"), method_4171, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2204, type_1639, type_4128), Reflex::Literal("insert"), method_4172, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2204, type_2204), Reflex::Literal("erase"), method_4173, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2204, type_2204, type_2204), Reflex::Literal("erase"), method_4174, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8447), Reflex::Literal("swap"), method_4175, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_4176, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class vector<KITAJet_PFlowVars,std::allocator<KITAJet_PFlowVars> > -------------------------------
static void constructor_4202( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_PFlowVars>();
  else ::new(mem) ::std::vector<KITAJet_PFlowVars>();
}

static void constructor_4203( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_PFlowVars>(*(const ::std::allocator<KITAJet_PFlowVars>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_PFlowVars>(*(const ::std::allocator<KITAJet_PFlowVars>*)arg[0]);
}

static void constructor_4204( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_PFlowVars>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_PFlowVars>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_PFlowVars>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_PFlowVars*)arg[1]);
  else ::new(mem) ::std::vector<KITAJet_PFlowVars>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_PFlowVars*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_PFlowVars>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_PFlowVars*)arg[1],
      *(const ::std::allocator<KITAJet_PFlowVars>*)arg[2]);
  else ::new(mem) ::std::vector<KITAJet_PFlowVars>(*(::std::size_t*)arg[0],
      *(const ::KITAJet_PFlowVars*)arg[1],
      *(const ::std::allocator<KITAJet_PFlowVars>*)arg[2]);
  }
}

static void constructor_4205( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet_PFlowVars>(*(const ::std::vector<KITAJet_PFlowVars>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet_PFlowVars>(*(const ::std::vector<KITAJet_PFlowVars>*)arg[0]);
}

static void destructor_4206(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAJet_PFlowVars>*)o)->::std::vector<KITAJet_PFlowVars>::~vector)();
}
static  void operator_4207( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_PFlowVars>*)o)->operator=)(*(const ::std::vector<KITAJet_PFlowVars>*)arg[0]);
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->operator=)(*(const ::std::vector<KITAJet_PFlowVars>*)arg[0]);
}

static  void method_4208( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_PFlowVars>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAJet_PFlowVars*)arg[1]);
}

static  void method_4209( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >)((((::std::vector<KITAJet_PFlowVars>*)o)->begin)());
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->begin)();
}

static  void method_4210( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >)((((const ::std::vector<KITAJet_PFlowVars>*)o)->begin)());
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->begin)();
}

static  void method_4211( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >)((((::std::vector<KITAJet_PFlowVars>*)o)->end)());
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->end)();
}

static  void method_4212( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >)((((const ::std::vector<KITAJet_PFlowVars>*)o)->end)());
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->end)();
}

static  void method_4217( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_PFlowVars>*)o)->size)());
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->size)();
}

static  void method_4218( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_PFlowVars>*)o)->max_size)());
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->max_size)();
}

static  void method_4219( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAJet_PFlowVars>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAJet_PFlowVars>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAJet_PFlowVars*)arg[1]);
  }
}

static  void method_4220( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet_PFlowVars>*)o)->capacity)());
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->capacity)();
}

static  void method_4221( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAJet_PFlowVars>*)o)->empty)());
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->empty)();
}

static  void method_4222( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_PFlowVars>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_4223( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_PFlowVars>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_4224( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_PFlowVars>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_4226( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_PFlowVars>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_4227( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_PFlowVars>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_4228( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_PFlowVars>*)o)->front)();
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->front)();
}

static  void method_4229( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_PFlowVars>*)o)->front)();
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->front)();
}

static  void method_4230( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet_PFlowVars>*)o)->back)();
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->back)();
}

static  void method_4231( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet_PFlowVars>*)o)->back)();
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->back)();
}

static  void method_4232( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAJet_PFlowVars>*)o)->data)());
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->data)();
}

static  void method_4233( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAJet_PFlowVars>*)o)->data)());
  else   (((const ::std::vector<KITAJet_PFlowVars>*)o)->data)();
}

static  void method_4234( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_PFlowVars>*)o)->push_back)(*(const ::KITAJet_PFlowVars*)arg[0]);
}

static  void method_4235( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJet_PFlowVars>*)o)->pop_back)();
}

static  void method_4236( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >)((((::std::vector<KITAJet_PFlowVars>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >*)arg[0],
    *(const ::KITAJet_PFlowVars*)arg[1]));
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >*)arg[0],
    *(const ::KITAJet_PFlowVars*)arg[1]);
}

static  void method_4237( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_PFlowVars>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAJet_PFlowVars*)arg[2]);
}

static  void method_4238( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >)((((::std::vector<KITAJet_PFlowVars>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >*)arg[0]));
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >*)arg[0]);
}

static  void method_4239( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >)((((::std::vector<KITAJet_PFlowVars>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >*)arg[1]));
  else   (((::std::vector<KITAJet_PFlowVars>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJet_PFlowVars*,std::vector<KITAJet_PFlowVars> >*)arg[1]);
}

static  void method_4240( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet_PFlowVars>*)o)->swap)(*(::std::vector<KITAJet_PFlowVars>*)arg[0]);
}

static  void method_4241( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJet_PFlowVars>*)o)->clear)();
}

static void method_newdel_1417( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_PFlowVars> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_PFlowVars> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_PFlowVars> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_PFlowVars> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet_PFlowVars> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x53( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJet_PFlowVars,std::allocator<KITAJet_PFlowVars> >")), ::Reflex::BaseOffset< ::std::vector<KITAJet_PFlowVars>,::std::_Vector_base<KITAJet_PFlowVars,std::allocator<KITAJet_PFlowVars> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x54( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAJet_PFlowVars> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAJet_PFlowVars> >::Generate();
}

//------Dictionary for class vector<KITAJet_PFlowVars,std::allocator<KITAJet_PFlowVars> > -------------------------------
void __std__vector_KITAJet_PFlowVars__db_datamem(Reflex::Class*);
void __std__vector_KITAJet_PFlowVars__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAJet_PFlowVars__datamem_bld(&__std__vector_KITAJet_PFlowVars__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAJet_PFlowVars__funcmem_bld(&__std__vector_KITAJet_PFlowVars__db_funcmem);
void __std__vector_KITAJet_PFlowVars__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAJet_PFlowVars>"), typeid(::std::vector<KITAJet_PFlowVars>), sizeof(::std::vector<KITAJet_PFlowVars>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddBase(type_1763, ::Reflex::BaseOffset< ::std::vector<KITAJet_PFlowVars>, ::std::_Vector_base<KITAJet_PFlowVars,std::allocator<KITAJet_PFlowVars> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_82, Reflex::Literal("std::vector<KITAJet_PFlowVars>::_Alloc_value_type"))
  .AddTypedef(type_1763, Reflex::Literal("std::vector<KITAJet_PFlowVars>::_Base"))
  .AddTypedef(type_1541, Reflex::Literal("std::vector<KITAJet_PFlowVars>::_Tp_alloc_type"))
  .AddTypedef(type_82, Reflex::Literal("std::vector<KITAJet_PFlowVars>::value_type"))
  .AddTypedef(type_4187, Reflex::Literal("std::vector<KITAJet_PFlowVars>::pointer"))
  .AddTypedef(type_4189, Reflex::Literal("std::vector<KITAJet_PFlowVars>::const_pointer"))
  .AddTypedef(type_4191, Reflex::Literal("std::vector<KITAJet_PFlowVars>::reference"))
  .AddTypedef(type_4193, Reflex::Literal("std::vector<KITAJet_PFlowVars>::const_reference"))
  .AddTypedef(type_2202, Reflex::Literal("std::vector<KITAJet_PFlowVars>::iterator"))
  .AddTypedef(type_2203, Reflex::Literal("std::vector<KITAJet_PFlowVars>::const_iterator"))
  .AddTypedef(type_1683, Reflex::Literal("std::vector<KITAJet_PFlowVars>::const_reverse_iterator"))
  .AddTypedef(type_1684, Reflex::Literal("std::vector<KITAJet_PFlowVars>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAJet_PFlowVars>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAJet_PFlowVars>::difference_type"))
  .AddTypedef(type_1541, Reflex::Literal("std::vector<KITAJet_PFlowVars>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_4202, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8449), Reflex::Literal("vector"), constructor_4203, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_4193, type_8449), Reflex::Literal("vector"), constructor_4204, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8450), Reflex::Literal("vector"), constructor_4205, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_4206, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1417, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x53, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x54, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAJet_PFlowVars__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAJet_PFlowVars,std::allocator<KITAJet_PFlowVars> > -------------------
void __std__vector_KITAJet_PFlowVars__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAJet_PFlowVars,std::allocator<KITAJet_PFlowVars> > -------------------
void __std__vector_KITAJet_PFlowVars__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8451, type_8450), Reflex::Literal("operator="), operator_4207, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_4193), Reflex::Literal("assign"), method_4208, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2202), Reflex::Literal("begin"), method_4209, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2203), Reflex::Literal("begin"), method_4210, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2202), Reflex::Literal("end"), method_4211, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2203), Reflex::Literal("end"), method_4212, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_4217, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_4218, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_82), Reflex::Literal("resize"), method_4219, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_4220, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_4221, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_4222, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4191, type_1639), Reflex::Literal("operator[]"), operator_4223, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4193, type_1639), Reflex::Literal("operator[]"), operator_4224, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4191, type_1639), Reflex::Literal("at"), method_4226, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4193, type_1639), Reflex::Literal("at"), method_4227, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4191), Reflex::Literal("front"), method_4228, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4193), Reflex::Literal("front"), method_4229, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4191), Reflex::Literal("back"), method_4230, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4193), Reflex::Literal("back"), method_4231, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4187), Reflex::Literal("data"), method_4232, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4189), Reflex::Literal("data"), method_4233, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_4193), Reflex::Literal("push_back"), method_4234, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_4235, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2202, type_2202, type_4193), Reflex::Literal("insert"), method_4236, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2202, type_1639, type_4193), Reflex::Literal("insert"), method_4237, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2202, type_2202), Reflex::Literal("erase"), method_4238, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2202, type_2202, type_2202), Reflex::Literal("erase"), method_4239, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8451), Reflex::Literal("swap"), method_4240, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_4241, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class map<int,std::vector<KITAHlt::KITATriggerObject, std::allocator<KITAHlt::KITATriggerObject> >,std::less<int>,std::allocator<std::pair<const int, std::vector<KITAHlt::KITATriggerObject, std::allocator<KITAHlt::KITATriggerObject> > > > > -------------------------------
static void destructor_6153(void*, void * o, const std::vector<void*>&, void *) {
(((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->::std::map<int,std::vector<KITAHlt::KITATriggerObject> >::~map)();
}
static void constructor_6154( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >();
  else ::new(mem) ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >();
}

static void constructor_6155( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >(*(const ::std::less<int>*)arg[0]);
  else ::new(mem) ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >(*(const ::std::less<int>*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >(*(const ::std::less<int>*)arg[0],
      *(const ::std::allocator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >*)arg[1]);
  else ::new(mem) ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >(*(const ::std::less<int>*)arg[0],
      *(const ::std::allocator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >*)arg[1]);
  }
}

static void constructor_6156( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >(*(const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)arg[0]);
  else ::new(mem) ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >(*(const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)arg[0]);
}

static  void operator_6157( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->operator=)(*(const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)arg[0]);
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->operator=)(*(const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)arg[0]);
}

static  void method_6158( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::allocator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->get_allocator)());
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->get_allocator)();
}

static  void method_6159( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->begin)());
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->begin)();
}

static  void method_6160( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->begin)());
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->begin)();
}

static  void method_6161( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->end)());
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->end)();
}

static  void method_6162( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->end)());
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->end)();
}

static  void method_6167( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->empty)());
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->empty)();
}

static  void method_6168( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->size)());
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->size)();
}

static  void method_6169( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->max_size)());
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->max_size)();
}

static  void operator_6170( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->operator[])(*(const int*)arg[0]);
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->operator[])(*(const int*)arg[0]);
}

static  void method_6171( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->at)(*(const int*)arg[0]);
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->at)(*(const int*)arg[0]);
}

static  void method_6172( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->at)(*(const int*)arg[0]);
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->at)(*(const int*)arg[0]);
}

static  void method_6173( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >,bool>)((((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->insert)(*(const ::std::pair<const int,std::vector<KITAHlt::KITATriggerObject> >*)arg[0]));
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->insert)(*(const ::std::pair<const int,std::vector<KITAHlt::KITATriggerObject> >*)arg[0]);
}

static  void method_6174( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->insert)(*(::std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >*)arg[0],
    *(const ::std::pair<const int,std::vector<KITAHlt::KITATriggerObject> >*)arg[1]));
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->insert)(*(::std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >*)arg[0],
    *(const ::std::pair<const int,std::vector<KITAHlt::KITATriggerObject> >*)arg[1]);
}

static  void method_6175( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->erase)(*(::std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >*)arg[0]);
}

static  void method_6176( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->erase)(*(const int*)arg[0]));
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->erase)(*(const int*)arg[0]);
}

static  void method_6177( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->erase)(*(::std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >*)arg[0],
    *(::std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >*)arg[1]);
}

static  void method_6178( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->swap)(*(::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)arg[0]);
}

static  void method_6179( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->clear)();
}

static  void method_6180( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::less<int>)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->key_comp)());
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->key_comp)();
}

static  void method_6182( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->find)(*(const int*)arg[0]));
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->find)(*(const int*)arg[0]);
}

static  void method_6183( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->find)(*(const int*)arg[0]));
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->find)(*(const int*)arg[0]);
}

static  void method_6184( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->count)(*(const int*)arg[0]));
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->count)(*(const int*)arg[0]);
}

static  void method_6185( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->lower_bound)(*(const int*)arg[0]));
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->lower_bound)(*(const int*)arg[0]);
}

static  void method_6186( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->lower_bound)(*(const int*)arg[0]));
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->lower_bound)(*(const int*)arg[0]);
}

static  void method_6187( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->upper_bound)(*(const int*)arg[0]));
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->upper_bound)(*(const int*)arg[0]);
}

static  void method_6188( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->upper_bound)(*(const int*)arg[0]));
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->upper_bound)(*(const int*)arg[0]);
}

static  void method_6189( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >,std::_Rb_tree_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > > >)((((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->equal_range)(*(const int*)arg[0]));
  else   (((::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->equal_range)(*(const int*)arg[0]);
}

static  void method_6190( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > >,std::_Rb_tree_const_iterator<std::pair<const int,std::vector<KITAHlt::KITATriggerObject> > > >)((((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->equal_range)(*(const int*)arg[0]));
  else   (((const ::std::map<int,std::vector<KITAHlt::KITATriggerObject> >*)o)->equal_range)(*(const int*)arg[0]);
}

static void method_newdel_1629( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::map<int,std::vector<KITAHlt::KITATriggerObject> > >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::map<int,std::vector<KITAHlt::KITATriggerObject> > >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::map<int,std::vector<KITAHlt::KITATriggerObject> > >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::map<int,std::vector<KITAHlt::KITATriggerObject> > >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::map<int,std::vector<KITAHlt::KITATriggerObject> > >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x56( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::map<int,std::vector<KITAHlt::KITATriggerObject> > >::Generate();
  else ::Reflex::Proxy< ::std::map<int,std::vector<KITAHlt::KITATriggerObject> > >::Generate();
}

//------Dictionary for class map<int,std::vector<KITAHlt::KITATriggerObject, std::allocator<KITAHlt::KITATriggerObject> >,std::less<int>,std::allocator<std::pair<const int, std::vector<KITAHlt::KITATriggerObject, std::allocator<KITAHlt::KITATriggerObject> > > > > -------------------------------
void __std__map_int_std__vector_KITAHlt__KITATriggerObject_s__db_datamem(Reflex::Class*);
void __std__map_int_std__vector_KITAHlt__KITATriggerObject_s__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__map_int_std__vector_KITAHlt__KITATriggerObject_s__datamem_bld(&__std__map_int_std__vector_KITAHlt__KITATriggerObject_s__db_datamem);
Reflex::GenreflexMemberBuilder __std__map_int_std__vector_KITAHlt__KITATriggerObject_s__funcmem_bld(&__std__map_int_std__vector_KITAHlt__KITATriggerObject_s__db_funcmem);
void __std__map_int_std__vector_KITAHlt__KITATriggerObject_s__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >"), typeid(::std::map<int,std::vector<KITAHlt::KITATriggerObject> >), sizeof(::std::map<int,std::vector<KITAHlt::KITATriggerObject> >), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddTypedef(type_31, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::key_type"))
  .AddTypedef(type_1413, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::mapped_type"))
  .AddTypedef(type_1370, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::value_type"))
  .AddTypedef(type_1824, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::key_compare"))
  .AddTypedef(type_1526, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::allocator_type"))
  .AddTypedef(type_1370, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::_Alloc_value_type"))
  .AddTypedef(type_1526, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::_Pair_alloc_type"))
  .AddTypedef(type_1444, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::_Rep_type"))
  .AddTypedef(type_5059, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::pointer"))
  .AddTypedef(type_5061, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::const_pointer"))
  .AddTypedef(type_5063, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::reference"))
  .AddTypedef(type_5065, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::const_reference"))
  .AddTypedef(type_1479, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::iterator"))
  .AddTypedef(type_1720, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::const_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::difference_type"))
  .AddTypedef(type_1690, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::reverse_iterator"))
  .AddTypedef(type_1689, Reflex::Literal("std::map<int,std::vector<KITAHlt::KITATriggerObject> >::const_reverse_iterator"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~map"), destructor_6153, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("map"), constructor_6154, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8530, type_8538), Reflex::Literal("map"), constructor_6155, 0, "__comp;__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8733), Reflex::Literal("map"), constructor_6156, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1629, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x56, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__std__map_int_std__vector_KITAHlt__KITATriggerObject_s__datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__std__map_int_std__vector_KITAHlt__KITATriggerObject_s__funcmem_bld);
}

//------Delayed data member builder for class map<int,std::vector<KITAHlt::KITATriggerObject, std::allocator<KITAHlt::KITATriggerObject> >,std::less<int>,std::allocator<std::pair<const int, std::vector<KITAHlt::KITATriggerObject, std::allocator<KITAHlt::KITATriggerObject> > > > > -------------------
void __std__map_int_std__vector_KITAHlt__KITATriggerObject_s__db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_1444, Reflex::Literal("_M_t"), OffsetOf(__shadow__::__std__map_int_std__vector_KITAHlt__KITATriggerObject_s_, _M_t), ::Reflex::PRIVATE);
}
//------Delayed function member builder for class map<int,std::vector<KITAHlt::KITATriggerObject, std::allocator<KITAHlt::KITATriggerObject> >,std::less<int>,std::allocator<std::pair<const int, std::vector<KITAHlt::KITATriggerObject, std::allocator<KITAHlt::KITATriggerObject> > > > > -------------------
void __std__map_int_std__vector_KITAHlt__KITATriggerObject_s__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8734, type_8733), Reflex::Literal("operator="), operator_6157, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1526), Reflex::Literal("get_allocator"), method_6158, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1479), Reflex::Literal("begin"), method_6159, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1720), Reflex::Literal("begin"), method_6160, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1479), Reflex::Literal("end"), method_6161, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1720), Reflex::Literal("end"), method_6162, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_6167, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_6168, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_6169, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8435, type_4451), Reflex::Literal("operator[]"), operator_6170, 0, "__k", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8435, type_4451), Reflex::Literal("at"), method_6171, 0, "__k", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8434, type_4451), Reflex::Literal("at"), method_6172, 0, "__k", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1386, type_5065), Reflex::Literal("insert"), method_6173, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1479, type_1479, type_5065), Reflex::Literal("insert"), method_6174, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1479), Reflex::Literal("erase"), method_6175, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639, type_4451), Reflex::Literal("erase"), method_6176, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1479, type_1479), Reflex::Literal("erase"), method_6177, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8734), Reflex::Literal("swap"), method_6178, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_6179, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1824), Reflex::Literal("key_comp"), method_6180, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1479, type_4451), Reflex::Literal("find"), method_6182, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1720, type_4451), Reflex::Literal("find"), method_6183, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639, type_4451), Reflex::Literal("count"), method_6184, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1479, type_4451), Reflex::Literal("lower_bound"), method_6185, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1720, type_4451), Reflex::Literal("lower_bound"), method_6186, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1479, type_4451), Reflex::Literal("upper_bound"), method_6187, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1720, type_4451), Reflex::Literal("upper_bound"), method_6188, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1385, type_4451), Reflex::Literal("equal_range"), method_6189, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1384, type_4451), Reflex::Literal("equal_range"), method_6190, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST);
}
//------Stub functions for class map<int,float,std::less<int>,std::allocator<std::pair<const int, float> > > -------------------------------
static void destructor_6269(void*, void * o, const std::vector<void*>&, void *) {
(((::std::map<int,float>*)o)->::std::map<int,float>::~map)();
}
static void constructor_6270( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<int,float>();
  else ::new(mem) ::std::map<int,float>();
}

static void constructor_6271( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<int,float>(*(const ::std::less<int>*)arg[0]);
  else ::new(mem) ::std::map<int,float>(*(const ::std::less<int>*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<int,float>(*(const ::std::less<int>*)arg[0],
      *(const ::std::allocator<std::pair<const int,float> >*)arg[1]);
  else ::new(mem) ::std::map<int,float>(*(const ::std::less<int>*)arg[0],
      *(const ::std::allocator<std::pair<const int,float> >*)arg[1]);
  }
}

static void constructor_6272( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<int,float>(*(const ::std::map<int,float>*)arg[0]);
  else ::new(mem) ::std::map<int,float>(*(const ::std::map<int,float>*)arg[0]);
}

static  void operator_6273( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<int,float>*)o)->operator=)(*(const ::std::map<int,float>*)arg[0]);
  else   (((::std::map<int,float>*)o)->operator=)(*(const ::std::map<int,float>*)arg[0]);
}

static  void method_6274( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::allocator<std::pair<const int,float> >)((((const ::std::map<int,float>*)o)->get_allocator)());
  else   (((const ::std::map<int,float>*)o)->get_allocator)();
}

static  void method_6275( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,float> >)((((::std::map<int,float>*)o)->begin)());
  else   (((::std::map<int,float>*)o)->begin)();
}

static  void method_6276( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const int,float> >)((((const ::std::map<int,float>*)o)->begin)());
  else   (((const ::std::map<int,float>*)o)->begin)();
}

static  void method_6277( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,float> >)((((::std::map<int,float>*)o)->end)());
  else   (((::std::map<int,float>*)o)->end)();
}

static  void method_6278( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const int,float> >)((((const ::std::map<int,float>*)o)->end)());
  else   (((const ::std::map<int,float>*)o)->end)();
}

static  void method_6283( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::map<int,float>*)o)->empty)());
  else   (((const ::std::map<int,float>*)o)->empty)();
}

static  void method_6284( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<int,float>*)o)->size)());
  else   (((const ::std::map<int,float>*)o)->size)();
}

static  void method_6285( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<int,float>*)o)->max_size)());
  else   (((const ::std::map<int,float>*)o)->max_size)();
}

static  void operator_6286( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<int,float>*)o)->operator[])(*(const int*)arg[0]);
  else   (((::std::map<int,float>*)o)->operator[])(*(const int*)arg[0]);
}

static  void method_6287( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<int,float>*)o)->at)(*(const int*)arg[0]);
  else   (((::std::map<int,float>*)o)->at)(*(const int*)arg[0]);
}

static  void method_6288( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::map<int,float>*)o)->at)(*(const int*)arg[0]);
  else   (((const ::std::map<int,float>*)o)->at)(*(const int*)arg[0]);
}

static  void method_6289( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_iterator<std::pair<const int,float> >,bool>)((((::std::map<int,float>*)o)->insert)(*(const ::std::pair<const int,float>*)arg[0]));
  else   (((::std::map<int,float>*)o)->insert)(*(const ::std::pair<const int,float>*)arg[0]);
}

static  void method_6290( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,float> >)((((::std::map<int,float>*)o)->insert)(*(::std::_Rb_tree_iterator<std::pair<const int,float> >*)arg[0],
    *(const ::std::pair<const int,float>*)arg[1]));
  else   (((::std::map<int,float>*)o)->insert)(*(::std::_Rb_tree_iterator<std::pair<const int,float> >*)arg[0],
    *(const ::std::pair<const int,float>*)arg[1]);
}

static  void method_6291( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<int,float>*)o)->erase)(*(::std::_Rb_tree_iterator<std::pair<const int,float> >*)arg[0]);
}

static  void method_6292( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((::std::map<int,float>*)o)->erase)(*(const int*)arg[0]));
  else   (((::std::map<int,float>*)o)->erase)(*(const int*)arg[0]);
}

static  void method_6293( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<int,float>*)o)->erase)(*(::std::_Rb_tree_iterator<std::pair<const int,float> >*)arg[0],
    *(::std::_Rb_tree_iterator<std::pair<const int,float> >*)arg[1]);
}

static  void method_6294( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<int,float>*)o)->swap)(*(::std::map<int,float>*)arg[0]);
}

static  void method_6295( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::map<int,float>*)o)->clear)();
}

static  void method_6296( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::less<int>)((((const ::std::map<int,float>*)o)->key_comp)());
  else   (((const ::std::map<int,float>*)o)->key_comp)();
}

static  void method_6298( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,float> >)((((::std::map<int,float>*)o)->find)(*(const int*)arg[0]));
  else   (((::std::map<int,float>*)o)->find)(*(const int*)arg[0]);
}

static  void method_6299( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const int,float> >)((((const ::std::map<int,float>*)o)->find)(*(const int*)arg[0]));
  else   (((const ::std::map<int,float>*)o)->find)(*(const int*)arg[0]);
}

static  void method_6300( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<int,float>*)o)->count)(*(const int*)arg[0]));
  else   (((const ::std::map<int,float>*)o)->count)(*(const int*)arg[0]);
}

static  void method_6301( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,float> >)((((::std::map<int,float>*)o)->lower_bound)(*(const int*)arg[0]));
  else   (((::std::map<int,float>*)o)->lower_bound)(*(const int*)arg[0]);
}

static  void method_6302( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const int,float> >)((((const ::std::map<int,float>*)o)->lower_bound)(*(const int*)arg[0]));
  else   (((const ::std::map<int,float>*)o)->lower_bound)(*(const int*)arg[0]);
}

static  void method_6303( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const int,float> >)((((::std::map<int,float>*)o)->upper_bound)(*(const int*)arg[0]));
  else   (((::std::map<int,float>*)o)->upper_bound)(*(const int*)arg[0]);
}

static  void method_6304( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const int,float> >)((((const ::std::map<int,float>*)o)->upper_bound)(*(const int*)arg[0]));
  else   (((const ::std::map<int,float>*)o)->upper_bound)(*(const int*)arg[0]);
}

static  void method_6305( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_iterator<std::pair<const int,float> >,std::_Rb_tree_iterator<std::pair<const int,float> > >)((((::std::map<int,float>*)o)->equal_range)(*(const int*)arg[0]));
  else   (((::std::map<int,float>*)o)->equal_range)(*(const int*)arg[0]);
}

static  void method_6306( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_const_iterator<std::pair<const int,float> >,std::_Rb_tree_const_iterator<std::pair<const int,float> > >)((((const ::std::map<int,float>*)o)->equal_range)(*(const int*)arg[0]));
  else   (((const ::std::map<int,float>*)o)->equal_range)(*(const int*)arg[0]);
}

static void method_newdel_1631( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::map<int,float> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::map<int,float> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::map<int,float> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::map<int,float> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::map<int,float> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x58( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::map<int,float> >::Generate();
  else ::Reflex::Proxy< ::std::map<int,float> >::Generate();
}

//------Dictionary for class map<int,float,std::less<int>,std::allocator<std::pair<const int, float> > > -------------------------------
void __std__map_int_float__db_datamem(Reflex::Class*);
void __std__map_int_float__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__map_int_float__datamem_bld(&__std__map_int_float__db_datamem);
Reflex::GenreflexMemberBuilder __std__map_int_float__funcmem_bld(&__std__map_int_float__db_funcmem);
void __std__map_int_float__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::map<int,float>"), typeid(::std::map<int,float>), sizeof(::std::map<int,float>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddTypedef(type_31, Reflex::Literal("std::map<int,float>::key_type"))
  .AddTypedef(type_446, Reflex::Literal("std::map<int,float>::mapped_type"))
  .AddTypedef(type_1380, Reflex::Literal("std::map<int,float>::value_type"))
  .AddTypedef(type_1824, Reflex::Literal("std::map<int,float>::key_compare"))
  .AddTypedef(type_1543, Reflex::Literal("std::map<int,float>::allocator_type"))
  .AddTypedef(type_1380, Reflex::Literal("std::map<int,float>::_Alloc_value_type"))
  .AddTypedef(type_1543, Reflex::Literal("std::map<int,float>::_Pair_alloc_type"))
  .AddTypedef(type_1443, Reflex::Literal("std::map<int,float>::_Rep_type"))
  .AddTypedef(type_4954, Reflex::Literal("std::map<int,float>::pointer"))
  .AddTypedef(type_4956, Reflex::Literal("std::map<int,float>::const_pointer"))
  .AddTypedef(type_4958, Reflex::Literal("std::map<int,float>::reference"))
  .AddTypedef(type_4960, Reflex::Literal("std::map<int,float>::const_reference"))
  .AddTypedef(type_1478, Reflex::Literal("std::map<int,float>::iterator"))
  .AddTypedef(type_1719, Reflex::Literal("std::map<int,float>::const_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::map<int,float>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::map<int,float>::difference_type"))
  .AddTypedef(type_1688, Reflex::Literal("std::map<int,float>::reverse_iterator"))
  .AddTypedef(type_1687, Reflex::Literal("std::map<int,float>::const_reverse_iterator"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~map"), destructor_6269, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("map"), constructor_6270, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8530, type_8531), Reflex::Literal("map"), constructor_6271, 0, "__comp;__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8739), Reflex::Literal("map"), constructor_6272, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1631, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x58, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__std__map_int_float__datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__std__map_int_float__funcmem_bld);
}

//------Delayed data member builder for class map<int,float,std::less<int>,std::allocator<std::pair<const int, float> > > -------------------
void __std__map_int_float__db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_1443, Reflex::Literal("_M_t"), OffsetOf(__shadow__::__std__map_int_float_, _M_t), ::Reflex::PRIVATE);
}
//------Delayed function member builder for class map<int,float,std::less<int>,std::allocator<std::pair<const int, float> > > -------------------
void __std__map_int_float__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8740, type_8739), Reflex::Literal("operator="), operator_6273, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1543), Reflex::Literal("get_allocator"), method_6274, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1478), Reflex::Literal("begin"), method_6275, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1719), Reflex::Literal("begin"), method_6276, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1478), Reflex::Literal("end"), method_6277, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1719), Reflex::Literal("end"), method_6278, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_6283, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_6284, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_6285, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4385, type_4451), Reflex::Literal("operator[]"), operator_6286, 0, "__k", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4385, type_4451), Reflex::Literal("at"), method_6287, 0, "__k", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4387, type_4451), Reflex::Literal("at"), method_6288, 0, "__k", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1383, type_4960), Reflex::Literal("insert"), method_6289, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1478, type_1478, type_4960), Reflex::Literal("insert"), method_6290, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1478), Reflex::Literal("erase"), method_6291, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639, type_4451), Reflex::Literal("erase"), method_6292, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1478, type_1478), Reflex::Literal("erase"), method_6293, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8740), Reflex::Literal("swap"), method_6294, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_6295, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1824), Reflex::Literal("key_comp"), method_6296, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1478, type_4451), Reflex::Literal("find"), method_6298, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1719, type_4451), Reflex::Literal("find"), method_6299, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639, type_4451), Reflex::Literal("count"), method_6300, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1478, type_4451), Reflex::Literal("lower_bound"), method_6301, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1719, type_4451), Reflex::Literal("lower_bound"), method_6302, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1478, type_4451), Reflex::Literal("upper_bound"), method_6303, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1719, type_4451), Reflex::Literal("upper_bound"), method_6304, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1382, type_4451), Reflex::Literal("equal_range"), method_6305, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1381, type_4451), Reflex::Literal("equal_range"), method_6306, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST);
}
//------Stub functions for class point -------------------------------
static void destructor_8154(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAMuon::point*)o)->::KITAMuon::point::~point)();
}
static  void operator_8155( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAMuon::point*)o)->operator=)(*(const ::KITAMuon::point*)arg[0]);
  else   (((::KITAMuon::point*)o)->operator=)(*(const ::KITAMuon::point*)arg[0]);
}

static void constructor_8156( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMuon::point(*(const ::KITAMuon::point*)arg[0]);
  else ::new(mem) ::KITAMuon::point(*(const ::KITAMuon::point*)arg[0]);
}

static void constructor_8157( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAMuon::point();
  else ::new(mem) ::KITAMuon::point();
}

static  void method_8158( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::KITAMuon::point*)o)->setCoord)(*(float*)arg[0],
    *(float*)arg[1],
    *(float*)arg[2]);
}

static void method_newdel_2497( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAMuon::point >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAMuon::point >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAMuon::point >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAMuon::point >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAMuon::point >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class point -------------------------------
void __KITAMuon__point_db_datamem(Reflex::Class*);
void __KITAMuon__point_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAMuon__point_datamem_bld(&__KITAMuon__point_db_datamem);
Reflex::GenreflexMemberBuilder __KITAMuon__point_funcmem_bld(&__KITAMuon__point_db_funcmem);
void __KITAMuon__point_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAMuon::point"), typeid(::KITAMuon::point), sizeof(::KITAMuon::point), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::STRUCT)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAMuon*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~point"), destructor_8154, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_9152, type_9153), Reflex::Literal("operator="), operator_8155, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_9153), Reflex::Literal("point"), constructor_8156, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("point"), constructor_8157, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_2497, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAMuon__point_datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__KITAMuon__point_funcmem_bld);
}

//------Delayed data member builder for class point -------------------
void __KITAMuon__point_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_446, Reflex::Literal("x"), OffsetOf(__shadow__::__KITAMuon__point, x), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("y"), OffsetOf(__shadow__::__KITAMuon__point, y), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("z"), OffsetOf(__shadow__::__KITAMuon__point, z), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class point -------------------
void __KITAMuon__point_db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_446, type_446, type_446), Reflex::Literal("setCoord"), method_8158, 0, "xcomp;ycomp;zcomp", ::Reflex::PUBLIC);
}
//------Stub functions for class point -------------------------------
static void destructor_8273(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAElectron::point*)o)->::KITAElectron::point::~point)();
}
static  void operator_8274( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAElectron::point*)o)->operator=)(*(const ::KITAElectron::point*)arg[0]);
  else   (((::KITAElectron::point*)o)->operator=)(*(const ::KITAElectron::point*)arg[0]);
}

static void constructor_8275( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAElectron::point(*(const ::KITAElectron::point*)arg[0]);
  else ::new(mem) ::KITAElectron::point(*(const ::KITAElectron::point*)arg[0]);
}

static void constructor_8276( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAElectron::point();
  else ::new(mem) ::KITAElectron::point();
}

static  void method_8277( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::KITAElectron::point*)o)->setCoord)(*(float*)arg[0],
    *(float*)arg[1],
    *(float*)arg[2]);
}

static void method_newdel_3385( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAElectron::point >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAElectron::point >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAElectron::point >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAElectron::point >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAElectron::point >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class point -------------------------------
void __KITAElectron__point_db_datamem(Reflex::Class*);
void __KITAElectron__point_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAElectron__point_datamem_bld(&__KITAElectron__point_db_datamem);
Reflex::GenreflexMemberBuilder __KITAElectron__point_funcmem_bld(&__KITAElectron__point_db_funcmem);
void __KITAElectron__point_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAElectron::point"), typeid(::KITAElectron::point), sizeof(::KITAElectron::point), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::STRUCT)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAElectron*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~point"), destructor_8273, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_9195, type_9196), Reflex::Literal("operator="), operator_8274, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_9196), Reflex::Literal("point"), constructor_8275, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("point"), constructor_8276, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_3385, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAElectron__point_datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__KITAElectron__point_funcmem_bld);
}

//------Delayed data member builder for class point -------------------
void __KITAElectron__point_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_446, Reflex::Literal("x"), OffsetOf(__shadow__::__KITAElectron__point, x), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("y"), OffsetOf(__shadow__::__KITAElectron__point, y), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("z"), OffsetOf(__shadow__::__KITAElectron__point, z), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class point -------------------
void __KITAElectron__point_db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_446, type_446, type_446), Reflex::Literal("setCoord"), method_8277, 0, "xcomp;ycomp;zcomp", ::Reflex::PUBLIC);
}
//------Stub functions for class vector -------------------------------
static void destructor_8281(void*, void * o, const std::vector<void*>&, void *) {
(((::KITAElectron::vector*)o)->::KITAElectron::vector::~vector)();
}
static  void operator_8282( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::KITAElectron::vector*)o)->operator=)(*(const ::KITAElectron::vector*)arg[0]);
  else   (((::KITAElectron::vector*)o)->operator=)(*(const ::KITAElectron::vector*)arg[0]);
}

static void constructor_8283( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAElectron::vector(*(const ::KITAElectron::vector*)arg[0]);
  else ::new(mem) ::KITAElectron::vector(*(const ::KITAElectron::vector*)arg[0]);
}

static void constructor_8284( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::KITAElectron::vector();
  else ::new(mem) ::KITAElectron::vector();
}

static  void method_8285( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::KITAElectron::vector*)o)->setCoord)(*(float*)arg[0],
    *(float*)arg[1],
    *(float*)arg[2]);
}

static void method_newdel_3386( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::KITAElectron::vector >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::KITAElectron::vector >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::KITAElectron::vector >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::KITAElectron::vector >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::KITAElectron::vector >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class vector -------------------------------
void __KITAElectron__vector_db_datamem(Reflex::Class*);
void __KITAElectron__vector_db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __KITAElectron__vector_datamem_bld(&__KITAElectron__vector_db_datamem);
Reflex::GenreflexMemberBuilder __KITAElectron__vector_funcmem_bld(&__KITAElectron__vector_db_funcmem);
void __KITAElectron__vector_dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("KITAElectron::vector"), typeid(::KITAElectron::vector), sizeof(::KITAElectron::vector), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::STRUCT)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAElectron*")
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_8281, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_9197, type_9198), Reflex::Literal("operator="), operator_8282, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_9198), Reflex::Literal("vector"), constructor_8283, 0, "", ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_8284, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_3386, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__KITAElectron__vector_datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__KITAElectron__vector_funcmem_bld);
}

//------Delayed data member builder for class vector -------------------
void __KITAElectron__vector_db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_446, Reflex::Literal("x"), OffsetOf(__shadow__::__KITAElectron__vector, x), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("y"), OffsetOf(__shadow__::__KITAElectron__vector, y), ::Reflex::PUBLIC)
  .AddDataMember(type_446, Reflex::Literal("z"), OffsetOf(__shadow__::__KITAElectron__vector, z), ::Reflex::PUBLIC);
}
//------Delayed function member builder for class vector -------------------
void __KITAElectron__vector_db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_446, type_446, type_446), Reflex::Literal("setCoord"), method_8285, 0, "xcomp;ycomp;zcomp", ::Reflex::PUBLIC);
}
//------Stub functions for class vector<KITATopJet,std::allocator<KITATopJet> > -------------------------------
static void constructor_1988( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITATopJet>();
  else ::new(mem) ::std::vector<KITATopJet>();
}

static void constructor_1989( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITATopJet>(*(const ::std::allocator<KITATopJet>*)arg[0]);
  else ::new(mem) ::std::vector<KITATopJet>(*(const ::std::allocator<KITATopJet>*)arg[0]);
}

static void constructor_1990( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITATopJet>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITATopJet>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITATopJet>(*(::std::size_t*)arg[0],
      *(const ::KITATopJet*)arg[1]);
  else ::new(mem) ::std::vector<KITATopJet>(*(::std::size_t*)arg[0],
      *(const ::KITATopJet*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITATopJet>(*(::std::size_t*)arg[0],
      *(const ::KITATopJet*)arg[1],
      *(const ::std::allocator<KITATopJet>*)arg[2]);
  else ::new(mem) ::std::vector<KITATopJet>(*(::std::size_t*)arg[0],
      *(const ::KITATopJet*)arg[1],
      *(const ::std::allocator<KITATopJet>*)arg[2]);
  }
}

static void constructor_1991( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITATopJet>(*(const ::std::vector<KITATopJet>*)arg[0]);
  else ::new(mem) ::std::vector<KITATopJet>(*(const ::std::vector<KITATopJet>*)arg[0]);
}

static void destructor_1992(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITATopJet>*)o)->::std::vector<KITATopJet>::~vector)();
}
static  void operator_1993( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITATopJet>*)o)->operator=)(*(const ::std::vector<KITATopJet>*)arg[0]);
  else   (((::std::vector<KITATopJet>*)o)->operator=)(*(const ::std::vector<KITATopJet>*)arg[0]);
}

static  void method_1994( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITATopJet>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITATopJet*)arg[1]);
}

static  void method_1995( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >)((((::std::vector<KITATopJet>*)o)->begin)());
  else   (((::std::vector<KITATopJet>*)o)->begin)();
}

static  void method_1996( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITATopJet*,std::vector<KITATopJet> >)((((const ::std::vector<KITATopJet>*)o)->begin)());
  else   (((const ::std::vector<KITATopJet>*)o)->begin)();
}

static  void method_1997( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >)((((::std::vector<KITATopJet>*)o)->end)());
  else   (((::std::vector<KITATopJet>*)o)->end)();
}

static  void method_1998( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITATopJet*,std::vector<KITATopJet> >)((((const ::std::vector<KITATopJet>*)o)->end)());
  else   (((const ::std::vector<KITATopJet>*)o)->end)();
}

static  void method_2003( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITATopJet>*)o)->size)());
  else   (((const ::std::vector<KITATopJet>*)o)->size)();
}

static  void method_2004( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITATopJet>*)o)->max_size)());
  else   (((const ::std::vector<KITATopJet>*)o)->max_size)();
}

static  void method_2005( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITATopJet>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITATopJet>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITATopJet*)arg[1]);
  }
}

static  void method_2006( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITATopJet>*)o)->capacity)());
  else   (((const ::std::vector<KITATopJet>*)o)->capacity)();
}

static  void method_2007( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITATopJet>*)o)->empty)());
  else   (((const ::std::vector<KITATopJet>*)o)->empty)();
}

static  void method_2008( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITATopJet>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_2009( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITATopJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITATopJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_2010( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITATopJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITATopJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_2012( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITATopJet>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITATopJet>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2013( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITATopJet>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITATopJet>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2014( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITATopJet>*)o)->front)();
  else   (((::std::vector<KITATopJet>*)o)->front)();
}

static  void method_2015( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITATopJet>*)o)->front)();
  else   (((const ::std::vector<KITATopJet>*)o)->front)();
}

static  void method_2016( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITATopJet>*)o)->back)();
  else   (((::std::vector<KITATopJet>*)o)->back)();
}

static  void method_2017( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITATopJet>*)o)->back)();
  else   (((const ::std::vector<KITATopJet>*)o)->back)();
}

static  void method_2018( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITATopJet>*)o)->data)());
  else   (((::std::vector<KITATopJet>*)o)->data)();
}

static  void method_2019( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITATopJet>*)o)->data)());
  else   (((const ::std::vector<KITATopJet>*)o)->data)();
}

static  void method_2020( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITATopJet>*)o)->push_back)(*(const ::KITATopJet*)arg[0]);
}

static  void method_2021( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITATopJet>*)o)->pop_back)();
}

static  void method_2022( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >)((((::std::vector<KITATopJet>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >*)arg[0],
    *(const ::KITATopJet*)arg[1]));
  else   (((::std::vector<KITATopJet>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >*)arg[0],
    *(const ::KITATopJet*)arg[1]);
}

static  void method_2023( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITATopJet>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITATopJet*)arg[2]);
}

static  void method_2024( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >)((((::std::vector<KITATopJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >*)arg[0]));
  else   (((::std::vector<KITATopJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >*)arg[0]);
}

static  void method_2025( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >)((((::std::vector<KITATopJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >*)arg[1]));
  else   (((::std::vector<KITATopJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITATopJet*,std::vector<KITATopJet> >*)arg[1]);
}

static  void method_2026( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITATopJet>*)o)->swap)(*(::std::vector<KITATopJet>*)arg[0]);
}

static  void method_2027( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITATopJet>*)o)->clear)();
}

static void method_newdel_170( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITATopJet> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITATopJet> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITATopJet> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITATopJet> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITATopJet> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x63( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITATopJet,std::allocator<KITATopJet> >")), ::Reflex::BaseOffset< ::std::vector<KITATopJet>,::std::_Vector_base<KITATopJet,std::allocator<KITATopJet> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x64( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITATopJet> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITATopJet> >::Generate();
}

//------Dictionary for class vector<KITATopJet,std::allocator<KITATopJet> > -------------------------------
void __std__vector_KITATopJet__db_datamem(Reflex::Class*);
void __std__vector_KITATopJet__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITATopJet__datamem_bld(&__std__vector_KITATopJet__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITATopJet__funcmem_bld(&__std__vector_KITATopJet__db_funcmem);
void __std__vector_KITATopJet__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITATopJet>"), typeid(::std::vector<KITATopJet>), sizeof(::std::vector<KITATopJet>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITATopJet*")
  .AddBase(type_1750, ::Reflex::BaseOffset< ::std::vector<KITATopJet>, ::std::_Vector_base<KITATopJet,std::allocator<KITATopJet> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_736, Reflex::Literal("std::vector<KITATopJet>::_Alloc_value_type"))
  .AddTypedef(type_1750, Reflex::Literal("std::vector<KITATopJet>::_Base"))
  .AddTypedef(type_1528, Reflex::Literal("std::vector<KITATopJet>::_Tp_alloc_type"))
  .AddTypedef(type_736, Reflex::Literal("std::vector<KITATopJet>::value_type"))
  .AddTypedef(type_1971, Reflex::Literal("std::vector<KITATopJet>::pointer"))
  .AddTypedef(type_1973, Reflex::Literal("std::vector<KITATopJet>::const_pointer"))
  .AddTypedef(type_1975, Reflex::Literal("std::vector<KITATopJet>::reference"))
  .AddTypedef(type_1977, Reflex::Literal("std::vector<KITATopJet>::const_reference"))
  .AddTypedef(type_1979, Reflex::Literal("std::vector<KITATopJet>::iterator"))
  .AddTypedef(type_1981, Reflex::Literal("std::vector<KITATopJet>::const_iterator"))
  .AddTypedef(type_1653, Reflex::Literal("std::vector<KITATopJet>::const_reverse_iterator"))
  .AddTypedef(type_1654, Reflex::Literal("std::vector<KITATopJet>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITATopJet>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITATopJet>::difference_type"))
  .AddTypedef(type_1528, Reflex::Literal("std::vector<KITATopJet>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_1988, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_7417), Reflex::Literal("vector"), constructor_1989, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_1977, type_7417), Reflex::Literal("vector"), constructor_1990, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_7418), Reflex::Literal("vector"), constructor_1991, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_1992, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_170, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x63, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x64, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITATopJet__funcmem_bld);
}

//------Delayed data member builder for class vector<KITATopJet,std::allocator<KITATopJet> > -------------------
void __std__vector_KITATopJet__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITATopJet,std::allocator<KITATopJet> > -------------------
void __std__vector_KITATopJet__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_7419, type_7418), Reflex::Literal("operator="), operator_1993, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_1977), Reflex::Literal("assign"), method_1994, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1979), Reflex::Literal("begin"), method_1995, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1981), Reflex::Literal("begin"), method_1996, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1979), Reflex::Literal("end"), method_1997, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1981), Reflex::Literal("end"), method_1998, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_2003, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_2004, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_736), Reflex::Literal("resize"), method_2005, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_2006, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_2007, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_2008, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1975, type_1639), Reflex::Literal("operator[]"), operator_2009, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1977, type_1639), Reflex::Literal("operator[]"), operator_2010, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1975, type_1639), Reflex::Literal("at"), method_2012, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1977, type_1639), Reflex::Literal("at"), method_2013, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1975), Reflex::Literal("front"), method_2014, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1977), Reflex::Literal("front"), method_2015, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1975), Reflex::Literal("back"), method_2016, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1977), Reflex::Literal("back"), method_2017, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1971), Reflex::Literal("data"), method_2018, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1973), Reflex::Literal("data"), method_2019, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1977), Reflex::Literal("push_back"), method_2020, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_2021, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1979, type_1979, type_1977), Reflex::Literal("insert"), method_2022, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1979, type_1639, type_1977), Reflex::Literal("insert"), method_2023, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1979, type_1979), Reflex::Literal("erase"), method_2024, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1979, type_1979, type_1979), Reflex::Literal("erase"), method_2025, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_7419), Reflex::Literal("swap"), method_2026, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_2027, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,float,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, float> > > -------------------------------
static void destructor_2072(void*, void * o, const std::vector<void*>&, void *) {
(((::std::map<std::basic_string<char>,float>*)o)->::std::map<std::basic_string<char>,float>::~map)();
}
static void constructor_2073( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,float>();
  else ::new(mem) ::std::map<std::basic_string<char>,float>();
}

static void constructor_2074( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,float>(*(const ::std::less<std::basic_string<char> >*)arg[0]);
  else ::new(mem) ::std::map<std::basic_string<char>,float>(*(const ::std::less<std::basic_string<char> >*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,float>(*(const ::std::less<std::basic_string<char> >*)arg[0],
      *(const ::std::allocator<std::pair<const std::basic_string<char>,float> >*)arg[1]);
  else ::new(mem) ::std::map<std::basic_string<char>,float>(*(const ::std::less<std::basic_string<char> >*)arg[0],
      *(const ::std::allocator<std::pair<const std::basic_string<char>,float> >*)arg[1]);
  }
}

static void constructor_2075( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,float>(*(const ::std::map<std::basic_string<char>,float>*)arg[0]);
  else ::new(mem) ::std::map<std::basic_string<char>,float>(*(const ::std::map<std::basic_string<char>,float>*)arg[0]);
}

static  void operator_2076( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<std::basic_string<char>,float>*)o)->operator=)(*(const ::std::map<std::basic_string<char>,float>*)arg[0]);
  else   (((::std::map<std::basic_string<char>,float>*)o)->operator=)(*(const ::std::map<std::basic_string<char>,float>*)arg[0]);
}

static  void method_2077( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::allocator<std::pair<const std::basic_string<char>,float> >)((((const ::std::map<std::basic_string<char>,float>*)o)->get_allocator)());
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->get_allocator)();
}

static  void method_2078( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >)((((::std::map<std::basic_string<char>,float>*)o)->begin)());
  else   (((::std::map<std::basic_string<char>,float>*)o)->begin)();
}

static  void method_2079( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> >)((((const ::std::map<std::basic_string<char>,float>*)o)->begin)());
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->begin)();
}

static  void method_2080( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >)((((::std::map<std::basic_string<char>,float>*)o)->end)());
  else   (((::std::map<std::basic_string<char>,float>*)o)->end)();
}

static  void method_2081( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> >)((((const ::std::map<std::basic_string<char>,float>*)o)->end)());
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->end)();
}

static  void method_2086( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::map<std::basic_string<char>,float>*)o)->empty)());
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->empty)();
}

static  void method_2087( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<std::basic_string<char>,float>*)o)->size)());
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->size)();
}

static  void method_2088( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<std::basic_string<char>,float>*)o)->max_size)());
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->max_size)();
}

static  void operator_2089( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<std::basic_string<char>,float>*)o)->operator[])(*(const ::std::basic_string<char>*)arg[0]);
  else   (((::std::map<std::basic_string<char>,float>*)o)->operator[])(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2090( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<std::basic_string<char>,float>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
  else   (((::std::map<std::basic_string<char>,float>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2091( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::map<std::basic_string<char>,float>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2092( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >,bool>)((((::std::map<std::basic_string<char>,float>*)o)->insert)(*(const ::std::pair<const std::basic_string<char>,float>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,float>*)o)->insert)(*(const ::std::pair<const std::basic_string<char>,float>*)arg[0]);
}

static  void method_2093( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >)((((::std::map<std::basic_string<char>,float>*)o)->insert)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >*)arg[0],
    *(const ::std::pair<const std::basic_string<char>,float>*)arg[1]));
  else   (((::std::map<std::basic_string<char>,float>*)o)->insert)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >*)arg[0],
    *(const ::std::pair<const std::basic_string<char>,float>*)arg[1]);
}

static  void method_2094( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<std::basic_string<char>,float>*)o)->erase)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >*)arg[0]);
}

static  void method_2095( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((::std::map<std::basic_string<char>,float>*)o)->erase)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,float>*)o)->erase)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2096( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<std::basic_string<char>,float>*)o)->erase)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >*)arg[0],
    *(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >*)arg[1]);
}

static  void method_2097( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<std::basic_string<char>,float>*)o)->swap)(*(::std::map<std::basic_string<char>,float>*)arg[0]);
}

static  void method_2098( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::map<std::basic_string<char>,float>*)o)->clear)();
}

static  void method_2099( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::less<std::basic_string<char> >)((((const ::std::map<std::basic_string<char>,float>*)o)->key_comp)());
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->key_comp)();
}

static  void method_2101( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >)((((::std::map<std::basic_string<char>,float>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,float>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2102( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> >)((((const ::std::map<std::basic_string<char>,float>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2103( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<std::basic_string<char>,float>*)o)->count)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->count)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2104( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >)((((::std::map<std::basic_string<char>,float>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,float>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2105( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> >)((((const ::std::map<std::basic_string<char>,float>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2106( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >)((((::std::map<std::basic_string<char>,float>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,float>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2107( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> >)((((const ::std::map<std::basic_string<char>,float>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2108( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> >,std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,float> > >)((((::std::map<std::basic_string<char>,float>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,float>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_2109( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> >,std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,float> > >)((((const ::std::map<std::basic_string<char>,float>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,float>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]);
}

static void method_newdel_255( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,float> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,float> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,float> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,float> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,float> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x66( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::map<std::basic_string<char>,float> >::Generate();
  else ::Reflex::Proxy< ::std::map<std::basic_string<char>,float> >::Generate();
}

//------Dictionary for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,float,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, float> > > -------------------------------
void __std__map_std__basic_string_char__float__db_datamem(Reflex::Class*);
void __std__map_std__basic_string_char__float__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__map_std__basic_string_char__float__datamem_bld(&__std__map_std__basic_string_char__float__db_datamem);
Reflex::GenreflexMemberBuilder __std__map_std__basic_string_char__float__funcmem_bld(&__std__map_std__basic_string_char__float__db_funcmem);
void __std__map_std__basic_string_char__float__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::map<std::basic_string<char>,float>"), typeid(::std::map<std::basic_string<char>,float>), sizeof(::std::map<std::basic_string<char>,float>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddTypedef(type_1434, Reflex::Literal("std::map<std::basic_string<char>,float>::key_type"))
  .AddTypedef(type_446, Reflex::Literal("std::map<std::basic_string<char>,float>::mapped_type"))
  .AddTypedef(type_1376, Reflex::Literal("std::map<std::basic_string<char>,float>::value_type"))
  .AddTypedef(type_1825, Reflex::Literal("std::map<std::basic_string<char>,float>::key_compare"))
  .AddTypedef(type_1534, Reflex::Literal("std::map<std::basic_string<char>,float>::allocator_type"))
  .AddTypedef(type_1376, Reflex::Literal("std::map<std::basic_string<char>,float>::_Alloc_value_type"))
  .AddTypedef(type_1534, Reflex::Literal("std::map<std::basic_string<char>,float>::_Pair_alloc_type"))
  .AddTypedef(type_1442, Reflex::Literal("std::map<std::basic_string<char>,float>::_Rep_type"))
  .AddTypedef(type_2058, Reflex::Literal("std::map<std::basic_string<char>,float>::pointer"))
  .AddTypedef(type_2060, Reflex::Literal("std::map<std::basic_string<char>,float>::const_pointer"))
  .AddTypedef(type_2062, Reflex::Literal("std::map<std::basic_string<char>,float>::reference"))
  .AddTypedef(type_2064, Reflex::Literal("std::map<std::basic_string<char>,float>::const_reference"))
  .AddTypedef(type_1477, Reflex::Literal("std::map<std::basic_string<char>,float>::iterator"))
  .AddTypedef(type_1718, Reflex::Literal("std::map<std::basic_string<char>,float>::const_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::map<std::basic_string<char>,float>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::map<std::basic_string<char>,float>::difference_type"))
  .AddTypedef(type_1662, Reflex::Literal("std::map<std::basic_string<char>,float>::reverse_iterator"))
  .AddTypedef(type_1661, Reflex::Literal("std::map<std::basic_string<char>,float>::const_reverse_iterator"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~map"), destructor_2072, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("map"), constructor_2073, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_7424, type_7425), Reflex::Literal("map"), constructor_2074, 0, "__comp;__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_7426), Reflex::Literal("map"), constructor_2075, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_255, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x66, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__std__map_std__basic_string_char__float__datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__std__map_std__basic_string_char__float__funcmem_bld);
}

//------Delayed data member builder for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,float,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, float> > > -------------------
void __std__map_std__basic_string_char__float__db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_1442, Reflex::Literal("_M_t"), OffsetOf(__shadow__::__std__map_std__basic_string_char__float_, _M_t), ::Reflex::PRIVATE);
}
//------Delayed function member builder for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,float,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, float> > > -------------------
void __std__map_std__basic_string_char__float__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_7427, type_7426), Reflex::Literal("operator="), operator_2076, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1534), Reflex::Literal("get_allocator"), method_2077, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1477), Reflex::Literal("begin"), method_2078, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1718), Reflex::Literal("begin"), method_2079, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1477), Reflex::Literal("end"), method_2080, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1718), Reflex::Literal("end"), method_2081, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_2086, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_2087, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_2088, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4385, type_6427), Reflex::Literal("operator[]"), operator_2089, 0, "__k", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4385, type_6427), Reflex::Literal("at"), method_2090, 0, "__k", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4387, type_6427), Reflex::Literal("at"), method_2091, 0, "__k", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1378, type_2064), Reflex::Literal("insert"), method_2092, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1477, type_1477, type_2064), Reflex::Literal("insert"), method_2093, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1477), Reflex::Literal("erase"), method_2094, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639, type_6427), Reflex::Literal("erase"), method_2095, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1477, type_1477), Reflex::Literal("erase"), method_2096, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_7427), Reflex::Literal("swap"), method_2097, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_2098, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1825), Reflex::Literal("key_comp"), method_2099, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1477, type_6427), Reflex::Literal("find"), method_2101, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1718, type_6427), Reflex::Literal("find"), method_2102, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639, type_6427), Reflex::Literal("count"), method_2103, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1477, type_6427), Reflex::Literal("lower_bound"), method_2104, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1718, type_6427), Reflex::Literal("lower_bound"), method_2105, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1477, type_6427), Reflex::Literal("upper_bound"), method_2106, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1718, type_6427), Reflex::Literal("upper_bound"), method_2107, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1377, type_6427), Reflex::Literal("equal_range"), method_2108, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1375, type_6427), Reflex::Literal("equal_range"), method_2109, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST);
}
//------Stub functions for class vector<KITAGenParticle,std::allocator<KITAGenParticle> > -------------------------------
static void constructor_2274( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenParticle>();
  else ::new(mem) ::std::vector<KITAGenParticle>();
}

static void constructor_2275( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenParticle>(*(const ::std::allocator<KITAGenParticle>*)arg[0]);
  else ::new(mem) ::std::vector<KITAGenParticle>(*(const ::std::allocator<KITAGenParticle>*)arg[0]);
}

static void constructor_2276( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenParticle>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAGenParticle>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenParticle>(*(::std::size_t*)arg[0],
      *(const ::KITAGenParticle*)arg[1]);
  else ::new(mem) ::std::vector<KITAGenParticle>(*(::std::size_t*)arg[0],
      *(const ::KITAGenParticle*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenParticle>(*(::std::size_t*)arg[0],
      *(const ::KITAGenParticle*)arg[1],
      *(const ::std::allocator<KITAGenParticle>*)arg[2]);
  else ::new(mem) ::std::vector<KITAGenParticle>(*(::std::size_t*)arg[0],
      *(const ::KITAGenParticle*)arg[1],
      *(const ::std::allocator<KITAGenParticle>*)arg[2]);
  }
}

static void constructor_2277( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenParticle>(*(const ::std::vector<KITAGenParticle>*)arg[0]);
  else ::new(mem) ::std::vector<KITAGenParticle>(*(const ::std::vector<KITAGenParticle>*)arg[0]);
}

static void destructor_2278(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAGenParticle>*)o)->::std::vector<KITAGenParticle>::~vector)();
}
static  void operator_2279( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenParticle>*)o)->operator=)(*(const ::std::vector<KITAGenParticle>*)arg[0]);
  else   (((::std::vector<KITAGenParticle>*)o)->operator=)(*(const ::std::vector<KITAGenParticle>*)arg[0]);
}

static  void method_2280( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenParticle>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAGenParticle*)arg[1]);
}

static  void method_2281( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >)((((::std::vector<KITAGenParticle>*)o)->begin)());
  else   (((::std::vector<KITAGenParticle>*)o)->begin)();
}

static  void method_2282( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAGenParticle*,std::vector<KITAGenParticle> >)((((const ::std::vector<KITAGenParticle>*)o)->begin)());
  else   (((const ::std::vector<KITAGenParticle>*)o)->begin)();
}

static  void method_2283( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >)((((::std::vector<KITAGenParticle>*)o)->end)());
  else   (((::std::vector<KITAGenParticle>*)o)->end)();
}

static  void method_2284( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAGenParticle*,std::vector<KITAGenParticle> >)((((const ::std::vector<KITAGenParticle>*)o)->end)());
  else   (((const ::std::vector<KITAGenParticle>*)o)->end)();
}

static  void method_2289( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAGenParticle>*)o)->size)());
  else   (((const ::std::vector<KITAGenParticle>*)o)->size)();
}

static  void method_2290( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAGenParticle>*)o)->max_size)());
  else   (((const ::std::vector<KITAGenParticle>*)o)->max_size)();
}

static  void method_2291( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAGenParticle>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAGenParticle>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAGenParticle*)arg[1]);
  }
}

static  void method_2292( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAGenParticle>*)o)->capacity)());
  else   (((const ::std::vector<KITAGenParticle>*)o)->capacity)();
}

static  void method_2293( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAGenParticle>*)o)->empty)());
  else   (((const ::std::vector<KITAGenParticle>*)o)->empty)();
}

static  void method_2294( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenParticle>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_2295( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenParticle>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAGenParticle>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_2296( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenParticle>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAGenParticle>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_2298( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenParticle>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAGenParticle>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2299( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenParticle>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAGenParticle>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2300( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenParticle>*)o)->front)();
  else   (((::std::vector<KITAGenParticle>*)o)->front)();
}

static  void method_2301( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenParticle>*)o)->front)();
  else   (((const ::std::vector<KITAGenParticle>*)o)->front)();
}

static  void method_2302( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenParticle>*)o)->back)();
  else   (((::std::vector<KITAGenParticle>*)o)->back)();
}

static  void method_2303( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenParticle>*)o)->back)();
  else   (((const ::std::vector<KITAGenParticle>*)o)->back)();
}

static  void method_2304( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAGenParticle>*)o)->data)());
  else   (((::std::vector<KITAGenParticle>*)o)->data)();
}

static  void method_2305( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAGenParticle>*)o)->data)());
  else   (((const ::std::vector<KITAGenParticle>*)o)->data)();
}

static  void method_2306( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenParticle>*)o)->push_back)(*(const ::KITAGenParticle*)arg[0]);
}

static  void method_2307( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAGenParticle>*)o)->pop_back)();
}

static  void method_2308( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >)((((::std::vector<KITAGenParticle>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >*)arg[0],
    *(const ::KITAGenParticle*)arg[1]));
  else   (((::std::vector<KITAGenParticle>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >*)arg[0],
    *(const ::KITAGenParticle*)arg[1]);
}

static  void method_2309( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenParticle>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAGenParticle*)arg[2]);
}

static  void method_2310( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >)((((::std::vector<KITAGenParticle>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >*)arg[0]));
  else   (((::std::vector<KITAGenParticle>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >*)arg[0]);
}

static  void method_2311( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >)((((::std::vector<KITAGenParticle>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >*)arg[1]));
  else   (((::std::vector<KITAGenParticle>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAGenParticle*,std::vector<KITAGenParticle> >*)arg[1]);
}

static  void method_2312( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenParticle>*)o)->swap)(*(::std::vector<KITAGenParticle>*)arg[0]);
}

static  void method_2313( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAGenParticle>*)o)->clear)();
}

static void method_newdel_351( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenParticle> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenParticle> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenParticle> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenParticle> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenParticle> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x68( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAGenParticle,std::allocator<KITAGenParticle> >")), ::Reflex::BaseOffset< ::std::vector<KITAGenParticle>,::std::_Vector_base<KITAGenParticle,std::allocator<KITAGenParticle> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x69( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAGenParticle> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAGenParticle> >::Generate();
}

//------Dictionary for class vector<KITAGenParticle,std::allocator<KITAGenParticle> > -------------------------------
void __std__vector_KITAGenParticle__db_datamem(Reflex::Class*);
void __std__vector_KITAGenParticle__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAGenParticle__datamem_bld(&__std__vector_KITAGenParticle__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAGenParticle__funcmem_bld(&__std__vector_KITAGenParticle__db_funcmem);
void __std__vector_KITAGenParticle__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAGenParticle>"), typeid(::std::vector<KITAGenParticle>), sizeof(::std::vector<KITAGenParticle>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAGenParticle*")
  .AddBase(type_1767, ::Reflex::BaseOffset< ::std::vector<KITAGenParticle>, ::std::_Vector_base<KITAGenParticle,std::allocator<KITAGenParticle> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_516, Reflex::Literal("std::vector<KITAGenParticle>::_Alloc_value_type"))
  .AddTypedef(type_1767, Reflex::Literal("std::vector<KITAGenParticle>::_Base"))
  .AddTypedef(type_1555, Reflex::Literal("std::vector<KITAGenParticle>::_Tp_alloc_type"))
  .AddTypedef(type_516, Reflex::Literal("std::vector<KITAGenParticle>::value_type"))
  .AddTypedef(type_2259, Reflex::Literal("std::vector<KITAGenParticle>::pointer"))
  .AddTypedef(type_2261, Reflex::Literal("std::vector<KITAGenParticle>::const_pointer"))
  .AddTypedef(type_2263, Reflex::Literal("std::vector<KITAGenParticle>::reference"))
  .AddTypedef(type_2265, Reflex::Literal("std::vector<KITAGenParticle>::const_reference"))
  .AddTypedef(type_2210, Reflex::Literal("std::vector<KITAGenParticle>::iterator"))
  .AddTypedef(type_2211, Reflex::Literal("std::vector<KITAGenParticle>::const_iterator"))
  .AddTypedef(type_1697, Reflex::Literal("std::vector<KITAGenParticle>::const_reverse_iterator"))
  .AddTypedef(type_1698, Reflex::Literal("std::vector<KITAGenParticle>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAGenParticle>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAGenParticle>::difference_type"))
  .AddTypedef(type_1555, Reflex::Literal("std::vector<KITAGenParticle>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_2274, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8118), Reflex::Literal("vector"), constructor_2275, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_2265, type_8118), Reflex::Literal("vector"), constructor_2276, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8119), Reflex::Literal("vector"), constructor_2277, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_2278, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_351, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x68, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x69, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAGenParticle__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAGenParticle,std::allocator<KITAGenParticle> > -------------------
void __std__vector_KITAGenParticle__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAGenParticle,std::allocator<KITAGenParticle> > -------------------
void __std__vector_KITAGenParticle__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8120, type_8119), Reflex::Literal("operator="), operator_2279, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_2265), Reflex::Literal("assign"), method_2280, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2210), Reflex::Literal("begin"), method_2281, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2211), Reflex::Literal("begin"), method_2282, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2210), Reflex::Literal("end"), method_2283, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2211), Reflex::Literal("end"), method_2284, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_2289, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_2290, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_516), Reflex::Literal("resize"), method_2291, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_2292, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_2293, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_2294, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2263, type_1639), Reflex::Literal("operator[]"), operator_2295, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2265, type_1639), Reflex::Literal("operator[]"), operator_2296, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2263, type_1639), Reflex::Literal("at"), method_2298, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2265, type_1639), Reflex::Literal("at"), method_2299, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2263), Reflex::Literal("front"), method_2300, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2265), Reflex::Literal("front"), method_2301, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2263), Reflex::Literal("back"), method_2302, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2265), Reflex::Literal("back"), method_2303, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2259), Reflex::Literal("data"), method_2304, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2261), Reflex::Literal("data"), method_2305, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2265), Reflex::Literal("push_back"), method_2306, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_2307, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2210, type_2210, type_2265), Reflex::Literal("insert"), method_2308, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2210, type_1639, type_2265), Reflex::Literal("insert"), method_2309, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2210, type_2210), Reflex::Literal("erase"), method_2310, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2210, type_2210, type_2210), Reflex::Literal("erase"), method_2311, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8120), Reflex::Literal("swap"), method_2312, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_2313, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class vector<KITAJetWithSubjets,std::allocator<KITAJetWithSubjets> > -------------------------------
static void constructor_2375( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJetWithSubjets>();
  else ::new(mem) ::std::vector<KITAJetWithSubjets>();
}

static void constructor_2376( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJetWithSubjets>(*(const ::std::allocator<KITAJetWithSubjets>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJetWithSubjets>(*(const ::std::allocator<KITAJetWithSubjets>*)arg[0]);
}

static void constructor_2377( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJetWithSubjets>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAJetWithSubjets>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJetWithSubjets>(*(::std::size_t*)arg[0],
      *(const ::KITAJetWithSubjets*)arg[1]);
  else ::new(mem) ::std::vector<KITAJetWithSubjets>(*(::std::size_t*)arg[0],
      *(const ::KITAJetWithSubjets*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJetWithSubjets>(*(::std::size_t*)arg[0],
      *(const ::KITAJetWithSubjets*)arg[1],
      *(const ::std::allocator<KITAJetWithSubjets>*)arg[2]);
  else ::new(mem) ::std::vector<KITAJetWithSubjets>(*(::std::size_t*)arg[0],
      *(const ::KITAJetWithSubjets*)arg[1],
      *(const ::std::allocator<KITAJetWithSubjets>*)arg[2]);
  }
}

static void constructor_2378( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJetWithSubjets>(*(const ::std::vector<KITAJetWithSubjets>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJetWithSubjets>(*(const ::std::vector<KITAJetWithSubjets>*)arg[0]);
}

static void destructor_2379(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAJetWithSubjets>*)o)->::std::vector<KITAJetWithSubjets>::~vector)();
}
static  void operator_2380( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJetWithSubjets>*)o)->operator=)(*(const ::std::vector<KITAJetWithSubjets>*)arg[0]);
  else   (((::std::vector<KITAJetWithSubjets>*)o)->operator=)(*(const ::std::vector<KITAJetWithSubjets>*)arg[0]);
}

static  void method_2381( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJetWithSubjets>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAJetWithSubjets*)arg[1]);
}

static  void method_2382( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >)((((::std::vector<KITAJetWithSubjets>*)o)->begin)());
  else   (((::std::vector<KITAJetWithSubjets>*)o)->begin)();
}

static  void method_2383( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >)((((const ::std::vector<KITAJetWithSubjets>*)o)->begin)());
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->begin)();
}

static  void method_2384( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >)((((::std::vector<KITAJetWithSubjets>*)o)->end)());
  else   (((::std::vector<KITAJetWithSubjets>*)o)->end)();
}

static  void method_2385( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >)((((const ::std::vector<KITAJetWithSubjets>*)o)->end)());
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->end)();
}

static  void method_2390( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJetWithSubjets>*)o)->size)());
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->size)();
}

static  void method_2391( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJetWithSubjets>*)o)->max_size)());
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->max_size)();
}

static  void method_2392( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAJetWithSubjets>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAJetWithSubjets>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAJetWithSubjets*)arg[1]);
  }
}

static  void method_2393( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJetWithSubjets>*)o)->capacity)());
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->capacity)();
}

static  void method_2394( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAJetWithSubjets>*)o)->empty)());
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->empty)();
}

static  void method_2395( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJetWithSubjets>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_2396( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJetWithSubjets>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJetWithSubjets>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_2397( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJetWithSubjets>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_2399( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJetWithSubjets>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJetWithSubjets>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2400( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJetWithSubjets>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2401( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJetWithSubjets>*)o)->front)();
  else   (((::std::vector<KITAJetWithSubjets>*)o)->front)();
}

static  void method_2402( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJetWithSubjets>*)o)->front)();
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->front)();
}

static  void method_2403( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJetWithSubjets>*)o)->back)();
  else   (((::std::vector<KITAJetWithSubjets>*)o)->back)();
}

static  void method_2404( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJetWithSubjets>*)o)->back)();
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->back)();
}

static  void method_2405( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAJetWithSubjets>*)o)->data)());
  else   (((::std::vector<KITAJetWithSubjets>*)o)->data)();
}

static  void method_2406( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAJetWithSubjets>*)o)->data)());
  else   (((const ::std::vector<KITAJetWithSubjets>*)o)->data)();
}

static  void method_2407( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJetWithSubjets>*)o)->push_back)(*(const ::KITAJetWithSubjets*)arg[0]);
}

static  void method_2408( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJetWithSubjets>*)o)->pop_back)();
}

static  void method_2409( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >)((((::std::vector<KITAJetWithSubjets>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >*)arg[0],
    *(const ::KITAJetWithSubjets*)arg[1]));
  else   (((::std::vector<KITAJetWithSubjets>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >*)arg[0],
    *(const ::KITAJetWithSubjets*)arg[1]);
}

static  void method_2410( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJetWithSubjets>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAJetWithSubjets*)arg[2]);
}

static  void method_2411( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >)((((::std::vector<KITAJetWithSubjets>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >*)arg[0]));
  else   (((::std::vector<KITAJetWithSubjets>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >*)arg[0]);
}

static  void method_2412( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >)((((::std::vector<KITAJetWithSubjets>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >*)arg[1]));
  else   (((::std::vector<KITAJetWithSubjets>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJetWithSubjets*,std::vector<KITAJetWithSubjets> >*)arg[1]);
}

static  void method_2413( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJetWithSubjets>*)o)->swap)(*(::std::vector<KITAJetWithSubjets>*)arg[0]);
}

static  void method_2414( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJetWithSubjets>*)o)->clear)();
}

static void method_newdel_408( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJetWithSubjets> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJetWithSubjets> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJetWithSubjets> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJetWithSubjets> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJetWithSubjets> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x71( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJetWithSubjets,std::allocator<KITAJetWithSubjets> >")), ::Reflex::BaseOffset< ::std::vector<KITAJetWithSubjets>,::std::_Vector_base<KITAJetWithSubjets,std::allocator<KITAJetWithSubjets> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x72( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAJetWithSubjets> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAJetWithSubjets> >::Generate();
}

//------Dictionary for class vector<KITAJetWithSubjets,std::allocator<KITAJetWithSubjets> > -------------------------------
void __std__vector_KITAJetWithSubjets__db_datamem(Reflex::Class*);
void __std__vector_KITAJetWithSubjets__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAJetWithSubjets__datamem_bld(&__std__vector_KITAJetWithSubjets__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAJetWithSubjets__funcmem_bld(&__std__vector_KITAJetWithSubjets__db_funcmem);
void __std__vector_KITAJetWithSubjets__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAJetWithSubjets>"), typeid(::std::vector<KITAJetWithSubjets>), sizeof(::std::vector<KITAJetWithSubjets>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAJet*")
  .AddBase(type_1752, ::Reflex::BaseOffset< ::std::vector<KITAJetWithSubjets>, ::std::_Vector_base<KITAJetWithSubjets,std::allocator<KITAJetWithSubjets> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_1030, Reflex::Literal("std::vector<KITAJetWithSubjets>::_Alloc_value_type"))
  .AddTypedef(type_1752, Reflex::Literal("std::vector<KITAJetWithSubjets>::_Base"))
  .AddTypedef(type_1530, Reflex::Literal("std::vector<KITAJetWithSubjets>::_Tp_alloc_type"))
  .AddTypedef(type_1030, Reflex::Literal("std::vector<KITAJetWithSubjets>::value_type"))
  .AddTypedef(type_2360, Reflex::Literal("std::vector<KITAJetWithSubjets>::pointer"))
  .AddTypedef(type_2362, Reflex::Literal("std::vector<KITAJetWithSubjets>::const_pointer"))
  .AddTypedef(type_2364, Reflex::Literal("std::vector<KITAJetWithSubjets>::reference"))
  .AddTypedef(type_2366, Reflex::Literal("std::vector<KITAJetWithSubjets>::const_reference"))
  .AddTypedef(type_2180, Reflex::Literal("std::vector<KITAJetWithSubjets>::iterator"))
  .AddTypedef(type_2181, Reflex::Literal("std::vector<KITAJetWithSubjets>::const_iterator"))
  .AddTypedef(type_1657, Reflex::Literal("std::vector<KITAJetWithSubjets>::const_reverse_iterator"))
  .AddTypedef(type_1658, Reflex::Literal("std::vector<KITAJetWithSubjets>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAJetWithSubjets>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAJetWithSubjets>::difference_type"))
  .AddTypedef(type_1530, Reflex::Literal("std::vector<KITAJetWithSubjets>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_2375, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8147), Reflex::Literal("vector"), constructor_2376, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_2366, type_8147), Reflex::Literal("vector"), constructor_2377, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8148), Reflex::Literal("vector"), constructor_2378, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_2379, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_408, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x71, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x72, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAJetWithSubjets__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAJetWithSubjets,std::allocator<KITAJetWithSubjets> > -------------------
void __std__vector_KITAJetWithSubjets__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAJetWithSubjets,std::allocator<KITAJetWithSubjets> > -------------------
void __std__vector_KITAJetWithSubjets__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8149, type_8148), Reflex::Literal("operator="), operator_2380, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_2366), Reflex::Literal("assign"), method_2381, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2180), Reflex::Literal("begin"), method_2382, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2181), Reflex::Literal("begin"), method_2383, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2180), Reflex::Literal("end"), method_2384, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2181), Reflex::Literal("end"), method_2385, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_2390, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_2391, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_1030), Reflex::Literal("resize"), method_2392, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_2393, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_2394, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_2395, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2364, type_1639), Reflex::Literal("operator[]"), operator_2396, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2366, type_1639), Reflex::Literal("operator[]"), operator_2397, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2364, type_1639), Reflex::Literal("at"), method_2399, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2366, type_1639), Reflex::Literal("at"), method_2400, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2364), Reflex::Literal("front"), method_2401, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2366), Reflex::Literal("front"), method_2402, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2364), Reflex::Literal("back"), method_2403, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2366), Reflex::Literal("back"), method_2404, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2360), Reflex::Literal("data"), method_2405, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2362), Reflex::Literal("data"), method_2406, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2366), Reflex::Literal("push_back"), method_2407, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_2408, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2180, type_2180, type_2366), Reflex::Literal("insert"), method_2409, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2180, type_1639, type_2366), Reflex::Literal("insert"), method_2410, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2180, type_2180), Reflex::Literal("erase"), method_2411, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2180, type_2180, type_2180), Reflex::Literal("erase"), method_2412, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8149), Reflex::Literal("swap"), method_2413, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_2414, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class vector<KITAGenJetWithSubjets,std::allocator<KITAGenJetWithSubjets> > -------------------------------
static void constructor_2553( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJetWithSubjets>();
  else ::new(mem) ::std::vector<KITAGenJetWithSubjets>();
}

static void constructor_2554( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJetWithSubjets>(*(const ::std::allocator<KITAGenJetWithSubjets>*)arg[0]);
  else ::new(mem) ::std::vector<KITAGenJetWithSubjets>(*(const ::std::allocator<KITAGenJetWithSubjets>*)arg[0]);
}

static void constructor_2555( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJetWithSubjets>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAGenJetWithSubjets>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJetWithSubjets>(*(::std::size_t*)arg[0],
      *(const ::KITAGenJetWithSubjets*)arg[1]);
  else ::new(mem) ::std::vector<KITAGenJetWithSubjets>(*(::std::size_t*)arg[0],
      *(const ::KITAGenJetWithSubjets*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJetWithSubjets>(*(::std::size_t*)arg[0],
      *(const ::KITAGenJetWithSubjets*)arg[1],
      *(const ::std::allocator<KITAGenJetWithSubjets>*)arg[2]);
  else ::new(mem) ::std::vector<KITAGenJetWithSubjets>(*(::std::size_t*)arg[0],
      *(const ::KITAGenJetWithSubjets*)arg[1],
      *(const ::std::allocator<KITAGenJetWithSubjets>*)arg[2]);
  }
}

static void constructor_2556( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJetWithSubjets>(*(const ::std::vector<KITAGenJetWithSubjets>*)arg[0]);
  else ::new(mem) ::std::vector<KITAGenJetWithSubjets>(*(const ::std::vector<KITAGenJetWithSubjets>*)arg[0]);
}

static void destructor_2557(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAGenJetWithSubjets>*)o)->::std::vector<KITAGenJetWithSubjets>::~vector)();
}
static  void operator_2558( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenJetWithSubjets>*)o)->operator=)(*(const ::std::vector<KITAGenJetWithSubjets>*)arg[0]);
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->operator=)(*(const ::std::vector<KITAGenJetWithSubjets>*)arg[0]);
}

static  void method_2559( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenJetWithSubjets>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAGenJetWithSubjets*)arg[1]);
}

static  void method_2560( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >)((((::std::vector<KITAGenJetWithSubjets>*)o)->begin)());
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->begin)();
}

static  void method_2561( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >)((((const ::std::vector<KITAGenJetWithSubjets>*)o)->begin)());
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->begin)();
}

static  void method_2562( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >)((((::std::vector<KITAGenJetWithSubjets>*)o)->end)());
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->end)();
}

static  void method_2563( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >)((((const ::std::vector<KITAGenJetWithSubjets>*)o)->end)());
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->end)();
}

static  void method_2568( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAGenJetWithSubjets>*)o)->size)());
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->size)();
}

static  void method_2569( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAGenJetWithSubjets>*)o)->max_size)());
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->max_size)();
}

static  void method_2570( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAGenJetWithSubjets>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAGenJetWithSubjets>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAGenJetWithSubjets*)arg[1]);
  }
}

static  void method_2571( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAGenJetWithSubjets>*)o)->capacity)());
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->capacity)();
}

static  void method_2572( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAGenJetWithSubjets>*)o)->empty)());
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->empty)();
}

static  void method_2573( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenJetWithSubjets>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_2574( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenJetWithSubjets>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_2575( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenJetWithSubjets>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_2577( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenJetWithSubjets>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2578( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenJetWithSubjets>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2579( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenJetWithSubjets>*)o)->front)();
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->front)();
}

static  void method_2580( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenJetWithSubjets>*)o)->front)();
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->front)();
}

static  void method_2581( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenJetWithSubjets>*)o)->back)();
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->back)();
}

static  void method_2582( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenJetWithSubjets>*)o)->back)();
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->back)();
}

static  void method_2583( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAGenJetWithSubjets>*)o)->data)());
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->data)();
}

static  void method_2584( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAGenJetWithSubjets>*)o)->data)());
  else   (((const ::std::vector<KITAGenJetWithSubjets>*)o)->data)();
}

static  void method_2585( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenJetWithSubjets>*)o)->push_back)(*(const ::KITAGenJetWithSubjets*)arg[0]);
}

static  void method_2586( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAGenJetWithSubjets>*)o)->pop_back)();
}

static  void method_2587( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >)((((::std::vector<KITAGenJetWithSubjets>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >*)arg[0],
    *(const ::KITAGenJetWithSubjets*)arg[1]));
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >*)arg[0],
    *(const ::KITAGenJetWithSubjets*)arg[1]);
}

static  void method_2588( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenJetWithSubjets>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAGenJetWithSubjets*)arg[2]);
}

static  void method_2589( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >)((((::std::vector<KITAGenJetWithSubjets>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >*)arg[0]));
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >*)arg[0]);
}

static  void method_2590( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >)((((::std::vector<KITAGenJetWithSubjets>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >*)arg[1]));
  else   (((::std::vector<KITAGenJetWithSubjets>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAGenJetWithSubjets*,std::vector<KITAGenJetWithSubjets> >*)arg[1]);
}

static  void method_2591( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenJetWithSubjets>*)o)->swap)(*(::std::vector<KITAGenJetWithSubjets>*)arg[0]);
}

static  void method_2592( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAGenJetWithSubjets>*)o)->clear)();
}

static void method_newdel_491( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenJetWithSubjets> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenJetWithSubjets> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenJetWithSubjets> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenJetWithSubjets> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenJetWithSubjets> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x74( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAGenJetWithSubjets,std::allocator<KITAGenJetWithSubjets> >")), ::Reflex::BaseOffset< ::std::vector<KITAGenJetWithSubjets>,::std::_Vector_base<KITAGenJetWithSubjets,std::allocator<KITAGenJetWithSubjets> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x75( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAGenJetWithSubjets> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAGenJetWithSubjets> >::Generate();
}

//------Dictionary for class vector<KITAGenJetWithSubjets,std::allocator<KITAGenJetWithSubjets> > -------------------------------
void __std__vector_KITAGenJetWithSubjets__db_datamem(Reflex::Class*);
void __std__vector_KITAGenJetWithSubjets__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAGenJetWithSubjets__datamem_bld(&__std__vector_KITAGenJetWithSubjets__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAGenJetWithSubjets__funcmem_bld(&__std__vector_KITAGenJetWithSubjets__db_funcmem);
void __std__vector_KITAGenJetWithSubjets__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAGenJetWithSubjets>"), typeid(::std::vector<KITAGenJetWithSubjets>), sizeof(::std::vector<KITAGenJetWithSubjets>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAGenJet*")
  .AddBase(type_1751, ::Reflex::BaseOffset< ::std::vector<KITAGenJetWithSubjets>, ::std::_Vector_base<KITAGenJetWithSubjets,std::allocator<KITAGenJetWithSubjets> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_1003, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::_Alloc_value_type"))
  .AddTypedef(type_1751, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::_Base"))
  .AddTypedef(type_1529, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::_Tp_alloc_type"))
  .AddTypedef(type_1003, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::value_type"))
  .AddTypedef(type_2538, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::pointer"))
  .AddTypedef(type_2540, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::const_pointer"))
  .AddTypedef(type_2542, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::reference"))
  .AddTypedef(type_2544, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::const_reference"))
  .AddTypedef(type_2178, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::iterator"))
  .AddTypedef(type_2179, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::const_iterator"))
  .AddTypedef(type_1655, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::const_reverse_iterator"))
  .AddTypedef(type_1656, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::difference_type"))
  .AddTypedef(type_1529, Reflex::Literal("std::vector<KITAGenJetWithSubjets>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_2553, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8164), Reflex::Literal("vector"), constructor_2554, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_2544, type_8164), Reflex::Literal("vector"), constructor_2555, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8165), Reflex::Literal("vector"), constructor_2556, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_2557, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_491, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x74, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x75, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAGenJetWithSubjets__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAGenJetWithSubjets,std::allocator<KITAGenJetWithSubjets> > -------------------
void __std__vector_KITAGenJetWithSubjets__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAGenJetWithSubjets,std::allocator<KITAGenJetWithSubjets> > -------------------
void __std__vector_KITAGenJetWithSubjets__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8166, type_8165), Reflex::Literal("operator="), operator_2558, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_2544), Reflex::Literal("assign"), method_2559, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2178), Reflex::Literal("begin"), method_2560, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2179), Reflex::Literal("begin"), method_2561, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2178), Reflex::Literal("end"), method_2562, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2179), Reflex::Literal("end"), method_2563, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_2568, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_2569, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_1003), Reflex::Literal("resize"), method_2570, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_2571, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_2572, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_2573, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2542, type_1639), Reflex::Literal("operator[]"), operator_2574, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2544, type_1639), Reflex::Literal("operator[]"), operator_2575, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2542, type_1639), Reflex::Literal("at"), method_2577, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2544, type_1639), Reflex::Literal("at"), method_2578, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2542), Reflex::Literal("front"), method_2579, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2544), Reflex::Literal("front"), method_2580, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2542), Reflex::Literal("back"), method_2581, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2544), Reflex::Literal("back"), method_2582, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2538), Reflex::Literal("data"), method_2583, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2540), Reflex::Literal("data"), method_2584, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2544), Reflex::Literal("push_back"), method_2585, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_2586, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2178, type_2178, type_2544), Reflex::Literal("insert"), method_2587, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2178, type_1639, type_2544), Reflex::Literal("insert"), method_2588, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2178, type_2178), Reflex::Literal("erase"), method_2589, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2178, type_2178, type_2178), Reflex::Literal("erase"), method_2590, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8166), Reflex::Literal("swap"), method_2591, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_2592, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class vector<KITAMuon,std::allocator<KITAMuon> > -------------------------------
static void constructor_2637( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMuon>();
  else ::new(mem) ::std::vector<KITAMuon>();
}

static void constructor_2638( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMuon>(*(const ::std::allocator<KITAMuon>*)arg[0]);
  else ::new(mem) ::std::vector<KITAMuon>(*(const ::std::allocator<KITAMuon>*)arg[0]);
}

static void constructor_2639( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMuon>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAMuon>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMuon>(*(::std::size_t*)arg[0],
      *(const ::KITAMuon*)arg[1]);
  else ::new(mem) ::std::vector<KITAMuon>(*(::std::size_t*)arg[0],
      *(const ::KITAMuon*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMuon>(*(::std::size_t*)arg[0],
      *(const ::KITAMuon*)arg[1],
      *(const ::std::allocator<KITAMuon>*)arg[2]);
  else ::new(mem) ::std::vector<KITAMuon>(*(::std::size_t*)arg[0],
      *(const ::KITAMuon*)arg[1],
      *(const ::std::allocator<KITAMuon>*)arg[2]);
  }
}

static void constructor_2640( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMuon>(*(const ::std::vector<KITAMuon>*)arg[0]);
  else ::new(mem) ::std::vector<KITAMuon>(*(const ::std::vector<KITAMuon>*)arg[0]);
}

static void destructor_2641(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAMuon>*)o)->::std::vector<KITAMuon>::~vector)();
}
static  void operator_2642( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAMuon>*)o)->operator=)(*(const ::std::vector<KITAMuon>*)arg[0]);
  else   (((::std::vector<KITAMuon>*)o)->operator=)(*(const ::std::vector<KITAMuon>*)arg[0]);
}

static  void method_2643( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAMuon>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAMuon*)arg[1]);
}

static  void method_2644( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >)((((::std::vector<KITAMuon>*)o)->begin)());
  else   (((::std::vector<KITAMuon>*)o)->begin)();
}

static  void method_2645( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAMuon*,std::vector<KITAMuon> >)((((const ::std::vector<KITAMuon>*)o)->begin)());
  else   (((const ::std::vector<KITAMuon>*)o)->begin)();
}

static  void method_2646( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >)((((::std::vector<KITAMuon>*)o)->end)());
  else   (((::std::vector<KITAMuon>*)o)->end)();
}

static  void method_2647( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAMuon*,std::vector<KITAMuon> >)((((const ::std::vector<KITAMuon>*)o)->end)());
  else   (((const ::std::vector<KITAMuon>*)o)->end)();
}

static  void method_2652( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAMuon>*)o)->size)());
  else   (((const ::std::vector<KITAMuon>*)o)->size)();
}

static  void method_2653( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAMuon>*)o)->max_size)());
  else   (((const ::std::vector<KITAMuon>*)o)->max_size)();
}

static  void method_2654( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAMuon>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAMuon>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAMuon*)arg[1]);
  }
}

static  void method_2655( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAMuon>*)o)->capacity)());
  else   (((const ::std::vector<KITAMuon>*)o)->capacity)();
}

static  void method_2656( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAMuon>*)o)->empty)());
  else   (((const ::std::vector<KITAMuon>*)o)->empty)();
}

static  void method_2657( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAMuon>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_2658( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAMuon>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAMuon>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_2659( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAMuon>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAMuon>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_2661( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAMuon>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAMuon>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2662( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAMuon>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAMuon>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2663( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAMuon>*)o)->front)();
  else   (((::std::vector<KITAMuon>*)o)->front)();
}

static  void method_2664( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAMuon>*)o)->front)();
  else   (((const ::std::vector<KITAMuon>*)o)->front)();
}

static  void method_2665( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAMuon>*)o)->back)();
  else   (((::std::vector<KITAMuon>*)o)->back)();
}

static  void method_2666( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAMuon>*)o)->back)();
  else   (((const ::std::vector<KITAMuon>*)o)->back)();
}

static  void method_2667( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAMuon>*)o)->data)());
  else   (((::std::vector<KITAMuon>*)o)->data)();
}

static  void method_2668( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAMuon>*)o)->data)());
  else   (((const ::std::vector<KITAMuon>*)o)->data)();
}

static  void method_2669( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAMuon>*)o)->push_back)(*(const ::KITAMuon*)arg[0]);
}

static  void method_2670( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAMuon>*)o)->pop_back)();
}

static  void method_2671( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >)((((::std::vector<KITAMuon>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >*)arg[0],
    *(const ::KITAMuon*)arg[1]));
  else   (((::std::vector<KITAMuon>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >*)arg[0],
    *(const ::KITAMuon*)arg[1]);
}

static  void method_2672( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAMuon>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAMuon*)arg[2]);
}

static  void method_2673( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >)((((::std::vector<KITAMuon>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >*)arg[0]));
  else   (((::std::vector<KITAMuon>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >*)arg[0]);
}

static  void method_2674( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >)((((::std::vector<KITAMuon>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >*)arg[1]));
  else   (((::std::vector<KITAMuon>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAMuon*,std::vector<KITAMuon> >*)arg[1]);
}

static  void method_2675( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAMuon>*)o)->swap)(*(::std::vector<KITAMuon>*)arg[0]);
}

static  void method_2676( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAMuon>*)o)->clear)();
}

static void method_newdel_544( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAMuon> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAMuon> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAMuon> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAMuon> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAMuon> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x77( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAMuon,std::allocator<KITAMuon> >")), ::Reflex::BaseOffset< ::std::vector<KITAMuon>,::std::_Vector_base<KITAMuon,std::allocator<KITAMuon> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x78( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAMuon> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAMuon> >::Generate();
}

//------Dictionary for class vector<KITAMuon,std::allocator<KITAMuon> > -------------------------------
void __std__vector_KITAMuon__db_datamem(Reflex::Class*);
void __std__vector_KITAMuon__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAMuon__datamem_bld(&__std__vector_KITAMuon__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAMuon__funcmem_bld(&__std__vector_KITAMuon__db_funcmem);
void __std__vector_KITAMuon__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAMuon>"), typeid(::std::vector<KITAMuon>), sizeof(::std::vector<KITAMuon>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAMuon*")
  .AddBase(type_1754, ::Reflex::BaseOffset< ::std::vector<KITAMuon>, ::std::_Vector_base<KITAMuon,std::allocator<KITAMuon> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_448, Reflex::Literal("std::vector<KITAMuon>::_Alloc_value_type"))
  .AddTypedef(type_1754, Reflex::Literal("std::vector<KITAMuon>::_Base"))
  .AddTypedef(type_1536, Reflex::Literal("std::vector<KITAMuon>::_Tp_alloc_type"))
  .AddTypedef(type_448, Reflex::Literal("std::vector<KITAMuon>::value_type"))
  .AddTypedef(type_2622, Reflex::Literal("std::vector<KITAMuon>::pointer"))
  .AddTypedef(type_2624, Reflex::Literal("std::vector<KITAMuon>::const_pointer"))
  .AddTypedef(type_2626, Reflex::Literal("std::vector<KITAMuon>::reference"))
  .AddTypedef(type_2628, Reflex::Literal("std::vector<KITAMuon>::const_reference"))
  .AddTypedef(type_2184, Reflex::Literal("std::vector<KITAMuon>::iterator"))
  .AddTypedef(type_2185, Reflex::Literal("std::vector<KITAMuon>::const_iterator"))
  .AddTypedef(type_1665, Reflex::Literal("std::vector<KITAMuon>::const_reverse_iterator"))
  .AddTypedef(type_1666, Reflex::Literal("std::vector<KITAMuon>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAMuon>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAMuon>::difference_type"))
  .AddTypedef(type_1536, Reflex::Literal("std::vector<KITAMuon>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_2637, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8170), Reflex::Literal("vector"), constructor_2638, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_2628, type_8170), Reflex::Literal("vector"), constructor_2639, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8171), Reflex::Literal("vector"), constructor_2640, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_2641, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_544, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x77, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x78, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAMuon__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAMuon,std::allocator<KITAMuon> > -------------------
void __std__vector_KITAMuon__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAMuon,std::allocator<KITAMuon> > -------------------
void __std__vector_KITAMuon__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8172, type_8171), Reflex::Literal("operator="), operator_2642, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_2628), Reflex::Literal("assign"), method_2643, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2184), Reflex::Literal("begin"), method_2644, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2185), Reflex::Literal("begin"), method_2645, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2184), Reflex::Literal("end"), method_2646, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2185), Reflex::Literal("end"), method_2647, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_2652, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_2653, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_448), Reflex::Literal("resize"), method_2654, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_2655, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_2656, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_2657, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2626, type_1639), Reflex::Literal("operator[]"), operator_2658, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2628, type_1639), Reflex::Literal("operator[]"), operator_2659, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2626, type_1639), Reflex::Literal("at"), method_2661, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2628, type_1639), Reflex::Literal("at"), method_2662, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2626), Reflex::Literal("front"), method_2663, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2628), Reflex::Literal("front"), method_2664, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2626), Reflex::Literal("back"), method_2665, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2628), Reflex::Literal("back"), method_2666, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2622), Reflex::Literal("data"), method_2667, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2624), Reflex::Literal("data"), method_2668, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2628), Reflex::Literal("push_back"), method_2669, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_2670, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2184, type_2184, type_2628), Reflex::Literal("insert"), method_2671, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2184, type_1639, type_2628), Reflex::Literal("insert"), method_2672, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2184, type_2184), Reflex::Literal("erase"), method_2673, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2184, type_2184, type_2184), Reflex::Literal("erase"), method_2674, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8172), Reflex::Literal("swap"), method_2675, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_2676, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class vector<KITAJet,std::allocator<KITAJet> > -------------------------------
static void constructor_2784( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet>();
  else ::new(mem) ::std::vector<KITAJet>();
}

static void constructor_2785( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet>(*(const ::std::allocator<KITAJet>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet>(*(const ::std::allocator<KITAJet>*)arg[0]);
}

static void constructor_2786( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet>(*(::std::size_t*)arg[0],
      *(const ::KITAJet*)arg[1]);
  else ::new(mem) ::std::vector<KITAJet>(*(::std::size_t*)arg[0],
      *(const ::KITAJet*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet>(*(::std::size_t*)arg[0],
      *(const ::KITAJet*)arg[1],
      *(const ::std::allocator<KITAJet>*)arg[2]);
  else ::new(mem) ::std::vector<KITAJet>(*(::std::size_t*)arg[0],
      *(const ::KITAJet*)arg[1],
      *(const ::std::allocator<KITAJet>*)arg[2]);
  }
}

static void constructor_2787( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAJet>(*(const ::std::vector<KITAJet>*)arg[0]);
  else ::new(mem) ::std::vector<KITAJet>(*(const ::std::vector<KITAJet>*)arg[0]);
}

static void destructor_2788(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAJet>*)o)->::std::vector<KITAJet>::~vector)();
}
static  void operator_2789( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet>*)o)->operator=)(*(const ::std::vector<KITAJet>*)arg[0]);
  else   (((::std::vector<KITAJet>*)o)->operator=)(*(const ::std::vector<KITAJet>*)arg[0]);
}

static  void method_2790( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAJet*)arg[1]);
}

static  void method_2791( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >)((((::std::vector<KITAJet>*)o)->begin)());
  else   (((::std::vector<KITAJet>*)o)->begin)();
}

static  void method_2792( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJet*,std::vector<KITAJet> >)((((const ::std::vector<KITAJet>*)o)->begin)());
  else   (((const ::std::vector<KITAJet>*)o)->begin)();
}

static  void method_2793( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >)((((::std::vector<KITAJet>*)o)->end)());
  else   (((::std::vector<KITAJet>*)o)->end)();
}

static  void method_2794( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAJet*,std::vector<KITAJet> >)((((const ::std::vector<KITAJet>*)o)->end)());
  else   (((const ::std::vector<KITAJet>*)o)->end)();
}

static  void method_2799( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet>*)o)->size)());
  else   (((const ::std::vector<KITAJet>*)o)->size)();
}

static  void method_2800( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet>*)o)->max_size)());
  else   (((const ::std::vector<KITAJet>*)o)->max_size)();
}

static  void method_2801( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAJet>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAJet>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAJet*)arg[1]);
  }
}

static  void method_2802( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAJet>*)o)->capacity)());
  else   (((const ::std::vector<KITAJet>*)o)->capacity)();
}

static  void method_2803( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAJet>*)o)->empty)());
  else   (((const ::std::vector<KITAJet>*)o)->empty)();
}

static  void method_2804( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_2805( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_2806( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_2808( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAJet>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2809( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAJet>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2810( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet>*)o)->front)();
  else   (((::std::vector<KITAJet>*)o)->front)();
}

static  void method_2811( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet>*)o)->front)();
  else   (((const ::std::vector<KITAJet>*)o)->front)();
}

static  void method_2812( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAJet>*)o)->back)();
  else   (((::std::vector<KITAJet>*)o)->back)();
}

static  void method_2813( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAJet>*)o)->back)();
  else   (((const ::std::vector<KITAJet>*)o)->back)();
}

static  void method_2814( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAJet>*)o)->data)());
  else   (((::std::vector<KITAJet>*)o)->data)();
}

static  void method_2815( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAJet>*)o)->data)());
  else   (((const ::std::vector<KITAJet>*)o)->data)();
}

static  void method_2816( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet>*)o)->push_back)(*(const ::KITAJet*)arg[0]);
}

static  void method_2817( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJet>*)o)->pop_back)();
}

static  void method_2818( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >)((((::std::vector<KITAJet>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >*)arg[0],
    *(const ::KITAJet*)arg[1]));
  else   (((::std::vector<KITAJet>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >*)arg[0],
    *(const ::KITAJet*)arg[1]);
}

static  void method_2819( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAJet*)arg[2]);
}

static  void method_2820( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >)((((::std::vector<KITAJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >*)arg[0]));
  else   (((::std::vector<KITAJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >*)arg[0]);
}

static  void method_2821( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >)((((::std::vector<KITAJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >*)arg[1]));
  else   (((::std::vector<KITAJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAJet*,std::vector<KITAJet> >*)arg[1]);
}

static  void method_2822( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAJet>*)o)->swap)(*(::std::vector<KITAJet>*)arg[0]);
}

static  void method_2823( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAJet>*)o)->clear)();
}

static void method_newdel_647( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAJet> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x80( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAJet,std::allocator<KITAJet> >")), ::Reflex::BaseOffset< ::std::vector<KITAJet>,::std::_Vector_base<KITAJet,std::allocator<KITAJet> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x81( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAJet> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAJet> >::Generate();
}

//------Dictionary for class vector<KITAJet,std::allocator<KITAJet> > -------------------------------
void __std__vector_KITAJet__db_datamem(Reflex::Class*);
void __std__vector_KITAJet__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAJet__datamem_bld(&__std__vector_KITAJet__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAJet__funcmem_bld(&__std__vector_KITAJet__db_funcmem);
void __std__vector_KITAJet__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAJet>"), typeid(::std::vector<KITAJet>), sizeof(::std::vector<KITAJet>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAJet*")
  .AddBase(type_1758, ::Reflex::BaseOffset< ::std::vector<KITAJet>, ::std::_Vector_base<KITAJet,std::allocator<KITAJet> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_1023, Reflex::Literal("std::vector<KITAJet>::_Alloc_value_type"))
  .AddTypedef(type_1758, Reflex::Literal("std::vector<KITAJet>::_Base"))
  .AddTypedef(type_1548, Reflex::Literal("std::vector<KITAJet>::_Tp_alloc_type"))
  .AddTypedef(type_1023, Reflex::Literal("std::vector<KITAJet>::value_type"))
  .AddTypedef(type_2769, Reflex::Literal("std::vector<KITAJet>::pointer"))
  .AddTypedef(type_2771, Reflex::Literal("std::vector<KITAJet>::const_pointer"))
  .AddTypedef(type_2773, Reflex::Literal("std::vector<KITAJet>::reference"))
  .AddTypedef(type_2775, Reflex::Literal("std::vector<KITAJet>::const_reference"))
  .AddTypedef(type_2192, Reflex::Literal("std::vector<KITAJet>::iterator"))
  .AddTypedef(type_2193, Reflex::Literal("std::vector<KITAJet>::const_iterator"))
  .AddTypedef(type_1673, Reflex::Literal("std::vector<KITAJet>::const_reverse_iterator"))
  .AddTypedef(type_1674, Reflex::Literal("std::vector<KITAJet>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAJet>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAJet>::difference_type"))
  .AddTypedef(type_1548, Reflex::Literal("std::vector<KITAJet>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_2784, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8211), Reflex::Literal("vector"), constructor_2785, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_2775, type_8211), Reflex::Literal("vector"), constructor_2786, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8212), Reflex::Literal("vector"), constructor_2787, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_2788, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_647, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x80, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x81, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAJet__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAJet,std::allocator<KITAJet> > -------------------
void __std__vector_KITAJet__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAJet,std::allocator<KITAJet> > -------------------
void __std__vector_KITAJet__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8213, type_8212), Reflex::Literal("operator="), operator_2789, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_2775), Reflex::Literal("assign"), method_2790, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2192), Reflex::Literal("begin"), method_2791, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2193), Reflex::Literal("begin"), method_2792, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2192), Reflex::Literal("end"), method_2793, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2193), Reflex::Literal("end"), method_2794, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_2799, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_2800, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_1023), Reflex::Literal("resize"), method_2801, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_2802, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_2803, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_2804, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2773, type_1639), Reflex::Literal("operator[]"), operator_2805, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2775, type_1639), Reflex::Literal("operator[]"), operator_2806, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2773, type_1639), Reflex::Literal("at"), method_2808, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2775, type_1639), Reflex::Literal("at"), method_2809, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2773), Reflex::Literal("front"), method_2810, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2775), Reflex::Literal("front"), method_2811, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2773), Reflex::Literal("back"), method_2812, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2775), Reflex::Literal("back"), method_2813, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2769), Reflex::Literal("data"), method_2814, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2771), Reflex::Literal("data"), method_2815, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2775), Reflex::Literal("push_back"), method_2816, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_2817, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2192, type_2192, type_2775), Reflex::Literal("insert"), method_2818, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2192, type_1639, type_2775), Reflex::Literal("insert"), method_2819, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2192, type_2192), Reflex::Literal("erase"), method_2820, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2192, type_2192, type_2192), Reflex::Literal("erase"), method_2821, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8213), Reflex::Literal("swap"), method_2822, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_2823, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class PxPyPzE4D<float> -------------------------------
static void destructor_2857(void*, void * o, const std::vector<void*>&, void *) {
(((::ROOT::Math::PxPyPzE4D<float>*)o)->::ROOT::Math::PxPyPzE4D<float>::~PxPyPzE4D)();
}
static void constructor_2858( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::ROOT::Math::PxPyPzE4D<float>();
  else ::new(mem) ::ROOT::Math::PxPyPzE4D<float>();
}

static void constructor_2859( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::ROOT::Math::PxPyPzE4D<float>(*(float*)arg[0],
      *(float*)arg[1],
      *(float*)arg[2],
      *(float*)arg[3]);
  else ::new(mem) ::ROOT::Math::PxPyPzE4D<float>(*(float*)arg[0],
      *(float*)arg[1],
      *(float*)arg[2],
      *(float*)arg[3]);
}

static void constructor_2860( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::ROOT::Math::PxPyPzE4D<float>(*(const ::ROOT::Math::PxPyPzE4D<float>*)arg[0]);
  else ::new(mem) ::ROOT::Math::PxPyPzE4D<float>(*(const ::ROOT::Math::PxPyPzE4D<float>*)arg[0]);
}

static  void operator_2861( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::ROOT::Math::PxPyPzE4D<float>*)o)->operator=)(*(const ::ROOT::Math::PxPyPzE4D<float>*)arg[0]);
  else   (((::ROOT::Math::PxPyPzE4D<float>*)o)->operator=)(*(const ::ROOT::Math::PxPyPzE4D<float>*)arg[0]);
}

static  void method_2862( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::ROOT::Math::PxPyPzE4D<float>*)o)->SetCoordinates)((const float*)arg[0]);
}

static  void method_2863( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->GetCoordinates)((float*)arg[0]);
}

static  void method_2864( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::ROOT::Math::PxPyPzE4D<float>*)o)->SetCoordinates)(*(float*)arg[0],
    *(float*)arg[1],
    *(float*)arg[2],
    *(float*)arg[3]);
}

static  void method_2865( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->GetCoordinates)(*(float*)arg[0],
    *(float*)arg[1],
    *(float*)arg[2],
    *(float*)arg[3]);
}

static  void method_2866( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Px)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Px)();
}

static  void method_2867( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Py)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Py)();
}

static  void method_2868( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Pz)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Pz)();
}

static  void method_2869( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->E)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->E)();
}

static  void method_2870( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->X)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->X)();
}

static  void method_2871( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Y)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Y)();
}

static  void method_2872( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Z)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Z)();
}

static  void method_2873( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->T)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->T)();
}

static  void method_2874( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->P2)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->P2)();
}

static  void method_2875( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->P)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->P)();
}

static  void method_2876( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->R)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->R)();
}

static  void method_2877( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->M2)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->M2)();
}

static  void method_2878( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Mag2)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Mag2)();
}

static  void method_2879( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->M)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->M)();
}

static  void method_2880( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Mag)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Mag)();
}

static  void method_2881( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Pt2)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Pt2)();
}

static  void method_2882( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Perp2)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Perp2)();
}

static  void method_2883( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Pt)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Pt)();
}

static  void method_2884( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Perp)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Perp)();
}

static  void method_2885( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Rho)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Rho)();
}

static  void method_2886( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Mt2)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Mt2)();
}

static  void method_2887( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Mt)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Mt)();
}

static  void method_2888( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Et2)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Et2)();
}

static  void method_2889( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Et)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Et)();
}

static  void method_2890( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Phi)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Phi)();
}

static  void method_2891( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Theta)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Theta)();
}

static  void method_2892( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Eta)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->Eta)();
}

static  void method_2893( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::ROOT::Math::PxPyPzE4D<float>*)o)->SetPx)(*(float*)arg[0]);
}

static  void method_2894( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::ROOT::Math::PxPyPzE4D<float>*)o)->SetPy)(*(float*)arg[0]);
}

static  void method_2895( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::ROOT::Math::PxPyPzE4D<float>*)o)->SetPz)(*(float*)arg[0]);
}

static  void method_2896( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::ROOT::Math::PxPyPzE4D<float>*)o)->SetE)(*(float*)arg[0]);
}

static  void method_2897( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::ROOT::Math::PxPyPzE4D<float>*)o)->SetPxPyPzE)(*(float*)arg[0],
    *(float*)arg[1],
    *(float*)arg[2],
    *(float*)arg[3]);
}

static  void method_2898( void*, void* o, const std::vector<void*>&, void*)
{
  (((::ROOT::Math::PxPyPzE4D<float>*)o)->Negate)();
}

static  void method_2899( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::ROOT::Math::PxPyPzE4D<float>*)o)->Scale)(*(const float*)arg[0]);
}

static  void operator_2900( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->operator==)(*(const ::ROOT::Math::PxPyPzE4D<float>*)arg[0]));
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->operator==)(*(const ::ROOT::Math::PxPyPzE4D<float>*)arg[0]);
}

static  void operator_2901( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->operator!=)(*(const ::ROOT::Math::PxPyPzE4D<float>*)arg[0]));
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->operator!=)(*(const ::ROOT::Math::PxPyPzE4D<float>*)arg[0]);
}

static  void method_2902( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->x)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->x)();
}

static  void method_2903( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->y)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->y)();
}

static  void method_2904( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->z)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->z)();
}

static  void method_2905( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (float)((((const ::ROOT::Math::PxPyPzE4D<float>*)o)->t)());
  else   (((const ::ROOT::Math::PxPyPzE4D<float>*)o)->t)();
}

static void method_newdel_728( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::ROOT::Math::PxPyPzE4D<float> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::ROOT::Math::PxPyPzE4D<float> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::ROOT::Math::PxPyPzE4D<float> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::ROOT::Math::PxPyPzE4D<float> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::ROOT::Math::PxPyPzE4D<float> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

//------Dictionary for class PxPyPzE4D<float> -------------------------------
void __ROOT__Math__PxPyPzE4D_float__db_datamem(Reflex::Class*);
void __ROOT__Math__PxPyPzE4D_float__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __ROOT__Math__PxPyPzE4D_float__datamem_bld(&__ROOT__Math__PxPyPzE4D_float__db_datamem);
Reflex::GenreflexMemberBuilder __ROOT__Math__PxPyPzE4D_float__funcmem_bld(&__ROOT__Math__PxPyPzE4D_float__db_funcmem);
void __ROOT__Math__PxPyPzE4D_float__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("ROOT::Math::PxPyPzE4D<float>"), typeid(::ROOT::Math::PxPyPzE4D<float>), sizeof(::ROOT::Math::PxPyPzE4D<float>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddTypedef(type_446, Reflex::Literal("ROOT::Math::PxPyPzE4D<float>::Scalar"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~PxPyPzE4D"), destructor_2857, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("PxPyPzE4D"), constructor_2858, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_446, type_446, type_446, type_446), Reflex::Literal("PxPyPzE4D"), constructor_2859, 0, "px;py;pz;e", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_4258), Reflex::Literal("PxPyPzE4D"), constructor_2860, 0, "v", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_728, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__ROOT__Math__PxPyPzE4D_float__datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__ROOT__Math__PxPyPzE4D_float__funcmem_bld);
}

//------Delayed data member builder for class PxPyPzE4D<float> -------------------
void __ROOT__Math__PxPyPzE4D_float__db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_446, Reflex::Literal("fX"), OffsetOf(__shadow__::__ROOT__Math__PxPyPzE4D_float_, fX), ::Reflex::PRIVATE)
  .AddDataMember(type_446, Reflex::Literal("fY"), OffsetOf(__shadow__::__ROOT__Math__PxPyPzE4D_float_, fY), ::Reflex::PRIVATE)
  .AddDataMember(type_446, Reflex::Literal("fZ"), OffsetOf(__shadow__::__ROOT__Math__PxPyPzE4D_float_, fZ), ::Reflex::PRIVATE)
  .AddDataMember(type_446, Reflex::Literal("fT"), OffsetOf(__shadow__::__ROOT__Math__PxPyPzE4D_float_, fT), ::Reflex::PRIVATE);
}
//------Delayed function member builder for class PxPyPzE4D<float> -------------------
void __ROOT__Math__PxPyPzE4D_float__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4256, type_4258), Reflex::Literal("operator="), operator_2861, 0, "v", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_4383), Reflex::Literal("SetCoordinates"), method_2862, 0, "src", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1943), Reflex::Literal("GetCoordinates"), method_2863, 0, "dest", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_446, type_446, type_446, type_446), Reflex::Literal("SetCoordinates"), method_2864, 0, "px;py;pz;e", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_4385, type_4385, type_4385, type_4385), Reflex::Literal("GetCoordinates"), method_2865, 0, "px;py;pz;e", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Px"), method_2866, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Py"), method_2867, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Pz"), method_2868, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("E"), method_2869, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("X"), method_2870, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Y"), method_2871, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Z"), method_2872, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("T"), method_2873, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("P2"), method_2874, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("P"), method_2875, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("R"), method_2876, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("M2"), method_2877, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Mag2"), method_2878, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("M"), method_2879, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Mag"), method_2880, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Pt2"), method_2881, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Perp2"), method_2882, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Pt"), method_2883, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Perp"), method_2884, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Rho"), method_2885, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Mt2"), method_2886, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Mt"), method_2887, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Et2"), method_2888, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Et"), method_2889, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Phi"), method_2890, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Theta"), method_2891, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("Eta"), method_2892, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_446), Reflex::Literal("SetPx"), method_2893, 0, "px", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_446), Reflex::Literal("SetPy"), method_2894, 0, "py", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_446), Reflex::Literal("SetPz"), method_2895, 0, "pz", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_446), Reflex::Literal("SetE"), method_2896, 0, "e", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_446, type_446, type_446, type_446), Reflex::Literal("SetPxPyPzE"), method_2897, 0, "px;py;pz;e", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("Negate"), method_2898, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_4387), Reflex::Literal("Scale"), method_2899, 0, "a", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892, type_4258), Reflex::Literal("operator=="), operator_2900, 0, "rhs", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892, type_4258), Reflex::Literal("operator!="), operator_2901, 0, "rhs", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("x"), method_2902, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("y"), method_2903, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("z"), method_2904, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_446), Reflex::Literal("t"), method_2905, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST);
}
//------Stub functions for class vector<KITAGenJet,std::allocator<KITAGenJet> > -------------------------------
static void constructor_2940( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJet>();
  else ::new(mem) ::std::vector<KITAGenJet>();
}

static void constructor_2941( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJet>(*(const ::std::allocator<KITAGenJet>*)arg[0]);
  else ::new(mem) ::std::vector<KITAGenJet>(*(const ::std::allocator<KITAGenJet>*)arg[0]);
}

static void constructor_2942( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJet>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAGenJet>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJet>(*(::std::size_t*)arg[0],
      *(const ::KITAGenJet*)arg[1]);
  else ::new(mem) ::std::vector<KITAGenJet>(*(::std::size_t*)arg[0],
      *(const ::KITAGenJet*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJet>(*(::std::size_t*)arg[0],
      *(const ::KITAGenJet*)arg[1],
      *(const ::std::allocator<KITAGenJet>*)arg[2]);
  else ::new(mem) ::std::vector<KITAGenJet>(*(::std::size_t*)arg[0],
      *(const ::KITAGenJet*)arg[1],
      *(const ::std::allocator<KITAGenJet>*)arg[2]);
  }
}

static void constructor_2943( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAGenJet>(*(const ::std::vector<KITAGenJet>*)arg[0]);
  else ::new(mem) ::std::vector<KITAGenJet>(*(const ::std::vector<KITAGenJet>*)arg[0]);
}

static void destructor_2944(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAGenJet>*)o)->::std::vector<KITAGenJet>::~vector)();
}
static  void operator_2945( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenJet>*)o)->operator=)(*(const ::std::vector<KITAGenJet>*)arg[0]);
  else   (((::std::vector<KITAGenJet>*)o)->operator=)(*(const ::std::vector<KITAGenJet>*)arg[0]);
}

static  void method_2946( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenJet>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAGenJet*)arg[1]);
}

static  void method_2947( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >)((((::std::vector<KITAGenJet>*)o)->begin)());
  else   (((::std::vector<KITAGenJet>*)o)->begin)();
}

static  void method_2948( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAGenJet*,std::vector<KITAGenJet> >)((((const ::std::vector<KITAGenJet>*)o)->begin)());
  else   (((const ::std::vector<KITAGenJet>*)o)->begin)();
}

static  void method_2949( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >)((((::std::vector<KITAGenJet>*)o)->end)());
  else   (((::std::vector<KITAGenJet>*)o)->end)();
}

static  void method_2950( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAGenJet*,std::vector<KITAGenJet> >)((((const ::std::vector<KITAGenJet>*)o)->end)());
  else   (((const ::std::vector<KITAGenJet>*)o)->end)();
}

static  void method_2955( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAGenJet>*)o)->size)());
  else   (((const ::std::vector<KITAGenJet>*)o)->size)();
}

static  void method_2956( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAGenJet>*)o)->max_size)());
  else   (((const ::std::vector<KITAGenJet>*)o)->max_size)();
}

static  void method_2957( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAGenJet>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAGenJet>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAGenJet*)arg[1]);
  }
}

static  void method_2958( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAGenJet>*)o)->capacity)());
  else   (((const ::std::vector<KITAGenJet>*)o)->capacity)();
}

static  void method_2959( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAGenJet>*)o)->empty)());
  else   (((const ::std::vector<KITAGenJet>*)o)->empty)();
}

static  void method_2960( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenJet>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_2961( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAGenJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_2962( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAGenJet>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_2964( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenJet>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAGenJet>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2965( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenJet>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAGenJet>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_2966( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenJet>*)o)->front)();
  else   (((::std::vector<KITAGenJet>*)o)->front)();
}

static  void method_2967( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenJet>*)o)->front)();
  else   (((const ::std::vector<KITAGenJet>*)o)->front)();
}

static  void method_2968( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAGenJet>*)o)->back)();
  else   (((::std::vector<KITAGenJet>*)o)->back)();
}

static  void method_2969( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAGenJet>*)o)->back)();
  else   (((const ::std::vector<KITAGenJet>*)o)->back)();
}

static  void method_2970( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAGenJet>*)o)->data)());
  else   (((::std::vector<KITAGenJet>*)o)->data)();
}

static  void method_2971( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAGenJet>*)o)->data)());
  else   (((const ::std::vector<KITAGenJet>*)o)->data)();
}

static  void method_2972( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenJet>*)o)->push_back)(*(const ::KITAGenJet*)arg[0]);
}

static  void method_2973( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAGenJet>*)o)->pop_back)();
}

static  void method_2974( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >)((((::std::vector<KITAGenJet>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >*)arg[0],
    *(const ::KITAGenJet*)arg[1]));
  else   (((::std::vector<KITAGenJet>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >*)arg[0],
    *(const ::KITAGenJet*)arg[1]);
}

static  void method_2975( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenJet>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAGenJet*)arg[2]);
}

static  void method_2976( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >)((((::std::vector<KITAGenJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >*)arg[0]));
  else   (((::std::vector<KITAGenJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >*)arg[0]);
}

static  void method_2977( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >)((((::std::vector<KITAGenJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >*)arg[1]));
  else   (((::std::vector<KITAGenJet>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAGenJet*,std::vector<KITAGenJet> >*)arg[1]);
}

static  void method_2978( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAGenJet>*)o)->swap)(*(::std::vector<KITAGenJet>*)arg[0]);
}

static  void method_2979( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAGenJet>*)o)->clear)();
}

static void method_newdel_841( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenJet> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenJet> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenJet> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenJet> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAGenJet> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x84( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAGenJet,std::allocator<KITAGenJet> >")), ::Reflex::BaseOffset< ::std::vector<KITAGenJet>,::std::_Vector_base<KITAGenJet,std::allocator<KITAGenJet> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x85( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAGenJet> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAGenJet> >::Generate();
}

//------Dictionary for class vector<KITAGenJet,std::allocator<KITAGenJet> > -------------------------------
void __std__vector_KITAGenJet__db_datamem(Reflex::Class*);
void __std__vector_KITAGenJet__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAGenJet__datamem_bld(&__std__vector_KITAGenJet__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAGenJet__funcmem_bld(&__std__vector_KITAGenJet__db_funcmem);
void __std__vector_KITAGenJet__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAGenJet>"), typeid(::std::vector<KITAGenJet>), sizeof(::std::vector<KITAGenJet>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAGenJet*")
  .AddBase(type_1757, ::Reflex::BaseOffset< ::std::vector<KITAGenJet>, ::std::_Vector_base<KITAGenJet,std::allocator<KITAGenJet> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_429, Reflex::Literal("std::vector<KITAGenJet>::_Alloc_value_type"))
  .AddTypedef(type_1757, Reflex::Literal("std::vector<KITAGenJet>::_Base"))
  .AddTypedef(type_1547, Reflex::Literal("std::vector<KITAGenJet>::_Tp_alloc_type"))
  .AddTypedef(type_429, Reflex::Literal("std::vector<KITAGenJet>::value_type"))
  .AddTypedef(type_2925, Reflex::Literal("std::vector<KITAGenJet>::pointer"))
  .AddTypedef(type_2927, Reflex::Literal("std::vector<KITAGenJet>::const_pointer"))
  .AddTypedef(type_2929, Reflex::Literal("std::vector<KITAGenJet>::reference"))
  .AddTypedef(type_2931, Reflex::Literal("std::vector<KITAGenJet>::const_reference"))
  .AddTypedef(type_2190, Reflex::Literal("std::vector<KITAGenJet>::iterator"))
  .AddTypedef(type_2191, Reflex::Literal("std::vector<KITAGenJet>::const_iterator"))
  .AddTypedef(type_1671, Reflex::Literal("std::vector<KITAGenJet>::const_reverse_iterator"))
  .AddTypedef(type_1672, Reflex::Literal("std::vector<KITAGenJet>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAGenJet>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAGenJet>::difference_type"))
  .AddTypedef(type_1547, Reflex::Literal("std::vector<KITAGenJet>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_2940, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8237), Reflex::Literal("vector"), constructor_2941, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_2931, type_8237), Reflex::Literal("vector"), constructor_2942, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8238), Reflex::Literal("vector"), constructor_2943, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_2944, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_841, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x84, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x85, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAGenJet__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAGenJet,std::allocator<KITAGenJet> > -------------------
void __std__vector_KITAGenJet__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAGenJet,std::allocator<KITAGenJet> > -------------------
void __std__vector_KITAGenJet__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8239, type_8238), Reflex::Literal("operator="), operator_2945, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_2931), Reflex::Literal("assign"), method_2946, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2190), Reflex::Literal("begin"), method_2947, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2191), Reflex::Literal("begin"), method_2948, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2190), Reflex::Literal("end"), method_2949, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2191), Reflex::Literal("end"), method_2950, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_2955, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_2956, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_429), Reflex::Literal("resize"), method_2957, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_2958, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_2959, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_2960, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2929, type_1639), Reflex::Literal("operator[]"), operator_2961, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2931, type_1639), Reflex::Literal("operator[]"), operator_2962, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2929, type_1639), Reflex::Literal("at"), method_2964, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2931, type_1639), Reflex::Literal("at"), method_2965, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2929), Reflex::Literal("front"), method_2966, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2931), Reflex::Literal("front"), method_2967, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2929), Reflex::Literal("back"), method_2968, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2931), Reflex::Literal("back"), method_2969, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2925), Reflex::Literal("data"), method_2970, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2927), Reflex::Literal("data"), method_2971, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2931), Reflex::Literal("push_back"), method_2972, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_2973, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2190, type_2190, type_2931), Reflex::Literal("insert"), method_2974, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2190, type_1639, type_2931), Reflex::Literal("insert"), method_2975, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2190, type_2190), Reflex::Literal("erase"), method_2976, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2190, type_2190, type_2190), Reflex::Literal("erase"), method_2977, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8239), Reflex::Literal("swap"), method_2978, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_2979, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,int,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int> > > -------------------------------
static void destructor_3199(void*, void * o, const std::vector<void*>&, void *) {
(((::std::map<std::basic_string<char>,int>*)o)->::std::map<std::basic_string<char>,int>::~map)();
}
static void constructor_3200( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,int>();
  else ::new(mem) ::std::map<std::basic_string<char>,int>();
}

static void constructor_3201( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,int>(*(const ::std::less<std::basic_string<char> >*)arg[0]);
  else ::new(mem) ::std::map<std::basic_string<char>,int>(*(const ::std::less<std::basic_string<char> >*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,int>(*(const ::std::less<std::basic_string<char> >*)arg[0],
      *(const ::std::allocator<std::pair<const std::basic_string<char>,int> >*)arg[1]);
  else ::new(mem) ::std::map<std::basic_string<char>,int>(*(const ::std::less<std::basic_string<char> >*)arg[0],
      *(const ::std::allocator<std::pair<const std::basic_string<char>,int> >*)arg[1]);
  }
}

static void constructor_3202( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,int>(*(const ::std::map<std::basic_string<char>,int>*)arg[0]);
  else ::new(mem) ::std::map<std::basic_string<char>,int>(*(const ::std::map<std::basic_string<char>,int>*)arg[0]);
}

static  void operator_3203( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<std::basic_string<char>,int>*)o)->operator=)(*(const ::std::map<std::basic_string<char>,int>*)arg[0]);
  else   (((::std::map<std::basic_string<char>,int>*)o)->operator=)(*(const ::std::map<std::basic_string<char>,int>*)arg[0]);
}

static  void method_3204( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::allocator<std::pair<const std::basic_string<char>,int> >)((((const ::std::map<std::basic_string<char>,int>*)o)->get_allocator)());
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->get_allocator)();
}

static  void method_3205( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >)((((::std::map<std::basic_string<char>,int>*)o)->begin)());
  else   (((::std::map<std::basic_string<char>,int>*)o)->begin)();
}

static  void method_3206( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> >)((((const ::std::map<std::basic_string<char>,int>*)o)->begin)());
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->begin)();
}

static  void method_3207( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >)((((::std::map<std::basic_string<char>,int>*)o)->end)());
  else   (((::std::map<std::basic_string<char>,int>*)o)->end)();
}

static  void method_3208( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> >)((((const ::std::map<std::basic_string<char>,int>*)o)->end)());
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->end)();
}

static  void method_3213( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::map<std::basic_string<char>,int>*)o)->empty)());
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->empty)();
}

static  void method_3214( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<std::basic_string<char>,int>*)o)->size)());
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->size)();
}

static  void method_3215( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<std::basic_string<char>,int>*)o)->max_size)());
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->max_size)();
}

static  void operator_3216( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<std::basic_string<char>,int>*)o)->operator[])(*(const ::std::basic_string<char>*)arg[0]);
  else   (((::std::map<std::basic_string<char>,int>*)o)->operator[])(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3217( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<std::basic_string<char>,int>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
  else   (((::std::map<std::basic_string<char>,int>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3218( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::map<std::basic_string<char>,int>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3219( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >,bool>)((((::std::map<std::basic_string<char>,int>*)o)->insert)(*(const ::std::pair<const std::basic_string<char>,int>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,int>*)o)->insert)(*(const ::std::pair<const std::basic_string<char>,int>*)arg[0]);
}

static  void method_3220( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >)((((::std::map<std::basic_string<char>,int>*)o)->insert)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >*)arg[0],
    *(const ::std::pair<const std::basic_string<char>,int>*)arg[1]));
  else   (((::std::map<std::basic_string<char>,int>*)o)->insert)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >*)arg[0],
    *(const ::std::pair<const std::basic_string<char>,int>*)arg[1]);
}

static  void method_3221( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<std::basic_string<char>,int>*)o)->erase)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >*)arg[0]);
}

static  void method_3222( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((::std::map<std::basic_string<char>,int>*)o)->erase)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,int>*)o)->erase)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3223( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<std::basic_string<char>,int>*)o)->erase)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >*)arg[0],
    *(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >*)arg[1]);
}

static  void method_3224( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<std::basic_string<char>,int>*)o)->swap)(*(::std::map<std::basic_string<char>,int>*)arg[0]);
}

static  void method_3225( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::map<std::basic_string<char>,int>*)o)->clear)();
}

static  void method_3226( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::less<std::basic_string<char> >)((((const ::std::map<std::basic_string<char>,int>*)o)->key_comp)());
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->key_comp)();
}

static  void method_3228( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >)((((::std::map<std::basic_string<char>,int>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,int>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3229( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> >)((((const ::std::map<std::basic_string<char>,int>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3230( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<std::basic_string<char>,int>*)o)->count)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->count)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3231( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >)((((::std::map<std::basic_string<char>,int>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,int>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3232( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> >)((((const ::std::map<std::basic_string<char>,int>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3233( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >)((((::std::map<std::basic_string<char>,int>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,int>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3234( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> >)((((const ::std::map<std::basic_string<char>,int>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3235( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> >,std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,int> > >)((((::std::map<std::basic_string<char>,int>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,int>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_3236( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> >,std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,int> > >)((((const ::std::map<std::basic_string<char>,int>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,int>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]);
}

static void method_newdel_1052( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,int> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,int> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,int> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,int> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,int> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x87( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::map<std::basic_string<char>,int> >::Generate();
  else ::Reflex::Proxy< ::std::map<std::basic_string<char>,int> >::Generate();
}

//------Dictionary for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,int,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int> > > -------------------------------
void __std__map_std__basic_string_char__int__db_datamem(Reflex::Class*);
void __std__map_std__basic_string_char__int__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__map_std__basic_string_char__int__datamem_bld(&__std__map_std__basic_string_char__int__db_datamem);
Reflex::GenreflexMemberBuilder __std__map_std__basic_string_char__int__funcmem_bld(&__std__map_std__basic_string_char__int__db_funcmem);
void __std__map_std__basic_string_char__int__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::map<std::basic_string<char>,int>"), typeid(::std::map<std::basic_string<char>,int>), sizeof(::std::map<std::basic_string<char>,int>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddTypedef(type_1434, Reflex::Literal("std::map<std::basic_string<char>,int>::key_type"))
  .AddTypedef(type_31, Reflex::Literal("std::map<std::basic_string<char>,int>::mapped_type"))
  .AddTypedef(type_1372, Reflex::Literal("std::map<std::basic_string<char>,int>::value_type"))
  .AddTypedef(type_1825, Reflex::Literal("std::map<std::basic_string<char>,int>::key_compare"))
  .AddTypedef(type_1532, Reflex::Literal("std::map<std::basic_string<char>,int>::allocator_type"))
  .AddTypedef(type_1372, Reflex::Literal("std::map<std::basic_string<char>,int>::_Alloc_value_type"))
  .AddTypedef(type_1532, Reflex::Literal("std::map<std::basic_string<char>,int>::_Pair_alloc_type"))
  .AddTypedef(type_1441, Reflex::Literal("std::map<std::basic_string<char>,int>::_Rep_type"))
  .AddTypedef(type_3185, Reflex::Literal("std::map<std::basic_string<char>,int>::pointer"))
  .AddTypedef(type_3187, Reflex::Literal("std::map<std::basic_string<char>,int>::const_pointer"))
  .AddTypedef(type_3189, Reflex::Literal("std::map<std::basic_string<char>,int>::reference"))
  .AddTypedef(type_3191, Reflex::Literal("std::map<std::basic_string<char>,int>::const_reference"))
  .AddTypedef(type_1476, Reflex::Literal("std::map<std::basic_string<char>,int>::iterator"))
  .AddTypedef(type_1717, Reflex::Literal("std::map<std::basic_string<char>,int>::const_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::map<std::basic_string<char>,int>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::map<std::basic_string<char>,int>::difference_type"))
  .AddTypedef(type_1660, Reflex::Literal("std::map<std::basic_string<char>,int>::reverse_iterator"))
  .AddTypedef(type_1659, Reflex::Literal("std::map<std::basic_string<char>,int>::const_reverse_iterator"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~map"), destructor_3199, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("map"), constructor_3200, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_7424, type_8256), Reflex::Literal("map"), constructor_3201, 0, "__comp;__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8257), Reflex::Literal("map"), constructor_3202, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1052, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x87, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__std__map_std__basic_string_char__int__datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__std__map_std__basic_string_char__int__funcmem_bld);
}

//------Delayed data member builder for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,int,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int> > > -------------------
void __std__map_std__basic_string_char__int__db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_1441, Reflex::Literal("_M_t"), OffsetOf(__shadow__::__std__map_std__basic_string_char__int_, _M_t), ::Reflex::PRIVATE);
}
//------Delayed function member builder for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,int,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int> > > -------------------
void __std__map_std__basic_string_char__int__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8258, type_8257), Reflex::Literal("operator="), operator_3203, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1532), Reflex::Literal("get_allocator"), method_3204, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1476), Reflex::Literal("begin"), method_3205, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1717), Reflex::Literal("begin"), method_3206, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1476), Reflex::Literal("end"), method_3207, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1717), Reflex::Literal("end"), method_3208, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_3213, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_3214, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_3215, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4449, type_6427), Reflex::Literal("operator[]"), operator_3216, 0, "__k", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4449, type_6427), Reflex::Literal("at"), method_3217, 0, "__k", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_4451, type_6427), Reflex::Literal("at"), method_3218, 0, "__k", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1374, type_3191), Reflex::Literal("insert"), method_3219, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1476, type_1476, type_3191), Reflex::Literal("insert"), method_3220, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1476), Reflex::Literal("erase"), method_3221, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639, type_6427), Reflex::Literal("erase"), method_3222, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1476, type_1476), Reflex::Literal("erase"), method_3223, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8258), Reflex::Literal("swap"), method_3224, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_3225, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1825), Reflex::Literal("key_comp"), method_3226, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1476, type_6427), Reflex::Literal("find"), method_3228, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1717, type_6427), Reflex::Literal("find"), method_3229, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639, type_6427), Reflex::Literal("count"), method_3230, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1476, type_6427), Reflex::Literal("lower_bound"), method_3231, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1717, type_6427), Reflex::Literal("lower_bound"), method_3232, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1476, type_6427), Reflex::Literal("upper_bound"), method_3233, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1717, type_6427), Reflex::Literal("upper_bound"), method_3234, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1373, type_6427), Reflex::Literal("equal_range"), method_3235, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1371, type_6427), Reflex::Literal("equal_range"), method_3236, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST);
}
//------Stub functions for class vector<KITAElectron,std::allocator<KITAElectron> > -------------------------------
static void constructor_3516( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAElectron>();
  else ::new(mem) ::std::vector<KITAElectron>();
}

static void constructor_3517( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAElectron>(*(const ::std::allocator<KITAElectron>*)arg[0]);
  else ::new(mem) ::std::vector<KITAElectron>(*(const ::std::allocator<KITAElectron>*)arg[0]);
}

static void constructor_3518( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAElectron>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAElectron>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAElectron>(*(::std::size_t*)arg[0],
      *(const ::KITAElectron*)arg[1]);
  else ::new(mem) ::std::vector<KITAElectron>(*(::std::size_t*)arg[0],
      *(const ::KITAElectron*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAElectron>(*(::std::size_t*)arg[0],
      *(const ::KITAElectron*)arg[1],
      *(const ::std::allocator<KITAElectron>*)arg[2]);
  else ::new(mem) ::std::vector<KITAElectron>(*(::std::size_t*)arg[0],
      *(const ::KITAElectron*)arg[1],
      *(const ::std::allocator<KITAElectron>*)arg[2]);
  }
}

static void constructor_3519( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAElectron>(*(const ::std::vector<KITAElectron>*)arg[0]);
  else ::new(mem) ::std::vector<KITAElectron>(*(const ::std::vector<KITAElectron>*)arg[0]);
}

static void destructor_3520(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAElectron>*)o)->::std::vector<KITAElectron>::~vector)();
}
static  void operator_3521( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAElectron>*)o)->operator=)(*(const ::std::vector<KITAElectron>*)arg[0]);
  else   (((::std::vector<KITAElectron>*)o)->operator=)(*(const ::std::vector<KITAElectron>*)arg[0]);
}

static  void method_3522( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAElectron>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAElectron*)arg[1]);
}

static  void method_3523( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >)((((::std::vector<KITAElectron>*)o)->begin)());
  else   (((::std::vector<KITAElectron>*)o)->begin)();
}

static  void method_3524( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAElectron*,std::vector<KITAElectron> >)((((const ::std::vector<KITAElectron>*)o)->begin)());
  else   (((const ::std::vector<KITAElectron>*)o)->begin)();
}

static  void method_3525( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >)((((::std::vector<KITAElectron>*)o)->end)());
  else   (((::std::vector<KITAElectron>*)o)->end)();
}

static  void method_3526( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAElectron*,std::vector<KITAElectron> >)((((const ::std::vector<KITAElectron>*)o)->end)());
  else   (((const ::std::vector<KITAElectron>*)o)->end)();
}

static  void method_3531( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAElectron>*)o)->size)());
  else   (((const ::std::vector<KITAElectron>*)o)->size)();
}

static  void method_3532( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAElectron>*)o)->max_size)());
  else   (((const ::std::vector<KITAElectron>*)o)->max_size)();
}

static  void method_3533( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAElectron>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAElectron>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAElectron*)arg[1]);
  }
}

static  void method_3534( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAElectron>*)o)->capacity)());
  else   (((const ::std::vector<KITAElectron>*)o)->capacity)();
}

static  void method_3535( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAElectron>*)o)->empty)());
  else   (((const ::std::vector<KITAElectron>*)o)->empty)();
}

static  void method_3536( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAElectron>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_3537( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAElectron>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAElectron>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_3538( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAElectron>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAElectron>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_3540( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAElectron>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAElectron>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_3541( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAElectron>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAElectron>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_3542( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAElectron>*)o)->front)();
  else   (((::std::vector<KITAElectron>*)o)->front)();
}

static  void method_3543( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAElectron>*)o)->front)();
  else   (((const ::std::vector<KITAElectron>*)o)->front)();
}

static  void method_3544( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAElectron>*)o)->back)();
  else   (((::std::vector<KITAElectron>*)o)->back)();
}

static  void method_3545( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAElectron>*)o)->back)();
  else   (((const ::std::vector<KITAElectron>*)o)->back)();
}

static  void method_3546( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAElectron>*)o)->data)());
  else   (((::std::vector<KITAElectron>*)o)->data)();
}

static  void method_3547( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAElectron>*)o)->data)());
  else   (((const ::std::vector<KITAElectron>*)o)->data)();
}

static  void method_3548( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAElectron>*)o)->push_back)(*(const ::KITAElectron*)arg[0]);
}

static  void method_3549( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAElectron>*)o)->pop_back)();
}

static  void method_3550( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >)((((::std::vector<KITAElectron>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >*)arg[0],
    *(const ::KITAElectron*)arg[1]));
  else   (((::std::vector<KITAElectron>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >*)arg[0],
    *(const ::KITAElectron*)arg[1]);
}

static  void method_3551( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAElectron>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAElectron*)arg[2]);
}

static  void method_3552( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >)((((::std::vector<KITAElectron>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >*)arg[0]));
  else   (((::std::vector<KITAElectron>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >*)arg[0]);
}

static  void method_3553( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >)((((::std::vector<KITAElectron>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >*)arg[1]));
  else   (((::std::vector<KITAElectron>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAElectron*,std::vector<KITAElectron> >*)arg[1]);
}

static  void method_3554( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAElectron>*)o)->swap)(*(::std::vector<KITAElectron>*)arg[0]);
}

static  void method_3555( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAElectron>*)o)->clear)();
}

static void method_newdel_1189( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAElectron> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAElectron> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAElectron> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAElectron> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAElectron> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x89( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAElectron,std::allocator<KITAElectron> >")), ::Reflex::BaseOffset< ::std::vector<KITAElectron>,::std::_Vector_base<KITAElectron,std::allocator<KITAElectron> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x90( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAElectron> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAElectron> >::Generate();
}

//------Dictionary for class vector<KITAElectron,std::allocator<KITAElectron> > -------------------------------
void __std__vector_KITAElectron__db_datamem(Reflex::Class*);
void __std__vector_KITAElectron__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAElectron__datamem_bld(&__std__vector_KITAElectron__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAElectron__funcmem_bld(&__std__vector_KITAElectron__db_funcmem);
void __std__vector_KITAElectron__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAElectron>"), typeid(::std::vector<KITAElectron>), sizeof(::std::vector<KITAElectron>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAElectron*")
  .AddBase(type_1755, ::Reflex::BaseOffset< ::std::vector<KITAElectron>, ::std::_Vector_base<KITAElectron,std::allocator<KITAElectron> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_1106, Reflex::Literal("std::vector<KITAElectron>::_Alloc_value_type"))
  .AddTypedef(type_1755, Reflex::Literal("std::vector<KITAElectron>::_Base"))
  .AddTypedef(type_1537, Reflex::Literal("std::vector<KITAElectron>::_Tp_alloc_type"))
  .AddTypedef(type_1106, Reflex::Literal("std::vector<KITAElectron>::value_type"))
  .AddTypedef(type_3501, Reflex::Literal("std::vector<KITAElectron>::pointer"))
  .AddTypedef(type_3503, Reflex::Literal("std::vector<KITAElectron>::const_pointer"))
  .AddTypedef(type_3505, Reflex::Literal("std::vector<KITAElectron>::reference"))
  .AddTypedef(type_3507, Reflex::Literal("std::vector<KITAElectron>::const_reference"))
  .AddTypedef(type_2186, Reflex::Literal("std::vector<KITAElectron>::iterator"))
  .AddTypedef(type_2187, Reflex::Literal("std::vector<KITAElectron>::const_iterator"))
  .AddTypedef(type_1667, Reflex::Literal("std::vector<KITAElectron>::const_reverse_iterator"))
  .AddTypedef(type_1668, Reflex::Literal("std::vector<KITAElectron>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAElectron>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAElectron>::difference_type"))
  .AddTypedef(type_1537, Reflex::Literal("std::vector<KITAElectron>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_3516, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8340), Reflex::Literal("vector"), constructor_3517, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_3507, type_8340), Reflex::Literal("vector"), constructor_3518, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8341), Reflex::Literal("vector"), constructor_3519, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_3520, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1189, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x89, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x90, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAElectron__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAElectron,std::allocator<KITAElectron> > -------------------
void __std__vector_KITAElectron__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAElectron,std::allocator<KITAElectron> > -------------------
void __std__vector_KITAElectron__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8342, type_8341), Reflex::Literal("operator="), operator_3521, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_3507), Reflex::Literal("assign"), method_3522, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2186), Reflex::Literal("begin"), method_3523, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2187), Reflex::Literal("begin"), method_3524, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2186), Reflex::Literal("end"), method_3525, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2187), Reflex::Literal("end"), method_3526, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_3531, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_3532, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_1106), Reflex::Literal("resize"), method_3533, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_3534, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_3535, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_3536, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3505, type_1639), Reflex::Literal("operator[]"), operator_3537, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3507, type_1639), Reflex::Literal("operator[]"), operator_3538, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3505, type_1639), Reflex::Literal("at"), method_3540, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3507, type_1639), Reflex::Literal("at"), method_3541, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3505), Reflex::Literal("front"), method_3542, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3507), Reflex::Literal("front"), method_3543, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3505), Reflex::Literal("back"), method_3544, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3507), Reflex::Literal("back"), method_3545, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3501), Reflex::Literal("data"), method_3546, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3503), Reflex::Literal("data"), method_3547, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_3507), Reflex::Literal("push_back"), method_3548, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_3549, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2186, type_2186, type_3507), Reflex::Literal("insert"), method_3550, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2186, type_1639, type_3507), Reflex::Literal("insert"), method_3551, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2186, type_2186), Reflex::Literal("erase"), method_3552, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2186, type_2186, type_2186), Reflex::Literal("erase"), method_3553, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8342), Reflex::Literal("swap"), method_3554, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_3555, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class vector<KITAMcParticle,std::allocator<KITAMcParticle> > -------------------------------
static void constructor_3589( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMcParticle>();
  else ::new(mem) ::std::vector<KITAMcParticle>();
}

static void constructor_3590( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMcParticle>(*(const ::std::allocator<KITAMcParticle>*)arg[0]);
  else ::new(mem) ::std::vector<KITAMcParticle>(*(const ::std::allocator<KITAMcParticle>*)arg[0]);
}

static void constructor_3591( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMcParticle>(*(::std::size_t*)arg[0]);
  else ::new(mem) ::std::vector<KITAMcParticle>(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMcParticle>(*(::std::size_t*)arg[0],
      *(const ::KITAMcParticle*)arg[1]);
  else ::new(mem) ::std::vector<KITAMcParticle>(*(::std::size_t*)arg[0],
      *(const ::KITAMcParticle*)arg[1]);
  }
  else if ( arg.size() == 3 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMcParticle>(*(::std::size_t*)arg[0],
      *(const ::KITAMcParticle*)arg[1],
      *(const ::std::allocator<KITAMcParticle>*)arg[2]);
  else ::new(mem) ::std::vector<KITAMcParticle>(*(::std::size_t*)arg[0],
      *(const ::KITAMcParticle*)arg[1],
      *(const ::std::allocator<KITAMcParticle>*)arg[2]);
  }
}

static void constructor_3592( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::vector<KITAMcParticle>(*(const ::std::vector<KITAMcParticle>*)arg[0]);
  else ::new(mem) ::std::vector<KITAMcParticle>(*(const ::std::vector<KITAMcParticle>*)arg[0]);
}

static void destructor_3593(void*, void * o, const std::vector<void*>&, void *) {
(((::std::vector<KITAMcParticle>*)o)->::std::vector<KITAMcParticle>::~vector)();
}
static  void operator_3594( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAMcParticle>*)o)->operator=)(*(const ::std::vector<KITAMcParticle>*)arg[0]);
  else   (((::std::vector<KITAMcParticle>*)o)->operator=)(*(const ::std::vector<KITAMcParticle>*)arg[0]);
}

static  void method_3595( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAMcParticle>*)o)->assign)(*(::std::size_t*)arg[0],
    *(const ::KITAMcParticle*)arg[1]);
}

static  void method_3596( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >)((((::std::vector<KITAMcParticle>*)o)->begin)());
  else   (((::std::vector<KITAMcParticle>*)o)->begin)();
}

static  void method_3597( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAMcParticle*,std::vector<KITAMcParticle> >)((((const ::std::vector<KITAMcParticle>*)o)->begin)());
  else   (((const ::std::vector<KITAMcParticle>*)o)->begin)();
}

static  void method_3598( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >)((((::std::vector<KITAMcParticle>*)o)->end)());
  else   (((::std::vector<KITAMcParticle>*)o)->end)();
}

static  void method_3599( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<const KITAMcParticle*,std::vector<KITAMcParticle> >)((((const ::std::vector<KITAMcParticle>*)o)->end)());
  else   (((const ::std::vector<KITAMcParticle>*)o)->end)();
}

static  void method_3604( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAMcParticle>*)o)->size)());
  else   (((const ::std::vector<KITAMcParticle>*)o)->size)();
}

static  void method_3605( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAMcParticle>*)o)->max_size)());
  else   (((const ::std::vector<KITAMcParticle>*)o)->max_size)();
}

static  void method_3606( void*, void* o, const std::vector<void*>& arg, void*)
{
  if ( arg.size() == 1 ) {
    (((::std::vector<KITAMcParticle>*)o)->resize)(*(::std::size_t*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    (((::std::vector<KITAMcParticle>*)o)->resize)(*(::std::size_t*)arg[0],
      *(::KITAMcParticle*)arg[1]);
  }
}

static  void method_3607( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::vector<KITAMcParticle>*)o)->capacity)());
  else   (((const ::std::vector<KITAMcParticle>*)o)->capacity)();
}

static  void method_3608( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::vector<KITAMcParticle>*)o)->empty)());
  else   (((const ::std::vector<KITAMcParticle>*)o)->empty)();
}

static  void method_3609( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAMcParticle>*)o)->reserve)(*(::std::size_t*)arg[0]);
}

static  void operator_3610( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAMcParticle>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAMcParticle>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void operator_3611( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAMcParticle>*)o)->operator[])(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAMcParticle>*)o)->operator[])(*(::std::size_t*)arg[0]);
}

static  void method_3613( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAMcParticle>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((::std::vector<KITAMcParticle>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_3614( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAMcParticle>*)o)->at)(*(::std::size_t*)arg[0]);
  else   (((const ::std::vector<KITAMcParticle>*)o)->at)(*(::std::size_t*)arg[0]);
}

static  void method_3615( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAMcParticle>*)o)->front)();
  else   (((::std::vector<KITAMcParticle>*)o)->front)();
}

static  void method_3616( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAMcParticle>*)o)->front)();
  else   (((const ::std::vector<KITAMcParticle>*)o)->front)();
}

static  void method_3617( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::vector<KITAMcParticle>*)o)->back)();
  else   (((::std::vector<KITAMcParticle>*)o)->back)();
}

static  void method_3618( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::vector<KITAMcParticle>*)o)->back)();
  else   (((const ::std::vector<KITAMcParticle>*)o)->back)();
}

static  void method_3619( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((::std::vector<KITAMcParticle>*)o)->data)());
  else   (((::std::vector<KITAMcParticle>*)o)->data)();
}

static  void method_3620( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**)retaddr = Reflex::FuncToVoidPtr((((const ::std::vector<KITAMcParticle>*)o)->data)());
  else   (((const ::std::vector<KITAMcParticle>*)o)->data)();
}

static  void method_3621( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAMcParticle>*)o)->push_back)(*(const ::KITAMcParticle*)arg[0]);
}

static  void method_3622( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAMcParticle>*)o)->pop_back)();
}

static  void method_3623( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >)((((::std::vector<KITAMcParticle>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >*)arg[0],
    *(const ::KITAMcParticle*)arg[1]));
  else   (((::std::vector<KITAMcParticle>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >*)arg[0],
    *(const ::KITAMcParticle*)arg[1]);
}

static  void method_3624( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAMcParticle>*)o)->insert)(*(::__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >*)arg[0],
    *(::std::size_t*)arg[1],
    *(const ::KITAMcParticle*)arg[2]);
}

static  void method_3625( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >)((((::std::vector<KITAMcParticle>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >*)arg[0]));
  else   (((::std::vector<KITAMcParticle>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >*)arg[0]);
}

static  void method_3626( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >)((((::std::vector<KITAMcParticle>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >*)arg[1]));
  else   (((::std::vector<KITAMcParticle>*)o)->erase)(*(::__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >*)arg[0],
    *(::__gnu_cxx::__normal_iterator<KITAMcParticle*,std::vector<KITAMcParticle> >*)arg[1]);
}

static  void method_3627( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::vector<KITAMcParticle>*)o)->swap)(*(::std::vector<KITAMcParticle>*)arg[0]);
}

static  void method_3628( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::vector<KITAMcParticle>*)o)->clear)();
}

static void method_newdel_1195( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::vector<KITAMcParticle> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::vector<KITAMcParticle> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::vector<KITAMcParticle> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::vector<KITAMcParticle> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::vector<KITAMcParticle> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x92( void* retaddr, void*, const std::vector<void*>&, void*)
{
  typedef std::vector<std::pair< ::Reflex::Base, int> > Bases_t;
  static Bases_t s_bases;
  if ( !s_bases.size() ) {
    s_bases.push_back(std::make_pair(::Reflex::Base( ::Reflex::TypeBuilder(Reflex::Literal("std::_Vector_base<KITAMcParticle,std::allocator<KITAMcParticle> >")), ::Reflex::BaseOffset< ::std::vector<KITAMcParticle>,::std::_Vector_base<KITAMcParticle,std::allocator<KITAMcParticle> > >::Get(),::Reflex::PROTECTED), 0));
  }
  if (retaddr) *(Bases_t**)retaddr = &s_bases;
}

static void method_x93( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::vector<KITAMcParticle> >::Generate();
  else ::Reflex::Proxy< ::std::vector<KITAMcParticle> >::Generate();
}

//------Dictionary for class vector<KITAMcParticle,std::allocator<KITAMcParticle> > -------------------------------
void __std__vector_KITAMcParticle__db_datamem(Reflex::Class*);
void __std__vector_KITAMcParticle__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__vector_KITAMcParticle__datamem_bld(&__std__vector_KITAMcParticle__db_datamem);
Reflex::GenreflexMemberBuilder __std__vector_KITAMcParticle__funcmem_bld(&__std__vector_KITAMcParticle__db_funcmem);
void __std__vector_KITAMcParticle__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::vector<KITAMcParticle>"), typeid(::std::vector<KITAMcParticle>), sizeof(::std::vector<KITAMcParticle>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("n_pattern"), "KITAMcParticle*")
  .AddBase(type_1756, ::Reflex::BaseOffset< ::std::vector<KITAMcParticle>, ::std::_Vector_base<KITAMcParticle,std::allocator<KITAMcParticle> > >::Get(), ::Reflex::PROTECTED)
  .AddTypedef(type_7, Reflex::Literal("std::vector<KITAMcParticle>::_Alloc_value_type"))
  .AddTypedef(type_1756, Reflex::Literal("std::vector<KITAMcParticle>::_Base"))
  .AddTypedef(type_1544, Reflex::Literal("std::vector<KITAMcParticle>::_Tp_alloc_type"))
  .AddTypedef(type_7, Reflex::Literal("std::vector<KITAMcParticle>::value_type"))
  .AddTypedef(type_3574, Reflex::Literal("std::vector<KITAMcParticle>::pointer"))
  .AddTypedef(type_3576, Reflex::Literal("std::vector<KITAMcParticle>::const_pointer"))
  .AddTypedef(type_3578, Reflex::Literal("std::vector<KITAMcParticle>::reference"))
  .AddTypedef(type_3580, Reflex::Literal("std::vector<KITAMcParticle>::const_reference"))
  .AddTypedef(type_2188, Reflex::Literal("std::vector<KITAMcParticle>::iterator"))
  .AddTypedef(type_2189, Reflex::Literal("std::vector<KITAMcParticle>::const_iterator"))
  .AddTypedef(type_1669, Reflex::Literal("std::vector<KITAMcParticle>::const_reverse_iterator"))
  .AddTypedef(type_1670, Reflex::Literal("std::vector<KITAMcParticle>::reverse_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::vector<KITAMcParticle>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::vector<KITAMcParticle>::difference_type"))
  .AddTypedef(type_1544, Reflex::Literal("std::vector<KITAMcParticle>::allocator_type"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("vector"), constructor_3589, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8361), Reflex::Literal("vector"), constructor_3590, 0, "__a", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_1639, type_3580, type_8361), Reflex::Literal("vector"), constructor_3591, 0, "__n;__value=_Tp();__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8362), Reflex::Literal("vector"), constructor_3592, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~vector"), destructor_3593, 0, 0, ::Reflex::PUBLIC | ::Reflex::DESTRUCTOR )
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1195, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getBasesTable"), method_x92, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x93, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandFunctionMemberBuilder(&__std__vector_KITAMcParticle__funcmem_bld);
}

//------Delayed data member builder for class vector<KITAMcParticle,std::allocator<KITAMcParticle> > -------------------
void __std__vector_KITAMcParticle__db_datamem(Reflex::Class*) {

}
//------Delayed function member builder for class vector<KITAMcParticle,std::allocator<KITAMcParticle> > -------------------
void __std__vector_KITAMcParticle__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8363, type_8362), Reflex::Literal("operator="), operator_3594, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_3580), Reflex::Literal("assign"), method_3595, 0, "__n;__val", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2188), Reflex::Literal("begin"), method_3596, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2189), Reflex::Literal("begin"), method_3597, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2188), Reflex::Literal("end"), method_3598, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2189), Reflex::Literal("end"), method_3599, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_3604, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_3605, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639, type_7), Reflex::Literal("resize"), method_3606, 0, "__new_size;__x=_Tp()", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("capacity"), method_3607, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_3608, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1639), Reflex::Literal("reserve"), method_3609, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3578, type_1639), Reflex::Literal("operator[]"), operator_3610, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3580, type_1639), Reflex::Literal("operator[]"), operator_3611, 0, "__n", ::Reflex::PUBLIC | ::Reflex::OPERATOR | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3578, type_1639), Reflex::Literal("at"), method_3613, 0, "__n", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3580, type_1639), Reflex::Literal("at"), method_3614, 0, "__n", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3578), Reflex::Literal("front"), method_3615, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3580), Reflex::Literal("front"), method_3616, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3578), Reflex::Literal("back"), method_3617, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3580), Reflex::Literal("back"), method_3618, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3574), Reflex::Literal("data"), method_3619, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_3576), Reflex::Literal("data"), method_3620, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_3580), Reflex::Literal("push_back"), method_3621, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("pop_back"), method_3622, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2188, type_2188, type_3580), Reflex::Literal("insert"), method_3623, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_2188, type_1639, type_3580), Reflex::Literal("insert"), method_3624, 0, "__position;__n;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2188, type_2188), Reflex::Literal("erase"), method_3625, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_2188, type_2188, type_2188), Reflex::Literal("erase"), method_3626, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8363), Reflex::Literal("swap"), method_3627, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_3628, 0, 0, ::Reflex::PUBLIC);
}
//------Stub functions for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,long unsigned int,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, long unsigned int> > > -------------------------------
static void destructor_6211(void*, void * o, const std::vector<void*>&, void *) {
(((::std::map<std::basic_string<char>,unsigned long>*)o)->::std::map<std::basic_string<char>,unsigned long>::~map)();
}
static void constructor_6212( void* retaddr, void* mem, const std::vector<void*>&, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,unsigned long>();
  else ::new(mem) ::std::map<std::basic_string<char>,unsigned long>();
}

static void constructor_6213( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if ( arg.size() == 1 ) {
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,unsigned long>(*(const ::std::less<std::basic_string<char> >*)arg[0]);
  else ::new(mem) ::std::map<std::basic_string<char>,unsigned long>(*(const ::std::less<std::basic_string<char> >*)arg[0]);
  }
  else if ( arg.size() == 2 ) { 
    if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,unsigned long>(*(const ::std::less<std::basic_string<char> >*)arg[0],
      *(const ::std::allocator<std::pair<const std::basic_string<char>,unsigned long> >*)arg[1]);
  else ::new(mem) ::std::map<std::basic_string<char>,unsigned long>(*(const ::std::less<std::basic_string<char> >*)arg[0],
      *(const ::std::allocator<std::pair<const std::basic_string<char>,unsigned long> >*)arg[1]);
  }
}

static void constructor_6214( void* retaddr, void* mem, const std::vector<void*>& arg, void*) {
  if (retaddr) *(void**)retaddr = ::new(mem) ::std::map<std::basic_string<char>,unsigned long>(*(const ::std::map<std::basic_string<char>,unsigned long>*)arg[0]);
  else ::new(mem) ::std::map<std::basic_string<char>,unsigned long>(*(const ::std::map<std::basic_string<char>,unsigned long>*)arg[0]);
}

static  void operator_6215( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<std::basic_string<char>,unsigned long>*)o)->operator=)(*(const ::std::map<std::basic_string<char>,unsigned long>*)arg[0]);
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->operator=)(*(const ::std::map<std::basic_string<char>,unsigned long>*)arg[0]);
}

static  void method_6216( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::allocator<std::pair<const std::basic_string<char>,unsigned long> >)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->get_allocator)());
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->get_allocator)();
}

static  void method_6217( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((::std::map<std::basic_string<char>,unsigned long>*)o)->begin)());
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->begin)();
}

static  void method_6218( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->begin)());
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->begin)();
}

static  void method_6219( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((::std::map<std::basic_string<char>,unsigned long>*)o)->end)());
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->end)();
}

static  void method_6220( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->end)());
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->end)();
}

static  void method_6225( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (bool)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->empty)());
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->empty)();
}

static  void method_6226( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->size)());
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->size)();
}

static  void method_6227( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->max_size)());
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->max_size)();
}

static  void operator_6228( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<std::basic_string<char>,unsigned long>*)o)->operator[])(*(const ::std::basic_string<char>*)arg[0]);
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->operator[])(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6229( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((::std::map<std::basic_string<char>,unsigned long>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6230( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) *(void**)retaddr = (void*)&(((const ::std::map<std::basic_string<char>,unsigned long>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->at)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6231( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >,bool>)((((::std::map<std::basic_string<char>,unsigned long>*)o)->insert)(*(const ::std::pair<const std::basic_string<char>,unsigned long>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->insert)(*(const ::std::pair<const std::basic_string<char>,unsigned long>*)arg[0]);
}

static  void method_6232( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((::std::map<std::basic_string<char>,unsigned long>*)o)->insert)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >*)arg[0],
    *(const ::std::pair<const std::basic_string<char>,unsigned long>*)arg[1]));
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->insert)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >*)arg[0],
    *(const ::std::pair<const std::basic_string<char>,unsigned long>*)arg[1]);
}

static  void method_6233( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<std::basic_string<char>,unsigned long>*)o)->erase)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >*)arg[0]);
}

static  void method_6234( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((::std::map<std::basic_string<char>,unsigned long>*)o)->erase)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->erase)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6235( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<std::basic_string<char>,unsigned long>*)o)->erase)(*(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >*)arg[0],
    *(::std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >*)arg[1]);
}

static  void method_6236( void*, void* o, const std::vector<void*>& arg, void*)
{
  (((::std::map<std::basic_string<char>,unsigned long>*)o)->swap)(*(::std::map<std::basic_string<char>,unsigned long>*)arg[0]);
}

static  void method_6237( void*, void* o, const std::vector<void*>&, void*)
{
  (((::std::map<std::basic_string<char>,unsigned long>*)o)->clear)();
}

static  void method_6238( void* retaddr, void* o, const std::vector<void*>&, void*)
{
  if (retaddr) new (retaddr) (std::less<std::basic_string<char> >)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->key_comp)());
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->key_comp)();
}

static  void method_6240( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((::std::map<std::basic_string<char>,unsigned long>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6241( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->find)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6242( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::size_t)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->count)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->count)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6243( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((::std::map<std::basic_string<char>,unsigned long>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6244( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->lower_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6245( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((::std::map<std::basic_string<char>,unsigned long>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6246( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> >)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->upper_bound)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6247( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> >,std::_Rb_tree_iterator<std::pair<const std::basic_string<char>,unsigned long> > >)((((::std::map<std::basic_string<char>,unsigned long>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((::std::map<std::basic_string<char>,unsigned long>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]);
}

static  void method_6248( void* retaddr, void* o, const std::vector<void*>& arg, void*)
{
  if (retaddr) new (retaddr) (std::pair<std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> >,std::_Rb_tree_const_iterator<std::pair<const std::basic_string<char>,unsigned long> > >)((((const ::std::map<std::basic_string<char>,unsigned long>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]));
  else   (((const ::std::map<std::basic_string<char>,unsigned long>*)o)->equal_range)(*(const ::std::basic_string<char>*)arg[0]);
}

static void method_newdel_1630( void* retaddr, void*, const std::vector<void*>&, void*)
{
  static ::Reflex::NewDelFunctions s_funcs;
  s_funcs.fNew         = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,unsigned long> >::new_T;
  s_funcs.fNewArray    = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,unsigned long> >::newArray_T;
  s_funcs.fDelete      = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,unsigned long> >::delete_T;
  s_funcs.fDeleteArray = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,unsigned long> >::deleteArray_T;
  s_funcs.fDestructor  = ::Reflex::NewDelFunctionsT< ::std::map<std::basic_string<char>,unsigned long> >::destruct_T;
  if (retaddr) *(::Reflex::NewDelFunctions**)retaddr = &s_funcs;
}

static void method_x95( void* retaddr, void*, const std::vector<void*>&, void*)
{
  if (retaddr) *(void**) retaddr = ::Reflex::Proxy< ::std::map<std::basic_string<char>,unsigned long> >::Generate();
  else ::Reflex::Proxy< ::std::map<std::basic_string<char>,unsigned long> >::Generate();
}

//------Dictionary for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,long unsigned int,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, long unsigned int> > > -------------------------------
void __std__map_std__basic_string_char__unsignedslong__db_datamem(Reflex::Class*);
void __std__map_std__basic_string_char__unsignedslong__db_funcmem(Reflex::Class*);
Reflex::GenreflexMemberBuilder __std__map_std__basic_string_char__unsignedslong__datamem_bld(&__std__map_std__basic_string_char__unsignedslong__db_datamem);
Reflex::GenreflexMemberBuilder __std__map_std__basic_string_char__unsignedslong__funcmem_bld(&__std__map_std__basic_string_char__unsignedslong__db_funcmem);
void __std__map_std__basic_string_char__unsignedslong__dict() {
  ::Reflex::ClassBuilder(Reflex::Literal("std::map<std::basic_string<char>,unsigned long>"), typeid(::std::map<std::basic_string<char>,unsigned long>), sizeof(::std::map<std::basic_string<char>,unsigned long>), ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL, ::Reflex::CLASS)
  .AddProperty(Reflex::Literal("o_name"), "std::map<std::string, uint64_t>")
  .AddTypedef(type_1434, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::key_type"))
  .AddTypedef(type_23, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::mapped_type"))
  .AddTypedef(type_1379, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::value_type"))
  .AddTypedef(type_1825, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::key_compare"))
  .AddTypedef(type_1542, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::allocator_type"))
  .AddTypedef(type_1379, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::_Alloc_value_type"))
  .AddTypedef(type_1542, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::_Pair_alloc_type"))
  .AddTypedef(type_1445, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::_Rep_type"))
  .AddTypedef(type_5164, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::pointer"))
  .AddTypedef(type_5166, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::const_pointer"))
  .AddTypedef(type_5168, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::reference"))
  .AddTypedef(type_5170, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::const_reference"))
  .AddTypedef(type_1480, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::iterator"))
  .AddTypedef(type_1721, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::const_iterator"))
  .AddTypedef(type_1639, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::size_type"))
  .AddTypedef(type_1601, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::difference_type"))
  .AddTypedef(type_1692, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::reverse_iterator"))
  .AddTypedef(type_1691, Reflex::Literal("std::map<std::basic_string<char>,unsigned long>::const_reverse_iterator"))
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("~map"), destructor_6211, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL | ::Reflex::DESTRUCTOR )
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void), Reflex::Literal("map"), constructor_6212, 0, 0, ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_7424, type_8545), Reflex::Literal("map"), constructor_6213, 0, "__comp;__a=_Alloc()", ::Reflex::PUBLIC | ::Reflex::EXPLICIT | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_void, type_8735), Reflex::Literal("map"), constructor_6214, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONSTRUCTOR)
  .AddFunctionMember<void*(void)>(Reflex::Literal("__getNewDelFunctions"), method_newdel_1630, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddFunctionMember<void*(void)>(Reflex::Literal("createCollFuncTable"), method_x95, 0, 0, ::Reflex::PUBLIC | ::Reflex::ARTIFICIAL)
  .AddOnDemandDataMemberBuilder(&__std__map_std__basic_string_char__unsignedslong__datamem_bld)
  .AddOnDemandFunctionMemberBuilder(&__std__map_std__basic_string_char__unsignedslong__funcmem_bld);
}

//------Delayed data member builder for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,long unsigned int,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, long unsigned int> > > -------------------
void __std__map_std__basic_string_char__unsignedslong__db_datamem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddDataMember(type_1445, Reflex::Literal("_M_t"), OffsetOf(__shadow__::__std__map_std__basic_string_char__unsignedslong_, _M_t), ::Reflex::PRIVATE);
}
//------Delayed function member builder for class map<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,long unsigned int,std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,std::allocator<std::pair<const std::basic_string<char, std::char_traits<char>, std::allocator<char> >, long unsigned int> > > -------------------
void __std__map_std__basic_string_char__unsignedslong__db_funcmem(Reflex::Class* cl) {
  ::Reflex::ClassBuilder(cl)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8736, type_8735), Reflex::Literal("operator="), operator_6215, 0, "__x", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1542), Reflex::Literal("get_allocator"), method_6216, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1480), Reflex::Literal("begin"), method_6217, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1721), Reflex::Literal("begin"), method_6218, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1480), Reflex::Literal("end"), method_6219, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1721), Reflex::Literal("end"), method_6220, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1892), Reflex::Literal("empty"), method_6225, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("size"), method_6226, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639), Reflex::Literal("max_size"), method_6227, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8737, type_6427), Reflex::Literal("operator[]"), operator_6228, 0, "__k", ::Reflex::PUBLIC | ::Reflex::OPERATOR)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8737, type_6427), Reflex::Literal("at"), method_6229, 0, "__k", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_8738, type_6427), Reflex::Literal("at"), method_6230, 0, "__k", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1389, type_5170), Reflex::Literal("insert"), method_6231, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1480, type_1480, type_5170), Reflex::Literal("insert"), method_6232, 0, "__position;__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1480), Reflex::Literal("erase"), method_6233, 0, "__position", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639, type_6427), Reflex::Literal("erase"), method_6234, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_1480, type_1480), Reflex::Literal("erase"), method_6235, 0, "__first;__last", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942, type_8736), Reflex::Literal("swap"), method_6236, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1942), Reflex::Literal("clear"), method_6237, 0, 0, ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1825), Reflex::Literal("key_comp"), method_6238, 0, 0, ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1480, type_6427), Reflex::Literal("find"), method_6240, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1721, type_6427), Reflex::Literal("find"), method_6241, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1639, type_6427), Reflex::Literal("count"), method_6242, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1480, type_6427), Reflex::Literal("lower_bound"), method_6243, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1721, type_6427), Reflex::Literal("lower_bound"), method_6244, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1480, type_6427), Reflex::Literal("upper_bound"), method_6245, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1721, type_6427), Reflex::Literal("upper_bound"), method_6246, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1388, type_6427), Reflex::Literal("equal_range"), method_6247, 0, "__x", ::Reflex::PUBLIC)
  .AddFunctionMember(::Reflex::FunctionTypeBuilder(type_1387, type_6427), Reflex::Literal("equal_range"), method_6248, 0, "__x", ::Reflex::PUBLIC | ::Reflex::CONST);
}
namespace {
  struct Dictionaries {
    Dictionaries() {
      Reflex::Instance initialize_reflex;
      __KITAMcParticle_dict(); 
      __KITAJet_PFlowVars_dict(); 
      __KITADataCleaning_dict(); 
      __KITAObject_dict(); 
      __KITAGenJet_dict(); 
      __KITAMuon_dict(); 
      __KITAPFMet_dict(); 
      __KITAGenFlavor_dict(); 
      __KITAGenParticle_dict(); 
      __KITAMisc_dict(); 
      __KITAJet_CaloVars_dict(); 
      __KITAMet_dict(); 
      __KITATopJet_dict(); 
      __KITAGenWFlavor_dict(); 
      __KITAJet_svBTagInfos_dict(); 
      __KITASemiSols_dict(); 
      __KITASemiSol_dict(); 
      __KITAPrimaryVertex_dict(); 
      __KITAGenJetWithSubjets_dict(); 
      __KITAJet_dict(); 
      __KITAJetWithSubjets_dict(); 
      __KITAHlt_dict(); 
      __KITAElectron_dict(); 
      __KITAJet_TrackbTagInfos_dict(); 
      __std__vector_KITAPrimaryVertex__dict(); 
      __KITAGenSingleTopEvent_dict(); 
      __KITAGenTopEvent_dict(); 
      __KITAGenMet_dict(); 
      __KITAGenInfo_dict(); 
      __KITAGenTprime_dict(); 
      __KITAHlt__KITATriggerObject_dict(); 
      __std__vector_KITAHlt__KITATriggerObject__dict(); 
      __std__vector_KITAJet_TrackbTagInfos__dict(); 
      __std__vector_KITAJet_svBTagInfos__dict(); 
      __std__vector_KITAJet_CaloVars__dict(); 
      __std__vector_KITAJet_PFlowVars__dict(); 
      __std__map_int_std__vector_KITAHlt__KITATriggerObject_s__dict(); 
      __std__map_int_float__dict(); 
      __KITAMuon__point_dict(); 
      __KITAElectron__point_dict(); 
      __KITAElectron__vector_dict(); 
      __std__vector_KITATopJet__dict(); 
      __std__map_std__basic_string_char__float__dict(); 
      __std__vector_KITAGenParticle__dict(); 
      __std__vector_KITAJetWithSubjets__dict(); 
      __std__vector_KITAGenJetWithSubjets__dict(); 
      __std__vector_KITAMuon__dict(); 
      __std__vector_KITAJet__dict(); 
      __ROOT__Math__PxPyPzE4D_float__dict(); 
      __std__vector_KITAGenJet__dict(); 
      __std__map_std__basic_string_char__int__dict(); 
      __std__vector_KITAElectron__dict(); 
      __std__vector_KITAMcParticle__dict(); 
      __std__map_std__basic_string_char__unsignedslong__dict(); 
    }
    ~Dictionaries() {
      type_7.Unload(); // class KITAMcParticle 
      type_82.Unload(); // class KITAJet_PFlowVars 
      type_354.Unload(); // class KITADataCleaning 
      type_367.Unload(); // class KITAObject 
      type_429.Unload(); // class KITAGenJet 
      type_448.Unload(); // class KITAMuon 
      type_463.Unload(); // class KITAPFMet 
      type_511.Unload(); // class KITAGenFlavor 
      type_516.Unload(); // class KITAGenParticle 
      type_561.Unload(); // class KITAMisc 
      type_594.Unload(); // class KITAJet_CaloVars 
      type_630.Unload(); // class KITAMet 
      type_736.Unload(); // class KITATopJet 
      type_853.Unload(); // class KITAGenWFlavor 
      type_897.Unload(); // class KITAJet_svBTagInfos 
      type_904.Unload(); // class KITASemiSols 
      type_931.Unload(); // class KITASemiSol 
      type_958.Unload(); // class KITAPrimaryVertex 
      type_1003.Unload(); // class KITAGenJetWithSubjets 
      type_1023.Unload(); // class KITAJet 
      type_1030.Unload(); // class KITAJetWithSubjets 
      type_1097.Unload(); // class KITAHlt 
      type_1106.Unload(); // class KITAElectron 
      type_1162.Unload(); // class KITAJet_TrackbTagInfos 
      type_1167.Unload(); // class std::vector<KITAPrimaryVertex> 
      type_1205.Unload(); // class KITAGenSingleTopEvent 
      type_1271.Unload(); // class KITAGenTopEvent 
      type_1289.Unload(); // class KITAGenMet 
      type_1300.Unload(); // class KITAGenInfo 
      type_1316.Unload(); // class KITAGenTprime 
      type_3274.Unload(); // class KITAHlt::KITATriggerObject 
      type_1413.Unload(); // class std::vector<KITAHlt::KITATriggerObject> 
      type_1414.Unload(); // class std::vector<KITAJet_TrackbTagInfos> 
      type_1415.Unload(); // class std::vector<KITAJet_svBTagInfos> 
      type_1416.Unload(); // class std::vector<KITAJet_CaloVars> 
      type_1417.Unload(); // class std::vector<KITAJet_PFlowVars> 
      type_1629.Unload(); // class std::map<int,std::vector<KITAHlt::KITATriggerObject> > 
      type_1631.Unload(); // class std::map<int,float> 
      type_2497.Unload(); // class KITAMuon::point 
      type_3385.Unload(); // class KITAElectron::point 
      type_3386.Unload(); // class KITAElectron::vector 
      type_170.Unload(); // class std::vector<KITATopJet> 
      type_255.Unload(); // class std::map<std::basic_string<char>,float> 
      type_351.Unload(); // class std::vector<KITAGenParticle> 
      type_408.Unload(); // class std::vector<KITAJetWithSubjets> 
      type_491.Unload(); // class std::vector<KITAGenJetWithSubjets> 
      type_544.Unload(); // class std::vector<KITAMuon> 
      type_647.Unload(); // class std::vector<KITAJet> 
      type_728.Unload(); // class ROOT::Math::PxPyPzE4D<float> 
      type_841.Unload(); // class std::vector<KITAGenJet> 
      type_1052.Unload(); // class std::map<std::basic_string<char>,int> 
      type_1189.Unload(); // class std::vector<KITAElectron> 
      type_1195.Unload(); // class std::vector<KITAMcParticle> 
      type_1630.Unload(); // class std::map<std::basic_string<char>,unsigned long> 
    }
  };
  static Dictionaries instance;
}
} // unnamed namespace

int sub_10169E80()
{
  if ( (dword_104431E4 & 1) == 0 )
  {
    dword_104431E4 |= 1u;
    sub_1009AED0((int)&unk_10443040, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044307C, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_104430B8, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_104430F4, (int)"m_vecDirection", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10443130, (int)"m_nEntity", 52, 4, 0, 0);
    sub_1009AED0((int)&unk_1044316C, (int)"m_nIndex", 56, 4, 0, 0);
    sub_1009AED0((int)&unk_104431A8, (int)"m_chMaterialType", 60, 1, 0, 0);
  }
  sub_1009AC10(dword_10443228, (int)&unk_1044307C, 6, (int)"DT_TEFootprintDecal");
  return 1;
}

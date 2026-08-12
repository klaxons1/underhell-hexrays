int sub_10167E50()
{
  if ( (dword_1044244C & 1) == 0 )
  {
    dword_1044244C |= 1u;
    sub_1009AED0((int)&unk_104422A8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104422E4, (int)"baseclass", 0, 0, (int)off_103E8BDC, (int)sub_1009AE70);
    sub_1009AC90((int)&unk_10442320, (int)"m_vecOrigin", 16, 12, 0, (int)sub_1009ADD0);
    sub_1009AC90((int)&unk_1044235C, (int)"m_vecVelocity", 28, 12, 0, (int)sub_1009ADD0);
    sub_1009AED0((int)&unk_10442398, (int)"m_nModelIndex", 40, 4, 0, 0);
    sub_1009AED0((int)&unk_104423D4, (int)"m_nLifeTime", 44, 4, 0, 0);
    sub_10116040((int)&unk_10442410, (int)"m_hOwner", 48, 4, (int (__cdecl *)(int, int, int))sub_10116120);
  }
  sub_1009AC10(dword_10442484, (int)&unk_104422E4, 6, (int)"DT_TEClientProjectile");
  return 1;
}

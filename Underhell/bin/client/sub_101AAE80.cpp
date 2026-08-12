int sub_101AAE80()
{
  if ( (dword_1044CD10 & 1) == 0 )
  {
    dword_1044CD10 |= 1u;
    sub_1009AED0((int)&unk_1044CC98, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_10116070((int)&unk_1044CCD4, (int)"m_bMegaPhysgun", 12, 1);
  }
  sub_1009AC10(dword_1044D474, (int)&unk_1044CCD4, 1, (int)"DT_HL2GameRules");
  return 1;
}

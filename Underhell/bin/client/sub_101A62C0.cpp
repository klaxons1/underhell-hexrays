int sub_101A62C0()
{
  if ( (dword_1044C29C & 1) == 0 )
  {
    dword_1044C29C |= 1u;
    sub_1009AED0((int)&unk_1044C1E8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044C224, (int)"baseclass", 0, 0, (int)off_103EAA1C, (int)sub_1009AE70);
    sub_1009AED0((int)&unk_1044C260, (int)"m_bActive", 2152, 1, 0, (int (__cdecl *)(int, int, int))sub_101A6290);
  }
  sub_1009AC10(dword_1044C2A4, (int)&unk_1044C224, 2, (int)"DT_WeaponStunStick");
  return 1;
}

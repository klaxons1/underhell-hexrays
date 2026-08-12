int sub_101A54D0()
{
  if ( (dword_1044C190 & 1) == 0 )
  {
    dword_1044C190 |= 1u;
    sub_1009AED0((int)&unk_1044C0A0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044C0DC, (int)"baseclass", 0, 0, (int)off_103EA7E4, (int)sub_1009AE70);
    sub_10116070((int)&unk_1044C118, (int)"m_bIsCurrentlyUpgrading", 2152, 1);
    sub_1009AC40((int)&unk_1044C154, (int)"m_flTimeForceView", 2156, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_1044C198, (int)&unk_1044C0DC, 3, (int)"DT_WeaponPhysCannon");
  return 1;
}

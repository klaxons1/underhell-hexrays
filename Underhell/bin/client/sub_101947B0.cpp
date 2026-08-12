int sub_101947B0()
{
  if ( (dword_10447908 & 1) == 0 )
  {
    dword_10447908 |= 1u;
    sub_1009AED0((int)&unk_104477A0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_104477DC, (int)"baseclass", 0, 0, (int)off_103D7B2C, (int)sub_1009AE70);
    sub_10116040((int)&unk_10447818, (int)"m_nEnginePitch1", 3396, 4, (int (__cdecl *)(int, int, int))sub_10116000);
    sub_1009AC40((int)&unk_10447854, (int)"m_flEnginePitch1Time", 3404, 4, 0, (int)sub_1009ADC0);
    sub_10116040((int)&unk_10447890, (int)"m_nEnginePitch2", 3400, 4, (int (__cdecl *)(int, int, int))sub_10116000);
    sub_1009AC40((int)&unk_104478CC, (int)"m_flEnginePitch2Time", 3408, 4, 0, (int)sub_1009ADC0);
  }
  sub_1009AC10(dword_10447964, (int)&unk_104477DC, 5, (int)"DT_NPC_Manhack");
  return 1;
}

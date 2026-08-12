int sub_1019F7A0()
{
  if ( (dword_10449A30 & 1) == 0 )
  {
    dword_10449A30 |= 1u;
    sub_1009AED0((int)&unk_104498C8, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_10449904, (int)"baseclass", 0, 0, (int)off_103DB504, (int)sub_1009AE70);
    sub_10116040((int)&unk_10449940, (int)"m_hPlayer", 1972, 4, (int (__cdecl *)(int, int, int))sub_10116120);
    sub_10116070((int)&unk_1044997C, (int)"m_bEnterAnimOn", 1980, 1);
    sub_10116070((int)&unk_104499B8, (int)"m_bExitAnimOn", 1981, 1);
    sub_1009AC90((int)&unk_104499F4, (int)"m_vecEyeExitEndpoint", 1984, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_10449A54, (int)&unk_10449904, 5, (int)"DT_PropVehiclePrisonerPod");
  return 1;
}

int sub_10192420()
{
  if ( (dword_104472B0 & 1) == 0 )
  {
    dword_104472B0 |= 1u;
    sub_1009AED0((int)&unk_10446EF0, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AC40((int)&unk_10446F2C, (int)"m_flSuitPower", 4, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_10446F68, (int)"m_bZooming", 8, 1, 0, 0);
    sub_1009AED0((int)&unk_10446FA4, (int)"m_bitsActiveDevices", 12, 4, 0, 0);
    sub_1009AED0((int)&unk_10446FE0, (int)"m_iSquadMemberCount", 16, 4, 0, 0);
    sub_1009AED0((int)&unk_1044701C, (int)"m_iSquadMedicCount", 20, 4, 0, 0);
    sub_10116070((int)&unk_10447058, (int)"m_fSquadInFollowMode", 24, 1);
    sub_10116070((int)&unk_10447094, (int)"m_bWeaponLowered", 25, 1);
    sub_10116040((int)&unk_104470D0, (int)"m_hAutoAimTarget", 28, 4, (int (__cdecl *)(int, int, int))sub_10116120);
    sub_1009AC90((int)&unk_1044710C, (int)"m_vecAutoAimPoint", 32, 12, 0, (int)sub_1009ADD0);
    sub_10116040((int)&unk_10447148, (int)"m_hLadder", 64, 4, (int (__cdecl *)(int, int, int))sub_10116120);
    sub_10116070((int)&unk_10447184, (int)"m_bDisplayReticle", 44, 1);
    sub_10116070((int)&unk_104471C0, (int)"m_bStickyAutoAim", 45, 1);
    sub_10116070((int)&unk_104471FC, (int)"m_bAutoAimTarget", 46, 1);
    sub_1009AC40((int)&unk_10447238, (int)"m_flFlashBattery", 48, 4, 0, (int)sub_1009ADC0);
    sub_1009AC90((int)&unk_10447274, (int)"m_vecLocatorOrigin", 52, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_104472B4, (int)&unk_10446F2C, 15, (int)"DT_HL2Local");
  return 1;
}

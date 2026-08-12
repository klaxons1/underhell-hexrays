int sub_1015AE20()
{
  if ( (dword_1043E81C & 1) == 0 )
  {
    dword_1043E81C |= 1u;
    sub_1009AED0((int)&unk_1043E420, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1043E45C, (int)"baseclass", 0, 0, (int)off_103D7B8C, (int)sub_1009AE70);
    sub_10116040((int)&unk_1043E498, (int)"m_hPlayer", 1968, 4, (int (__cdecl *)(int, int, int))sub_10116120);
    sub_1009AED0((int)&unk_1043E4D4, (int)"m_nSpeed", 1972, 4, 0, 0);
    sub_1009AED0((int)&unk_1043E510, (int)"m_nRPM", 1976, 4, 0, 0);
    sub_1009AC40((int)&unk_1043E54C, (int)"m_flThrottle", 1980, 4, 0, (int)sub_1009ADC0);
    sub_1009AED0((int)&unk_1043E588, (int)"m_nBoostTimeLeft", 1984, 4, 0, 0);
    sub_1009AED0((int)&unk_1043E5C4, (int)"m_nHasBoost", 1988, 4, 0, 0);
    sub_1009AED0((int)&unk_1043E600, (int)"m_nScannerDisabledWeapons", 1992, 4, 0, 0);
    sub_1009AED0((int)&unk_1043E63C, (int)"m_nScannerDisabledVehicle", 1996, 4, 0, 0);
    sub_1009AED0((int)&unk_1043E678, (int)"m_bEnterAnimOn", 2028, 1, 0, 0);
    sub_1009AED0((int)&unk_1043E6B4, (int)"m_bExitAnimOn", 2029, 1, 0, 0);
    sub_1009AED0((int)&unk_1043E6F0, (int)"m_bUnableToFire", 2105, 1, 0, 0);
    sub_1009AC90((int)&unk_1043E72C, (int)"m_vecEyeExitEndpoint", 2092, 12, 0, (int)sub_1009ADD0);
    sub_10116070((int)&unk_1043E768, (int)"m_bHasGun", 2104, 1);
    sub_10116070((int)&unk_1043E7A4, (int)"m_bPlayerAtGun", 1964, 1);
    sub_1009AC90((int)&unk_1043E7E0, (int)"m_vecGunCrosshair", 2036, 12, 0, (int)sub_1009ADD0);
  }
  sub_1009AC10(dword_1043E840, (int)&unk_1043E45C, 16, (int)"DT_PropVehicleDriveable");
  return 1;
}

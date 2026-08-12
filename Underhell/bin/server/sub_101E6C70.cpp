int sub_101E6C70()
{
  if ( (dword_106BCEE0 & 1) == 0 )
  {
    dword_106BCEE0 |= 1u;
    sub_10122040((int)&unk_106BC560, (int)"should_never_see_this", 0, 4, -1, 0, 0);
    sub_101221E0(
      (int)&unk_106BC5AC,
      (int)"baseclass",
      0,
      (int)off_1060E0C8,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_101221E0(
      (int)&unk_106BC5F8,
      (int)"pl",
      3240,
      (int)&unk_106BBEA0,
      std::_Unchecked<std::_Vector_val<std::_Simple_types<void *>>>);
    sub_10234730(&unk_106BC644, "m_hVehicle", 3420, 4, -1, sub_10234830);
    sub_10234730(&unk_106BC690, "m_hUseEntity", 3404, 4, -1, sub_10234830);
    sub_10122040((int)&unk_106BC6DC, (int)"m_iHealth", 220, 4, 10, 0, 0);
    sub_10122040((int)&unk_106BC728, (int)"m_lifeState", 224, 1, 3, 1, 0);
    sub_10122040((int)&unk_106BC774, (int)"m_iBonusProgress", 3432, 4, 15, 0, 0);
    sub_10122040((int)&unk_106BC7C0, (int)"m_iBonusChallenge", 3436, 4, 4, 0, 0);
    sub_10121D30((int)&unk_106BC80C, (int)"m_flMaxspeed", 4132, 4, 12, 8, 0.0, 2048.0, (int)sub_10121A20);
    sub_10122040((int)&unk_106BC858, (int)"m_fFlags", 256, 4, 9, 1025, sub_101E33E0);
    sub_10122040((int)&unk_106BC8A4, (int)"m_iObserverMode", 3480, 4, 3, 1, 0);
    sub_10234730(&unk_106BC8F0, "m_hObserverTarget", 3504, 4, -1, sub_10234830);
    sub_10122040((int)&unk_106BC93C, (int)"m_iFOV", 3484, 4, 8, 1, 0);
    sub_10122040((int)&unk_106BC988, (int)"m_iFOVStart", 3492, 4, 8, 1, 0);
    sub_10121D30((int)&unk_106BC9D4, (int)"m_flFOVTime", 3496, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10122040((int)&unk_106BCA20, (int)"m_iDefaultFOV", 3488, 4, 8, 1, 0);
    sub_10234730(&unk_106BCA6C, "m_hZoomOwner", 3512, 4, -1, sub_10234830);
    sub_10234730(&unk_106BCAB8, "m_hViewModel", 4024, 4, -1, sub_10234830);
    sub_10122270((int)&unk_106BCB04, 3, 4, (int)"m_hViewModel", 0);
    sub_10122120((int)&unk_106BCB50, (int)"m_szLastPlaceName", 4408, 18, 0, (int)sub_10121B10);
    sub_10122040((int)&unk_106BCB9C, (int)"m_ubEFNoInterpParity", 4520, 4, 2, 1, 0);
    sub_10234730(&unk_106BCBE8, "m_pCarryingRagdoll", 2180, 4, -1, sub_10234830);
    sub_10122040((int)&unk_106BCC34, (int)"m_iEndurance", 2184, 4, 10, 0, 0);
    sub_10122040((int)&unk_106BCC80, (int)"m_iBleedCounter", 2188, 4, 10, 0, 0);
    sub_10121D30((int)&unk_106BCCCC, (int)"m_fIronsightedTime", 2116, 4, 32, 0, 0.0, -121121.12, (int)sub_10121A20);
    sub_10234700(&unk_106BCD18, "m_bIronSighted", 2137, 1);
    sub_10234700(&unk_106BCD64, "m_bNightVisionOn", 3369, 1);
    sub_10234700(&unk_106BCDB0, "m_bGasMaskOn", 3370, 1);
    sub_10234700(&unk_106BCDFC, "m_bLeftArmDeployed", 2121, 1);
    sub_10234700(&unk_106BCE48, "m_bHoldingFlare", 2122, 1);
    sub_101221E0(
      (int)&unk_106BCE94,
      (int)"localdata",
      0,
      (int)byte_106BBEB8,
      (int (__cdecl *)(int, int, int))sub_10122360);
    atexit(sub_10473520);
  }
  sub_10121D00(byte_106BBEE4, (int)&unk_106BC5AC, 31, (int)off_1063C6DC[0]);
  return 1;
}

int sub_10043D70()
{
  if ( (dword_10408FB0 & 1) == 0 )
  {
    dword_10408FB0 |= 1u;
    sub_1009AED0(&unk_10408830, "should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30(&unk_1040886C, "baseclass", 0, 0, off_103D8844, sub_1009AE70);
    sub_1009AD30(&unk_104088A8, "localdata", 0, 0, &unk_10407610, sub_1009AE70);
    sub_1009AD30(&unk_104088E4, "pl", 3960, 0, &unk_104075E0, sub_1009AE70);
    sub_1009AED0(&unk_10408920, "m_iFOV", 3980, 4, 0, 0);
    sub_1009AED0(&unk_1040895C, "m_iFOVStart", 3984, 4, 0, 0);
    sub_1009AC40(&unk_10408998, "m_flFOVTime", 3988, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_104089D4, "m_iDefaultFOV", 3992, 4, 0, 0);
    sub_10116040(&unk_10408A10, "m_hZoomOwner", 3996, 4, sub_10116120);
    sub_10116040(&unk_10408A4C, "m_hVehicle", 4128, 4, sub_10116120);
    sub_10116040(&unk_10408A88, "m_hUseEntity", 4136, 4, sub_10116120);
    sub_1009AED0(&unk_10408AC4, "m_iHealth", 136, 4, 0, 0);
    sub_1009AED0(&unk_10408B00, "m_lifeState", 135, 1, 0, 0);
    sub_1009AED0(&unk_10408B3C, "m_iBonusProgress", 4148, 4, 0, 0);
    sub_1009AED0(&unk_10408B78, "m_iBonusChallenge", 4152, 4, 0, 0);
    sub_1009AC40(&unk_10408BB4, "m_flMaxspeed", 4144, 4, 0, sub_1009ADC0);
    sub_1009AED0(&unk_10408BF0, "m_fFlags", 732, 4, 0, 0);
    sub_1009AED0(&unk_10408C2C, "m_iObserverMode", 4084, 4, 0, 0);
    sub_10116040(&unk_10408C68, "m_hObserverTarget", 4088, 4, sub_10043130);
    sub_10116040(&unk_10408CA4, "m_hViewModel[0]", 4300, 4, sub_10116120);
    sub_1009AD80(&unk_10408CE0, 3, 4, "m_hViewModel", 0);
    sub_1009ACE0(&unk_10408D1C, "m_szLastPlaceName", 4648, 18, 0, sub_1009AE20);
    sub_1009AED0(&unk_10408D58, "m_ubEFNoInterpParity", 4688, 1, 0, 0);
    sub_1009AED0(&unk_10408D94, "m_iEndurance", 3432, 4, 0, 0);
    sub_1009AED0(&unk_10408DD0, "m_iBleedCounter", 3436, 4, 0, 0);
    sub_1009AC40(&unk_10408E0C, "m_fIronsightedTime", 3352, 4, 0, sub_1009ADC0);
    sub_10116040(&unk_10408E48, "m_pCarryingRagdoll", 3440, 4, sub_10116120);
    sub_10116070(&unk_10408E84, "m_bIronSighted", 4140, 1);
    sub_10116070(&unk_10408EC0, "m_bNightVisionOn", 3449, 1);
    sub_10116070(&unk_10408EFC, "m_bGasMaskOn", 3450, 1);
    sub_10116070(&unk_10408F38, "m_bLeftArmDeployed", 3451, 1);
    sub_10116070(&unk_10408F74, "m_bHoldingFlare", 3452, 1);
  }
  sub_1009AC10(&unk_1040886C, 31, "DT_BasePlayer");
  return 1;
}

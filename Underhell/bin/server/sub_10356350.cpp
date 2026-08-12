int *sub_10356350()
{
  if ( (dword_106E6C38 & 1) == 0 )
  {
    dword_106E6C38 |= 1u;
    dword_106E6C1C = (int)"CTargetGunshipCrash";
    dword_106E6C24 = 0;
    dword_106E6C28 = 0;
    dword_106E6C2C = 0;
    dword_106E6C30 = 0;
    dword_106E6C34 = 0;
    dword_106E6C20 = 19;
    atexit(sub_104780C0);
  }
  dword_10671990 = (int)&dword_1060F348;
  if ( (dword_106E6C38 & 2) == 0 )
  {
    dword_106E6C38 |= 2u;
    dword_10671B78 = (int)off_10614A2C;
    dword_10671B7C = 0;
    dword_10671B80 = 0;
    dword_10671B84 = 0;
    dword_10671B88 = 0;
    dword_10671B8C = 0;
    dword_10671B90 = 0;
  }
  dword_10671988 = 4;
  dword_10671984 = (int)&unk_10671AC4;
  return &dword_10671984;
}

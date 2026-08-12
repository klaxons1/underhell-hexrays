int *sub_10403B20()
{
  if ( (dword_106F0420 & 1) == 0 )
  {
    dword_106F0420 |= 1u;
    dword_106F0404 = (int)"CWeaponPistol";
    dword_106F040C = 0;
    dword_106F0410 = 0;
    dword_106F0414 = 0;
    dword_106F0418 = 0;
    dword_106F041C = 0;
    dword_106F0408 = 13;
    atexit(sub_10479980);
  }
  dword_106864D0 = (int)&dword_106609CC;
  dword_106864C8 = 4;
  dword_106864C4 = (int)&unk_10686614;
  return &dword_106864C4;
}

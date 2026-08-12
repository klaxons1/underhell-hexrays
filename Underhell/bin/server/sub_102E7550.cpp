int *sub_102E7550()
{
  if ( (dword_106E15E4 & 1) == 0 )
  {
    dword_106E15E4 |= 1u;
    dword_106E15C8 = (int)"CTriggerWeaponStrip";
    dword_106E15D0 = 0;
    dword_106E15D4 = 0;
    dword_106E15D8 = 0;
    dword_106E15DC = 0;
    dword_106E15E0 = 0;
    dword_106E15CC = 19;
    atexit(sub_104774C0);
  }
  dword_106677E8 = (int)&dword_10651564;
  dword_106677E0 = 1;
  dword_106677DC = (int)&unk_10667D14;
  return &dword_106677DC;
}

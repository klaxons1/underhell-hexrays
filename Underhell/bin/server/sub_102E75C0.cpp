int *sub_102E75C0()
{
  if ( (dword_106E1604 & 1) == 0 )
  {
    dword_106E1604 |= 1u;
    dword_106E15E8 = (int)"CTriggerPhysicsTrap";
    dword_106E15F0 = 0;
    dword_106E15F4 = 0;
    dword_106E15F8 = 0;
    dword_106E15FC = 0;
    dword_106E1600 = 0;
    dword_106E15EC = 19;
    atexit(sub_104774D0);
  }
  dword_10667800 = (int)&dword_10651564;
  dword_106677F8 = 4;
  dword_106677F4 = (int)&unk_10667D7C;
  return &dword_106677F4;
}

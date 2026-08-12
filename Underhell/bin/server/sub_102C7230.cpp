int *sub_102C7230()
{
  if ( (dword_106DE160 & 1) == 0 )
  {
    dword_106DE160 |= 1u;
    dword_106DE144 = (int)"CFuncBulletShield";
    dword_106DE14C = 0;
    dword_106DE150 = 0;
    dword_106DE154 = 0;
    dword_106DE158 = 0;
    dword_106DE15C = 0;
    dword_106DE148 = 17;
    atexit(sub_10476B60);
  }
  dword_1066252C = (int)&dword_10630E48;
  dword_10662524 = 1;
  dword_10662520 = (int)&unk_106DE110;
  return &dword_10662520;
}

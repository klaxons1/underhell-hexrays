int *sub_103562D0()
{
  if ( (dword_106E6C18 & 1) == 0 )
  {
    dword_106E6C18 |= 1u;
    dword_106E6BFC = (int)"CGunshipRagdollMotion";
    dword_106E6C04 = 0;
    dword_106E6C08 = 0;
    dword_106E6C0C = 0;
    dword_106E6C10 = 0;
    dword_106E6C14 = 0;
    dword_106E6C00 = 21;
    atexit(sub_104780B0);
  }
  dword_10671978 = 0;
  dword_10671970 = 1;
  dword_1067196C = (int)&unk_106E6BC8;
  return &dword_1067196C;
}

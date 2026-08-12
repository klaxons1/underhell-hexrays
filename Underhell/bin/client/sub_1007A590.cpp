int *sub_1007A590()
{
  if ( (dword_104138E8 & 1) == 0 )
  {
    dword_104138E8 |= 1u;
    dword_104138D0 = (int)&CClientEffectPrecacheSystem::`vftable';
    dword_104138D4 = 0;
    dword_104138D8 = 0;
    dword_104138DC = 0;
    dword_104138E0 = 0;
    dword_104138E4 = 0;
    atexit(sub_102C9280);
  }
  return &dword_104138D0;
}

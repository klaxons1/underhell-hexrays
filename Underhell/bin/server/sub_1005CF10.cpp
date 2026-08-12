char *__thiscall sub_1005CF10(char *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &CAI_RappelBehavior::`vftable';
  if ( dword_106054A0 != dword_10694898 )
  {
    sub_1005C6E0();
    byte_1060549C = 1;
    dword_106054A0 = dword_10694898;
  }
  *((_DWORD *)this + 5) = -1;
  *(_WORD *)(this + 17) = 256;
  return this;
}

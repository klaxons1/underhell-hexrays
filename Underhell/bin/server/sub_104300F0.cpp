_DWORD *__thiscall sub_104300F0(_DWORD *this, char a2)
{
  HMODULE v3; // eax

  v3 = (HMODULE)this[2];
  *this = &CDllDemandLoader::`vftable';
  if ( v3 )
  {
    FreeLibrary(v3);
    this[2] = 0;
  }
  if ( (a2 & 1) != 0 )
    sub_10184660((int)this);
  return this;
}

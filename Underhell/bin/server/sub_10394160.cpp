char __thiscall sub_10394160(void *this, int a2, int a3, int a4)
{
  if ( a2 != dword_106C1B60 )
    return sub_1001E230(this, a2, a3, a4);
  if ( sub_10093C60(this) )
    (*(void (__thiscall **)(void *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
      this,
      "TLK_PLYR_PHYSATK",
      0,
      0,
      0,
      0);
  return 1;
}

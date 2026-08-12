int __thiscall sub_10216590(int this, char a2)
{
  sub_10215D00((_WORD *)(this + 800));
  if ( *(int *)(this + 808) >= 0 )
  {
    if ( *(_DWORD *)(this + 800) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 800));
      *(_DWORD *)(this + 800) = 0;
    }
    *(_DWORD *)(this + 804) = 0;
  }
  sub_100DF1D0((_DWORD *)this);
  if ( (a2 & 1) != 0 )
    sub_100D6360(this);
  return this;
}

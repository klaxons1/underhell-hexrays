int __thiscall sub_100017E0(int this)
{
  sub_10001370((_WORD *)(this + 320));
  if ( *(int *)(this + 328) >= 0 )
  {
    if ( *(_DWORD *)(this + 320) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 320));
      *(_DWORD *)(this + 320) = 0;
    }
    *(_DWORD *)(this + 324) = 0;
  }
  sub_1024C2A0(this + 44);
  return sub_100B5550(this);
}

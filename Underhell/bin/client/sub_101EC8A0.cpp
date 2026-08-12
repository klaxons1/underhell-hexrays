void __thiscall sub_101EC8A0(int this)
{
  sub_101EB810(this);
  *(_WORD *)(this + 20) = -1;
  if ( *(int *)(this + 12) >= 0 )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
    *(_DWORD *)(this + 8) = 0;
  }
  *(_WORD *)(this + 22) = -1;
  if ( *(int *)(this + 12) >= 0 )
  {
    if ( *(_DWORD *)(this + 4) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
    *(_DWORD *)(this + 8) = 0;
  }
}

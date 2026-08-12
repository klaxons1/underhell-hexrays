int __thiscall sub_10218AB0(int this)
{
  sub_10215D00((_WORD *)(this + 40));
  if ( *(int *)(this + 48) >= 0 )
  {
    if ( *(_DWORD *)(this + 40) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 40));
      *(_DWORD *)(this + 40) = 0;
    }
    *(_DWORD *)(this + 44) = 0;
  }
  sub_10215D00((_WORD *)(this + 12));
  if ( *(int *)(this + 20) >= 0 )
  {
    if ( *(_DWORD *)(this + 12) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 12));
      *(_DWORD *)(this + 12) = 0;
    }
    *(_DWORD *)(this + 16) = 0;
  }
  return sub_10170190((_DWORD *)this);
}

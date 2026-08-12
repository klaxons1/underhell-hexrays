int __thiscall sub_100A3600(int this)
{
  int result; // eax

  sub_100A30B0(this);
  result = -1;
  *(_WORD *)(this + 20) = -1;
  if ( *(int *)(this + 12) >= 0 )
  {
    result = *(_DWORD *)(this + 4);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
    *(_DWORD *)(this + 8) = 0;
  }
  *(_WORD *)(this + 22) = -1;
  if ( *(int *)(this + 12) >= 0 )
  {
    result = *(_DWORD *)(this + 4);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 4) = 0;
    }
    *(_DWORD *)(this + 8) = 0;
  }
  return result;
}

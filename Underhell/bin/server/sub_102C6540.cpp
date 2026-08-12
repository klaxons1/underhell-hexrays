int __thiscall sub_102C6540(int this)
{
  int result; // eax

  sub_102C6470(this);
  result = 0xFFFF;
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

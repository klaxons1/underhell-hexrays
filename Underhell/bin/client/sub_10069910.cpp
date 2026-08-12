unsigned int __thiscall sub_10069910(int this)
{
  unsigned int result; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // ecx
  int v5; // ecx

  result = *(_DWORD *)(this + 156);
  v3 = (_DWORD *)(this + 156);
  if ( result != -1 )
  {
    v4 = (_DWORD *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 156) & 0xFFF) + 4);
    result >>= 12;
    if ( v4[1] == result )
    {
      if ( *v4 )
      {
        result = (*(int (__thiscall **)(_DWORD *, _DWORD *))*(v3 - 27))(v3 - 27, v3);
        *v3 = -1;
      }
    }
  }
  if ( *(_DWORD *)(this + 148) != -1 )
  {
    result = (**(int (__thiscall ***)(int, int))(this + 48))(this + 48, this + 148);
    *(_DWORD *)(this + 148) = -1;
  }
  *(_DWORD *)(this + 172) = 0;
  if ( *(int *)(this + 168) >= 0 )
  {
    result = *(_DWORD *)(this + 160);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 160));
      *(_DWORD *)(this + 160) = 0;
    }
    *(_DWORD *)(this + 164) = 0;
  }
  *(_DWORD *)(this + 176) = *(_DWORD *)(this + 160);
  *(_DWORD *)(this + 192) = 0;
  if ( *(int *)(this + 188) < 0 )
  {
    *(_DWORD *)(this + 196) = *(_DWORD *)(this + 180);
  }
  else
  {
    result = *(_DWORD *)(this + 180);
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this + 180));
      *(_DWORD *)(this + 180) = 0;
    }
    v5 = *(_DWORD *)(this + 180);
    *(_DWORD *)(this + 184) = 0;
    *(_DWORD *)(this + 196) = v5;
  }
  return result;
}

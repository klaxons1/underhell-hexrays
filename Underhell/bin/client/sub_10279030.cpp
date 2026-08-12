int __thiscall sub_10279030(_DWORD *this)
{
  int i; // edi
  int v3; // ecx
  bool v4; // sf
  int result; // eax

  if ( *((_BYTE *)this + 20) )
  {
    for ( i = 1; i < this[3]; ++i )
    {
      v3 = *(_DWORD *)(*this + 4 * i);
      if ( v3 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 24))(v3, 1);
    }
  }
  v4 = (int)this[2] < 0;
  this[3] = 0;
  if ( !v4 )
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  v4 = (int)this[2] < 0;
  result = *this;
  this[4] = *this;
  if ( !v4 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      *this = 0;
    }
    this[1] = 0;
  }
  return result;
}

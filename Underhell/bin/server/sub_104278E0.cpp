int __thiscall sub_104278E0(int *this)
{
  int i; // edi
  int result; // eax
  int v4; // ecx
  bool v5; // sf
  int v6; // ecx

  for ( i = 0; i < this[3]; ++i )
  {
    result = *this;
    v4 = *(_DWORD *)(*this + 4 * i);
    if ( v4 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 116))(v4, 1);
  }
  v5 = this[2] < 0;
  this[3] = 0;
  if ( v5 )
  {
    this[4] = *this;
  }
  else
  {
    result = *this;
    if ( *this )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    v6 = *this;
    this[1] = 0;
    this[4] = v6;
  }
  return result;
}

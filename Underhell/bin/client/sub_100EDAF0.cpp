int __thiscall sub_100EDAF0(int *this)
{
  int i; // edi
  int result; // eax
  bool v4; // sf
  int v5; // ecx

  for ( i = 0; i < this[3]; ++i )
  {
    result = *(_DWORD *)(*this + 4 * i);
    if ( result )
      result = sub_10034930(*(_DWORD *)(*this + 4 * i));
  }
  v4 = this[2] < 0;
  this[3] = 0;
  if ( v4 )
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
    v5 = *this;
    this[1] = 0;
    this[4] = v5;
  }
  return result;
}

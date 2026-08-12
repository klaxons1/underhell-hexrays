int __thiscall sub_10427860(int *this)
{
  int i; // edi
  int result; // eax
  int v4; // ebx
  bool v5; // sf
  int v6; // ecx

  for ( i = 0; i < this[3]; ++i )
  {
    result = *this;
    v4 = *(_DWORD *)(*this + 4 * i);
    if ( v4 )
    {
      sub_10429140(*(_DWORD *)(*this + 4 * i));
      result = sub_10184660(v4);
    }
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

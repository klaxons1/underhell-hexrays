int __thiscall sub_10087F10(int *this)
{
  int i; // edi
  int result; // eax
  int v4; // ecx

  for ( i = this[3] - 1; i >= 0; --i )
    result = sub_10233380(*this + 4 * i);
  this[3] = 0;
  if ( this[2] < 0 )
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
    v4 = *this;
    this[1] = 0;
    this[4] = v4;
  }
  return result;
}

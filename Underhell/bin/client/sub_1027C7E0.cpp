int __thiscall sub_1027C7E0(int *this)
{
  bool v2; // sf
  int result; // eax

  sub_1027C630(this);
  if ( this[2] >= 0 )
  {
    if ( *this )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *this);
      *this = 0;
    }
    this[1] = 0;
  }
  v2 = this[2] < 0;
  result = *this;
  this[4] = *this;
  if ( !v2 )
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

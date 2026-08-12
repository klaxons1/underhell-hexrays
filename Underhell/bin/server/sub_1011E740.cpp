int __thiscall sub_1011E740(_DWORD *this)
{
  int result; // eax

  result = sub_1011E550(this);
  this[6] = -1;
  if ( (int)this[3] >= 0 )
  {
    result = this[1];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
  this[7] = -1;
  if ( (int)this[3] >= 0 )
  {
    result = this[1];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
  return result;
}

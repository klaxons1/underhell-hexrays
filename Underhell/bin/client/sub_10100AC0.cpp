int __thiscall sub_10100AC0(_DWORD *this)
{
  bool v2; // sf
  int result; // eax
  int v4; // ecx

  v2 = (int)this[4] < 0;
  this[5] = 0;
  if ( v2 )
  {
    this[6] = this[2];
  }
  else
  {
    result = this[2];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[2]);
      this[2] = 0;
    }
    v4 = this[2];
    this[3] = 0;
    this[6] = v4;
  }
  return result;
}

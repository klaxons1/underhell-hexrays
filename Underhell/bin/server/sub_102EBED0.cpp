int __thiscall sub_102EBED0(_DWORD *this)
{
  bool v2; // sf
  int result; // eax
  int v4; // ecx

  v2 = (int)this[5] < 0;
  this[6] = 0;
  if ( v2 )
  {
    this[7] = this[3];
  }
  else
  {
    result = this[3];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[3]);
      this[3] = 0;
    }
    v4 = this[3];
    this[4] = 0;
    this[7] = v4;
  }
  return result;
}

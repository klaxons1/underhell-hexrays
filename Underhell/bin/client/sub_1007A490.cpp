int __thiscall sub_1007A490(_DWORD *this)
{
  bool v2; // sf
  int result; // eax
  int v4; // ecx

  v2 = (int)this[3] < 0;
  this[4] = 0;
  if ( v2 )
  {
    this[5] = this[1];
  }
  else
  {
    result = this[1];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    v4 = this[1];
    this[2] = 0;
    this[5] = v4;
  }
  return result;
}

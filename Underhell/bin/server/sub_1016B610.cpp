int __thiscall sub_1016B610(_DWORD *this)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < this[8]; ++i )
    sub_10184660(*(_DWORD *)(this[5] + 4 * i));
  this[8] = 0;
  if ( (int)this[7] >= 0 )
  {
    if ( this[5] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[5]);
      this[5] = 0;
    }
    this[6] = 0;
  }
  result = this[5];
  this[9] = result;
  if ( (int)this[7] >= 0 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      this[5] = 0;
    }
    this[6] = 0;
  }
  return result;
}

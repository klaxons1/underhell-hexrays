int __thiscall sub_1001C330(_DWORD *this)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < this[5]; ++i )
    sub_10184660(*(_DWORD *)(this[2] + 4 * i));
  this[5] = 0;
  if ( (int)this[4] >= 0 )
  {
    if ( this[2] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[2]);
      this[2] = 0;
    }
    this[3] = 0;
  }
  result = this[2];
  this[6] = result;
  if ( (int)this[4] >= 0 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      this[2] = 0;
    }
    this[3] = 0;
  }
  return result;
}

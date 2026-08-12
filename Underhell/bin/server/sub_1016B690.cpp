int __thiscall sub_1016B690(_DWORD *this)
{
  int i; // edi
  int result; // eax

  for ( i = 0; i < this[4]; ++i )
    sub_10184660(*(_DWORD *)(this[1] + 4 * i));
  this[4] = 0;
  if ( (int)this[3] >= 0 )
  {
    if ( this[1] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1]);
      this[1] = 0;
    }
    this[2] = 0;
  }
  result = this[1];
  this[5] = result;
  if ( (int)this[3] >= 0 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      this[1] = 0;
    }
    this[2] = 0;
  }
  return result;
}

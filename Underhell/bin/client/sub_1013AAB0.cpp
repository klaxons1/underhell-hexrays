int __thiscall sub_1013AAB0(_DWORD *this)
{
  int i; // edi
  int result; // eax
  int v4; // ecx

  for ( i = this[4] - 1; i >= 0; --i )
    result = sub_10034930(*(_DWORD *)(this[1] + 4 * i));
  this[4] = 0;
  if ( (int)this[3] < 0 )
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

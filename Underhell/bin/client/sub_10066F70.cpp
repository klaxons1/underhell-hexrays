int __thiscall sub_10066F70(_DWORD *this)
{
  bool v2; // sf
  int result; // eax
  int v4; // ecx

  v2 = (int)this[314] < 0;
  this[315] = 0;
  if ( v2 )
  {
    this[316] = this[312];
  }
  else
  {
    result = this[312];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[312]);
      this[312] = 0;
    }
    v4 = this[312];
    this[313] = 0;
    this[316] = v4;
  }
  return result;
}

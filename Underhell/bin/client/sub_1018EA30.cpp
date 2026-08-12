int __thiscall sub_1018EA30(_DWORD *this)
{
  int i; // edi
  int result; // eax
  bool v4; // sf
  int v5; // ecx

  for ( i = 0; i < this[1261]; ++i )
    result = sub_10034930(*(_DWORD *)(this[1258] + 4 * i));
  v4 = (int)this[1260] < 0;
  this[1261] = 0;
  if ( v4 )
  {
    this[1262] = this[1258];
  }
  else
  {
    result = this[1258];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[1258]);
      this[1258] = 0;
    }
    v5 = this[1258];
    this[1259] = 0;
    this[1262] = v5;
  }
  return result;
}

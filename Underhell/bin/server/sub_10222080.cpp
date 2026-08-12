int __thiscall sub_10222080(_DWORD *this)
{
  int i; // edi
  int v3; // ecx
  int result; // eax
  bool v5; // sf
  int v6; // ecx

  for ( i = 0; i < this[12]; ++i )
  {
    v3 = *(_DWORD *)(this[9] + 4 * i);
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 32))(v3);
  }
  v5 = (int)this[18] < 0;
  this[19] = 0;
  if ( v5 )
  {
    this[20] = this[16];
  }
  else
  {
    result = this[16];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[16]);
      this[16] = 0;
    }
    v6 = this[16];
    this[17] = 0;
    this[20] = v6;
  }
  return result;
}

int __thiscall sub_100CDEC0(_DWORD *this, int a2)
{
  int result; // eax
  int i; // edi
  int v5; // ecx
  int (__thiscall ***v6)(_DWORD, int); // ecx
  bool v7; // sf
  int v8; // ecx

  result = sub_100CDE20(this, a2);
  for ( i = 0; i < this[20]; ++i )
  {
    v5 = *(_DWORD *)(this[17] + 4 * i);
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, a2);
    v6 = *(int (__thiscall ****)(_DWORD, int))(this[17] + 4 * i);
    if ( v6 )
      result = (**v6)(v6, 1);
  }
  v7 = (int)this[19] < 0;
  this[20] = 0;
  if ( v7 )
  {
    this[21] = this[17];
  }
  else
  {
    result = this[17];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[17]);
      this[17] = 0;
    }
    v8 = this[17];
    this[18] = 0;
    this[21] = v8;
  }
  return result;
}

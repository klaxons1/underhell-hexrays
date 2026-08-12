int __thiscall sub_100CDE20(_DWORD *this, int a2)
{
  int i; // edi
  int v4; // ecx
  int v5; // ecx
  int result; // eax
  int (__thiscall ***v7)(_DWORD, int); // ecx
  bool v8; // sf
  int v9; // ecx

  for ( i = 0; i < this[12]; ++i )
  {
    v4 = *(_DWORD *)(this[9] + 4 * i);
    if ( *(_DWORD *)(v4 + 12) )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 24))(a2, *(_DWORD *)(v4 + 12));
    v5 = *(_DWORD *)(this[9] + 4 * i);
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, a2);
    v7 = *(int (__thiscall ****)(_DWORD, int))(this[9] + 4 * i);
    if ( v7 )
      result = (**v7)(v7, 1);
  }
  v8 = (int)this[11] < 0;
  this[12] = 0;
  if ( v8 )
  {
    this[13] = this[9];
  }
  else
  {
    result = this[9];
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[9]);
      this[9] = 0;
    }
    v9 = this[9];
    this[10] = 0;
    this[13] = v9;
  }
  return result;
}

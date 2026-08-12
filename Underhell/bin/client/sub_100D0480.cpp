HMODULE __thiscall sub_100D0480(_DWORD *this)
{
  int i; // ebx
  int v3; // edi
  int v4; // ecx
  int j; // edi
  int k; // edi
  int m; // edi
  HMODULE result; // eax

  for ( i = 0; i < this[11]; ++i )
  {
    v3 = *(_DWORD *)(this[8] + 4 * i);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 8))(v3, this[1]);
    (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  this[11] = 0;
  if ( (int)this[10] >= 0 )
  {
    if ( this[8] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[8]);
      this[8] = 0;
    }
    this[9] = 0;
  }
  this[12] = this[8];
  v4 = this[1];
  if ( v4 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
    this[1] = 0;
  }
  for ( j = sub_10009210(this + 16); j != -1; j = sub_100098E0(this + 16, j) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[17] + 24 * j + 16));
  sub_10009820(this + 16);
  for ( k = sub_10009210(this + 25); k != -1; k = sub_100098E0(this + 25, k) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[26] + 24 * k + 16));
  sub_10009820(this + 25);
  for ( m = sub_100CD120(this + 44); m != -1; m = sub_100CD1C0(this + 44, m) )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(this[45] + 36 * m + 16));
  sub_100CEF50(this + 44);
  result = (HMODULE)this[59];
  this[60] = 0;
  if ( result )
  {
    result = (HMODULE)sub_1022CE30(result);
    this[59] = 0;
  }
  return result;
}

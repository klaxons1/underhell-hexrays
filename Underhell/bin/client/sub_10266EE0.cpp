int __thiscall sub_10266EE0(_DWORD *this)
{
  int i; // esi
  int j; // eax
  int v4; // ebx
  int v5; // esi
  void *v6; // ecx
  bool v7; // sf
  int v8; // eax

  for ( i = 0; i < this[63]; ++i )
    sub_102651D0((_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(i + this[60]) + 28));
  for ( j = this[75]; j != -1; j = *(_DWORD *)(this[72] + v4 + 8) )
  {
    v4 = 12 * j;
    v5 = *(_DWORD *)(12 * j + this[72]);
    if ( v5 )
    {
      if ( *(_DWORD *)v5 )
        sub_1022AF00(*(void **)v5);
      v6 = *(void **)(v5 + 8);
      if ( v6 )
        sub_1022AF00(v6);
      v7 = *(int *)(v5 + 36) < 0;
      *(_DWORD *)(v5 + 40) = 0;
      if ( !v7 )
      {
        if ( *(_DWORD *)(v5 + 28) )
        {
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v5 + 28));
          *(_DWORD *)(v5 + 28) = 0;
        }
        *(_DWORD *)(v5 + 32) = 0;
      }
      v7 = *(int *)(v5 + 36) < 0;
      v8 = *(_DWORD *)(v5 + 28);
      *(_DWORD *)(v5 + 44) = v8;
      if ( !v7 )
      {
        if ( v8 )
        {
          (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v8);
          *(_DWORD *)(v5 + 28) = 0;
        }
        *(_DWORD *)(v5 + 32) = 0;
      }
      sub_10034930(v5);
    }
  }
  sub_1026C690(this + 72);
  this[84] = 0;
  (*(void (__thiscall **)(_DWORD *))(*this + 948))(this);
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}

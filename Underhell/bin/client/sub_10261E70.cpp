void __thiscall sub_10261E70(_DWORD *this)
{
  int i; // esi
  int v3; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  for ( i = 0; i < this[68]; ++i )
  {
    v3 = *(_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(i + this[65]));
    v4 = (_DWORD *)sub_10229D00(32);
    if ( v4 )
      v5 = sub_1022B1A0(v4, (int)"SetSortColumn", "column", i);
    else
      v5 = 0;
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 1028))(v3, v5);
  }
}

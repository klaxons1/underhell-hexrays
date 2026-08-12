int __thiscall sub_102620A0(_DWORD *this, int a2, char a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // ecx
  int v8; // ecx

  if ( a3 )
  {
    v4 = (_DWORD *)sub_10229D00(32);
    if ( v4 )
      v5 = sub_1022B1A0(v4, (int)"SetSortColumn", "column", a2);
    else
      v5 = 0;
    v6 = *(_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(this[65] + a2));
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v6 + 1028))(v6, v5);
  }
  else
  {
    v8 = *(_DWORD *)(this[54] + 72 * *(unsigned __int8 *)(this[65] + a2));
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 1032))(v8, 0);
  }
}

int __thiscall sub_1000A630(_DWORD *this, char *String1)
{
  int *v3; // eax
  int v4; // eax
  int v5; // esi
  int result; // eax
  _DWORD *v7; // eax
  bool v8; // zf
  int v9; // [esp-4h] [ebp-Ch]

  v3 = (int *)sub_101AB1E0();
  v4 = sub_10007E50(v3, String1);
  v5 = v4;
  if ( v4 == -1 )
    return 0;
  v9 = v4;
  v7 = (_DWORD *)sub_101AB1E0();
  v8 = sub_100082F0(v7, v9) == -2;
  result = 999;
  if ( !v8 )
    return this[v5 + 756];
  return result;
}

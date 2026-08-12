int __thiscall sub_100CF610(_DWORD *this, char *String1)
{
  int *v3; // eax
  int v4; // eax
  int v5; // esi
  int result; // eax
  _DWORD *v7; // eax
  bool v8; // zf
  int v9; // [esp-4h] [ebp-Ch]

  v3 = (int *)sub_102D9B20();
  v4 = sub_100B9D10(v3, String1);
  v5 = v4;
  if ( v4 == -1 )
    return 0;
  v9 = v4;
  v7 = (_DWORD *)sub_102D9B20();
  v8 = sub_100BA1B0(v7, v9) == -2;
  result = 999;
  if ( !v8 )
    return this[v5 + 445];
  return result;
}

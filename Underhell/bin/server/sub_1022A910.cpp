char __thiscall sub_1022A910(_DWORD *this, int a2)
{
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  const char *v7; // eax
  _DWORD v8[8]; // [esp+4h] [ebp-20h] BYREF

  if ( !a2 )
    return 0;
  v4 = (_DWORD *)sub_100D7680(a2);
  v5 = v4;
  if ( v4 )
  {
    if ( sub_100697A0(v4, 62, 1) )
      return 1;
    v6 = (_DWORD *)v5[531];
    if ( v6 )
    {
      memset(v8, 0, sizeof(v8));
      sub_1002A530(v6, v8);
      if ( (v8[0] & 4) != 0 )
        return 1;
    }
    v7 = (const char *)this[201];
    if ( !v7 )
      v7 = String;
    sub_1022F660("%s : event suppressed\n", (char)v7);
  }
  return 0;
}

void __thiscall sub_1024C430(_DWORD *this, char *Str, float a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // [esp+4h] [ebp-4h]

  v4 = (_DWORD *)this[60];
  if ( !v4 )
  {
    v5 = (_DWORD *)sub_10229D00(32);
    if ( v5 )
      v4 = sub_10229D20(v5, (int)"DialogVariables");
    else
      v4 = 0;
    this[60] = v4;
  }
  sub_1022ACC0(v4, Str, a3);
  sub_1024C140(v6);
}

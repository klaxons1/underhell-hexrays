int __thiscall sub_1024C010(int (__thiscall ***this)(_DWORD), char *String2, int a3)
{
  int v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  int v6; // edi

  v3 = sub_10239950(this, String2, 0);
  if ( !v3 )
    return a3;
  v4 = (_DWORD *)sub_10229D00(32);
  v5 = v4 ? sub_10229D20(v4, (int)"GetState") : 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 44))(v3, v5) )
    return a3;
  v6 = sub_1022A800(v5, "state", a3);
  sub_1022AF00(v5);
  return v6;
}

int __cdecl sub_100FA030(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  unsigned int v4; // eax
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // eax

  if ( !a2 )
    return 0;
  if ( !(unsigned __int8)sub_102064A0(a2 + 34) )
    return 0;
  v4 = a2[103];
  if ( v4 == -1 )
    return 0;
  if ( off_1061BE18[4 * (a2[103] & 0xFFF) + 2] != v4 >> 12 )
    return 0;
  if ( !off_1061BE18[4 * (a2[103] & 0xFFF) + 1] )
    return 0;
  v5 = (_DWORD *)sub_10019B00(a2);
  if ( !v5 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 320))(v5) )
    return 0;
  v6 = sub_102064B0(a2 + 34);
  v7 = sub_1001F3C0(v5) - 1;
  if ( v6 != v7 )
    return 0;
  sub_100C9EE0(a4, v7);
  return a3;
}

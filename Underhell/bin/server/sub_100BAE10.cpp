int __cdecl sub_100BAE10(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi

  if ( a1 && (unsigned __int8)sub_10245FE0(a1) )
  {
    v3 = (_DWORD *)sub_10245550(a2);
    if ( (v3[3] & 0x1000) == 0 )
      sub_100BAC80(a1, a2);
    if ( a3 )
      *a3 = v3[5];
    return v3[4];
  }
  else
  {
    if ( a3 )
      *a3 = 0;
    return 0;
  }
}

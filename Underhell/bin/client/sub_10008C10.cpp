int __cdecl sub_10008C10(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // edi

  if ( a1 && (unsigned __int8)sub_101282A0(a1) )
  {
    v3 = (_DWORD *)sub_10127960(a2);
    if ( (v3[3] & 0x1000) == 0 )
      sub_10008B30(a1, a2);
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

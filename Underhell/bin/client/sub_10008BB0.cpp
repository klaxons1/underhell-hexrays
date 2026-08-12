void __cdecl sub_10008BB0(int a1)
{
  int i; // esi
  _DWORD *v2; // eax

  if ( a1 && (unsigned __int8)sub_101282A0(a1) )
  {
    for ( i = 0; i < sub_10126D70(a1); ++i )
    {
      sub_10008B30(a1, i);
      v2 = (_DWORD *)sub_10127960(i);
      sub_10008840(v2);
    }
    sub_10127E70(dword_103D6278);
  }
}

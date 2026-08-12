int __cdecl sub_100BAEE0(int a1, int a2)
{
  int v3; // edi
  _DWORD *v5; // esi
  int v6; // eax
  int v7; // esi
  signed int v8; // eax
  int v9; // [esp+8h] [ebp-4h]
  signed int v10; // [esp+14h] [ebp+8h]

  v3 = 0;
  if ( !a1 )
    return 0;
  if ( sub_10245910(a1) != dword_105FD4CC )
    sub_100BAD00(a1);
  v10 = 0;
  v9 = -1;
  if ( sub_10245270(a1) > 0 )
  {
    do
    {
      if ( (unsigned __int8)sub_10245FE0(a1) )
      {
        v5 = (_DWORD *)sub_10245550(v3);
        if ( (v5[3] & 0x1000) == 0 )
          sub_100BAC80(a1, v3);
        v6 = v5[5];
        v7 = v5[4];
      }
      else
      {
        v6 = 0;
        v7 = 0;
      }
      if ( v7 == a2 )
      {
        v8 = abs32(v6);
        if ( v8 > v10 )
        {
          v10 = v8;
          v9 = v3;
        }
      }
      ++v3;
    }
    while ( v3 < sub_10245270(a1) );
  }
  return v9;
}

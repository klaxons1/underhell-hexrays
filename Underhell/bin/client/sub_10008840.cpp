void __cdecl sub_10008840(_DWORD *a1)
{
  int v2; // eax
  _DWORD *v3; // esi
  char *v4; // edi
  int v5; // eax
  int v6; // [esp+4h] [ebp-4h]
  int v7; // [esp+10h] [ebp+8h]

  if ( a1 )
  {
    v2 = a1[6];
    a1[3] |= 0x2000u;
    if ( v2 )
    {
      v6 = 0;
      if ( v2 > 0 )
      {
        v7 = 0;
        do
        {
          v3 = (_DWORD *)((char *)&a1[v7] + a1[7]);
          if ( v3 && (v3[2] & 0x400) != 0 )
          {
            v4 = (char *)v3 + v3[19];
            v5 = sub_1009CBD0(v4);
            if ( v5 == -1 )
            {
              v3[1] = sub_1009CDA0(v4);
            }
            else
            {
              v3[1] = v5;
              v3[2] |= sub_1009CB80(v5);
            }
          }
          v7 += 20;
          ++v6;
        }
        while ( v6 < a1[6] );
      }
    }
  }
}

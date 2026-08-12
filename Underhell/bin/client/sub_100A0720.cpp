int __usercall sub_100A0720@<eax>(int a1@<ebx>, int a2)
{
  int v2; // ecx
  unsigned int i; // edi
  int v4; // eax
  float v6; // [esp+18h] [ebp-18h] BYREF
  float v7; // [esp+1Ch] [ebp-14h]
  float v8; // [esp+20h] [ebp-10h]
  float v9; // [esp+24h] [ebp-Ch] BYREF
  int v10; // [esp+28h] [ebp-8h]
  float v11; // [esp+2Ch] [ebp-4h]

  v2 = *(unsigned __int8 *)(a2 + 88);
  for ( i = 0; i < 6; ++i )
  {
    if ( dword_103E01B8[2 * i] == v2 )
    {
      v9 = -*(float *)(a2 + 24);
      *(float *)&v10 = -*(float *)(a2 + 28);
      v11 = -*(float *)(a2 + 32);
      sub_101EE190(&v9, &v6);
      return sub_100E92B0(
               (&off_103E01BC)[2 * i],
               *(_DWORD *)a2,
               *(_DWORD *)(a2 + 4),
               *(_DWORD *)(a2 + 8),
               LODWORD(v6),
               LODWORD(v7),
               LODWORD(v8),
               0);
    }
  }
  v4 = 0;
  v6 = *(float *)a2;
  v7 = *(float *)(a2 + 4);
  v8 = *(float *)(a2 + 8);
  while ( LOBYTE(dword_103E019C[v4]) != v2 )
  {
    if ( (unsigned int)++v4 >= 3 )
    {
      *(_WORD *)((char *)&v10 + 1) = 255;
      HIBYTE(v10) = -1;
      return sub_1009FED0(
               a1,
               i,
               a2,
               &v6,
               (float *)(a2 + 24),
               COERCE_INT(*(float *)(a2 + 56)),
               BYTE1(v10),
               BYTE2(v10),
               HIBYTE(v10));
    }
  }
  v10 = SLODWORD(dword_103E019C[v4]);
  return sub_1009FED0(
           a1,
           i,
           a2,
           &v6,
           (float *)(a2 + 24),
           COERCE_INT(*(float *)(a2 + 56)),
           BYTE1(v10),
           BYTE2(v10),
           HIBYTE(v10));
}

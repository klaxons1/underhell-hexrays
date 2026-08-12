int __usercall sub_100A06B0@<eax>(float a1@<ebx>, int a2@<edi>, int a3)
{
  int v3; // eax
  int v4; // esi
  int v6; // [esp+18h] [ebp-8h]

  v3 = 0;
  while ( 1 )
  {
    v4 = LOBYTE(dword_103E019C[v3]);
    if ( v4 == *(unsigned __int8 *)(a3 + 88) )
      break;
    if ( (unsigned int)++v3 >= 3 )
    {
      *(_WORD *)((char *)&v6 + 1) = 255;
      HIBYTE(v6) = -1;
      return sub_1009F1A0(
               a1,
               a2,
               v4,
               (float *)a3,
               (float *)(a3 + 24),
               *(float *)(a3 + 56),
               BYTE1(v6),
               BYTE2(v6),
               HIBYTE(v6),
               *(_DWORD *)(a3 + 48));
    }
  }
  v6 = dword_103E019C[v3];
  return sub_1009F1A0(
           a1,
           a2,
           v4,
           (float *)a3,
           (float *)(a3 + 24),
           *(float *)(a3 + 56),
           BYTE1(v6),
           BYTE2(v6),
           HIBYTE(v6),
           *(_DWORD *)(a3 + 48));
}

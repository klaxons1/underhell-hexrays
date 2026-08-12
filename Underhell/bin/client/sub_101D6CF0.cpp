int __stdcall sub_101D6CF0(int a1, _DWORD *a2)
{
  int v3; // edi
  unsigned __int8 *v4; // eax
  int v5; // edi
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edi
  int v10; // edx
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+14h] [ebp-4h]
  int i; // [esp+1Ch] [ebp+4h]
  int v15; // [esp+20h] [ebp+8h]

  v15 = 1;
  v12 = 1 - a1;
  v3 = -1 - a1;
  a2[1] = 0;
  *a2 = 0;
  v4 = (unsigned __int8 *)(a1 + 1);
  v13 = 2 - a1;
  for ( i = -1 - a1; ; v3 = i )
  {
    v5 = (int)&v4[v3];
    v6 = (*(v4 - 1) + 8 - ((*(v4 - 1) & 0xF0u) < 0x80) - (*(v4 - 1) >> 4)) >> 4;
    if ( (unsigned __int8)v6 > 0xFu )
      LOBYTE(v6) = 15;
    a2[v5 >= 8] |= (unsigned __int8)v6 << (4 * (v5 & 7));
    v7 = (*v4 + 8 - ((*v4 & 0xF0u) < 0x80) - (*v4 >> 4)) >> 4;
    if ( (unsigned __int8)v7 > 0xFu )
      LOBYTE(v7) = 15;
    a2[v15 >= 8] |= (unsigned __int8)v7 << (4 * (v15 & 7));
    v8 = (v4[1] + 8 - ((v4[1] & 0xF0u) < 0x80) - (v4[1] >> 4)) >> 4;
    if ( (unsigned __int8)v8 > 0xFu )
      LOBYTE(v8) = 15;
    v9 = (int)&v4[v13];
    a2[(int)&v4[v12] >= 8] |= (unsigned __int8)v8 << (4 * ((v12 + (_BYTE)v4) & 7));
    v10 = (v4[2] + 8 - ((v4[2] & 0xF0u) < 0x80) - (v4[2] >> 4)) >> 4;
    if ( (unsigned __int8)v10 > 0xFu )
      LOBYTE(v10) = 15;
    v15 += 4;
    v4 += 4;
    a2[v9 >= 8] |= (unsigned __int8)v10 << (4 * (v9 & 7));
    if ( (int)&v4[i] >= 16 )
      break;
  }
  return 0;
}

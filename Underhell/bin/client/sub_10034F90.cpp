unsigned int __stdcall sub_10034F90(int a1)
{
  unsigned int result; // eax
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  int *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  unsigned int v11; // edi
  int v12; // [esp+8h] [ebp-4h]
  int v13; // [esp+14h] [ebp+8h]

  if ( !a1 )
    return 0;
  if ( *(_BYTE *)(a1 + 17) )
    return *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 12);
  v4 = 0;
  if ( v3 )
    v4 = sub_10034F90(v3);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 > 0 )
  {
    v13 = 0;
    v12 = v5;
    do
    {
      v6 = (int *)(v13 + *(_DWORD *)a1);
      v7 = *v6;
      if ( *v6 == 10 || (*((_WORD *)v6 + 9) & 0x200) == 0 )
      {
        switch ( v7 )
        {
          case 1:
          case 3:
          case 4:
          case 5:
          case 13:
            v4 = (v4 + 3) & 0xFFFFFFFC;
            goto LABEL_14;
          case 2:
          case 6:
          case 8:
          case 9:
LABEL_14:
            v9 = *((unsigned __int16 *)v6 + 8);
            v6[3] = v4;
            v4 += dword_103D89F0[v7] * v9;
            break;
          case 7:
            v10 = *((unsigned __int16 *)v6 + 8);
            v11 = (v4 + 1) & 0xFFFFFFFE;
            v6[3] = v11;
            v4 = dword_103D89F0[v7] * v10 + v11;
            break;
          case 10:
            v8 = sub_10034F90(v6[8]);
            v6[3] = v4;
            v4 += v8;
            break;
          default:
            break;
        }
      }
      v13 += 52;
      --v12;
    }
    while ( v12 );
  }
  *(_DWORD *)(a1 + 20) = v4;
  result = v4;
  *(_BYTE *)(a1 + 17) = 1;
  return result;
}

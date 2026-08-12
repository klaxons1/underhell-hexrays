int __thiscall sub_101710C0(
        void *this,
        float *a2,
        float *a3,
        float a4,
        int a5,
        char a6,
        char a7,
        float a8,
        float a9,
        int a10,
        float *a11)
{
  int result; // eax
  int v13; // esi
  int v14; // edi
  float *v15; // eax
  int v16; // esi
  double v17; // st7
  double v18; // st6
  double v19; // st7
  int v20; // [esp+24h] [ebp+18h]

  if ( !a5 )
    return 0;
  v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a5);
  if ( !v13 )
  {
    Warning("No model %d!\n", a5);
    return 0;
  }
  v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 32))(dword_10413178, v13);
  v15 = (float *)sub_1016FF80((int)this, a2, v13);
  v16 = (int)v15;
  if ( !v15 )
    return 0;
  v15[497] = (float)(v14 - 1);
  v15[517] = 10.0;
  sub_10035090(v15, a6, 0);
  *(float *)(v16 + 2060) = a4;
  *(_BYTE *)(v16 + 84) = a7;
  v17 = a8 * 255.0;
  *(_DWORD *)(v16 + 2044) = (int)v17;
  LOWORD(v20) = -1;
  *(float *)(v16 + 2048) = *a11;
  *(float *)(v16 + 2052) = a11[1];
  BYTE2(v20) = -1;
  *(float *)(v16 + 2056) = a11[2];
  HIBYTE(v20) = (int)v17;
  if ( *(_DWORD *)(v16 + 88) != v20 )
    *(_DWORD *)(v16 + 88) = v20;
  *(_DWORD *)(v16 + 1980) |= a10;
  *(float *)(v16 + 2108) = *a3;
  *(float *)(v16 + 2112) = a3[1];
  *(float *)(v16 + 2116) = a3[2];
  sub_10034A30((float *)v16, a2);
  if ( 0.0 == a9 )
  {
    v19 = 0.0;
    v18 = (double)v14 * 0.1 + *((float *)off_103DC81C + 3) + 1.0;
  }
  else
  {
    v18 = a9 + *((float *)off_103DC81C + 3);
    v19 = 0.0;
  }
  *(float *)(v16 + 1984) = v18;
  result = v16;
  *(float *)(v16 + 2072) = v19;
  return result;
}

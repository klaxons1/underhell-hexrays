int __cdecl sub_1001FB00(int *a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v6; // ebx
  double v7; // st7
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  double v11; // st4
  double v12; // st6
  int v13[4]; // [esp+1Ch] [ebp-20h] BYREF
  float v14; // [esp+2Ch] [ebp-10h] BYREF
  float v15; // [esp+30h] [ebp-Ch]
  float v16; // [esp+34h] [ebp-8h]
  int v17; // [esp+38h] [ebp-4h]

  result = *a1;
  v6 = 0;
  v17 = 0;
  if ( *(int *)(result + 164) > 0 )
  {
    v7 = 0.0;
    do
    {
      v8 = v6 + *(_DWORD *)(result + 168);
      v9 = *(_DWORD *)(v8 + result);
      v10 = result + v8;
      if ( (a5 & *(_DWORD *)(a1[11] + 4 * v9)) != 0 )
      {
        v11 = *(float *)(a4 + 4 * *(_DWORD *)(v10 + 20));
        if ( v11 >= v7 )
        {
          if ( v11 > 1.0 )
            v11 = 1.0;
        }
        else
        {
          v11 = v7;
        }
        v12 = v11 * *(float *)(v10 + 12) + (1.0 - v11) * *(float *)(v10 + 8);
        switch ( *(_DWORD *)(v10 + 4) & 0x3FFFF )
        {
          case 1:
            *(float *)(a2 + 12 * v9) = v12 + *(float *)(a2 + 12 * v9);
            break;
          case 2:
            *(float *)(a2 + 12 * v9 + 4) = v12 + *(float *)(a2 + 12 * v9 + 4);
            break;
          case 4:
            *(float *)(a2 + 12 * v9 + 8) = v12 + *(float *)(a2 + 12 * v9 + 8);
            break;
          case 8:
            v14 = v12 * 0.0174532925199433;
            v15 = v7;
            v16 = v7;
            sub_101EEF50(&v14, v13);
            sub_1001B580(1.0, (int)v13, 16 * v9 + a3, (float *)(16 * v9 + a3));
            goto LABEL_10;
          case 0x10:
            v14 = v7;
            v15 = 0.0174532925199433 * v12;
            v16 = v7;
            sub_101EEF50(&v14, v13);
            sub_1001B580(1.0, (int)v13, a3 + 16 * v9, (float *)(a3 + 16 * v9));
            goto LABEL_10;
          case 0x20:
            v14 = v7;
            v15 = v14;
            v16 = 0.0174532925199433 * v12;
            sub_101EEF50(&v14, v13);
            sub_1001B580(1.0, (int)v13, a3 + 16 * v9, (float *)(a3 + 16 * v9));
LABEL_10:
            v7 = 0.0;
            break;
          default:
            break;
        }
      }
      result = *a1;
      v6 += 56;
      ++v17;
    }
    while ( v17 < *(_DWORD *)(result + 164) );
  }
  return result;
}

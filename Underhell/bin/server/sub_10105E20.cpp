int __thiscall sub_10105E20(int *this, int a2, int a3, int a4)
{
  int *v4; // esi
  int result; // eax
  bool v6; // zf
  int v7; // edi
  int v8; // edx
  int v9; // ebx
  _DWORD *v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int *v16; // ebx
  int v17; // ecx
  int *v18; // [esp-30h] [ebp-58h]
  _DWORD v19[4]; // [esp+4h] [ebp-24h] BYREF
  int *v20; // [esp+14h] [ebp-14h]
  int v21; // [esp+18h] [ebp-10h]
  int v22; // [esp+1Ch] [ebp-Ch]
  int v23; // [esp+20h] [ebp-8h]
  int *v24; // [esp+24h] [ebp-4h]

  v4 = this;
  result = this[1022];
  v6 = *(_DWORD *)(*(_DWORD *)result + 284) == 0;
  v20 = this;
  if ( !v6 )
  {
    v7 = a2;
    if ( *(_DWORD *)(a2 + 164) )
    {
      v24 = sub_100FE100(&dword_1069A680);
      if ( !v24 )
      {
        v24 = (int *)sub_10184390(6144);
        if ( ((unsigned __int8)v24 & 7) != 0 )
          __debugbreak();
      }
      v8 = v4[1031];
      memset(v19, 0, sizeof(v19));
      v9 = 132 * sub_10103690(v4 + 1028, v8, *(_DWORD *)(a2 + 164), 0);
      memset((void *)(v9 + v4[1028]), 0, 132 * *(_DWORD *)(a2 + 164));
      v23 = 0;
      if ( *(int *)(a2 + 164) > 0 )
      {
        v21 = 0;
        v22 = v9;
        while ( 1 )
        {
          v10 = (_DWORD *)v4[1022];
          v11 = *v10 + *(_DWORD *)(*v10 + 288) + 16 * *(_DWORD *)(v21 + *(_DWORD *)(v7 + 168) + v7);
          v12 = *(_DWORD *)(*(_DWORD *)(v11 + 12) + v11 + 56);
          if ( (*(_DWORD *)(v10[11] + 4 * v12) & v4[1047]) != 0 )
          {
            sub_10102F30(v4[1022], (int)(v4 + 1033), a3, a4, v12, (int)v24, (int)v19);
            v13 = v22 + v4[1028];
            v14 = v23;
            *(_DWORD *)(v13 + 8) = v23;
            *(_DWORD *)(v13 + 16) = v14;
            v15 = 3 * v12;
            v16 = v24;
            v18 = &v24[4 * v15];
            *(_DWORD *)(v13 + 4) = 2;
            sub_10424D60(v18, v13 + 44, v13 + 32);
            v17 = *(_DWORD *)(v11 + 12);
            if ( *(float *)(v17 + v11 + 8) * *(float *)(v17 + v11 + 8)
               + *(float *)(v17 + v11 + 4) * *(float *)(v17 + v11 + 4)
               + *(float *)(v17 + v11 + 12) * *(float *)(v17 + v11 + 12) <= 0.0 )
            {
              *(float *)(v13 + 108) = 0.0;
              *(float *)(v13 + 112) = 0.0;
              *(float *)(v13 + 116) = 0.0;
            }
            else
            {
              sub_10421C00(v17 + v11 + 4, &v16[12 * *(_DWORD *)(v11 + v17)], v13 + 108);
            }
            v4 = v20;
          }
          v22 += 132;
          v21 += 32;
          if ( ++v23 >= *(_DWORD *)(a2 + 164) )
            break;
          v7 = a2;
        }
      }
      return sub_100FE090(&dword_1069A680, v24);
    }
  }
  return result;
}

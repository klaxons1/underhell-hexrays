void __cdecl sub_101BD6E0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, float *a7)
{
  int v8; // ebp
  _DWORD *v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // ebp
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  double v21; // st7
  int v22; // eax
  bool v23; // cc
  int v24; // [esp+8h] [ebp-14h]
  int v25; // [esp+Ch] [ebp-10h]
  int v26; // [esp+10h] [ebp-Ch]
  int v27; // [esp+14h] [ebp-8h]
  int v28; // [esp+38h] [ebp+1Ch]

  a7[3] = 0.0;
  v8 = a5;
  a7[2] = 0.0;
  a7[1] = 0.0;
  v9 = a1;
  *a7 = 0.0;
  v25 = 0;
  if ( (int)a1[4] > 0 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(a2 + 80) & 0x20) != 0 )
      {
        v10 = *(_DWORD *)(a2 + 16) - 1;
        if ( v8 <= v10 )
        {
          v9 = a1;
          v10 = a5 < 0 ? 0 : a5;
        }
      }
      else
      {
        v10 = v8 & (*(_DWORD *)(a2 + 16) - 1);
      }
      v11 = *(_DWORD *)(a2 + 8) * v10 * *(_DWORD *)(a2 + 12);
      v12 = a4;
      v27 = v11;
      v24 = 0;
      v28 = a4;
      if ( (int)v9[3] > 0 )
        break;
LABEL_23:
      v8 = a5 + 1;
      v23 = ++v25 < v9[4];
      ++a5;
      if ( !v23 )
        return;
    }
    v13 = v9[2];
    while ( 1 )
    {
      v14 = *(_DWORD *)(a2 + 12);
      if ( (*(_BYTE *)(a2 + 80) & 0x10) != 0 )
      {
        v15 = v14 - 1;
        if ( v12 <= v15 )
          v15 = v28 < 0 ? 0 : v28;
      }
      else
      {
        v15 = v12 & (v14 - 1);
      }
      v16 = 0;
      v17 = a3;
      if ( v13 > 0 )
        break;
LABEL_21:
      ++v28;
      if ( ++v24 >= a1[3] )
      {
        v9 = a1;
        goto LABEL_23;
      }
      v12 = v28;
    }
    v26 = v27 + v15 * *(_DWORD *)(a2 + 8);
    while ( 1 )
    {
      v18 = *(_DWORD *)(a2 + 8);
      if ( (*(_BYTE *)(a2 + 80) & 8) == 0 )
        break;
      v19 = v18 - 1;
      if ( v17 <= v19 )
      {
        v20 = (v17 < 0) - 1;
LABEL_19:
        v19 = v17 & v20;
      }
      v21 = *(float *)*a1;
      v22 = 4 * (v26 + v19);
      ++v16;
      ++v17;
      *a7 = *(float *)(a6 + 4 * *(unsigned __int8 *)(*(_DWORD *)a2 + v22)) * v21 + *a7;
      a7[1] = *(float *)(a6 + 4 * *(unsigned __int8 *)(*(_DWORD *)a2 + v22 + 1)) * v21 + a7[1];
      a7[2] = *(float *)(a6 + 4 * *(unsigned __int8 *)(*(_DWORD *)a2 + v22 + 2)) * v21 + a7[2];
      a7[3] = v21 * (double)*(unsigned __int8 *)(*(_DWORD *)a2 + v22 + 3) + a7[3];
      v13 = a1[2];
      if ( v16 >= v13 )
        goto LABEL_21;
    }
    v20 = v18 - 1;
    goto LABEL_19;
  }
}

void __cdecl sub_101BD8B0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, float *a7)
{
  _DWORD *v8; // ebp
  int v9; // edi
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // ebx
  int v19; // ebp
  int v20; // eax
  int v21; // eax
  int v22; // eax
  double v23; // st7
  int v24; // eax
  bool v25; // cc
  int v26; // [esp+8h] [ebp-14h]
  int v27; // [esp+Ch] [ebp-10h]
  int v28; // [esp+10h] [ebp-Ch]
  int v29; // [esp+30h] [ebp+14h]
  int v30; // [esp+38h] [ebp+1Ch]

  a7[3] = 0.0;
  v8 = a1;
  a7[2] = 0.0;
  a7[1] = 0.0;
  v9 = a5;
  *a7 = 0.0;
  v26 = 0;
  v27 = a5;
  if ( (int)a1[4] > 0 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(a2 + 80) & 0x20) != 0 )
      {
        v10 = *(_DWORD *)(a2 + 16) - 1;
        if ( v9 <= v10 )
          v10 = v9 < 0 ? 0 : v9;
      }
      else
      {
        v10 = v9 & (*(_DWORD *)(a2 + 16) - 1);
      }
      v11 = v10 * *(_DWORD *)(a2 + 8) * *(_DWORD *)(a2 + 12);
      v12 = a4;
      v28 = v11;
      v29 = 0;
      v30 = a4;
      if ( (int)v8[3] > 0 )
        break;
LABEL_23:
      ++v9;
      v25 = ++v26 < v8[4];
      v27 = v9;
      if ( !v25 )
        return;
    }
    v13 = v8[2];
    while ( 1 )
    {
      v14 = *(_DWORD *)(a2 + 12);
      if ( (*(_BYTE *)(a2 + 80) & 0x10) != 0 )
      {
        v15 = v14 - 1;
        if ( v12 > v15 )
          goto LABEL_14;
        v16 = (v12 < 0) - 1;
      }
      else
      {
        v16 = v14 - 1;
      }
      v15 = v12 & v16;
LABEL_14:
      v17 = a3;
      v18 = v15 * *(_DWORD *)(a2 + 8);
      v19 = 0;
      if ( v13 > 0 )
      {
        while ( 1 )
        {
          v20 = *(_DWORD *)(a2 + 8);
          if ( (*(_BYTE *)(a2 + 80) & 8) == 0 )
            break;
          v21 = v20 - 1;
          if ( v17 <= v21 )
          {
            v22 = (v17 < 0) - 1;
LABEL_19:
            v21 = v17 & v22;
          }
          v23 = *(float *)*a1;
          v24 = 4 * (v28 + v18 + v21);
          ++v19;
          ++v17;
          *a7 = (double)*(unsigned __int8 *)(*(_DWORD *)a2 + v24) * v23 + *a7;
          a7[1] = (double)*(unsigned __int8 *)(*(_DWORD *)a2 + v24 + 1) * v23 + a7[1];
          a7[2] = (double)*(unsigned __int8 *)(*(_DWORD *)a2 + v24 + 2) * v23 + a7[2];
          a7[3] = v23 * (double)*(unsigned __int8 *)(*(_DWORD *)a2 + v24 + 3) + a7[3];
          v13 = a1[2];
          if ( v19 >= v13 )
            goto LABEL_21;
        }
        v22 = v20 - 1;
        goto LABEL_19;
      }
LABEL_21:
      ++v30;
      if ( ++v29 >= a1[3] )
      {
        v9 = v27;
        v8 = a1;
        goto LABEL_23;
      }
      v12 = v30;
    }
  }
}

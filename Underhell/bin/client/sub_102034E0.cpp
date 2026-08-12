int __thiscall sub_102034E0(int this, int a2, int a3, int a4)
{
  double v7; // st7
  int v8; // ecx
  double v9; // st7
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // ebx
  int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  float v21; // [esp+0h] [ebp-20h]
  float v22[3]; // [esp+14h] [ebp-Ch] BYREF
  float v23; // [esp+2Ch] [ebp+Ch]

  if ( *(int *)a4 <= 0 )
    return 0;
  v7 = *(float *)(this + 52) + *(float *)(a4 + 8);
  v23 = v7;
  if ( v7 > *(float *)(a2 + 36) || !*(_DWORD *)(a4 + 4) )
    return 0;
  v8 = *(_DWORD *)(this + 60);
  if ( v8 >= 0 && !*(_BYTE *)(a4 + 12) )
  {
    if ( v7 > *(float *)(a2 + 36) || *(float *)(a2 + 36) - *(float *)(a2 + 48) > v7 )
    {
      sub_101F8840((float *)a2, v8, v22);
    }
    else
    {
      v21 = v7;
      sub_101F8ED0(a2, v8, v21, v22);
    }
    v9 = (double)*(int *)a4;
    *(_DWORD *)(a4 + 4) = (int)((double)*(int *)(a4 + 4) * v22[*(_DWORD *)(this + 64)]);
    v10 = (int)(v9 * v22[*(_DWORD *)(this + 64)]);
    v7 = v23;
    *(_DWORD *)a4 = v10;
    *(_BYTE *)(a4 + 12) = 1;
  }
  v11 = *(_DWORD *)a4 <= 0 ? 0 : *(_DWORD *)a4;
  *(_DWORD *)a4 = v11;
  v12 = *(_DWORD *)(this + 56);
  v13 = *(_DWORD *)(a2 + 72) - *(_DWORD *)(a2 + 40);
  if ( v12 >= v11 )
    v12 = v11;
  if ( v13 >= v12 )
    v13 = v12;
  v14 = dword_103F27C0 * *(_DWORD *)(a4 + 4);
  if ( v13 < v14 )
    v14 = v13;
  *(_DWORD *)a4 = v11 - v12;
  if ( !v14 )
    return 0;
  v15 = *(_DWORD *)(a2 + 40);
  v16 = v15 + v14;
  *(_DWORD *)(a2 + 32) = (v15 + v14 + 3) / 4;
  *(_DWORD *)(a2 + 40) = v15 + v14;
  if ( v14 >= 4 )
  {
    v17 = v15 + 1;
    do
    {
      v18 = (v15 & 3) + *(_DWORD *)(a2 + 6356) * (v15 / 4);
      v15 += 4;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * v18) = v7;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((v17 & 3) + *(_DWORD *)(a2 + 6356) * (v17 / 4))) = v7;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * ((((_BYTE)v17 + 1) & 3) + *(_DWORD *)(a2 + 6356) * ((v17 + 1) / 4))) = v7;
      v19 = (((_BYTE)v17 - 2) & 3) + *(_DWORD *)(a2 + 6356) * ((v17 + 2) / 4);
      v17 += 4;
      *(float *)(*(_DWORD *)(a2 + 6100) + 4 * v19) = v7;
    }
    while ( v15 < v16 - 3 );
  }
  for ( ; v15 < v16; *(float *)(*(_DWORD *)(a2 + 6100) + 4 * v20) = v7 )
  {
    v20 = (v15 & 3) + *(_DWORD *)(a2 + 6356) * (v15 / 4);
    ++v15;
  }
  return 256;
}

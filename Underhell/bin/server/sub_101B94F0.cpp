void __cdecl sub_101B94F0(int *a1, int a2, int a3, int a4, int a5, int a6, __int16 a7, float a8, float a9)
{
  double v9; // st7
  int v10; // edi
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // esi
  float v17; // [esp+28h] [ebp+28h]

  v9 = a9 + 0.0001;
  v10 = a1[3];
  v17 = v9;
  v11 = v10 - 1;
  if ( v10 - 1 < 0 )
  {
LABEL_6:
    v13 = a1[1];
    if ( v10 + 1 > v13 )
      sub_101B6450(a1, v10 - v13 + 1);
    ++a1[3];
    v14 = *a1;
    v15 = a1[3] - v10 - 1;
    a1[4] = *a1;
    if ( v15 > 0 )
      memcpy((void *)(v14 + 36 * v10 + 36), (const void *)(v14 + 36 * v10), 36 * v15);
    v16 = *a1 + 36 * v10;
    *(_DWORD *)(v16 + 4) = a3;
    *(_DWORD *)v16 = a2;
    *(_DWORD *)(v16 + 8) = a4;
    (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a5 + 188))(a5, v16 + 24, 0);
    *(float *)(v16 + 12) = a8;
    *(float *)(v16 + 16) = v17;
    *(_WORD *)(v16 + 20) = a6;
    *(_WORD *)(v16 + 22) = a7;
  }
  else
  {
    v12 = *a1 + 36 * v11;
    while ( a6 != *(unsigned __int16 *)(v12 + 20) && v10 <= 4 )
    {
      v12 -= 36;
      if ( --v11 < 0 )
        goto LABEL_6;
    }
    if ( *(float *)(v12 + 12) < (double)a8 )
    {
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a5 + 188))(a5, v12 + 24, 0);
      v9 = v17;
      *(_DWORD *)v12 = a2;
      *(_DWORD *)(v12 + 4) = a3;
      *(_DWORD *)(v12 + 8) = a4;
      *(_WORD *)(v12 + 22) = a7;
    }
    *(float *)(v12 + 12) = a8 + *(float *)(v12 + 12);
    if ( v9 <= *(float *)(v12 + 16) )
      v9 = *(float *)(v12 + 16);
    *(float *)(v12 + 16) = v9;
  }
}

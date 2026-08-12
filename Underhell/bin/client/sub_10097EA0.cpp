float *__thiscall sub_10097EA0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v3; // ebx
  int *v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  float *result; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  float *v19; // ecx
  int v20; // eax
  int v21; // ebx
  bool v22; // sf
  double v23; // st7
  int v24; // [esp+Ch] [ebp-8h]
  int v26; // [esp+10h] [ebp-4h]

  v2 = this;
  v3 = sub_10097990(a2);
  v4 = v2 + 12;
  if ( v2[13] < v3 && (int)v2[14] >= 0 )
  {
    v5 = *v4;
    v2[13] = v3;
    v6 = *g_pMemAlloc;
    if ( v5 )
    {
      v7 = (*(int (__stdcall **)(int, int))(v6 + 12))(v5, 32 * v3);
      v2 = this;
    }
    else
    {
      v7 = (*(int (__stdcall **)(int))(v6 + 4))(32 * v3);
    }
    *v4 = v7;
  }
  v4[4] = *v4;
  if ( v2[18] < v3 && (int)v2[19] >= 0 )
  {
    v8 = v2[17] == 0;
    v2[18] = v3;
    if ( v8 )
      v9 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 32 * v3);
    else
      v9 = (*(int (__thiscall **)(_DWORD, _DWORD, int))(*g_pMemAlloc + 12))(g_pMemAlloc, v2[17], 32 * v3);
    v2[17] = v9;
  }
  result = (float *)v2[17];
  v2[21] = result;
  v26 = v3 - 1;
  if ( v3 - 1 >= 0 )
  {
    do
    {
      v11 = v4[3];
      v12 = v4[1];
      if ( v11 + 1 > v12 )
        sub_100C03E0(v11 - v12 + 1);
      ++v4[3];
      v13 = *v4;
      v14 = v4[3] - v11 - 1;
      v4[4] = *v4;
      if ( v14 > 0 )
        memcpy((void *)(32 * v11 + v13 + 32), (const void *)(32 * v11 + v13), 32 * v14);
      v24 = 32 * v11;
      sub_1022E7D0((void *)(32 * v11 + *v4), 0x20u);
      v15 = v2[20];
      v16 = v2[18];
      if ( v15 + 1 > v16 )
        sub_100C03E0(v15 - v16 + 1);
      ++v2[20];
      v17 = v2[17];
      v18 = v2[20] - v15 - 1;
      v2[21] = v17;
      if ( v18 > 0 )
        memcpy((void *)(32 * v15 + v17 + 32), (const void *)(32 * v15 + v17), 32 * v18);
      v19 = (float *)(v24 + *v4);
      v20 = v2[17];
      v21 = 32 * v15;
      *(float *)(v20 + v21) = *v19;
      result = (float *)(v21 + v20);
      v22 = --v26 < 0;
      result[1] = v19[1];
      result[2] = v19[2];
      result[3] = v19[3];
      result[4] = v19[4];
      result[5] = v19[5];
      result[6] = v19[6];
      result[7] = v19[7];
      v23 = result[4];
      result[4] = result[6];
      result[6] = v23;
    }
    while ( !v22 );
  }
  return result;
}

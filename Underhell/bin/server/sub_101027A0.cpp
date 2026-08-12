int __cdecl sub_101027A0(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // ebx
  int *v5; // ecx
  int result; // eax
  int v7; // edi
  int v8; // edx
  _DWORD *v9; // edx
  float *v10; // esi
  int v11; // eax
  float *v12; // eax
  int v13; // eax
  int v14; // edx
  char *v15; // eax
  char *v16; // edx
  int v17; // esi
  float *v18; // ecx
  char *v19; // eax
  float v20; // edi
  float v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ebx
  char *v25; // eax
  _DWORD *v26; // edi
  float v27; // [esp+Ch] [ebp-14h]
  float v28; // [esp+14h] [ebp-Ch]
  int v29; // [esp+1Ch] [ebp-4h]
  int v30; // [esp+1Ch] [ebp-4h]

  v4 = a1;
  v5 = *(int **)a1;
  result = *(_DWORD *)(*(_DWORD *)a1 + 400);
  v7 = 0;
  if ( result && (v8 = *(int *)((char *)v5 + result + 16), result += (int)v5, v8) && (result += v8) != 0 )
  {
    v13 = v5[100];
    if ( v13 && (v14 = *(int *)((char *)v5 + v13 + 16), v15 = (char *)v5 + v13, v14) )
      v16 = &v15[v14];
    else
      v16 = 0;
    result = 0;
    v30 = 0;
    if ( v5[39] > 0 )
    {
      v17 = 0;
      v18 = (float *)(a2 + 8);
      do
      {
        if ( (a4 & *(_DWORD *)(*(_DWORD *)(v4 + 44) + 4 * result)) != 0 )
        {
          v19 = (char *)v18 + -8 - a2 + *((_DWORD *)v16 + 3);
          v27 = *(float *)&v16[(_DWORD)v19];
          v20 = *(float *)&v16[(_DWORD)v19 + 4];
          v21 = *(float *)&v16[(_DWORD)v19 + 8];
          *(v18 - 2) = v27;
          v28 = v21;
          v22 = *((_DWORD *)v16 + 4);
          *(v18 - 1) = v20;
          v23 = v17 * 4 + v22;
          *v18 = v28;
          v24 = *(_DWORD *)&v16[v23];
          v25 = &v16[v23];
          v26 = &a3[v17];
          *v26 = v24;
          v26[1] = *((_DWORD *)v25 + 1);
          v26[2] = *((_DWORD *)v25 + 2);
          v26[3] = *((_DWORD *)v25 + 3);
          result = v30;
        }
        v4 = a1;
        ++result;
        v18 += 3;
        v17 += 4;
        v30 = result;
      }
      while ( result < *(_DWORD *)(*(_DWORD *)a1 + 156) );
    }
  }
  else if ( v5[39] > 0 )
  {
    v9 = a3;
    v29 = 0;
    v10 = (float *)(a2 + 8);
    do
    {
      result = *(_DWORD *)(v4 + 44);
      if ( (a4 & *(_DWORD *)(result + 4 * v7)) != 0 )
      {
        v11 = v29 + v5[40];
        *(v10 - 2) = *(float *)((char *)v5 + v11 + 32);
        v12 = (float *)((char *)v5 + v11);
        *(v10 - 1) = v12[9];
        *v10 = v12[10];
        *v9 = *((_DWORD *)v12 + 11);
        v9[1] = *((_DWORD *)v12 + 12);
        v9[2] = *((_DWORD *)v12 + 13);
        result = *((_DWORD *)v12 + 14);
        v9[3] = result;
      }
      v4 = a1;
      v5 = *(int **)a1;
      v29 += 216;
      ++v7;
      v10 += 3;
      v9 += 4;
    }
    while ( v7 < *(_DWORD *)(*(_DWORD *)a1 + 156) );
  }
  return result;
}

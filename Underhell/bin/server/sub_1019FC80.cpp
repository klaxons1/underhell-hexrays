int __thiscall sub_1019FC80(float *this, float *a2)
{
  float *v2; // ebx
  float *v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int *v12; // esi
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // edi
  float **v20; // esi
  int v21; // eax
  int result; // eax
  int v23; // edi
  int v24; // eax
  int v25; // ecx
  float **v26; // edi
  int i; // [esp+20h] [ebp-14h]
  int v29; // [esp+24h] [ebp-10h]
  int v30; // [esp+28h] [ebp-Ch]
  int v31; // [esp+2Ch] [ebp-8h]
  int v32; // [esp+30h] [ebp-4h]

  v2 = this;
  if ( !*((_DWORD *)this + 1) )
    sub_1019F260((int)this, 0.0, 0.0, 0.0, 0.0);
  v3 = a2;
  v4 = (int)((a2[1] - v2[5]) / v2[2]);
  v30 = v4;
  if ( v4 >= 0 )
  {
    v5 = *((_DWORD *)v2 + 3);
    if ( v4 >= v5 )
      v30 = v5 - 1;
  }
  else
  {
    v30 = 0;
  }
  v6 = (int)((a2[2] - v2[6]) / v2[2]);
  if ( v6 >= 0 )
  {
    v7 = *((_DWORD *)v2 + 4);
    if ( v6 >= v7 )
      v6 = v7 - 1;
  }
  else
  {
    v6 = 0;
  }
  v8 = (int)((a2[4] - v2[5]) / v2[2]);
  v31 = v8;
  if ( v8 >= 0 )
  {
    v9 = *((_DWORD *)v2 + 3);
    if ( v8 >= v9 )
      v31 = v9 - 1;
  }
  else
  {
    v31 = 0;
  }
  v10 = (int)((a2[5] - v2[6]) / v2[2]);
  v32 = v10;
  if ( v10 >= 0 )
  {
    v11 = *((_DWORD *)v2 + 4);
    if ( v10 >= v11 )
    {
      v32 = v11 - 1;
      v10 = v11 - 1;
    }
  }
  else
  {
    v32 = 0;
    v10 = 0;
  }
  for ( i = v6; i <= v10; ++i )
  {
    v29 = v30;
    if ( v30 <= v31 )
    {
      do
      {
        v12 = (int *)(*((_DWORD *)v2 + 1) + 36 * (v29 + i * *((_DWORD *)v2 + 3)));
        v13 = sub_1018CED0(v12, 0);
        if ( v13 >= 0 && v13 < v12[1] && v13 <= v12[7] )
        {
          v14 = *v12 + 12 * v13;
          if ( *(_DWORD *)(v14 + 4) != v13 )
          {
            v15 = *(_DWORD *)(v14 + 4);
            if ( v15 == -1 )
            {
              v12[3] = *(_DWORD *)(v14 + 8);
            }
            else
            {
              *(_DWORD *)(*v12 + 12 * v15 + 8) = *(_DWORD *)(v14 + 8);
              v2 = this;
            }
            v16 = *(_DWORD *)(v14 + 8);
            if ( v16 == -1 )
            {
              v12[4] = *(_DWORD *)(v14 + 4);
            }
            else
            {
              *(_DWORD *)(*v12 + 12 * v16 + 4) = *(_DWORD *)(v14 + 4);
              v2 = this;
            }
            *(_DWORD *)(v14 + 8) = v13;
            *(_DWORD *)(v14 + 4) = v13;
            --v12[6];
          }
        }
        v17 = *v12;
        v18 = 12 * v13;
        *(_DWORD *)(v17 + v18 + 8) = -1;
        v19 = v12[4];
        *(_DWORD *)(v17 + v18 + 4) = v19;
        v12[4] = v13;
        if ( v19 == -1 )
          v12[3] = v13;
        else
          *(_DWORD *)(*v12 + 12 * v19 + 8) = v13;
        ++v12[6];
        v20 = (float **)(v18 + *v12);
        if ( v20 )
          *v20 = a2;
        ++v29;
      }
      while ( v29 <= v31 );
      v10 = v32;
      v3 = a2;
    }
  }
  v21 = (unsigned __int8)*(_DWORD *)v3;
  if ( LODWORD(v2[v21 + 9]) )
  {
    v3[198] = 0.0;
    v3[199] = v2[v21 + 9];
    *(_DWORD *)(LODWORD(v2[v21 + 9]) + 792) = v3;
    LODWORD(v2[v21 + 9]) = v3;
  }
  else
  {
    LODWORD(v2[v21 + 9]) = v3;
    v3[199] = 0.0;
    v3[198] = 0.0;
  }
  result = 256;
  if ( ((_WORD)v3[10] & 0x100) != 0 )
  {
    v23 = *((_DWORD *)v2 + 327);
    v24 = *((_DWORD *)v2 + 325);
    if ( v23 + 1 > v24 )
      sub_102ABFC0(v23 - v24 + 1);
    v25 = *((_DWORD *)v2 + 324);
    result = ++*((_DWORD *)v2 + 327) - v23 - 1;
    *((_DWORD *)v2 + 328) = v25;
    if ( result > 0 )
      result = (int)memcpy((void *)(v25 + 4 * v23 + 4), (const void *)(v25 + 4 * v23), 4 * result);
    v26 = (float **)(*((_DWORD *)v2 + 324) + 4 * v23);
    if ( v26 )
    {
      result = (int)a2;
      *v26 = a2;
    }
    ++*((_DWORD *)v2 + 7);
  }
  else
  {
    ++*((_DWORD *)v2 + 7);
  }
  return result;
}

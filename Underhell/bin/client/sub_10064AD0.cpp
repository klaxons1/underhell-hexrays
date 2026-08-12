int __cdecl sub_10064AD0(int a1, int a2)
{
  int v3; // esi
  int result; // eax
  unsigned int v5; // ebx
  float *v6; // ecx
  int v7; // esi
  float *v8; // ecx
  int v9; // esi
  float *v10; // ecx
  int v11; // esi
  float *v12; // ecx
  int v13; // ebx
  float *v14; // ecx
  unsigned int v15; // ebx
  float *v16; // ecx
  int v17; // esi
  float *v18; // ecx
  int v19; // esi
  float *v20; // ecx
  int v21; // esi
  float *v22; // ecx
  int v23; // ebx
  float *v24; // ecx
  int v25; // [esp+Ch] [ebp-4h]
  int v26; // [esp+1Ch] [ebp+Ch]
  int v27; // [esp+1Ch] [ebp+Ch]

  v3 = 0;
  result = (int)(30.0 / (*(float *)a2 + *(float *)a2));
  v25 = result;
  do
  {
    v26 = 0;
    if ( result >= 4 )
    {
      v5 = ((unsigned int)(result - 4) >> 2) + 1;
      v6 = (float *)(a1 + 4 * v3 + 120);
      v26 = 4 * v5;
      do
      {
        if ( *(_BYTE *)(a2 + 8) )
          *(float *)(a1 + 4 * v3) = *(float *)(a2 + 16);
        else
          *v6 = *(float *)(a2 + 16);
        v7 = v3 + 1;
        v8 = v6 + 1;
        if ( *(_BYTE *)(a2 + 8) )
          *(float *)(a1 + 4 * v7) = *(float *)(a2 + 16);
        else
          *v8 = *(float *)(a2 + 16);
        v9 = v7 + 1;
        v10 = v8 + 1;
        if ( *(_BYTE *)(a2 + 8) )
          *(float *)(a1 + 4 * v9) = *(float *)(a2 + 16);
        else
          *v10 = *(float *)(a2 + 16);
        v11 = v9 + 1;
        v12 = v10 + 1;
        if ( *(_BYTE *)(a2 + 8) )
          *(float *)(a1 + 4 * v11) = *(float *)(a2 + 16);
        else
          *v12 = *(float *)(a2 + 16);
        v3 = v11 + 1;
        v6 = v12 + 1;
        --v5;
      }
      while ( v5 );
      result = v25;
    }
    if ( v26 < result )
    {
      v13 = result - v26;
      v14 = (float *)(a1 + 4 * v3 + 120);
      do
      {
        if ( *(_BYTE *)(a2 + 8) )
          *(float *)(a1 + 4 * v3) = *(float *)(a2 + 16);
        else
          *v14 = *(float *)(a2 + 16);
        ++v3;
        ++v14;
        --v13;
      }
      while ( v13 );
    }
    v27 = 0;
    if ( result >= 4 )
    {
      v15 = ((unsigned int)(result - 4) >> 2) + 1;
      v16 = (float *)(a1 + 4 * v3 + 120);
      v27 = 4 * v15;
      do
      {
        if ( *(_BYTE *)(a2 + 8) )
          *(float *)(a1 + 4 * v3) = *(float *)(a2 + 12);
        else
          *v16 = *(float *)(a2 + 12);
        v17 = v3 + 1;
        v18 = v16 + 1;
        if ( *(_BYTE *)(a2 + 8) )
          *(float *)(a1 + 4 * v17) = *(float *)(a2 + 12);
        else
          *v18 = *(float *)(a2 + 12);
        v19 = v17 + 1;
        v20 = v18 + 1;
        if ( *(_BYTE *)(a2 + 8) )
          *(float *)(a1 + 4 * v19) = *(float *)(a2 + 12);
        else
          *v20 = *(float *)(a2 + 12);
        v21 = v19 + 1;
        v22 = v20 + 1;
        if ( *(_BYTE *)(a2 + 8) )
          *(float *)(a1 + 4 * v21) = *(float *)(a2 + 12);
        else
          *v22 = *(float *)(a2 + 12);
        v3 = v21 + 1;
        v16 = v22 + 1;
        --v15;
      }
      while ( v15 );
      result = v25;
    }
    if ( v27 < result )
    {
      v23 = result - v27;
      v24 = (float *)(a1 + 4 * v3 + 120);
      do
      {
        if ( *(_BYTE *)(a2 + 8) )
          *(float *)(a1 + 4 * v3) = *(float *)(a2 + 12);
        else
          *v24 = *(float *)(a2 + 12);
        ++v3;
        ++v24;
        --v23;
      }
      while ( v23 );
    }
  }
  while ( v3 < 30 );
  return result;
}

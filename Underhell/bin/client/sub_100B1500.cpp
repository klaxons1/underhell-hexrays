int __thiscall sub_100B1500(int *this, int a2, int a3, _DWORD *a4)
{
  int v4; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  _DWORD *v22; // ecx
  int v23; // edx
  _DWORD *v24; // eax
  int v25; // ebx
  int v26; // [esp+14h] [ebp+Ch]

  v4 = a3;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_100F47A0(a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 > 0 && a3 > 0 )
    memcpy((void *)(v9 + 24 * (a2 + a3)), (const void *)(v9 + 24 * a2), 24 * v11);
  v12 = 0;
  if ( a3 >= 4 )
  {
    v13 = 24 * a2;
    v14 = ((unsigned int)(a3 - 4) >> 2) + 1;
    v26 = 4 * v14;
    do
    {
      v15 = v13 + *this;
      if ( v15 )
      {
        *(_DWORD *)(v15 + 16) = -1;
        *(float *)(v15 + 4) = 0.0;
      }
      v16 = v13 + *this + 24;
      if ( v13 + *this != -24 )
      {
        *(_DWORD *)(v13 + *this + 40) = -1;
        *(float *)(v16 + 4) = 0.0;
      }
      v17 = v13 + *this + 48;
      if ( v13 + *this != -48 )
      {
        *(_DWORD *)(v13 + *this + 64) = -1;
        *(float *)(v17 + 4) = 0.0;
      }
      v18 = v13 + *this + 72;
      if ( v13 + *this != -72 )
      {
        *(_DWORD *)(v13 + *this + 88) = -1;
        *(float *)(v18 + 4) = 0.0;
      }
      v13 += 96;
      --v14;
    }
    while ( v14 );
    v12 = v26;
  }
  if ( v12 < v4 )
  {
    v19 = 24 * (v12 + a2);
    v20 = v4 - v12;
    do
    {
      v21 = v19 + *this;
      if ( v21 )
      {
        *(_DWORD *)(v21 + 16) = -1;
        *(float *)(v21 + 4) = 0.0;
      }
      v19 += 24;
      --v20;
    }
    while ( v20 );
  }
  v22 = a4;
  if ( a4 && v4 > 0 )
  {
    v23 = 24 * a2;
    do
    {
      v24 = (_DWORD *)(v23 + *this);
      *v24 = *v22;
      v24[1] = v22[1];
      v24[2] = v22[2];
      v24[3] = v22[3];
      v24[4] = v22[4];
      v25 = v22[5];
      v22 += 6;
      v23 += 24;
      --v4;
      v24[5] = v25;
    }
    while ( v4 );
    return a2;
  }
  return v10;
}

int __thiscall sub_10032750(int *this, int a2, int a3, char *a4)
{
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  char *v20; // edx
  int v21; // eax
  void *v22; // edi
  const void *v23; // esi
  bool v24; // zf

  if ( a3 )
  {
    v5 = this[3];
    v6 = this[1];
    if ( v5 + a3 > v6 )
      sub_100C03E0(a3 + v5 - v6);
    this[3] += a3;
    v7 = a2;
    v8 = *this;
    v9 = this[3] - a2 - a3;
    this[4] = *this;
    if ( v9 > 0 && a3 > 0 )
    {
      memcpy((void *)(v8 + 32 * (a3 + a2)), (const void *)(v8 + 32 * a2), 32 * v9);
      v7 = a2;
    }
    v10 = 0;
    if ( a3 >= 4 )
    {
      v11 = 32 * v7;
      v12 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v10 = 4 * v12;
      do
      {
        v13 = v11 + *this;
        if ( v13 )
        {
          *(_DWORD *)v13 = 0;
          *(float *)(v13 + 4) = 0.0;
          *(float *)(v13 + 8) = 0.0;
          *(float *)(v13 + 16) = 0.0;
          *(float *)(v13 + 20) = 0.0;
          *(float *)(v13 + 24) = 0.0;
          *(float *)(v13 + 28) = 0.0;
        }
        v14 = v11 + *this + 32;
        if ( v11 + *this != -32 )
        {
          *(_DWORD *)v14 = 0;
          *(float *)(v14 + 4) = 0.0;
          *(float *)(v14 + 8) = 0.0;
          *(float *)(v14 + 16) = 0.0;
          *(float *)(v14 + 20) = 0.0;
          *(float *)(v14 + 24) = 0.0;
          *(float *)(v14 + 28) = 0.0;
        }
        v15 = v11 + *this + 64;
        if ( v11 + *this != -64 )
        {
          *(_DWORD *)v15 = 0;
          *(float *)(v15 + 4) = 0.0;
          *(float *)(v15 + 8) = 0.0;
          *(float *)(v15 + 16) = 0.0;
          *(float *)(v15 + 20) = 0.0;
          *(float *)(v15 + 24) = 0.0;
          *(float *)(v15 + 28) = 0.0;
        }
        v16 = v11 + *this + 96;
        if ( v11 + *this != -96 )
        {
          *(_DWORD *)v16 = 0;
          *(float *)(v16 + 4) = 0.0;
          *(float *)(v16 + 8) = 0.0;
          *(float *)(v16 + 16) = 0.0;
          *(float *)(v16 + 20) = 0.0;
          *(float *)(v16 + 24) = 0.0;
          *(float *)(v16 + 28) = 0.0;
        }
        v11 += 128;
        --v12;
      }
      while ( v12 );
      v7 = a2;
    }
    if ( v10 < a3 )
    {
      v17 = 32 * (v10 + v7);
      v18 = a3 - v10;
      do
      {
        v19 = v17 + *this;
        if ( v19 )
        {
          *(float *)(v19 + 4) = 0.0;
          *(float *)(v19 + 8) = 0.0;
          *(float *)(v19 + 16) = 1.0;
          *(float *)(v19 + 20) = 0.0;
          *(_DWORD *)v19 = 0;
          *(float *)(v19 + 4) = 0.0;
          *(float *)(v19 + 8) = 0.0;
          *(float *)(v19 + 16) = 0.0;
          *(float *)(v19 + 20) = 0.0;
          *(float *)(v19 + 24) = 0.0;
          *(float *)(v19 + 28) = 0.0;
        }
        v17 += 32;
        --v18;
      }
      while ( v18 );
    }
    v20 = a4;
    if ( a4 && a3 > 0 )
    {
      v21 = 32 * a2;
      do
      {
        v22 = (void *)(v21 + *this);
        v23 = v20;
        v20 += 32;
        v21 += 32;
        v24 = a3-- == 1;
        qmemcpy(v22, v23, 0x20u);
      }
      while ( !v24 );
    }
  }
  return a2;
}

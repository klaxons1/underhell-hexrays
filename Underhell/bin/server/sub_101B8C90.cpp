int __thiscall sub_101B8C90(int *this, int a2, int a3, int a4)
{
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // edx
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // edi
  int v18; // eax
  int v19; // edx
  float *v20; // edx
  float *v21; // edx
  float *v22; // edx
  int v23; // edx
  int v24; // ecx
  int v25; // ebx
  int v26; // eax
  int v27; // [esp+14h] [ebp+Ch]

  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_100C86E0(this, a3 + v7 - v8);
  this[3] += a3;
  v9 = *this;
  v10 = a2;
  v11 = this[3] - a2 - a3;
  this[4] = *this;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 16 * (a2 + a3)), (const void *)(v9 + 16 * a2), 16 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 16 * a2;
      v13 = a3;
      do
      {
        v14 = (_DWORD *)(v12 + *this);
        if ( v14 )
          *v14 = &vehicle_gear_t::`vftable';
        v12 += 16;
        --v13;
      }
      while ( v13 );
    }
  }
  if ( a4 )
  {
    v15 = 0;
    if ( a3 >= 4 )
    {
      v16 = 16 * a2;
      v17 = ((unsigned int)(a3 - 4) >> 2) + 1;
      v18 = a4 + 24;
      v27 = 4 * v17;
      do
      {
        v19 = *this;
        *(float *)(v19 + v16 + 4) = *(float *)(v18 - 20);
        v18 += 64;
        *(float *)(v19 + v16 + 8) = *(float *)(v18 - 80);
        *(float *)(v19 + v16 + 12) = *(float *)(v18 - 76);
        v20 = (float *)(v16 + *this + 16);
        v20[1] = *(float *)(v18 - 68);
        v20[2] = *(float *)(v18 - 64);
        v20[3] = *(float *)(v18 - 60);
        v21 = (float *)(v16 + *this + 32);
        v21[1] = *(float *)(v18 - 52);
        v21[2] = *(float *)(v18 - 48);
        v21[3] = *(float *)(v18 - 44);
        v22 = (float *)(v16 + *this + 48);
        v22[1] = *(float *)(v18 - 36);
        v16 += 64;
        --v17;
        v22[2] = *(float *)(v18 - 32);
        v22[3] = *(float *)(v18 - 28);
      }
      while ( v17 );
      v10 = a2;
      v15 = v27;
    }
    if ( v15 < a3 )
    {
      v23 = 16 * (v15 + v10);
      v24 = a4 + 16 * v15 + 8;
      v25 = a3 - v15;
      do
      {
        v26 = *this;
        *(float *)(v26 + v23 + 4) = *(float *)(v24 - 4);
        v24 += 16;
        v23 += 16;
        --v25;
        *(float *)(v26 + v23 - 8) = *(float *)(v24 - 16);
        *(float *)(v26 + v23 - 4) = *(float *)(v24 - 12);
      }
      while ( v25 );
      return a2;
    }
  }
  return v10;
}

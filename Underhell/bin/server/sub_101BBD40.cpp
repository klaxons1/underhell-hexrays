int *__thiscall sub_101BBD40(int *this, int *a2)
{
  int v3; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  bool v11; // zf
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // edx
  int v17; // ebx
  int v18; // eax
  int v19; // ecx
  int v21; // [esp+Ch] [ebp-8h]
  unsigned int v22; // [esp+1Ch] [ebp+8h]

  v3 = a2[3];
  this[3] = 0;
  sub_101B8C90(this, 0, v3, 0);
  v5 = 0;
  if ( v3 >= 4 )
  {
    v22 = ((unsigned int)(v3 - 4) >> 2) + 1;
    v21 = 4 * v22;
    do
    {
      v6 = *a2;
      v7 = *this;
      *(float *)(v7 + v5 + 4) = *(float *)(*a2 + v5 + 4);
      *(float *)(v7 + v5 + 8) = *(float *)(v6 + v5 + 8);
      *(float *)(v7 + v5 + 12) = *(float *)(v6 + v5 + 12);
      v8 = v5 + *a2 + 16;
      v9 = *this;
      *(float *)(v5 + v9 + 20) = *(float *)(v5 + *a2 + 20);
      v10 = v5 + v9 + 16;
      *(float *)(v10 + 8) = *(float *)(v8 + 8);
      v5 += 64;
      v11 = v22-- == 1;
      *(float *)(v10 + 12) = *(float *)(v8 + 12);
      v12 = *a2;
      v13 = *this;
      *(float *)(v13 + v5 - 28) = *(float *)(*a2 + v5 - 28);
      *(float *)(v13 + v5 - 24) = *(float *)(v12 + v5 - 24);
      *(float *)(v13 + v5 - 20) = *(float *)(v12 + v5 - 20);
      v14 = *a2;
      v15 = *this;
      *(float *)(v15 + v5 - 12) = *(float *)(*a2 + v5 - 12);
      *(float *)(v15 + v5 - 8) = *(float *)(v14 + v5 - 8);
      *(float *)(v15 + v5 - 4) = *(float *)(v14 + v5 - 4);
    }
    while ( !v11 );
    v5 = v21;
  }
  if ( v5 < v3 )
  {
    v16 = 16 * v5;
    v17 = v3 - v5;
    do
    {
      v18 = *a2;
      v19 = *this;
      *(float *)(v19 + v16 + 4) = *(float *)(*a2 + v16 + 4);
      v16 += 16;
      --v17;
      *(float *)(v19 + v16 - 8) = *(float *)(v18 + v16 - 8);
      *(float *)(v19 + v16 - 4) = *(float *)(v18 + v16 - 4);
    }
    while ( v17 );
  }
  return this;
}

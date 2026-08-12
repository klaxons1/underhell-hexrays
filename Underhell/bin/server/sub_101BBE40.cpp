int *__thiscall sub_101BBE40(int *this, int *a2)
{
  int v3; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  bool v19; // zf
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v25; // [esp+Ch] [ebp-8h]
  unsigned int v26; // [esp+1Ch] [ebp+8h]
  int v27; // [esp+1Ch] [ebp+8h]

  v3 = a2[3];
  this[3] = 0;
  sub_101B8E00(this, 0, v3, 0);
  v5 = 0;
  if ( v3 >= 4 )
  {
    v6 = 0;
    v26 = ((unsigned int)(v3 - 4) >> 2) + 1;
    v25 = 4 * v26;
    do
    {
      v7 = *a2;
      v8 = *this;
      *(float *)(v8 + v6 + 4) = *(float *)(*a2 + v6 + 4);
      v9 = v6 + v7;
      v10 = v6 + v8;
      *(float *)(v10 + 8) = *(float *)(v9 + 8);
      *(_DWORD *)(v10 + 12) = *(_DWORD *)(v9 + 12);
      *(_DWORD *)(v10 + 16) = *(_DWORD *)(v9 + 16);
      v11 = v6 + *a2 + 20;
      v12 = *this;
      *(float *)(v6 + v12 + 24) = *(float *)(v6 + *a2 + 24);
      v13 = v6 + v12 + 20;
      *(float *)(v13 + 8) = *(float *)(v11 + 8);
      *(_DWORD *)(v13 + 12) = *(_DWORD *)(v11 + 12);
      *(_DWORD *)(v13 + 16) = *(_DWORD *)(v11 + 16);
      v14 = *this;
      v15 = v6 + 40 + *a2;
      *(float *)(v14 + v6 + 40 + 4) = *(float *)(v15 + 4);
      v16 = v6 + 40 + v14;
      *(float *)(v16 + 8) = *(float *)(v15 + 8);
      *(_DWORD *)(v16 + 12) = *(_DWORD *)(v15 + 12);
      *(_DWORD *)(v16 + 16) = *(_DWORD *)(v15 + 16);
      v17 = v6 + 60 + *a2;
      v18 = v6 + 60 + *this;
      *(float *)(v18 + 4) = *(float *)(v17 + 4);
      v6 += 80;
      v19 = v26-- == 1;
      *(float *)(v18 + 8) = *(float *)(v17 + 8);
      *(_DWORD *)(v18 + 12) = *(_DWORD *)(v17 + 12);
      *(_DWORD *)(v18 + 16) = *(_DWORD *)(v17 + 16);
    }
    while ( !v19 );
    v5 = v25;
  }
  if ( v5 < v3 )
  {
    v20 = 20 * v5;
    v27 = v3 - v5;
    do
    {
      v21 = *this;
      v22 = v20 + *a2;
      *(float *)(v21 + v20 + 4) = *(float *)(v22 + 4);
      v23 = v20 + v21;
      *(float *)(v23 + 8) = *(float *)(v22 + 8);
      *(_DWORD *)(v23 + 12) = *(_DWORD *)(v22 + 12);
      v20 += 20;
      v19 = v27-- == 1;
      *(_DWORD *)(v23 + 16) = *(_DWORD *)(v22 + 16);
    }
    while ( !v19 );
  }
  return this;
}

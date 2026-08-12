int __thiscall sub_1013A600(_DWORD *this)
{
  _DWORD *v1; // esi
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  _DWORD *v5; // esi
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // esi
  int v11; // edi
  _DWORD *v13; // [esp+8h] [ebp-8h]
  int v14; // [esp+Ch] [ebp-4h]

  v1 = this;
  v2 = this[9];
  v3 = 0;
  v4 = 0;
  v13 = v1;
  if ( v2 >= 4 )
  {
    v5 = (_DWORD *)(v1[6] + 8);
    v6 = ((unsigned int)(v2 - 4) >> 2) + 1;
    v14 = 4 * v6;
    do
    {
      v7 = *(v5 - 2);
      if ( v7 && (!v3 || *(float *)(v3 + 4) < (double)*(float *)(v7 + 4)) )
        v3 = *(v5 - 2);
      v8 = *(v5 - 1);
      if ( v8 && (!v3 || *(float *)(v3 + 4) < (double)*(float *)(v8 + 4)) )
        v3 = *(v5 - 1);
      if ( *v5 && (!v3 || *(float *)(v3 + 4) < (double)*(float *)(*v5 + 4)) )
        v3 = *v5;
      v9 = v5[1];
      if ( v9 && (!v3 || *(float *)(v3 + 4) < (double)*(float *)(v9 + 4)) )
        v3 = v5[1];
      v5 += 4;
      --v6;
    }
    while ( v6 );
    v4 = v14;
    v1 = v13;
  }
  if ( v4 < v2 )
  {
    v10 = v1[6] + 4 * v4;
    v11 = v2 - v4;
    do
    {
      if ( *(_DWORD *)v10 && (!v3 || *(float *)(v3 + 4) < (double)*(float *)(*(_DWORD *)v10 + 4)) )
        v3 = *(_DWORD *)v10;
      v10 += 4;
      --v11;
    }
    while ( v11 );
  }
  return v3;
}

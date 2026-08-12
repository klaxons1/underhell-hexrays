int __thiscall sub_1008A290(int *this)
{
  int v1; // esi
  int *v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int *v8; // esi
  int result; // eax
  int v10; // esi
  int v11; // ebx
  int v12; // edx
  int v13; // edi
  double v14; // st7
  int v15; // ecx
  _DWORD *v16; // edx
  _DWORD *v17; // ebx
  int v18; // eax
  int v19; // ecx
  int v20; // [esp+Ch] [ebp-18h]
  int v22; // [esp+1Ch] [ebp-8h]
  int v23; // [esp+20h] [ebp-4h]

  v1 = this[4];
  v2 = this + 6;
  v23 = v1;
  sub_10096290(v1);
  v3 = 0;
  v2[3] = 0;
  if ( v1 > 0 )
  {
    do
    {
      v4 = v2[3];
      v5 = v2[1];
      if ( v4 + 1 > v5 )
        sub_1010AFF0(v4 - v5 + 1);
      ++v2[3];
      v6 = *v2;
      v7 = v2[3] - v4 - 1;
      v2[4] = *v2;
      if ( v7 > 0 )
        memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
      v8 = (int *)(*v2 + 4 * v4);
      if ( v8 )
        *v8 = v3;
      ++v3;
    }
    while ( v3 < v23 );
    v1 = v23;
  }
  result = 0;
  if ( v1 - 1 > 0 )
  {
    v22 = v1 - 1;
    do
    {
      v10 = this[1];
      v11 = *v2;
      v12 = 4 * result;
      v13 = result;
      v14 = *(float *)(v10 + 20 * *(_DWORD *)(4 * result + v11) + 4);
      v20 = result + 1;
      v15 = result + 1;
      if ( result + 1 < v23 )
      {
        if ( v22 >= 4 )
        {
          v16 = (_DWORD *)(v12 + v11 + 12);
          do
          {
            if ( v14 < *(float *)(v10 + 20 * *(v16 - 2) + 4) )
            {
              v13 = v15;
              v14 = *(float *)(v10 + 20 * *(v16 - 2) + 4);
            }
            if ( v14 < *(float *)(v10 + 20 * *(v16 - 1) + 4) )
            {
              v13 = v15 + 1;
              v14 = *(float *)(v10 + 20 * *(v16 - 1) + 4);
            }
            if ( v14 < *(float *)(v10 + 20 * *v16 + 4) )
            {
              v13 = v15 + 2;
              v14 = *(float *)(v10 + 20 * *v16 + 4);
            }
            if ( v14 < *(float *)(v10 + 20 * v16[1] + 4) )
            {
              v13 = v15 + 3;
              v14 = *(float *)(v10 + 20 * v16[1] + 4);
            }
            v15 += 4;
            v16 += 4;
          }
          while ( v15 < v23 - 3 );
          v12 = 4 * result;
        }
        if ( v15 < v23 )
        {
          v17 = (_DWORD *)(v11 + 4 * v15);
          do
          {
            if ( v14 < *(float *)(v10 + 20 * *v17 + 4) )
            {
              v13 = v15;
              v14 = *(float *)(v10 + 20 * *v17 + 4);
            }
            ++v15;
            ++v17;
          }
          while ( v15 < v23 );
          v12 = 4 * result;
        }
      }
      v18 = this[6];
      v19 = *(_DWORD *)(v18 + v12);
      --v22;
      v2 = this + 6;
      *(_DWORD *)(v18 + v12) = *(_DWORD *)(v18 + 4 * v13);
      *(_DWORD *)(v18 + 4 * v13) = v19;
      result = v20;
    }
    while ( v20 < v23 - 1 );
  }
  return result;
}

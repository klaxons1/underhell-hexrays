int __thiscall sub_100C6F00(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  int v3; // edx
  int v4; // edi
  int result; // eax
  _DWORD *v6; // eax
  int *v7; // esi
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  float *v12; // ecx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int *v16; // edi
  int v17; // ebx
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // edi
  int *v21; // ebx
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // [esp+Ch] [ebp-14h]
  int v25; // [esp+10h] [ebp-10h]
  int v26; // [esp+10h] [ebp-10h]
  int v28; // [esp+18h] [ebp-8h]
  int v29; // [esp+1Ch] [ebp-4h]

  v2 = this;
  v3 = 0;
  v4 = this[283];
  result = -1;
  v28 = 0;
  v29 = -1;
  v25 = 0;
  if ( v4 <= 0 )
    goto LABEL_13;
  v6 = (_DWORD *)this[280];
  v7 = this + 280;
  do
  {
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      if ( v6[14] <= a2 && v28 <= v6[15] + 1 )
        v28 = v6[15] + 1;
    }
    else if ( (*v6 & 0x20) == 0 )
    {
      if ( v29 == -1 )
        v29 = v3;
      else
        ++v25;
    }
    ++v3;
    v6 += 19;
  }
  while ( v3 < v4 );
  result = -1;
  if ( v29 == -1 )
  {
LABEL_13:
    if ( v4 >= 15 )
      return result;
    v8 = this[283];
    v9 = this[281];
    v7 = this + 280;
    if ( v8 + 1 > v9 )
      sub_100C4C70(this + 280, v8 - v9 + 1);
    ++v2[283];
    v10 = *v7;
    v11 = v2[283] - v8 - 1;
    v2[284] = v2[280];
    if ( v11 > 0 )
      memcpy((void *)(76 * v8 + v10 + 76), (const void *)(76 * v8 + v10), 76 * v11);
    v12 = (float *)(76 * v8 + *v7);
    if ( v12 )
      sub_100C5C50(v12, 0);
    v29 = v8;
    sub_100C5C50((float *)(76 * v8 + *v7), (int)this);
    v2 = this;
  }
  v13 = 0;
  if ( !v25 && (int)v2[283] < 15 )
  {
    v14 = sub_100C69E0(v7, v7[3]);
    sub_100C5C50((float *)(*v7 + 76 * v14), (int)v2);
  }
  v26 = 0;
  if ( (int)v2[283] > 0 )
  {
    v24 = 0;
    do
    {
      v15 = *(_DWORD *)(v13 + *v7 + 60);
      v16 = (int *)(v13 + *v7 + 60);
      if ( v15 >= v28 && v15 < 15 )
      {
        v17 = v15 + 1;
        v18 = v16[3];
        if ( v18 )
        {
          if ( *(_BYTE *)(v18 + 84) )
          {
            *(_BYTE *)(v18 + 88) |= 1u;
          }
          else
          {
            v19 = *(_DWORD **)(v18 + 24);
            if ( v19 )
            {
              *v19 |= 0x101u;
              *(_WORD *)(sub_10153460(v19) + 2) = 0;
            }
          }
        }
        *v16 = v17;
        v2 = this;
      }
      v13 = v24 + 76;
      ++v26;
      v24 += 76;
    }
    while ( v26 < v2[283] );
  }
  v20 = 76 * v29;
  *(_DWORD *)(76 * v29 + *v7) = 1;
  v21 = (int *)(76 * v29 + *v7 + 60);
  if ( *v21 != v28 )
  {
    v22 = *(_DWORD *)(v20 + *v7 + 72);
    if ( v22 )
    {
      if ( *(_BYTE *)(v22 + 84) )
      {
        *(_BYTE *)(v22 + 88) |= 1u;
      }
      else
      {
        v23 = *(_DWORD **)(v22 + 24);
        if ( v23 )
        {
          *v23 |= 0x101u;
          *(_WORD *)(sub_10153460(v23) + 2) = 0;
        }
      }
    }
    *v21 = v28;
  }
  *(_DWORD *)(v20 + *v7 + 56) = a2;
  *(float *)(v20 + *v7 + 68) = *(float *)(dword_106B31C8 + 12);
  return v29;
}

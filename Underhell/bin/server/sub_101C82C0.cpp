int __thiscall sub_101C82C0(int *this, int a2, int a3, int *a4)
{
  int *v5; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // eax
  int v16; // eax
  int v17; // edi
  int *v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v23; // [esp+Ch] [ebp-4h]
  int *v24; // [esp+1Ch] [ebp+Ch]
  int v25; // [esp+20h] [ebp+10h]

  v5 = this;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_101C4BF0(v5, a3 + v7 - v8);
  v5[3] += a3;
  v9 = *v5;
  v10 = a2;
  v11 = v5[3] - a2 - a3;
  v5[4] = *v5;
  if ( v11 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v9 + 20 * (a2 + a3)), (const void *)(v9 + 20 * a2), 20 * v11);
LABEL_8:
    if ( a3 > 0 )
    {
      v12 = 20 * a2;
      v13 = a3;
      do
      {
        v14 = (_DWORD *)(v12 + *v5);
        if ( v14 )
        {
          *v14 = 0;
          v14[1] = 0;
          v14[2] = 0;
          v14[3] = 0;
          v14[4] = 0;
        }
        v12 += 20;
        --v13;
      }
      while ( v13 );
    }
  }
  if ( a4 && a3 > 0 )
  {
    v16 = 20 * a2;
    v25 = 20 * a2;
    v24 = a4;
    v23 = a3;
    while ( 1 )
    {
      v17 = v24[3];
      v18 = (int *)(v16 + *v5);
      v18[3] = 0;
      sub_101C57D0(v18, 0, v17, 0);
      v19 = 0;
      if ( v17 > 0 )
      {
        do
        {
          v20 = *v24;
          v21 = *v18;
          *(_DWORD *)(v21 + 8 * v19) = *(_DWORD *)(*v24 + 8 * v19);
          *(_DWORD *)(v21 + 8 * v19 + 4) = *(_DWORD *)(v20 + 8 * v19 + 4);
          ++v19;
        }
        while ( v19 < v17 );
        v5 = this;
      }
      v24 += 5;
      v25 += 20;
      if ( !--v23 )
        break;
      v16 = v25;
    }
    return a2;
  }
  return v10;
}

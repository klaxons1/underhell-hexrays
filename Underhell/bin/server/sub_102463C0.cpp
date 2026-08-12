int __thiscall sub_102463C0(int *this, int a2, int a3, _DWORD *a4)
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
  int v15; // eax
  _DWORD *v16; // edi
  int *v17; // esi
  int v18; // edx
  _DWORD *v19; // eax
  _DWORD *v20; // ecx
  bool v21; // zf
  int v23; // [esp+Ch] [ebp-4h]
  int v24; // [esp+1Ch] [ebp+Ch]
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
    v15 = 20 * a2;
    v24 = 20 * a2;
    v16 = a4;
    v23 = a3;
    while ( 1 )
    {
      v17 = (int *)(v15 + *v5);
      v25 = v16[3];
      v17[3] = 0;
      sub_10245C90(v17, 0, v25, 0);
      if ( v25 > 0 )
      {
        v18 = 0;
        do
        {
          v19 = (_DWORD *)(v18 + *v16);
          v20 = (_DWORD *)(v18 + *v17);
          *v20 = *v19;
          v20[1] = v19[1];
          v20[2] = v19[2];
          v18 += 16;
          v21 = v25-- == 1;
          v20[3] = v19[3];
        }
        while ( !v21 );
        v5 = this;
      }
      v24 += 20;
      v16 += 5;
      if ( !--v23 )
        break;
      v15 = v24;
    }
    return a2;
  }
  return v10;
}

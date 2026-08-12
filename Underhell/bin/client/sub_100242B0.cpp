int __thiscall sub_100242B0(int *this, int a2, int a3, _DWORD *a4)
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
  _DWORD *v15; // eax
  int v16; // edi
  char **v17; // esi
  int v18; // edi
  char *v19; // eax
  char *v20; // ecx
  int v21; // eax
  int v22; // ebx
  bool v23; // zf
  int v25; // [esp+Ch] [ebp-4h]
  _DWORD *v26; // [esp+1Ch] [ebp+Ch]
  int v27; // [esp+20h] [ebp+10h]

  v5 = this;
  if ( !a3 )
    return a2;
  v7 = this[3];
  v8 = this[1];
  if ( v7 + a3 > v8 )
    sub_100F7BB0(a3 + v7 - v8);
  v5[3] += a3;
  v9 = *v5;
  v10 = a2;
  v11 = v5[3] - a2 - a3;
  v5[4] = *v5;
  if ( v11 > 0 )
  {
    if ( a3 <= 0 )
      goto LABEL_13;
    memcpy((void *)(v9 + 20 * (a2 + a3)), (const void *)(v9 + 20 * a2), 20 * v11);
  }
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
LABEL_13:
  v15 = a4;
  if ( a4 && a3 > 0 )
  {
    v16 = 20 * a2;
    v27 = 20 * a2;
    v26 = v15;
    v25 = a3;
    while ( 1 )
    {
      v17 = (char **)(v16 + *v5);
      v18 = v15[3];
      v17[3] = 0;
      if ( v18 )
      {
        v19 = v17[1];
        if ( v18 > (int)v19 )
          sub_1001EF70(v17, v18 - (_DWORD)v19);
        v17[3] += v18;
        v20 = *v17;
        v21 = (int)&v17[3][-v18];
        v17[4] = *v17;
        if ( v21 <= 0 )
          goto LABEL_22;
        if ( v18 > 0 )
          break;
      }
LABEL_26:
      v15 = v26 + 5;
      v16 = v27 + 20;
      v23 = v25-- == 1;
      v26 += 5;
      v27 += 20;
      if ( v23 )
        return a2;
    }
    memcpy(&v20[132 * v18], v20, 132 * v21);
LABEL_22:
    if ( v18 > 0 )
    {
      v22 = 0;
      do
      {
        sub_1001C990(&(*v17)[v22], v22 + *v26);
        v22 += 132;
        --v18;
      }
      while ( v18 );
      v5 = this;
    }
    goto LABEL_26;
  }
  return v10;
}

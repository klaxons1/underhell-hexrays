int __thiscall sub_1008A340(int *this, int a2, int a3, int a4)
{
  int *v4; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  const void **v13; // edi
  int v14; // ebx
  int v15; // esi
  int v17; // [esp+Ch] [ebp-8h]

  v4 = this;
  if ( !a3 )
    return a2;
  v6 = this[3];
  v7 = this[1];
  if ( v6 + a3 > v7 )
    sub_101924C0(a3 + v6 - v7);
  v4[3] += a3;
  v8 = *v4;
  v9 = a2;
  v10 = v4[3] - a2 - a3;
  v4[4] = *v4;
  if ( v10 <= 0 )
    goto LABEL_8;
  if ( a3 > 0 )
  {
    memcpy((void *)(v8 + 12 * (a2 + a3)), (const void *)(v8 + 12 * a2), 12 * v10);
LABEL_8:
    if ( a3 > 0 )
    {
      v11 = 12 * a2;
      v17 = a3;
      do
      {
        v12 = (_DWORD *)(v11 + *v4);
        if ( v12 )
        {
          *v12 = 0;
          v12[1] = 0;
          v12[2] = 0;
        }
        v11 += 12;
        --v17;
      }
      while ( v17 );
    }
  }
  if ( a4 && a3 > 0 )
  {
    v13 = (const void **)(a4 + 8);
    v14 = 12 * a2;
    while ( 1 )
    {
      v15 = v14 + *v4;
      sub_10052D00((unsigned __int16 *)v15, *((unsigned __int16 *)v13 - 4), 0);
      memcpy_0(*(void **)(v15 + 8), *v13, 4 * *((unsigned __int16 *)v13 - 3));
      v13 += 3;
      v14 += 12;
      if ( !--a3 )
        break;
      v4 = this;
    }
    return a2;
  }
  return v9;
}

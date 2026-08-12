char __thiscall sub_1030C280(_DWORD *this, int a2)
{
  int v3; // edi
  int *v4; // ebx
  int i; // edi
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  int v11; // ecx
  float *v12; // edx
  float *v14; // ebx
  double v15; // st4
  double v16; // st6
  double v17; // st4
  double v18; // st5
  double v19; // st6
  int v20; // eax
  int v21; // ecx
  _DWORD *v22; // eax
  _DWORD *v23; // ecx
  int v24; // [esp+Ch] [ebp-4h]

  v3 = this[645] - 1;
  v24 = v3;
  if ( v3 < 0 )
    return 0;
  v4 = off_1061BE18;
  for ( i = 20 * v3; ; i -= 20 )
  {
    v6 = (_DWORD *)(i + this[642]);
    if ( *v6 != -1 && v4[4 * (*v6 & 0xFFF) + 2] == *v6 >> 12 && v4[4 * (*v6 & 0xFFF) + 1] )
      break;
    v7 = this[645];
    if ( v7 > 0 )
    {
      v8 = this[642];
      v9 = (_DWORD *)(v8 + 20 * v7 - 20);
      *(_DWORD *)(v8 + i) = *v9;
      v10 = (_DWORD *)(i + v8);
      v10[1] = v9[1];
      v10[2] = v9[2];
      v10[3] = v9[3];
      v10[4] = v9[4];
      --this[645];
      v4 = off_1061BE18;
    }
LABEL_13:
    if ( --v24 < 0 )
      return 0;
  }
  if ( *v6 == -1 || v4[4 * (*v6 & 0xFFF) + 2] != *v6 >> 12 )
    v11 = 0;
  else
    v11 = v4[4 * (*v6 & 0xFFF) + 1];
  v12 = (float *)a2;
  if ( a2 != v11 )
    goto LABEL_13;
  v14 = (float *)(20 * v24 + this[642]);
  if ( v14[1] >= (double)*(float *)(dword_106B31C8 + 12) )
  {
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    {
      sub_100DAE60(a2);
      v12 = (float *)a2;
    }
    v15 = v12[146] - v14[3];
    v16 = v15 * v15;
    v17 = v12[145] - v14[2];
    v18 = v16;
    v19 = v12[147] - v14[4];
    if ( v17 * v17 + v18 + v19 * v19 <= 57600.0 )
      return 1;
  }
  v20 = this[645];
  if ( v20 > 0 )
  {
    v21 = this[642];
    v22 = (_DWORD *)(v21 + 20 * v20 - 20);
    *(_DWORD *)(v21 + 20 * v24) = *v22;
    v23 = (_DWORD *)(20 * v24 + v21);
    v23[1] = v22[1];
    v23[2] = v22[2];
    v23[3] = v22[3];
    v23[4] = v22[4];
    --this[645];
  }
  return 0;
}

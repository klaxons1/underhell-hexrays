_DWORD *__thiscall sub_1016BA40(_DWORD *this, int a2, float a3, float a4, _DWORD *a5)
{
  _DWORD *result; // eax
  _DWORD **v7; // ecx
  int v8; // eax
  int v9; // edi
  double v10; // st7
  _DWORD *v11; // eax
  int *v12; // esi
  const char *v13; // edi
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  char **v18; // eax
  int v19; // esi
  int v20; // eax
  _DWORD **v21; // ecx
  int v22; // eax
  int v23; // [esp+14h] [ebp+8h]
  int v24; // [esp+18h] [ebp+Ch]
  char *v25; // [esp+1Ch] [ebp+10h]

  result = 0;
  if ( (int)this[3] <= 0 )
    goto LABEL_7;
  v7 = (_DWORD **)*this;
  while ( **v7 != a2 )
  {
    result = (_DWORD *)((char *)result + 1);
    ++v7;
    if ( (int)result >= this[3] )
      goto LABEL_7;
  }
  if ( result == (_DWORD *)-1 )
  {
LABEL_7:
    v8 = sub_10184390(40);
    if ( v8 )
    {
      *(_BYTE *)(v8 + 8) = 0;
      *(float *)(v8 + 4) = -1.0;
      v9 = v8;
      v10 = a3;
      v24 = v8;
      *(float *)(v8 + 12) = v10;
      *(_DWORD *)(v8 + 20) = 0;
      *(_DWORD *)(v8 + 24) = 0;
      *(_DWORD *)(v8 + 28) = 0;
      *(_DWORD *)(v8 + 32) = 0;
      *(_DWORD *)(v8 + 36) = 0;
      *(float *)(v8 + 16) = 6.0;
      *(_DWORD *)v8 = 0;
    }
    else
    {
      v24 = 0;
      v9 = 0;
    }
    *(_DWORD *)v9 = a2;
    *(float *)(v9 + 16) = a4;
    v11 = a5;
    if ( a5 )
    {
      v23 = 0;
      if ( (int)a5[3] > 0 )
      {
        v12 = (int *)(v9 + 20);
        while ( 1 )
        {
          v13 = *(const char **)(*v11 + 4 * v23);
          v25 = (char *)sub_10184390(strlen(v13) + 1);
          strcpy(v25, v13);
          v14 = v12[3];
          v15 = v12[1];
          if ( v14 + 1 > v15 )
            sub_102ABFC0(v14 - v15 + 1);
          ++v12[3];
          v16 = *v12;
          v17 = v12[3] - v14 - 1;
          v12[4] = *v12;
          if ( v17 > 0 )
            memcpy((void *)(v16 + 4 * v14 + 4), (const void *)(v16 + 4 * v14), 4 * v17);
          v18 = (char **)(*v12 + 4 * v14);
          if ( v18 )
            *v18 = v25;
          if ( ++v23 >= a5[3] )
            break;
          v11 = a5;
        }
        v9 = v24;
      }
    }
    v19 = this[3];
    v20 = this[1];
    if ( v19 + 1 > v20 )
      sub_102ABFC0(v19 - v20 + 1);
    ++this[3];
    v21 = (_DWORD **)*this;
    v22 = this[3] - v19 - 1;
    this[4] = *this;
    if ( v22 > 0 )
      memcpy(&v21[v19 + 1], &v21[v19], 4 * v22);
    result = (_DWORD *)(*this + 4 * v19);
    if ( result )
      *result = v9;
  }
  return result;
}

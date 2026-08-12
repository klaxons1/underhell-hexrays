int __thiscall sub_10027660(unsigned __int16 *this, int a2)
{
  int result; // eax
  int v4; // ebx
  unsigned int v5; // edi
  int v6; // ecx
  unsigned int *v7; // eax
  int v8; // edx
  int v9; // ecx
  _DWORD *v10; // ebx
  float *i; // eax
  float *v12; // ecx
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  int v17; // ecx
  int v18; // edx
  int v19; // ebx
  int v20; // eax
  _DWORD *v21; // edi
  int v22; // eax
  int v23; // [esp+8h] [ebp-4h]
  _DWORD *v24; // [esp+14h] [ebp+8h]

  result = a2;
  v4 = this[2];
  if ( a2 > v4 )
  {
    v5 = v4 + this[5] * ((this[5] + a2 - 1) / this[5]);
    v6 = (12 * (unsigned __int64)v5) >> 32 != 0 ? -1 : 12 * v5;
    v7 = (unsigned int *)sub_100DDA40(__CFADD__(v6, 4) ? -1 : v6 + 4);
    v8 = 0;
    if ( v7 )
    {
      v9 = v5 - 1;
      v10 = v7 + 1;
      *v7 = v5;
      for ( i = (float *)(v7 + 1); v9 >= 0; --v9 )
      {
        *i = 0.0;
        i[2] = 0.0;
        i[1] = 0.0;
        i += 3;
      }
      v24 = v10;
    }
    else
    {
      v24 = 0;
    }
    if ( this[2] )
    {
      v12 = (float *)(v24 + 1);
      do
      {
        v13 = this[2];
        v14 = v8 + this[3];
        if ( v14 >= v13 )
          v14 -= v13;
        v15 = *(_DWORD *)this + 12 * v14;
        v12[1] = *(float *)(v15 + 8);
        *v12 = *(float *)(v15 + 4);
        *(v12 - 1) = *(float *)v15;
        *(_DWORD *)(v15 + 8) = 0;
        *(_DWORD *)(v15 + 4) = 0;
        ++v8;
        v12 += 3;
      }
      while ( v8 < this[2] );
    }
    result = *(_DWORD *)this;
    this[3] = 0;
    this[2] = v5;
    if ( result )
    {
      v16 = *(_DWORD *)(result - 4);
      v17 = result - 4;
      v18 = 3 * v16;
      v19 = v16 - 1;
      v23 = result - 4;
      v20 = result + 4 * v18;
      if ( v19 >= 0 )
      {
        v21 = (_DWORD *)(v20 + 8);
        do
        {
          v22 = *(v21 - 3);
          v21 -= 3;
          sub_10034930(v22);
          --v19;
          *v21 = 0;
        }
        while ( v19 >= 0 );
        v17 = v23;
      }
      result = sub_10034930(v17);
    }
    *(_DWORD *)this = v24;
  }
  return result;
}

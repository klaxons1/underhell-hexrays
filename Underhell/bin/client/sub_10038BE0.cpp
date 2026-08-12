int __thiscall sub_10038BE0(unsigned __int16 *this, int a2)
{
  int result; // eax
  int v4; // ebx
  int v5; // edi
  int v6; // ecx
  int *v7; // eax
  _DWORD *v8; // ebx
  int v9; // edx
  float *v10; // ecx
  int v11; // ebx
  int v12; // eax
  float *v13; // eax
  _DWORD *v14; // [esp+10h] [ebp+8h]

  result = a2;
  v4 = this[2];
  if ( a2 > v4 )
  {
    v5 = v4 + this[5] * ((this[5] + a2 - 1) / this[5]);
    v6 = (unsigned __int64)(unsigned int)v5 >> 28 != 0 ? -1 : 16 * v5;
    v7 = (int *)sub_100DDA40(__CFADD__(v6, 4) ? -1 : v6 + 4);
    if ( v7 )
    {
      *v7 = v5;
      v8 = v7 + 1;
    }
    else
    {
      v8 = 0;
    }
    v9 = 0;
    v14 = v8;
    if ( this[2] )
    {
      v10 = (float *)(v8 + 3);
      do
      {
        v11 = this[2];
        v12 = v9 + this[3];
        if ( v12 >= v11 )
          v12 -= v11;
        v13 = (float *)(*(_DWORD *)this + 16 * v12);
        ++v9;
        v10 += 4;
        *(v10 - 7) = *v13;
        *(v10 - 6) = v13[1];
        *(v10 - 5) = v13[2];
        *(v10 - 4) = v13[3];
      }
      while ( v9 < this[2] );
      v8 = v14;
    }
    result = *(_DWORD *)this;
    this[2] = v5;
    this[3] = 0;
    if ( result )
      result = sub_10034930(result - 4);
    *(_DWORD *)this = v8;
  }
  return result;
}

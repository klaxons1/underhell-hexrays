int __thiscall sub_10027790(unsigned __int16 *this, int a2)
{
  int result; // eax
  int v4; // ebx
  unsigned int v5; // edi
  int v6; // ecx
  unsigned int *v7; // eax
  _DWORD *v8; // ebx
  int v9; // ecx
  _DWORD *v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // [esp+14h] [ebp+8h]

  result = a2;
  v4 = this[2];
  if ( a2 > v4 )
  {
    v5 = v4 + this[5] * ((this[5] + a2 - 1) / this[5]);
    v6 = (unsigned __int64)v5 >> 29 != 0 ? -1 : 8 * v5;
    v7 = (unsigned int *)sub_100DDA40(__CFADD__(v6, 4) ? -1 : v6 + 4);
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
    v14 = 0;
    if ( this[2] )
    {
      v10 = v8;
      do
      {
        v11 = v9 + this[3];
        v12 = this[2];
        if ( v11 >= v12 )
          v11 -= v12;
        v13 = *(_DWORD *)this;
        *v10 = *(_DWORD *)(*(_DWORD *)this + 8 * v11);
        v10[1] = *(_DWORD *)(v13 + 8 * v11 + 4);
        v9 = v14 + 1;
        v10 += 2;
        v14 = v9;
      }
      while ( v9 < this[2] );
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

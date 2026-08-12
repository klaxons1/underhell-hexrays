int __thiscall sub_1021D5A0(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // ebp
  int result; // eax
  _DWORD *i; // ebx
  int j; // esi
  float *v9; // eax
  double v10; // st7
  double v11; // st6
  int v12; // [esp+0h] [ebp-14h]
  _DWORD *v13; // [esp+4h] [ebp-10h]
  float v14[3]; // [esp+8h] [ebp-Ch] BYREF

  v4 = this[12];
  v13 = this;
  if ( v4 > 63 )
  {
    v12 = 63;
  }
  else if ( v4 >= 0 )
  {
    v12 = this[12];
  }
  else
  {
    v12 = 0;
  }
  v5 = this[13];
  if ( a2[10] - this[14] < v5 )
    v5 = a2[10] - this[14];
  result = 64 - v12;
  if ( v5 >= 64 - v12 )
    v5 = 64 - v12;
  if ( v5 )
  {
    for ( i = (_DWORD *)a2[1502]; i; i = (_DWORD *)i[1495] )
    {
      result = i[16];
      if ( *(_DWORD *)(result + 492) == this[11] )
      {
        for ( j = 0; j < v5; ++j )
        {
          v9 = (float *)(a2[1517] + 4 * (((j + this[12]) & 3) + a2[1581] * ((j + this[12]) / 4)));
          v10 = v9[4];
          v11 = v9[8];
          v14[0] = *v9;
          v14[1] = v10;
          v14[2] = v11;
          result = sub_100F16D0(i, j + v12, v14);
          this = v13;
        }
      }
    }
  }
  return result;
}

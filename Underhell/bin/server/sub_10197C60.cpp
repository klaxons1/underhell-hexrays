int __thiscall sub_10197C60(_DWORD *this, int a2, int a3, int a4, int a5)
{
  int v6; // esi
  int v7; // eax
  int v8; // eax
  char v9; // cl
  char v12; // [esp+17h] [ebp+Bh]

  v6 = sub_101A0270(a2);
  v12 = 0;
  if ( !v6 )
  {
    v7 = sub_10184390(72);
    if ( v7 )
      v6 = sub_101A0980(v7, a2, a3, a5);
    else
      v6 = 0;
    v12 = 1;
  }
  sub_101A0250(v6, a4);
  if ( fabs(*(float *)(a5 + 8) - *(float *)(a2 + 8)) < 50.0 )
  {
    switch ( a4 )
    {
      case 0:
        v8 = 2;
        break;
      case 1:
        v8 = 3;
        break;
      case 3:
        v8 = 1;
        break;
      default:
        v8 = 0;
        break;
    }
    sub_101A0250(a5, v8);
    switch ( a4 )
    {
      case 0:
        v9 = 2;
        break;
      case 1:
        v9 = 3;
        break;
      case 3:
        v9 = 1;
        break;
      default:
        v9 = 0;
        break;
    }
    *(_BYTE *)(v6 + 52) |= 1 << v9;
  }
  if ( v12 )
    this[298] = v6;
  sub_101A0450(v6);
  return v6;
}

_DWORD *__thiscall sub_101FB7A0(_DWORD *this)
{
  _DWORD *v2; // edi
  char *v3; // eax
  int i; // ecx
  float *v5; // eax
  int v6; // ecx
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  int v9; // ecx
  bool v10; // zf

  this[1] = 0;
  *this = 0;
  this[2] = 0;
  v2 = this + 14;
  this[15] = 0;
  this[14] = 0;
  this[16] = 0;
  this[21] = 0;
  v3 = (char *)(this + 1110);
  for ( i = 63; i >= 0; --i )
  {
    *(float *)v3 = -1.0;
    *((_DWORD *)v3 + 2) = 0;
    *((_DWORD *)v3 + 3) = 0;
    *((_DWORD *)v3 + 4) = 0;
    *((_DWORD *)v3 + 5) = 0;
    v3 += 24;
  }
  this[1502] = 0;
  *((_BYTE *)this + 6596) &= 0x60u;
  *((float *)this + 1665) = 0.0;
  this[1669] = 0;
  *((float *)this + 1664) = 0.0;
  this[1668] = 0;
  *((float *)this + 1659) = 0.0;
  this[1654] = 0;
  *((float *)this + 1658) = 0.0;
  this[1655] = 0;
  *((_BYTE *)this + 6597) = 0;
  *((float *)this + 1660) = 1.0;
  *((_BYTE *)this + 6598) = 0;
  this[1670] = 0;
  this[1646] = 0;
  this[1647] = 0;
  *((float *)this + 1661) = 0.0;
  *((float *)this + 1662) = 0.0;
  *((float *)this + 1663) = 0.0;
  *((float *)this + 1504) = 0.0;
  *((float *)this + 1505) = 0.0;
  *((float *)this + 1506) = 0.0;
  *((float *)this + 1507) = 0.0;
  *((float *)this + 1508) = 0.0;
  *((float *)this + 1509) = 0.0;
  *((_BYTE *)this + 6012) = 0;
  memset(this + 22, 0, 0x1100u);
  v5 = (float *)(this + 30);
  v6 = 64;
  do
  {
    *(v5 - 2) = 0.0;
    v5 += 17;
    --v6;
    *(v5 - 17) = 0.0;
    *(v5 - 18) = 1.0;
    *(v5 - 16) = 0.0;
    *(v5 - 15) = 0.0;
    *(v5 - 14) = 1.0;
    *(v5 - 13) = 1.0;
    *(v5 - 12) = 0.0;
    *(v5 - 11) = 0.0;
  }
  while ( v6 );
  memset(this + 1549, 0, 0x80u);
  *((float *)this + 9) = 0.0;
  this[1515] = 0;
  this[1514] = 0;
  this[1516] = 0;
  this[1511] = 0;
  this[1512] = 0;
  this[1513] = 0;
  this[10] = 0;
  this[8] = 0;
  *((float *)this + 11) = 0.0;
  *((_OWORD *)this + 1) = xmmword_10394140;
  *((float *)this + 12) = 0.050000001;
  this[1648] = 1;
  this[1494] = 0;
  this[1496] = 0;
  this[1495] = 0;
  this[1656] = 0;
  v7 = (_DWORD *)v2[2];
  if ( v7 )
  {
    v8 = (_DWORD *)v2[1];
    if ( v8 )
    {
      *v8 = *v2;
      if ( *v2 )
        *(_DWORD *)(*v2 + 4) = v2[1];
    }
    else if ( (_DWORD *)*v7 == v2 )
    {
      v9 = *v2;
      v10 = *v2 == 0;
      *v7 = *v2;
      if ( !v10 )
        *(_DWORD *)(v9 + 4) = 0;
    }
    v2[1] = 0;
    *v2 = 0;
    v2[2] = 0;
  }
  this[17] = 0;
  this[18] = 0;
  *((_BYTE *)this + 76) = 0;
  *((_BYTE *)this + 77) = 0;
  this[1666] = 0;
  this[1667] = 0;
  this[1510] = 0;
  this[1497] = 0;
  this[1498] = 0;
  this[1499] = 0;
  this[1500] = 0;
  this[1501] = 0;
  this[21] = -1;
  this[20] = -1;
  return this;
}

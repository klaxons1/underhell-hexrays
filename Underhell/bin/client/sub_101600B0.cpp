int __thiscall sub_101600B0(int this)
{
  int v2; // ecx

  sub_10011C00((_DWORD *)this);
  *(_DWORD *)(this + 1424) = &IPrototypeAppEffect::`vftable';
  *(_DWORD *)this = &C_DustTrail::`vftable';
  *(_DWORD *)(this + 4) = &C_DustTrail::`vftable';
  *(_DWORD *)(this + 8) = &C_DustTrail::`vftable';
  *(_DWORD *)(this + 12) = &C_DustTrail::`vftable';
  *(_DWORD *)(this + 1192) = &C_DustTrail::`vftable';
  *(_DWORD *)(this + 1424) = &C_DustTrail::`vftable';
  *(float *)(this + 1568) = -1.0;
  *(float *)(this + 1572) = 0.0;
  *(_DWORD *)(this + 1580) = 0;
  *(_DWORD *)(this + 1504) = 0;
  *(_DWORD *)(this + 1508) = 0;
  *(_DWORD *)(this + 1512) = 0;
  *(_DWORD *)(this + 1516) = 0;
  *(_DWORD *)(this + 1520) = 0;
  *(_DWORD *)(this + 1524) = 0;
  *(_DWORD *)(this + 1528) = 0;
  *(_DWORD *)(this + 1532) = 0;
  *(_DWORD *)(this + 1536) = 0;
  *(_DWORD *)(this + 1540) = 0;
  *(_DWORD *)(this + 1544) = 0;
  *(_DWORD *)(this + 1548) = 0;
  *(_DWORD *)(this + 1552) = 0;
  *(_DWORD *)(this + 1556) = 0;
  *(_DWORD *)(this + 1560) = 0;
  *(_DWORD *)(this + 1564) = 0;
  *(float *)(this + 1428) = 10.0;
  *(float *)(this + 1568) = 0.1;
  *(float *)(this + 1572) = 0.0;
  *(float *)(this + 1432) = 0.5;
  *(float *)(this + 1436) = 0.5;
  *(float *)(this + 1440) = 0.5;
  *(float *)(this + 1448) = 5.0;
  *(float *)(this + 1452) = *((float *)off_103DC81C + 3);
  *(float *)(this + 1456) = 0.0;
  *(float *)(this + 1460) = 2.0;
  *(float *)(this + 1464) = 4.0;
  *(float *)(this + 1472) = 0.0;
  *(float *)(this + 1468) = 0.0;
  *(float *)(this + 1476) = 35.0;
  *(float *)(this + 1480) = 55.0;
  *(float *)(this + 1484) = 2.0;
  *(float *)(this + 1488) = 0.0;
  *(float *)(this + 1492) = 0.0;
  *(float *)(this + 1496) = 0.0;
  *(_BYTE *)(this + 1500) = 1;
  *(float *)(this + 1444) = 0.5;
  v2 = *(_DWORD *)(this + 1580);
  if ( v2 )
  {
    sub_100F2FF0(v2);
    *(_DWORD *)(this + 1580) = 0;
  }
  *(_DWORD *)(this + 1576) = 0;
  return this;
}

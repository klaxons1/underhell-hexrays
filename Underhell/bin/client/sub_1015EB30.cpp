int __thiscall sub_1015EB30(int this)
{
  int v2; // ecx

  sub_10011C00((_DWORD *)this);
  *(_DWORD *)(this + 1424) = &IPrototypeAppEffect::`vftable';
  *(_DWORD *)this = &C_RocketTrail::`vftable';
  *(_DWORD *)(this + 4) = &C_RocketTrail::`vftable';
  *(_DWORD *)(this + 8) = &C_RocketTrail::`vftable';
  *(_DWORD *)(this + 12) = &C_RocketTrail::`vftable';
  *(_DWORD *)(this + 1192) = &C_RocketTrail::`vftable';
  *(_DWORD *)(this + 1424) = &C_RocketTrail::`vftable';
  *(float *)(this + 1532) = -1.0;
  *(float *)(this + 1536) = 0.0;
  *(_DWORD *)(this + 1544) = 0;
  *(_DWORD *)(this + 1524) = 0;
  *(float *)(this + 1428) = 10.0;
  *(_DWORD *)(this + 1528) = 0;
  *(float *)(this + 1532) = 0.1;
  *(float *)(this + 1536) = 0.0;
  *(float *)(this + 1432) = 0.5;
  *(float *)(this + 1436) = 0.5;
  *(float *)(this + 1440) = 0.5;
  *(float *)(this + 1444) = 0.0;
  *(float *)(this + 1448) = 0.0;
  *(float *)(this + 1452) = 0.0;
  *(float *)(this + 1460) = 5.0;
  *(float *)(this + 1464) = 0.0;
  *(float *)(this + 1468) = 2.0;
  *(float *)(this + 1472) = 4.0;
  *(float *)(this + 1476) = 35.0;
  *(float *)(this + 1480) = 55.0;
  *(float *)(this + 1484) = 2.0;
  *(float *)(this + 1488) = 0.0;
  *(float *)(this + 1492) = 0.0;
  *(float *)(this + 1496) = 0.0;
  *(_WORD *)(this + 1500) = 1;
  *(_DWORD *)(this + 1504) = -1;
  *(float *)(this + 1456) = 0.5;
  v2 = *(_DWORD *)(this + 1544);
  if ( v2 )
  {
    sub_100F2FF0(v2);
    *(_DWORD *)(this + 1544) = 0;
  }
  *(_DWORD *)(this + 1540) = 0;
  return this;
}

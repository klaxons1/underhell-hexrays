int __thiscall sub_10268640(int this)
{
  double v2; // st7
  int *v3; // ecx
  float v5; // [esp+0h] [ebp-18h]
  float v6; // [esp+4h] [ebp-14h]
  float v7; // [esp+8h] [ebp-10h]

  sub_10267850((float *)this);
  v2 = 0.0;
  *(_DWORD *)(this + 1484) = &IDrivableVehicle::`vftable';
  *(_DWORD *)(this + 1488) = &INPCPassengerCarrier::`vftable';
  *(_DWORD *)this = &CPropVehicleDriveable::`vftable';
  *(_DWORD *)(this + 1120) = &CPropVehicleDriveable::`vftable';
  *(_DWORD *)(this + 1484) = &CPropVehicleDriveable::`vftable';
  *(_DWORD *)(this + 1488) = &CPropVehicleDriveable::`vftable';
  *(_DWORD *)(this + 1492) = 0;
  *(_DWORD *)(this + 1508) = -1;
  *(_DWORD *)(this + 1496) = 0;
  *(_DWORD *)(this + 1512) = 5;
  *(_DWORD *)(this + 1532) = -1;
  *(_DWORD *)(this + 1520) = 0;
  *(_DWORD *)(this + 1536) = 5;
  *(_DWORD *)(this + 1556) = -1;
  *(_DWORD *)(this + 1544) = 0;
  *(_DWORD *)(this + 1560) = 5;
  *(_DWORD *)(this + 1580) = -1;
  *(_DWORD *)(this + 1568) = 0;
  *(_DWORD *)(this + 1584) = 5;
  *(_DWORD *)(this + 1604) = -1;
  *(_DWORD *)(this + 1592) = 0;
  *(_DWORD *)(this + 1608) = 5;
  *(_DWORD *)(this + 1628) = -1;
  *(_DWORD *)(this + 1616) = 0;
  *(_DWORD *)(this + 1632) = 5;
  *(_DWORD *)(this + 1640) = -1;
  *(_DWORD *)(this + 1696) = -1;
  *(_DWORD *)(this + 1700) = -1;
  *(float *)(this + 1716) = 0.0;
  *(float *)(this + 1720) = 0.0;
  if ( *(_BYTE *)(this + 1690) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
      {
        sub_100194B0(v3, 1690);
        v2 = 0.0;
      }
    }
    *(_BYTE *)(this + 1690) = 0;
  }
  v7 = v2;
  v6 = v2;
  v5 = v2;
  sub_10268390((float *)(this + 1664), v5, v6, v7);
  sub_10268460((float *)(this + 1676), 0.0, 0.0, 0.0);
  return this;
}

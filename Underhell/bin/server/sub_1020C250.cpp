int __thiscall sub_1020C250(int this)
{
  sub_1020B100((_DWORD *)this);
  *(_DWORD *)(this + 1444) = &IPositionWatcher::`vftable';
  *(_DWORD *)this = &CDynamicProp::`vftable';
  *(_DWORD *)(this + 1120) = &CDynamicProp::`vftable';
  *(_DWORD *)(this + 1124) = &CDynamicProp::`vftable';
  *(_DWORD *)(this + 1444) = &CDynamicProp::`vftable';
  *(_DWORD *)(this + 1460) = -1;
  *(_DWORD *)(this + 1448) = 0;
  *(_DWORD *)(this + 1464) = 5;
  *(_DWORD *)(this + 1484) = -1;
  *(_DWORD *)(this + 1472) = 0;
  *(_DWORD *)(this + 1488) = 5;
  *(_DWORD *)(this + 1508) = -1;
  *(_DWORD *)(this + 1496) = 0;
  *(_DWORD *)(this + 1512) = 5;
  sub_101BD540((_DWORD *)(this + 1552));
  *(_WORD *)(this + 1548) = -1;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
    sub_100C1130(this);
  *(_DWORD *)(this + 1524) = -1;
  return this;
}

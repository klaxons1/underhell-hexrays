int __thiscall sub_1015CFA0(int this)
{
  int result; // eax

  sub_10011C00((_DWORD *)this);
  *(_DWORD *)(this + 1424) = &IPrototypeAppEffect::`vftable';
  *(_DWORD *)this = &C_SporeExplosion::`vftable';
  *(_DWORD *)(this + 4) = &C_SporeExplosion::`vftable';
  *(_DWORD *)(this + 8) = &C_SporeExplosion::`vftable';
  *(_DWORD *)(this + 12) = &C_SporeExplosion::`vftable';
  *(_DWORD *)(this + 1192) = &C_SporeExplosion::`vftable';
  *(_DWORD *)(this + 1424) = &C_SporeExplosion::`vftable';
  *(float *)(this + 1460) = -1.0;
  *(float *)(this + 1464) = 0.0;
  *(_DWORD *)(this + 1472) = 0;
  *(float *)(this + 1428) = 32.0;
  *(_DWORD *)(this + 1468) = 0;
  result = this;
  *(float *)(this + 1432) = 5.0;
  *(float *)(this + 1436) = 32.0;
  *(float *)(this + 1440) = 64.0;
  *(float *)(this + 1444) = 32.0;
  *(float *)(this + 1460) = 0.03125;
  *(float *)(this + 1464) = 0.0;
  *(_WORD *)(this + 1452) = 1;
  return result;
}

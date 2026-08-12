float *__thiscall sub_10103D30(float *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  float **v6; // eax

  sub_10047F30((int)this);
  *((_DWORD *)this + 490) = &IBreakableWithPropData::`vftable';
  *((_DWORD *)this + 491) = &IMultiplayerPhysics::`vftable';
  this[494] = -1.0;
  *(_DWORD *)this = &C_PhysPropClientside::`vftable';
  this[495] = 1.0;
  *((_DWORD *)this + 1) = &C_PhysPropClientside::`vftable';
  *((_DWORD *)this + 2) = &C_PhysPropClientside::`vftable';
  this[493] = 0.0;
  *((_DWORD *)this + 3) = &C_PhysPropClientside::`vftable';
  *((_DWORD *)this + 490) = &C_PhysPropClientside::`vftable';
  *((_DWORD *)this + 491) = &C_PhysPropClientside::`vftable';
  this[34] = 0.0;
  this[492] = 0.0;
  this[512] = 0.0;
  v2 = dword_104363D4;
  v3 = dword_104363D4;
  if ( dword_104363D4 + 1 > dword_104363CC )
  {
    sub_1010AFF0(dword_104363D4 - dword_104363CC + 1);
    v2 = dword_104363D4;
  }
  v4 = dword_104363C8;
  dword_104363D4 = v2 + 1;
  v5 = v2 - v3;
  dword_104363D8 = dword_104363C8;
  if ( v5 > 0 )
  {
    memcpy((void *)(dword_104363C8 + 4 * v3 + 4), (const void *)(dword_104363C8 + 4 * v3), 4 * v5);
    v4 = dword_104363C8;
  }
  v6 = (float **)(v4 + 4 * v3);
  if ( v6 )
    *v6 = this;
  return this;
}

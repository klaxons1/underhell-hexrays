int __thiscall sub_10163470(int this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CGameWeaponManager::`vftable';
  *(_DWORD *)(this + 816) = 0;
  *(_DWORD *)(this + 820) = 0;
  *(_DWORD *)(this + 824) = 0;
  *(_DWORD *)(this + 828) = 0;
  *(_DWORD *)(this + 832) = 0;
  *(float *)(this + 808) = 1.0;
  *(_BYTE *)(this + 812) = 0;
  v2 = dword_106B4D4C;
  v3 = dword_106B4D4C;
  if ( dword_106B4D4C + 1 > dword_106B4D44 )
  {
    sub_102ABFC0(dword_106B4D4C - dword_106B4D44 + 1);
    v2 = dword_106B4D4C;
  }
  v4 = dword_106B4D40;
  dword_106B4D4C = v2 + 1;
  v5 = v2 - v3;
  dword_106B4D50 = dword_106B4D40;
  if ( v5 > 0 )
  {
    memcpy((void *)(dword_106B4D40 + 4 * v3 + 4), (const void *)(dword_106B4D40 + 4 * v3), 4 * v5);
    v4 = dword_106B4D40;
  }
  v6 = (_DWORD *)(v4 + 4 * v3);
  if ( v6 )
    *v6 = this;
  return this;
}

int __thiscall sub_101480A0(int this)
{
  unsigned __int16 v2; // ax
  int v3; // edi
  _DWORD *v4; // eax

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CFuncAreaPortalBase::`vftable';
  *(_DWORD *)(this + 800) = -1;
  v2 = sub_10147EA0(&dword_10625150, 0);
  v3 = v2;
  sub_100D09C0((unsigned __int16 *)&dword_10625150, 0xFFFFu, v2);
  v4 = (_DWORD *)(dword_10625150 + 8 * v3);
  if ( v4 )
    *v4 = this;
  *(_WORD *)(this + 808) = v3;
  *(_DWORD *)(this + 804) = 0;
  return this;
}

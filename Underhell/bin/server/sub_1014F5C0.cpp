int __thiscall sub_1014F5C0(int this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CFuncLadder::`vftable';
  *(_DWORD *)(this + 812) = 0;
  *(_DWORD *)(this + 816) = 0;
  *(_DWORD *)(this + 820) = 0;
  *(_DWORD *)(this + 824) = 0;
  *(_DWORD *)(this + 828) = 0;
  *(_BYTE *)(this + 856) = 0;
  *(_DWORD *)(this + 876) = -1;
  *(_DWORD *)(this + 864) = 0;
  *(_DWORD *)(this + 880) = 5;
  *(_DWORD *)(this + 900) = -1;
  *(_DWORD *)(this + 888) = 0;
  *(_DWORD *)(this + 904) = 5;
  v2 = dword_106B24DC;
  v3 = dword_106B24DC;
  if ( dword_106B24DC + 1 > dword_106B24D4 )
  {
    sub_102ABFC0(dword_106B24DC - dword_106B24D4 + 1);
    v2 = dword_106B24DC;
  }
  v4 = dword_106B24D0;
  dword_106B24DC = v2 + 1;
  v5 = v2 - v3;
  dword_106B24E0 = dword_106B24D0;
  if ( v5 > 0 )
  {
    memcpy((void *)(dword_106B24D0 + 4 * v3 + 4), (const void *)(dword_106B24D0 + 4 * v3), 4 * v5);
    v4 = dword_106B24D0;
  }
  v6 = (_DWORD *)(v4 + 4 * v3);
  if ( v6 )
    *v6 = this;
  return this;
}

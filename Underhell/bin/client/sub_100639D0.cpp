_DWORD *__thiscall sub_100639D0(_DWORD *this)
{
  _DWORD *v2; // esi
  int i; // ebx
  _DWORD *v4; // eax
  int j; // ecx

  v2 = this;
  for ( i = 1; i >= 0; --i )
  {
    sub_1022E000(v2);
    v2 += 8;
  }
  v4 = this + 17;
  for ( j = 1; j >= 0; --j )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    v4[4] = 0;
    v4 += 5;
  }
  this[16] = 0;
  sub_1022E060(0x20000, 0, 0x4000, 16);
  sub_1022E060(0x20000, 0, 0x4000, 16);
  return this;
}

int __thiscall sub_103E5EF0(int *this)
{
  int v2; // edx

  v2 = this[432];
  *this = (int)&CPropCrane::`vftable';
  this[280] = (int)&CPropCrane::`vftable';
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 96))(dword_106BAFF4, v2);
  sub_1010BB10(this + 405);
  sub_1010BB10(this + 399);
  sub_101BD560(this + 385);
  sub_1026EFB0(this + 281);
  return sub_100C4960(this);
}

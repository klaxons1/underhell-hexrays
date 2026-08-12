int __thiscall sub_1013C940(int this)
{
  double v2; // st7
  float v4; // [esp+10h] [ebp-Ch]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  ((void (__thiscall *)(int (__stdcall ***)(char), int, int, int, _DWORD))(*off_1061B7A0)[3])(
    off_1061B7A0,
    this + 580,
    1,
    1,
    0);
  v2 = *(float *)(this + 108) - 0.1;
  *(float *)(this + 108) = v2;
  if ( v2 <= 0.0 )
  {
    sub_1025FAC0(this);
  }
  else
  {
    v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)this, v4, 0);
  }
  return sub_101C73D0(0);
}

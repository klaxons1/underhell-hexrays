void __thiscall sub_102560F0(unsigned int this, unsigned int a2, char a3)
{
  float v4; // [esp+4h] [ebp-8h]

  v4 = 0.0;
  if ( a3 )
  {
    sub_1010DD80((_DWORD *)(this + 1148), __SPAIR64__(this, a2), v4);
    *(_BYTE *)(this + 1140) = 1;
  }
  else
  {
    sub_1010DD80((_DWORD *)(this + 1092), __SPAIR64__(this, a2), v4);
    *(float *)(this + 1128) = -1.0;
    sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
    sub_100EC4A0((int *)this, -1.0, 0);
  }
  if ( (*(_DWORD *)(this + 248) & 0x80) != 0 )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
    sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  }
}

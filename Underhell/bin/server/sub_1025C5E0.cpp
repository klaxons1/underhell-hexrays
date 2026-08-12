int __thiscall sub_1025C5E0(int this)
{
  int result; // eax
  float v3; // [esp+8h] [ebp-Ch]

  sub_102586B0(this);
  sub_102575A0(this);
  *(float *)(this + 1092) = *(float *)(this + 1096);
  sub_100EC4A0((int *)this, -1.0, 0);
  result = sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  if ( (*(_DWORD *)(this + 1116) & 0x40000) != 0 )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_1025B4C0, 0.0, 0);
    v3 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           0.0,
           *(float *)(this + 1100))
       + *(float *)(dword_106B31C8 + 12);
    return sub_100EC4A0((int *)this, v3, 0);
  }
  return result;
}

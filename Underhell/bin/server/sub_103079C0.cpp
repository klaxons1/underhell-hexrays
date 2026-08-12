int __thiscall sub_103079C0(int this, int a2)
{
  int v3; // eax
  float v5; // [esp+8h] [ebp-Ch]

  if ( (*(_DWORD *)(this + 192) & 0x20) == 0 )
  {
    v3 = sub_100BDCE0(this, 62);
    sub_100C1170(this, v3);
    *(float *)(this + 1128) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                0.5,
                                1.0)
                            + *(float *)(dword_106B31C8 + 12);
    sub_100EC3F0((_DWORD *)this, (int)sub_10307570, 0.0, 0);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    sub_100EC4A0((int *)this, v5, 0);
  }
  return sub_100DC590(this, a2);
}

int __thiscall sub_1013B830(int this)
{
  bool v2; // zf
  float v4; // [esp+8h] [ebp-Ch]

  sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
  v2 = (*(_BYTE *)(this + 248) & 0x40) == 0;
  *(_DWORD *)(this + 200) = 0;
  if ( !v2 )
    sub_100EC3F0((_DWORD *)this, (int)sub_1013B5E0, 0.0, 0);
  v4 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
         dword_106B31E4,
         0.0,
         1.5)
     + *(float *)(dword_106B31C8 + 12)
     + 0.1;
  sub_100EC4A0((int *)this, v4, 0);
  if ( *(float *)(this + 800) < 0.0 )
    *(float *)(this + 800) = 0.0;
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
}

int __thiscall sub_1033EA60(int this)
{
  int v2; // edx
  double v3; // st7
  int v4; // eax
  int (__thiscall *v5)(int); // edx

  *(_DWORD *)(this + 1676) = 0;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  sub_100E0970(this, v2, 3, 0);
  sub_100CF450((_DWORD *)this, 0);
  *(float *)(this + 1684) = -0.2;
  *(_DWORD *)(this + 2324) = 0;
  v3 = *(float *)(dword_106B31C8 + 12);
  *(_BYTE *)(this + 4212) = 0;
  *(float *)(this + 4216) = v3 + 1.0;
  *(float *)(this + 4180) = 0.0;
  *(float *)(this + 4184) = 0.0;
  sub_10020460((_DWORD *)this, 4097);
  sub_10020460((_DWORD *)this, 0x20000000);
  sub_10020460((_DWORD *)this, 0x80000);
  sub_10020460((_DWORD *)this, 0x4000000);
  sub_10020460((_DWORD *)this, 0x200000);
  sub_10020460((_DWORD *)this, 0x8000000);
  sub_10020460((_DWORD *)this, 0x40000000);
  *(_BYTE *)(this + 4213) = 1;
  *(float *)(this + 1688) = 0.0;
  *(float *)(this + 1692) = 0.0;
  *(float *)(this + 1696) = 55.0;
  *(float *)(this + 4240) = 3.4028235e38;
  sub_1007C990((float *)(this + 2832), 0.75);
  v4 = *(_DWORD *)this;
  *(float *)(this + 4220) = 0.0;
  *(float *)(this + 4224) = 0.0;
  v5 = *(int (__thiscall **)(int))(v4 + 1164);
  *(float *)(this + 4228) = *(float *)(dword_106B31C8 + 12);
  return v5(this);
}

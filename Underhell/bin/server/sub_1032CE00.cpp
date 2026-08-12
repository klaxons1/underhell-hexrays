void __thiscall sub_1032CE00(int this)
{
  int v2; // edx
  int v3; // eax
  double v4; // st7
  void (__thiscall *v5)(int); // edx
  int (__thiscall *v6)(int); // edx
  float *v7; // eax

  sub_10112C00(this + 320, 2);
  sub_100E0970(this, v2, 3, 0);
  *(_DWORD *)(this + 2324) = 0;
  sub_10020460((_DWORD *)this, 524289);
  sub_10020460((_DWORD *)this, 0x4000000);
  v3 = *(_DWORD *)this;
  *(float *)(this + 3804) = *(float *)(dword_106B31C8 + 12);
  v4 = *(float *)(dword_106B31C8 + 12);
  *(_DWORD *)(this + 3772) = 0;
  *(float *)(this + 3808) = v4;
  v5 = *(void (__thiscall **)(int))(v3 + 2268);
  *(float *)(this + 3800) = *(float *)(dword_106B31C8 + 12) + 9999.0;
  v5(this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 1164))(this);
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)this + 1868);
  *(_BYTE *)(this + 3829) = 0;
  v7 = (float *)v6(this);
  sub_100756C0(v7, 6.0);
  *(_BYTE *)(this + 3680) = 1;
}

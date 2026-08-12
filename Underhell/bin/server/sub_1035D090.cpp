void __thiscall sub_1035D090(int this, int a2)
{
  int v3; // edx
  float v4; // ecx
  int v5; // edx
  int v6; // edx
  float v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  if ( a2 == 1 )
  {
    sub_101C73D0((unsigned int *)this, 0);
    sub_100EA940((int *)this, 1024);
    sub_100223F0(2);
    sub_10020480((_DWORD *)this, 1);
    sub_10020460((_DWORD *)this, 4);
    sub_100E0970(this, v3, 3, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)(this + 3664) = *(float *)(this + 580);
    *(float *)(this + 3668) = *(float *)(this + 584);
    *(float *)(this + 3672) = *(float *)(this + 588);
    *(float *)(this + 3676) = *(float *)(dword_106B31C8 + 12) + 3.0;
  }
  else if ( a2 )
  {
    sub_100EA9A0((int *)this, 1024);
    sub_100223F0(0);
    sub_10020480((_DWORD *)this, 4);
    sub_10020460((_DWORD *)this, 1);
    sub_100E0970(this, v6, 3, 0);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = *(float *)(this + 708);
    v7[0] = 0.0;
    v7[1] = v4;
    v7[2] = 0.0;
    sub_100E0EA0(this, v7);
    sub_100EA9A0((int *)this, 1024);
    sub_100223F0(0);
    sub_10020480((_DWORD *)this, 4);
    sub_10020460((_DWORD *)this, 1);
    sub_100E0970(this, v5, 3, 0);
    *(float *)(this + 3664) = flt_106F1CA8;
    *(float *)(this + 3668) = flt_106F1CAC;
    *(float *)(this + 3672) = flt_106F1CB0;
  }
  *(float *)(this + 3632) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                              dword_106B31E4,
                              5.0,
                              10.0)
                          + *(float *)(dword_106B31C8 + 12);
}

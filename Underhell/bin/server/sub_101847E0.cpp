void __thiscall sub_101847E0(int this)
{
  _DWORD *v2; // eax
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st5
  float v7; // [esp+0h] [ebp-18h]
  float v8; // [esp+4h] [ebp-14h]
  float v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v7, 0);
  v2 = (_DWORD *)sub_10261B20();
  if ( v2 && (v2[64] & 0x8000) == 0 )
  {
    (*(void (__thiscall **)(_DWORD *, float *))(*v2 + 504))(v2, v9);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = v9[0] - *(float *)(this + 580);
    v4 = v3 * v3;
    v5 = v9[1] - *(float *)(this + 584);
    v6 = v9[2] - *(float *)(this + 588);
    v8 = v6 * v6 + v5 * v5 + v4;
    *(_BYTE *)(this + 808) = (double)*(int *)(this + 800) >= off_10689708(v8);
  }
}

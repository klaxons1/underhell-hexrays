char __thiscall sub_10341420(int this, int a2)
{
  double v4; // st4
  double v5; // st7
  double v6; // st4
  double v7; // st5
  double v8; // st7
  int *v9; // ecx
  float v10; // [esp+Ch] [ebp-Ch]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  if ( *(int *)(this + 4268) < 1 || *(float *)(this + 4216) > (double)*(float *)(dword_106B31C8 + 12) )
    return 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(float *)a2 - *(float *)(this + 580);
  v5 = v4 * v4;
  v6 = *(float *)(a2 + 4) - *(float *)(this + 584);
  v7 = *(float *)(a2 + 8) - *(float *)(this + 588);
  v10 = v7 * v7 + v6 * v6 + v5;
  v8 = off_10689708(v10);
  if ( v8 > 1024.0 || v8 < 128.0 )
  {
    *(float *)(this + 4216) = *(float *)(dword_106B31C8 + 12) + 1.0;
    return 0;
  }
  if ( 0.0 != *(float *)(this + 800) )
    return 0;
  v9 = *(int **)(this + 2796);
  if ( !v9 || !sub_100B1280(v9, (float *)a2, 250.0) )
    return sub_1033FB50((float *)this, (int)&savedregs, a2, this, (int *)a2);
  *(float *)(this + 4216) = *(float *)(dword_106B31C8 + 12) + 1.0;
  sub_1023D4B0(8392704, (float *)a2, 250, 0.1, 0, 0, 0);
  return 0;
}

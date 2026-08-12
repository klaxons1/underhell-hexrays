int __thiscall sub_103ABE20(int this)
{
  float v2; // edx
  float v3; // eax
  double v4; // st6
  double v5; // st7
  int result; // eax
  int (__thiscall *v7)(int); // edx
  int v8; // eax
  double v9; // st7
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  long double v15; // st7
  float v16; // [esp+0h] [ebp-34h]
  float v17[3]; // [esp+Ch] [ebp-28h] BYREF
  float v18; // [esp+18h] [ebp-1Ch]
  float v19; // [esp+1Ch] [ebp-18h]
  float v20; // [esp+20h] [ebp-14h]
  float v21; // [esp+24h] [ebp-10h]
  float v22; // [esp+28h] [ebp-Ch]
  float v23; // [esp+2Ch] [ebp-8h]
  float v24; // [esp+30h] [ebp-4h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = *(float *)(this + 584);
  v3 = *(float *)(this + 588);
  v18 = *(float *)(this + 580);
  v19 = v2;
  v20 = v3;
  sub_100BD6D0((void *)this, 1, (int)v17, 0, 0, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = v17[1] - *(float *)(this + 584) + v19;
  v5 = v17[2] - *(float *)(this + 588) + v20;
  v21 = *(float *)(this + 3684) - (v17[0] - *(float *)(this + 580) + v18);
  v22 = *(float *)(this + 3688) - v4;
  v23 = *(float *)(this + 3692) - v5;
  off_10689714();
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( result )
  {
    v7 = *(int (__thiscall **)(int))(*(_DWORD *)this + 368);
    v24 = 0.94999999;
    v8 = v7(this);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 220))(v8) == 6 )
      v9 = 0.80000001;
    else
      v9 = v24;
    *(float *)(this + 3672) = v21 * (1.0 - v9) + *(float *)(this + 3672) * v9;
    *(float *)(this + 3676) = v22 * (1.0 - v9) + v9 * *(float *)(this + 3676);
    *(float *)(this + 3680) = v9 * *(float *)(this + 3680) + (1.0 - v9) * v23;
    off_10689714();
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v10 = *(float *)(this + 584) - *(float *)(this + 3688);
    v11 = v10 * v10;
    v12 = *(float *)(this + 580) - *(float *)(this + 3684);
    v13 = v11;
    v14 = *(float *)(this + 588) - *(float *)(this + 3692);
    v16 = v12 * v12 + v13 + v14 * v14;
    v15 = atan2(0.2 / off_10689708(v16), 1.0) * 5.0;
    *(float *)(this + 3672) = sin((*(float *)(dword_106B31C8 + 12) + 1.0) * 5.0) * v15 + *(float *)(this + 3672);
    result = dword_106B31C8;
    *(float *)(this + 3676) = sin((*(float *)(dword_106B31C8 + 12) + 1.0) * 5.0) * v15 + *(float *)(this + 3676);
    *(float *)(this + 3680) = v15 * sin(5.0 * (*(float *)(dword_106B31C8 + 12) + 1.0)) + *(float *)(this + 3680);
  }
  return result;
}

void __thiscall sub_103C5D80(int this)
{
  void (__thiscall *v2)(int); // edx
  int *v3; // eax
  unsigned int v4; // eax
  int v5; // edx
  double v6; // st6
  double v7; // st7
  float v8[3]; // [esp+14h] [ebp-18h] BYREF
  int v9; // [esp+20h] [ebp-Ch] BYREF
  float v10; // [esp+24h] [ebp-8h]
  float v11; // [esp+28h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_10264670((_DWORD *)this, "models/combine_turrets/ground_turret.mdl");
  sub_100223F0(2);
  sub_10112C00(this + 320, 6);
  sub_100CF450((_DWORD *)this, -1);
  if ( *(_DWORD *)(this + 220) != 125 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = 125;
  }
  *(_DWORD *)(this + 2324) = 0;
  *(float *)(this + 1684) = cos(0.5235987755982988);
  *(float *)(this + 3668) = 0.5;
  *(float *)(this + 3672) = 0.5;
  *(float *)(this + 3676) = 0.5;
  sub_100204A0((_DWORD *)this);
  v2 = *(void (__thiscall **)(int))(*(_DWORD *)this + 1164);
  *(_DWORD *)(this + 252) |= 0x8000000u;
  v2(this);
  sub_10020460((_DWORD *)this, 0x80000000);
  v3 = sub_102D9B20();
  *(_DWORD *)(this + 3648) = sub_100B9D10(v3, "PISTOL");
  *(_DWORD *)(this + 3652) = 0;
  *(_BYTE *)(this + 3680) = 0;
  *(_BYTE *)(this + 3656) = 0;
  if ( *(_DWORD *)(dword_106EBDC4 + 48) )
  {
    *(float *)(this + 3688) = 384.0;
    sub_1001FBB0((_DWORD *)this, 384.0);
  }
  else
  {
    *(float *)(this + 3688) = 2048.0;
  }
  v4 = *(_DWORD *)(this + 300);
  if ( v4 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 2] == v4 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 300) & 0xFFF) + 1] )
  {
    v5 = *(_DWORD *)(this + 252);
    *(float *)(this + 3660) = *(float *)(dword_106B31C8 + 12);
    *(float *)(this + 3696) = *(float *)(dword_106B31C8 + 12);
    if ( (v5 & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)(this + 3700) = *(float *)(this + 580);
    *(float *)(this + 3704) = *(float *)(this + 584);
    *(float *)(this + 3708) = *(float *)(this + 588);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
    sub_100BF1B0((void *)this, "eyes", (int)&v9, 0, 0, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v8[0] = *(float *)&v9 - *(float *)(this + 580);
    v8[1] = v10 - *(float *)(this + 584);
    v8[2] = v11 - *(float *)(this + 588);
    sub_100DC4E0((float *)this, v8);
    sub_100BF1B0((void *)this, "light", (int)&v9, 0, 0, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = v10 - *(float *)(this + 584);
    v7 = v11 - *(float *)(this + 588);
    *(float *)(this + 3712) = *(float *)&v9 - *(float *)(this + 580);
    *(float *)(this + 3716) = v6;
    *(float *)(this + 3720) = v7;
  }
  else
  {
    DevMsg("ERROR! npc_ground_turret with no parent!\n");
    sub_1025FAC0(this);
  }
}

bool __thiscall sub_103C58A0(float *this, int a2, char a3)
{
  float *v4; // eax
  double v5; // st4
  double v6; // st7
  double v7; // st4
  _BYTE v9[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  v4 = (float *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 504))(this, v9);
  v5 = *(float *)(a2 + 580) - *v4;
  v6 = v5 * v5;
  v7 = *(float *)(a2 + 584) - v4[1];
  return v7 * v7 + v6 <= this[922] * this[922] && sub_1001FBD0(this, a2, a3);
}

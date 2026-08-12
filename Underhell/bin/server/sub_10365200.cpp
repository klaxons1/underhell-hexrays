char __thiscall sub_10365200(int this, int a2)
{
  double v3; // st4
  double v4; // st7
  double v5; // st4
  double v6; // st5
  double v7; // st7
  float v9; // eax
  float v10; // edx
  int v11; // eax
  int v12; // eax
  float v13; // [esp+0h] [ebp-78h]
  _BYTE v14[44]; // [esp+Ch] [ebp-6Ch] BYREF
  float v15; // [esp+38h] [ebp-40h]
  int v16; // [esp+58h] [ebp-20h]
  float v17[3]; // [esp+60h] [ebp-18h] BYREF
  float v18[3]; // [esp+6Ch] [ebp-Ch] BYREF

  if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
    sub_100DAE60(a2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = *(float *)(this + 580) - *(float *)(a2 + 580);
  v4 = v3 * v3;
  v5 = *(float *)(this + 584) - *(float *)(a2 + 584);
  v6 = *(float *)(this + 588) - *(float *)(a2 + 588);
  v13 = v6 * v6 + v5 * v5 + v4;
  v7 = off_10689708(v13);
  if ( v7 < *(float *)(this + 3624) )
    return 0;
  if ( 0.0 != *(float *)(this + 3628) && v7 > *(float *)(this + 3628) )
    return 0;
  if ( (*(_DWORD *)(this + 248) & 0x10000) != 0 && !sub_100AB270(*(_DWORD ***)(this + 2404), a2) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v9 = *(float *)(this + 580);
    v10 = *(float *)(this + 588);
    v18[1] = *(float *)(this + 584);
    v18[0] = v9;
    v11 = *(_DWORD *)a2;
    v18[2] = v10;
    (*(void (__thiscall **)(int, float *))(v11 + 504))(a2, v17);
    sub_10030570(this, v18, v17, this, (int)v14, 0);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2)
      || (v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1096))(a2), v16 != v12) )
    {
      if ( 1.0 != v15 && v16 != a2 )
        return 0;
    }
  }
  return 1;
}

void __thiscall sub_100FBF80(float *this, int a2)
{
  double v3; // st7
  _DWORD *v4; // eax
  float *v5; // eax
  double v6; // st7
  float v7; // [esp+0h] [ebp-70h]
  float v8; // [esp+8h] [ebp-68h]
  float v9; // [esp+64h] [ebp-Ch] BYREF
  float v10; // [esp+68h] [ebp-8h]
  float v11; // [esp+6Ch] [ebp-4h]

  if ( *(_BYTE *)(a2 + 225) )
  {
    v8 = this[123] * this[123] + this[122] * this[122] + this[124] * this[124];
    v3 = off_10689708(v8) * 0.1;
    this[208] = v3;
    v7 = v3;
    v4 = (_DWORD *)sub_10248110((int)this, (int)this, v7, 1, 0);
    sub_100D9E70((int *)a2, (int)this, v4);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    v5 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
    v9 = *(float *)(a2 + 580) - *v5;
    v10 = *(float *)(a2 + 584) - v5[1];
    v11 = *(float *)(a2 + 588) - v5[2];
    off_10689714();
    v6 = this[208];
    v9 = v9 * v6;
    v10 = v10 * v6;
    v11 = v6 * v11;
    sub_100DD660(a2, &v9);
  }
}

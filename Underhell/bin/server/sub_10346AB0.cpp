int __thiscall sub_10346AB0(float *this)
{
  int v3; // edi
  double v4; // st4
  double v5; // st7
  double v6; // st4
  double v7; // st5
  int (__thiscall *v8)(float *, int, int, _DWORD); // edx
  char v9; // al
  float v10; // [esp+0h] [ebp-10h]
  float v11; // [esp+Ch] [ebp-4h]

  if ( ((_DWORD)this[62] & 0x40) != 0 )
    return 0;
  sub_100AC080(*((_DWORD *)this + 601), *((_DWORD *)this + 908));
  v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1480))(this);
  if ( !v3 )
    return 0;
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
    sub_100DAE60(v3);
  v4 = *(float *)(v3 + 580) - this[145];
  v5 = v4 * v4;
  v6 = *(float *)(v3 + 584) - this[146];
  v7 = *(float *)(v3 + 588) - this[147];
  v10 = v7 * v7 + v6 * v6 + v5;
  if ( (double)*((int *)this + 908) <= off_10689708(v10) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(float *, int))(*(_DWORD *)this + 876))(this, v3)
    && (v8 = *(int (__thiscall **)(float *, int, int, _DWORD))(*(_DWORD *)this + 548),
        v11 = this[421],
        this[421] = 0.70700002,
        v9 = v8(this, v3, 16449, 0),
        this[421] = v11,
        v9) )
  {
    return v3;
  }
  else
  {
    return 0;
  }
}

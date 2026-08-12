void __thiscall sub_10383E30(int this)
{
  double v2; // st7
  float *v3; // ebx
  int v4; // ecx
  double v5; // st5
  double v6; // st7
  _BYTE v7[44]; // [esp+4h] [ebp-68h] BYREF
  float v8; // [esp+30h] [ebp-3Ch]
  float v9[3]; // [esp+58h] [ebp-14h] BYREF
  float v10; // [esp+64h] [ebp-8h]
  float *v11; // [esp+68h] [ebp-4h]
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF

  v2 = *(float *)(this + 3632);
  v10 = *(float *)(this + 3632);
  if ( v2 <= 32.0 )
  {
    v3 = (float *)sub_10073730(*(_DWORD *)(this + 1676));
    v11 = (float *)sub_10073710(*(_DWORD *)(this + 1676));
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = *(_DWORD *)(this + 252);
    v9[0] = *(float *)(this + 580);
    v9[1] = *(float *)(this + 584);
    v9[2] = *(float *)(this + 588) - 52.0;
    if ( (v4 & 0x800) != 0 )
      sub_100DAE60(this);
    sub_100231A0((int)&savedregs, this, (float *)(this + 580), v9, v11, v3, 147467, this, 0, (int)v7);
    if ( 1.0 != v8 )
    {
      v5 = v10 * -0.5;
      if ( v5 < 16.0 )
        v5 = 16.0;
      v6 = (1.0 - v8) * v5;
      *(float *)(this + 3740) = 0.0 * v6 + *(float *)(this + 3740);
      *(float *)(this + 3744) = 0.0 * v6 + *(float *)(this + 3744);
      *(float *)(this + 3748) = v6 + *(float *)(this + 3748);
    }
  }
}

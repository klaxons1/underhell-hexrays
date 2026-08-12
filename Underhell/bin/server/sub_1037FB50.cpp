BOOL __thiscall sub_1037FB50(int this)
{
  double v2; // st6
  double v3; // st7
  float *v4; // ebx
  float *v5; // eax
  int v6; // ecx
  int v8; // [esp-4h] [ebp-74h]
  _BYTE v9[44]; // [esp+Ch] [ebp-64h] BYREF
  float v10; // [esp+38h] [ebp-38h]
  float v11[3]; // [esp+60h] [ebp-10h] BYREF
  float *v12; // [esp+6Ch] [ebp-4h]
  int savedregs; // [esp+70h] [ebp+0h] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = *(float *)(this + 584);
  v8 = *(_DWORD *)(this + 1676);
  v3 = *(float *)(this + 588) - 8.0;
  v11[0] = *(float *)(this + 580);
  v11[1] = v2;
  v11[2] = v3;
  v4 = (float *)sub_10073730(v8);
  v5 = (float *)sub_10073710(*(_DWORD *)(this + 1676));
  v6 = *(_DWORD *)(this + 252) >> 11;
  v12 = v5;
  if ( (v6 & 1) != 0 )
    sub_100DAE60(this);
  sub_100231A0((int)&savedregs, this, (float *)(this + 580), v11, v12, v4, 33701899, this, 0, (int)v9);
  return v10 < 1.0;
}

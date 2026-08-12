void __thiscall sub_10259930(int this)
{
  int v2; // edi
  _BYTE v3[12]; // [esp+8h] [ebp-18h] BYREF
  float v4[3]; // [esp+14h] [ebp-Ch] BYREF

  v4[0] = *(float *)(this + 1092);
  v2 = this + 1092;
  v4[1] = *(float *)(this + 1096);
  v4[2] = *(float *)(this + 1100);
  sub_10422220(v4, v3);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10421C60(v3, this + 500, v2);
  sub_102586B0(this);
  sub_102575A0(this);
  if ( 0.0 == *(float *)(this + 108) )
    *(float *)(this + 108) = 100.0;
}

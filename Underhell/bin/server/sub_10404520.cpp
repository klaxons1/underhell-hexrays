float *__thiscall sub_10404520(int this, float *a2)
{
  float *result; // eax
  float v4; // [esp+4h] [ebp-Ch]
  float v5; // [esp+8h] [ebp-8h]
  float v6; // [esp+Ch] [ebp-4h]

  v4 = *(float *)(this + 880) * 10.0;
  v5 = *(float *)(this + 884) * 10.0;
  v6 = 10.0 * *(float *)(this + 888);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  result = a2;
  *a2 = *(float *)(this + 580) - v4;
  a2[1] = *(float *)(this + 584) - v5;
  a2[2] = *(float *)(this + 588) - v6;
  return result;
}

int __thiscall sub_10145270(float *this, float a2, float *a3)
{
  int result; // eax
  float v5; // [esp+10h] [ebp-8h]

  v5 = sub_10134630(a2, a3[157], a3[158], a3[155], a3[156]) * *(float *)(dword_106B31C8 + 16);
  result = sub_10424B10(0.0, this[4], v5);
  this[4] = 0.0;
  return result;
}

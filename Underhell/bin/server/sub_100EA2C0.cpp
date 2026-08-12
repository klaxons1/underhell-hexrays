float *__thiscall sub_100EA2C0(int this)
{
  float *v2; // edi
  float *v3; // eax

  v2 = (float *)sub_10022D70();
  v3 = (float *)sub_10022D70();
  *v3 = (*(float *)(this + 20) - *(float *)(this + 8)) * 0.5 + *(float *)(this + 8);
  v3[1] = (*(float *)(this + 24) - *(float *)(this + 12)) * 0.5 + *(float *)(this + 12);
  v3[2] = 0.5 * (*(float *)(this + 28) - *(float *)(this + 16)) + *(float *)(this + 16);
  sub_100E8D90((_BYTE *)this, v3, v2);
  return v2;
}

_BYTE *__thiscall sub_10143850(unsigned __int8 *this, _BYTE *a2, float a3)
{
  double v3; // st7
  int v4; // ecx
  int v6; // [esp+10h] [ebp+Ch]

  v3 = a3;
  *a2 = (int)((double)*this * a3);
  a2[1] = (int)((double)this[1] * a3);
  v6 = this[2];
  v4 = this[3];
  a2[2] = (int)((double)v6 * v3);
  a2[3] = (int)(v3 * (double)v4);
  return a2;
}

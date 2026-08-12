int __thiscall sub_10112A40(int this, float *a2, float *a3)
{
  int result; // eax
  double v5; // st7
  double v6; // st4
  double v7; // st5
  float v8; // [esp+0h] [ebp-1Ch]

  if ( *(float *)(this + 8) != *a2
    || *(float *)(this + 12) != a2[1]
    || *(float *)(this + 16) != a2[2]
    || (result = sub_101110B0((float *)(this + 20), a3), !(_BYTE)result) )
  {
    sub_10111260((float *)(this + 8), a2);
    sub_101112C0((float *)(this + 20), a3);
    v5 = *a3 - *a2;
    v6 = a3[1] - a2[1];
    v7 = a3[2] - a2[2];
    v8 = v7 * v7 + v6 * v6 + v5 * v5;
    *(float *)(this + 32) = off_10689708(v8) * 0.5;
    return sub_101126F0((int *)this);
  }
  return result;
}

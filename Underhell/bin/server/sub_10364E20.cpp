int __thiscall sub_10364E20(int this)
{
  double v2; // st7

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3772) )
    v2 = *(float *)(this + 3768);
  else
    v2 = -0.5;
  *(float *)(this + 1684) = v2;
  sub_100B9150(this + 3632);
  return sub_100397D0((int *)this);
}

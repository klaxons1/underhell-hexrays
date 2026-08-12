int __thiscall sub_101AF510(float *this, float a2)
{
  float v3; // edx
  int (__thiscall *v4)(float *, int); // eax
  double v5; // st7

  sub_101AF410(this, 0);
  v3 = *this;
  this[85] = a2;
  this[75] = 0.0;
  v4 = *(int (__thiscall **)(float *, int))(LODWORD(v3) + 44);
  v5 = *((float *)off_103DC81C + 3) + 5.0;
  this[77] = 0.0;
  this[73] = v5;
  return v4(this, 1);
}

int (__thiscall *__thiscall sub_10206F20(int this))(int)
{
  int (__thiscall *result)(int); // eax

  sub_100E11A0(this, (float *)(this + 1992));
  sub_100D7260((float *)this, &flt_106F1CB4);
  sub_100D8290((float *)this, -1.0);
  result = *(int (__thiscall **)(int))(this + 4);
  if ( result )
    return (int (__thiscall *)(int))result(this);
  return result;
}

float *__thiscall sub_101CB230(char *this, float *a2)
{
  float *result; // eax

  if ( sub_101CB160(this - 1120, "onlaunch", "spin_zaxis") )
  {
    result = a2;
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  else
  {
    sub_100F2EC0(a2);
    return a2;
  }
  return result;
}

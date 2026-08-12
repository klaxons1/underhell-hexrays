int __thiscall sub_10065CD0(float *this, int a2, int a3)
{
  const char *v5; // eax
  int result; // eax
  float v7; // [esp+18h] [ebp+Ch]

  v5 = (const char *)sub_101E1B90(a3);
  v7 = atof(v5);
  if ( sub_101E21A0(a3) != -1 )
  {
    result = sub_101E2180(a3);
    if ( result <= 0 )
      return result;
    sub_101E2190(result - 1);
  }
  result = sub_101E6420(v7);
  this[300] = v7;
  this[301] = v7;
  return result;
}

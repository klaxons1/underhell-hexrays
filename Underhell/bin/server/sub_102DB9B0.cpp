char *__thiscall sub_102DB9B0(float *this, int a2)
{
  char *result; // eax

  sub_101E73F0(this, a2);
  result = (char *)sub_101679A0((int)"gordon_precriminal");
  if ( result == (char *)-1 )
    return sub_10067DE0(a2, "gordon_precriminal", "0", 1.0);
  return result;
}

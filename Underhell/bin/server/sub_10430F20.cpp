bool __thiscall sub_10430F20(const char **this, const char *a2)
{
  const char *v2; // eax

  v2 = String;
  if ( this[3] )
    v2 = *this;
  return strcmp(v2, a2) == 0;
}

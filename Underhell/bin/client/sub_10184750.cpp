bool __thiscall sub_10184750(const char *this, const char *a2, const char *a3)
{
  if ( !a2 || !a3 )
    return 1;
  if ( !strcmp(a2, "team") )
    return strcmp(this + 404, a3) == 0;
  if ( !strcmp(a2, "map") )
    return sub_10001000(this + 408, a3) == 0;
  return 1;
}

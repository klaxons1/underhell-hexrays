char **__thiscall sub_10431100(char **this, char *Src)
{
  if ( Src )
    sub_10430FA0(this, Src, strlen(Src) + 1);
  else
    sub_10430FA0(this, 0, 0);
  return this;
}

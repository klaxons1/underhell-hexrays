char **__thiscall sub_1022D0A0(char **this, char *Src)
{
  if ( Src )
    sub_1022CF40(this, Src, strlen(Src) + 1);
  else
    sub_1022CF40(this, 0, 0);
  return this;
}

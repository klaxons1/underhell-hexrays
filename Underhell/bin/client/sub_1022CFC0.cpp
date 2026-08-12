char *__thiscall sub_1022CFC0(char **this, char *Src)
{
  if ( Src )
    return sub_1022CF40(this, Src, strlen(Src) + 1);
  else
    return sub_1022CF40(this, 0, 0);
}

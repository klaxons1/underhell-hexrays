char *__thiscall sub_100221D0(int *this, int *a2)
{
  char **v3; // ecx
  char *v4; // eax

  v3 = (char **)(a2 + 2);
  if ( a2[6] == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      return sub_10020B90(this, (char *)String, *a2);
  }
  else
  {
    v4 = (char *)sub_1010D460(v3);
  }
  return sub_10020B90(this, v4, *a2);
}

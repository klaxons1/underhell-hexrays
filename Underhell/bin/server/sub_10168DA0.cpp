_DWORD *__thiscall sub_10168DA0(int this)
{
  char *v2; // eax

  sub_100E38F0((float *)this);
  v2 = *(char **)(this + 212);
  if ( !v2 )
    v2 = (char *)String;
  return sub_10168C60((_DWORD *)this, v2);
}

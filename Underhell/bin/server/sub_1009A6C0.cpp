const char *__thiscall sub_1009A6C0(int this)
{
  __int16 v1; // ax

  v1 = *(_WORD *)(this + 9);
  if ( v1 == -1 )
    return String;
  else
    return (const char *)sub_1042EE50(v1);
}

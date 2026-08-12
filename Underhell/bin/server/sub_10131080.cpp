char *__thiscall sub_10131080(int this)
{
  char *result; // eax
  const char *v3; // eax

  result = sub_100E38F0((float *)this);
  if ( *(_DWORD *)(this + 868) )
  {
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
      return (char *)sub_10130A30(
                       this,
                       flt_10689730,
                       flt_10689734,
                       flt_10689738,
                       flt_106F1CB4,
                       flt_106F1CB8,
                       flt_106F1CBC);
  }
  else
  {
    v3 = *(const char **)(this + 260);
    if ( !v3 )
      v3 = String;
    Warning("env_entity_maker %s has no template entity!\n", v3);
    return (char *)sub_1025FAC0(this);
  }
  return result;
}

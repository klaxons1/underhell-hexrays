int __thiscall sub_100374A0(_DWORD *this, char *String2)
{
  int v3; // eax
  const char *v5; // eax

  v3 = sub_100BDF40(String2);
  if ( v3 > -1 )
    return sub_10033840((int)this, v3);
  v5 = (const char *)this[23];
  if ( !v5 )
    v5 = String;
  DevWarning(2, "%s has no sequence to match request\n", v5);
  return sub_100C1170(0);
}

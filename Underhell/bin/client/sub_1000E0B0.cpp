const char *__thiscall sub_1000E0B0(_BYTE *this, int a2, int a3)
{
  char v3; // al
  const char *result; // eax

  v3 = this[116];
  if ( v3 == 4 )
    return Locale;
  if ( v3 && a3 == 71 )
    return "BulletProof";
  result = "ManhackCut";
  if ( a2 != 4 )
    return "Impact.Concrete";
  return result;
}

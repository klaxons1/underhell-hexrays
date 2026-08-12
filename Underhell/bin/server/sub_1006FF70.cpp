int __cdecl sub_1006FF70(char *Source)
{
  int v1; // eax
  void *v3; // esp
  int v4; // ebx
  char v5[12]; // [esp+0h] [ebp-Ch] BYREF

  v1 = strlen(Source);
  if ( v1 <= 0 )
    return 0;
  v3 = alloca(v1 + 1);
  sub_104299C0(v5, Source, v1 + 1);
  _strlwr(v5);
  if ( strstr("none", v5) )
    return 0;
  v4 = strstr("visible", v5) != 0;
  if ( strstr("nearest", v5) )
    v4 |= 2u;
  if ( strstr("random", v5) )
    v4 |= 4u;
  if ( (v4 & 2) != 0 && (v4 & 4) != 0 )
  {
    v4 &= ~4u;
    DevMsg(
      "HINTFLAGS:%s, inconsistent, the nearest node is never a random hint node, treating as nearest request!\n",
      Source);
  }
  return v4;
}

char __thiscall sub_101851D0(void *this, char *a2)
{
  int v3; // esi
  int v4; // eax
  char result; // al
  char v6; // bl

  if ( sub_10229D00(32) )
    v3 = sub_10229D20(a2);
  else
    v3 = 0;
  if ( dword_1047C968 )
    v4 = dword_1047C968 + 4;
  else
    v4 = 0;
  result = sub_10229D70(v4, a2, "GAME");
  if ( result )
  {
    v6 = sub_10185100((int)this, v3);
    sub_1022AF00(v3);
    return v6;
  }
  return result;
}

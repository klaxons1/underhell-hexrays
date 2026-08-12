char **sub_102C78D0()
{
  char **result; // eax
  int v1; // edx
  char v2; // cl

  sub_1022E210((char *)dword_1047A4D8, 92, "\"", 11, (int)&unk_103FC788);
  dword_1047A4D8[0] = (int)&CUtlCStringConversion::`vftable';
  memset(byte_1047ADE8, 0, 0xFFu);
  result = &off_103FC78C;
  do
  {
    v1 = **result;
    v2 = *((_BYTE *)result - 4);
    result += 2;
    byte_1047ADE8[v1] = v2;
  }
  while ( (int)result < (int)&off_103FC7E4 );
  return result;
}

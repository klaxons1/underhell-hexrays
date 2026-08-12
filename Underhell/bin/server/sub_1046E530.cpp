char **sub_1046E530()
{
  char **result; // eax
  int v1; // edx
  char v2; // cl

  sub_1042D000((char *)dword_106FE5A8, 92, "\"", 11, (int)&unk_1068E348);
  dword_106FE5A8[0] = (int)&CUtlCStringConversion::`vftable';
  memset(byte_106FEEB8, 0, 0xFFu);
  result = &off_1068E34C;
  do
  {
    v1 = **result;
    v2 = *((_BYTE *)result - 4);
    result += 2;
    byte_106FEEB8[v1] = v2;
  }
  while ( (int)result < (int)&off_1068E3A4 );
  return result;
}

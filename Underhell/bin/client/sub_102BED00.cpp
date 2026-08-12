int sub_102BED00()
{
  int result; // eax

  if ( (dword_1043CCC4 & 1) == 0 )
  {
    dword_1043CCC4 |= 1u;
    sub_1009AED0((int)&unk_1043CC88, (int)"should_never_see_this", 0, 4, 0, 0);
  }
  result = sub_1009AC10(dword_1043CC70, (int)&dword_1043CCC4, 0, (int)"DT_BaseTempEntity");
  dword_1043CC84 = 1;
  return result;
}

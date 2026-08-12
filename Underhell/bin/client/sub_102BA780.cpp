int sub_102BA780()
{
  int result; // eax

  if ( (dword_10435784 & 1) == 0 )
  {
    dword_10435784 |= 1u;
    sub_1009AED0((int)&unk_10435748, (int)"should_never_see_this", 0, 4, 0, 0);
  }
  result = sub_1009AC10(dword_104357E4, (int)&dword_10435784, 0, (int)"DT_ParticleProperty");
  dword_104357F8 = 1;
  return result;
}

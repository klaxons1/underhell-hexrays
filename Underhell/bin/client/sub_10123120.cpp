int *sub_10123120()
{
  if ( (dword_10437A1C & 1) == 0 )
  {
    dword_10437A1C |= 1u;
    dword_10437A00 = (int)"CSoundEnvelope";
    dword_10437A08 = 0;
    dword_10437A0C = 0;
    dword_10437A10 = 0;
    dword_10437A14 = 0;
    dword_10437A18 = 0;
    dword_10437A04 = 14;
    atexit(sub_102CB860);
  }
  dword_103E5704 = 0;
  dword_103E56FC = 4;
  dword_103E56F8 = (int)&unk_103E58BC;
  return &dword_103E56F8;
}

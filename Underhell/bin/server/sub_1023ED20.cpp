int *sub_1023ED20()
{
  if ( (dword_106C513C & 1) == 0 )
  {
    dword_106C513C |= 1u;
    dword_106C5120 = (int)"CSoundEnvelope";
    dword_106C5128 = 0;
    dword_106C512C = 0;
    dword_106C5130 = 0;
    dword_106C5134 = 0;
    dword_106C5138 = 0;
    dword_106C5124 = 14;
    atexit(sub_10474090);
  }
  dword_1064CA2C = 0;
  dword_1064CA24 = 4;
  dword_1064CA20 = (int)&unk_1064CBBC;
  return &dword_1064CA20;
}

int *sub_10125690()
{
  if ( (dword_1043815C & 1) == 0 )
  {
    dword_1043815C |= 1u;
    dword_10438140 = (int)"C_SpriteTrail";
    dword_10438148 = 0;
    dword_1043814C = 0;
    dword_10438150 = 0;
    dword_10438154 = 0;
    dword_10438158 = 0;
    dword_10438144 = 13;
    atexit(sub_102CB900);
  }
  dword_103E63C4 = (int)&dword_103D8A64;
  dword_103E63BC = 18;
  dword_103E63B8 = (int)&unk_103E6564;
  return &dword_103E63B8;
}

int *sub_1000A100()
{
  if ( (dword_1040119C & 1) == 0 )
  {
    dword_1040119C |= 1u;
    dword_10401180 = (int)"CBaseAchievement";
    dword_10401188 = 0;
    dword_1040118C = 0;
    dword_10401190 = 0;
    dword_10401194 = 0;
    dword_10401198 = 0;
    dword_10401184 = 16;
    atexit(sub_102C8020);
  }
  dword_103D6464 = 0;
  dword_103D645C = 1;
  dword_103D6458 = (int)&unk_103D64CC;
  return &dword_103D6458;
}

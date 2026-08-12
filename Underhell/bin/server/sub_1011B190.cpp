int *sub_1011B190()
{
  if ( (dword_1069C4A0 & 1) == 0 )
  {
    dword_1069C4A0 |= 1u;
    dword_1069C484 = (int)"CTargetCDAudioRep";
    dword_1069C48C = 0;
    dword_1069C490 = 0;
    dword_1069C494 = 0;
    dword_1069C498 = 0;
    dword_1069C49C = 0;
    dword_1069C488 = 17;
    atexit(sub_10470770);
  }
  dword_10616588 = (int)&dword_1060F348;
  dword_10616580 = 2;
  dword_1061657C = (int)&unk_1061669C;
  return &dword_1061657C;
}

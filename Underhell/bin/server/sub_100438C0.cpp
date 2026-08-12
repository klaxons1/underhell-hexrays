int *sub_100438C0()
{
  if ( (dword_10691C44 & 1) == 0 )
  {
    dword_10691C44 |= 1u;
    dword_10691C28 = (int)"CAI_BasePhysicsFlyingBot";
    dword_10691C30 = 0;
    dword_10691C34 = 0;
    dword_10691C38 = 0;
    dword_10691C3C = 0;
    dword_10691C40 = 0;
    dword_10691C2C = 24;
    atexit(sub_1046EB70);
  }
  dword_10601B88 = (int)&dword_105FE114;
  if ( (dword_10691C44 & 2) == 0 )
  {
    dword_10691C44 |= 2u;
    dword_10601D30 = sub_101D3250(8);
    dword_10601D34 = 0;
    dword_10601D38 = 0;
    dword_10601D3C = 0;
    dword_10601D40 = 0;
    dword_10601D44 = 0;
    dword_10601D48 = 0;
  }
  dword_10601B80 = 6;
  dword_10601B7C = (int)&unk_10601C14;
  return &dword_10601B7C;
}

int *sub_10041030()
{
  if ( (dword_10691BA0 & 1) == 0 )
  {
    dword_10691BA0 |= 1u;
    dword_10691B84 = (int)"UnreachableEnt_t";
    dword_10691B8C = 0;
    dword_10691B90 = 0;
    dword_10691B94 = 0;
    dword_10691B98 = 0;
    dword_10691B9C = 0;
    dword_10691B88 = 16;
    atexit(sub_1046EAF0);
  }
  dword_105FE154 = 0;
  dword_105FE14C = 3;
  dword_105FE148 = (int)&unk_106013CC;
  return &dword_105FE148;
}

int *sub_10380C90()
{
  if ( (dword_106E99C8 & 1) == 0 )
  {
    dword_106E99C8 |= 1u;
    dword_106E99AC = (int)"CNPC_Ichthyosaur";
    dword_106E99B4 = 0;
    dword_106E99B8 = 0;
    dword_106E99BC = 0;
    dword_106E99C0 = 0;
    dword_106E99C4 = 0;
    dword_106E99B0 = 16;
    atexit(sub_104786F0);
  }
  dword_10675138 = (int)&dword_105FE114;
  dword_10675130 = 11;
  dword_1067512C = (int)&unk_10675214;
  return &dword_1067512C;
}

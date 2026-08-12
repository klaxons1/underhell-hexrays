int *sub_1035FB30()
{
  if ( (dword_106E7C40 & 1) == 0 )
  {
    dword_106E7C40 |= 1u;
    dword_106E7C24 = (int)"CNPC_Crow";
    dword_106E7C2C = 0;
    dword_106E7C30 = 0;
    dword_106E7C34 = 0;
    dword_106E7C38 = 0;
    dword_106E7C3C = 0;
    dword_106E7C28 = 9;
    atexit(sub_10478190);
  }
  dword_1067221C = (int)&dword_105FE114;
  dword_10672214 = 17;
  dword_10672210 = (int)&unk_10672304;
  return &dword_10672210;
}

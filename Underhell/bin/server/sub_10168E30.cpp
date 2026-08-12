int *sub_10168E30()
{
  if ( (dword_106B5120 & 1) == 0 )
  {
    dword_106B5120 |= 1u;
    dword_106B5104 = (int)"CFuncMonitor";
    dword_106B510C = 0;
    dword_106B5110 = 0;
    dword_106B5114 = 0;
    dword_106B5118 = 0;
    dword_106B511C = 0;
    dword_106B5108 = 12;
    atexit(sub_10471C20);
  }
  dword_10629094 = (int)&dword_10630E48;
  dword_1062908C = 2;
  dword_10629088 = (int)&unk_1062914C;
  return &dword_10629088;
}

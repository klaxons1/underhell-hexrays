int sub_102BAD80()
{
  sub_100D3600(dword_10435FE0, 0);
  dword_10435FE0[0] = (int)&CDataObjectAccessSystem::`vftable';
  memset(dword_10435FEC, 0, 0x80u);
  return atexit(sub_102CB220);
}

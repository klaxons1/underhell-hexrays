int sub_10182120()
{
  int result; // eax

  if ( (dword_104454A4 & 1) != 0 )
    return dword_104454A0;
  dword_104454A4 |= 1u;
  result = sub_10242540("CBaseViewport");
  dword_104454A0 = result;
  return result;
}

int sub_10182160()
{
  int result; // eax

  if ( (dword_104454AC & 1) != 0 )
    return dword_104454A8;
  dword_104454AC |= 1u;
  result = sub_10242580("CBaseViewport");
  dword_104454A8 = result;
  return result;
}

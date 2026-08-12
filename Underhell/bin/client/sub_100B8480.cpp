int sub_100B8480()
{
  int result; // eax

  if ( (dword_1042FC7C & 1) != 0 )
    return dword_1042FC78;
  dword_1042FC7C |= 1u;
  result = sub_10242580("CHUDAutoAim");
  dword_1042FC78 = result;
  return result;
}

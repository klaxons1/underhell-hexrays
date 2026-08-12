int sub_100CA220()
{
  int result; // eax

  if ( (dword_10430DFC & 1) != 0 )
    return dword_10430DF8;
  dword_10430DFC |= 1u;
  result = sub_10242580("CHudHintKeyDisplay");
  dword_10430DF8 = result;
  return result;
}

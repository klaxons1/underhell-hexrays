char __usercall sub_100E39D0@<al>(int *a1@<ebx>, int a2@<edi>)
{
  char result; // al
  char v3; // al

  result = byte_1060F3B0;
  if ( (byte_1060F3B0 & 0x10) != 0 )
  {
    v3 = byte_1060F3B0 & 0xEF;
    byte_1060F3B0 = v3;
    if ( (v3 & 8) != 0 )
    {
      sub_100E1720((int)&off_1060F368, a1, a2);
      return sub_100DDC70((int)&off_1060F36C);
    }
    else
    {
      if ( (v3 & 4) != 0 && !(unsigned __int8)sub_100D7910((char **)&off_1060F368) )
        sub_100DE390((int)&off_1060F368);
      return sub_100DDC70((int)&off_1060F36C);
    }
  }
  return result;
}

int __usercall sub_1026A2B0@<eax>(int a1@<eax>, int a2)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = *(_BYTE *)(a2 + 13) != 0 ? 19 : 13;
      break;
    case 1:
      result = 14;
      break;
    case 2:
      result = 15;
      break;
    case 3:
      result = 16;
      break;
    default:
      result = 17;
      break;
  }
  return result;
}

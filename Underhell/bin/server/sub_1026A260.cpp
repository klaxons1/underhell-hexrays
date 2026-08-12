int __usercall sub_1026A260@<eax>(int a1@<eax>, int a2)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = *(_BYTE *)(a2 + 13) != 0 ? 19 : 6;
      break;
    case 1:
      result = 7;
      break;
    case 2:
      result = 8;
      break;
    case 3:
      result = 9;
      break;
    default:
      result = 10;
      break;
  }
  return result;
}

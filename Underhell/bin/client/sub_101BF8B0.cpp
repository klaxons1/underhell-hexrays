int __usercall sub_101BF8B0@<eax>(int a1@<eax>)
{
  int result; // eax

  switch ( a1 )
  {
    case 14:
      result = 256;
      break;
    case 15:
      result = 512;
      break;
    case 20:
      result = 2;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

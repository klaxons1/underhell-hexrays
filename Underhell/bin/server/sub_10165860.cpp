int __usercall sub_10165860@<eax>(int a1@<ecx>, double a2@<st0>)
{
  int result; // eax

  switch ( *(_DWORD *)(a1 + 2324) )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 6:
    case 7:
      result = 55;
      break;
    case 4:
      result = sub_10092C60(a1, a2);
      break;
    default:
      DevWarning(2, "Invalid State for SelectSchedule!\n");
      result = 81;
      break;
  }
  return result;
}

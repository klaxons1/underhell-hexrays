int __cdecl sub_101C4480(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int result; // eax
  int v6; // eax

  switch ( a1 )
  {
    case 0:
    case 1:
      v4 = a4;
      if ( a4 )
        goto LABEL_3;
      result = 4 * a3 * a2;
      break;
    case 2:
    case 3:
      v4 = a4;
      if ( a4 )
        goto LABEL_3;
      result = 8 * a3 * a2;
      break;
    case 4:
      v4 = a4;
      if ( a4 )
LABEL_3:
        result = v4 * a3;
      else
        result = 16 * a3 * a2;
      break;
    default:
      v6 = sub_101C43A0(a1);
      result = sub_101C6710(v6, a2, a3);
      break;
  }
  return result;
}

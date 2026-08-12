int __cdecl sub_101C69B0(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  switch ( a1 )
  {
    case 1:
      if ( !sub_100DDA40(28) )
        goto LABEL_14;
      result = sub_101D5F50(a2, a3, a4, a5);
      break;
    case 2:
      if ( !sub_100DDA40(28) )
        goto LABEL_14;
      result = sub_101D5500(a2, a3, a4, a5);
      break;
    case 3:
      if ( !sub_100DDA40(28) )
        goto LABEL_14;
      result = sub_101D4DE0(a2, a3, a4, a5);
      break;
    case 4:
      if ( !sub_100DDA40(28) )
        goto LABEL_14;
      result = sub_101D46E0(a2, a3, a4, a5);
      break;
    case 5:
      if ( !sub_100DDA40(28) )
        goto LABEL_14;
      result = sub_101D3E70(a2, a3, a4, a5);
      break;
    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
    case 12:
      if ( !sub_100DDA40(48) )
        goto LABEL_14;
      result = sub_101D3C30(a1, a2, a3, a4, a5);
      break;
    default:
LABEL_14:
      result = 0;
      break;
  }
  return result;
}

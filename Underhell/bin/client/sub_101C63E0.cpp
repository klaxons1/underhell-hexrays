int __cdecl sub_101C63E0(int a1)
{
  int v1; // eax
  int result; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  switch ( a1 )
  {
    case 2:
      v1 = sub_100DDA40(44);
      if ( !v1 )
        goto LABEL_28;
      result = sub_101D3680(v1);
      break;
    case 3:
      v3 = sub_100DDA40(40);
      if ( !v3 )
        goto LABEL_28;
      result = sub_101D3300(v3);
      break;
    case 4:
      v4 = sub_100DDA40(40);
      if ( !v4 )
        goto LABEL_28;
      result = sub_101D2F80(v4);
      break;
    case 5:
      v5 = sub_100DDA40(40);
      if ( !v5 )
        goto LABEL_28;
      result = sub_101D2C40(v5);
      break;
    case 6:
      v6 = sub_100DDA40(40);
      if ( !v6 )
        goto LABEL_28;
      result = sub_101D2920(v6);
      break;
    case 7:
      v7 = sub_100DDA40(40);
      if ( !v7 )
        goto LABEL_28;
      result = sub_101D24E0(v7);
      break;
    case 8:
      v8 = sub_100DDA40(40);
      if ( !v8 )
        goto LABEL_28;
      result = sub_101D20A0(v8);
      break;
    case 9:
      v9 = sub_100DDA40(40);
      if ( !v9 )
        goto LABEL_28;
      result = sub_101D1D50(v9);
      break;
    case 10:
      v10 = sub_100DDA40(40);
      if ( !v10 )
        goto LABEL_28;
      result = sub_101D1A80(v10);
      break;
    case 11:
      if ( !sub_100DDA40(40) )
        goto LABEL_28;
      result = sub_101D1620(11);
      break;
    case 12:
      if ( !sub_100DDA40(40) )
        goto LABEL_28;
      result = sub_101D0FE0(12);
      break;
    case 13:
      if ( !sub_100DDA40(40) )
        goto LABEL_28;
      result = sub_101D0FE0(13);
      break;
    case 14:
      v11 = sub_100DDA40(40);
      if ( !v11 )
        goto LABEL_28;
      result = sub_101D0B00(v11);
      break;
    default:
LABEL_28:
      result = 0;
      break;
  }
  return result;
}

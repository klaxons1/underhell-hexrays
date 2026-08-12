int __thiscall sub_1032F1C0(_DWORD *this, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 17:
      if ( sub_10023D10(this, 75) && !sub_10023D10(this, 35) && sub_100697A0(this, 88, 0) )
        result = 75;
      else
        result = 88;
      break;
    case 41:
      result = 98;
      break;
    case 47:
      result = 97;
      break;
    case 90:
      if ( sub_1032EBA0((int)this) <= 80.0 )
        result = 90;
      else
        result = 89;
      break;
    default:
      result = sub_102FB410(this, a2);
      break;
  }
  return result;
}

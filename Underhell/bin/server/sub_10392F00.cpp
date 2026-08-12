int __thiscall sub_10392F00(float *this, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case '+':
      result = sub_10392D20(this) ? 68 : 91;
      break;
    case '2':
    case '3':
      result = sub_10392D20(this) ? 93 : 51;
      break;
    case 'E':
      result = 92;
      break;
    default:
      result = sub_100930C0(this, a2);
      break;
  }
  return result;
}

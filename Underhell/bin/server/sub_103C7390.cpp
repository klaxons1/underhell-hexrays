int __thiscall sub_103C7390(_DWORD *this, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 6:
      result = 106;
      break;
    case 28:
      result = sub_100C4E90(this, 137) ? 12 : 105;
      break;
    case 40:
    case 91:
      result = 12;
      break;
    case 43:
      result = sub_100C4E90(this, 137) ? 12 : 99;
      break;
    default:
      result = sub_10397E20((int)this, a2);
      break;
  }
  return result;
}

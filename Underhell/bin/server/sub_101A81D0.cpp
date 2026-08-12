int __thiscall sub_101A81D0(_DWORD *this, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 5:
      result = 9;
      break;
    case 12:
      result = (*(int (__thiscall **)(_DWORD *, int))(*this + 1248))(this, 17);
      break;
    case 18:
    case 81:
      result = 81;
      break;
    default:
      result = sub_10069910(this, a2);
      break;
  }
  return result;
}

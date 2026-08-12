int __thiscall sub_1035AC50(_DWORD *this, int a2)
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
    case 17:
      result = 95;
      break;
    case 71:
      result = 94;
      break;
    default:
      result = sub_101A81D0(this, a2);
      break;
  }
  return result;
}

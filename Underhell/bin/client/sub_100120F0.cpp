int __thiscall sub_100120F0(void *this, int a2, int a3, int a4)
{
  int result; // eax

  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 844))(this) - 1;
  switch ( result )
  {
    case 0:
      result = (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 1052))(this, a2, a3, a4);
      break;
    case 1:
      result = (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 1060))(this, a2, a3, a4);
      break;
    case 2:
    case 5:
      result = (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 1056))(this, a2, a3, a4);
      break;
    case 3:
      result = (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 1048))(this, a2, a3, a4);
      break;
    case 4:
      result = (*(int (__thiscall **)(void *, int, int, int))(*(_DWORD *)this + 1044))(this, a2, a3, a4);
      break;
    default:
      return result;
  }
  return result;
}

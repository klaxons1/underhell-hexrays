char *__thiscall sub_10350810(int this)
{
  char *result; // eax

  result = sub_100B6DE0((_DWORD *)this);
  if ( *(_DWORD *)(this + 4216) )
    return (char *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4216) + 4))(
                     *(_DWORD *)(this + 4216),
                     this + 4220);
  return result;
}

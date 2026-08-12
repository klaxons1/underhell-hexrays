int __thiscall sub_10188C20(int this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 == *(_DWORD *)(this + 468) )
    return (*(int (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 464) + 4))(
             *(_DWORD *)(this + 464),
             this + 428,
             0);
  return result;
}

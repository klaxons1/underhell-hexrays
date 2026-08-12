int __thiscall sub_10285910(_DWORD *this, int (__thiscall ***a2)(_DWORD))
{
  int v3; // ebx
  int result; // eax
  int v5; // eax

  if ( a2 )
    v3 = (**a2)(a2);
  else
    v3 = 0;
  result = sub_10237CC0(this + 1);
  if ( v3 != result )
  {
    sub_10237CE0(this + 1, v3);
    v5 = sub_10237CC0(this + 1);
    return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 40))(this, v5, 1);
  }
  return result;
}

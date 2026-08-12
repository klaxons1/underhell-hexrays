int __thiscall sub_100422E0(void *this, int a2)
{
  int result; // eax

  sub_10039310((int)this);
  result = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 788))(this);
  if ( result )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)result + 1316))(result, a2);
  return result;
}

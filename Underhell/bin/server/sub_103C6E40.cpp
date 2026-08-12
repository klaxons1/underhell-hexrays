int __thiscall sub_103C6E40(void *this, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 == 500 )
    return (*(int (__thiscall **)(void *, char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
             this,
             off_1067CE34[0],
             0,
             0,
             0,
             0);
  if ( a2 == 501 )
    return (*(int (__thiscall **)(void *, char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
             this,
             off_1067CE38,
             0,
             0,
             0,
             0);
  return result;
}

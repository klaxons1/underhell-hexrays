int __thiscall sub_1021D420(void *this, int a2, int a3, _DWORD *a4)
{
  int result; // eax

  if ( !a4[3] )
    return (*(int (__thiscall **)(void *, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)this + 24))(
             this,
             a4[2],
             a2,
             a3,
             *a4,
             a4[1]);
  result = sub_1021D420(a2, a3, a4[3]);
  if ( result )
    return (*(int (__thiscall **)(void *, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)this + 24))(
             this,
             a4[2],
             a2,
             a3,
             *a4,
             a4[1]);
  return result;
}

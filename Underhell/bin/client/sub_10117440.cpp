int __thiscall sub_10117440(void *this, int a2, int a3, _DWORD *a4)
{
  int result; // eax

  if ( !a4[3] )
    return (*(int (__thiscall **)(void *, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)this + 12))(
             this,
             a4[2],
             a2,
             a3,
             *a4,
             a4[1]);
  result = sub_10117440(a2, a3, a4[3]);
  if ( result )
    return (*(int (__thiscall **)(void *, _DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)this + 12))(
             this,
             a4[2],
             a2,
             a3,
             *a4,
             a4[1]);
  return result;
}

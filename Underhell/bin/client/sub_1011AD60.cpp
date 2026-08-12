int __thiscall sub_1011AD60(void *this, int a2, _DWORD *a3)
{
  int result; // eax

  if ( !a3[3] )
    return (*(int (__thiscall **)(void *, _DWORD, int, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)this + 12))(
             this,
             a3[2],
             a2,
             a3,
             *a3,
             a3[1]);
  result = sub_10117440(this, a2, (int)a3, (_DWORD *)a3[3]);
  if ( result )
    return (*(int (__thiscall **)(void *, _DWORD, int, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)this + 12))(
             this,
             a3[2],
             a2,
             a3,
             *a3,
             a3[1]);
  return result;
}

int __thiscall sub_102615D0(void *this, int a2, int a3, int a4, int a5, int a6)
{
  if ( (a6 & 1) == 0 || (a6 & 2) != 0 )
    return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int))(*(_DWORD *)this + 772))(
             this,
             a2,
             a3,
             a4,
             a5,
             20,
             10000,
             a6);
  else
    return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int))(*(_DWORD *)this + 772))(
             this,
             a2,
             a3,
             a4,
             a5,
             a5,
             a5,
             a6);
}

bool __thiscall sub_10074AD0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  return this[1]
      && (*(unsigned __int8 (__thiscall **)(_DWORD, int, int, int, int))(*(_DWORD *)this[1] + 32))(
           this[1],
           a2,
           a3,
           a4,
           a5);
}

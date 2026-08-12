bool __usercall sub_101B6BB0@<al>(_BYTE *a1@<edi>, int a2@<esi>)
{
  return a1[306] == 6
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2)
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a2 + 44))(a2, 1)
      && ((*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 40))(a2)
       || (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 340))(a1));
}

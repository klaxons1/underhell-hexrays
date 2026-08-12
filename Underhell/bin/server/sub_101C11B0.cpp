int __usercall sub_101C11B0@<eax>(int a1@<edi>, int a2@<esi>, int a3, int a4, int a5)
{
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 492))(a2) )
    return (*(int (__thiscall **)(int, int, int, int, int, int))(*(_DWORD *)dword_106B3CDC + 460))(
             dword_106B3CDC,
             a2,
             a3,
             a4,
             a5,
             a1);
  else
    return sub_102659D0(a2, a3, a4, a5, a1);
}

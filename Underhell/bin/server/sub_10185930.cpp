int __usercall sub_10185930@<eax>(int a1@<ecx>, int a2@<esi>)
{
  int v3; // [esp+0h] [ebp-4h]

  LOBYTE(v3) = (*(int (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)dword_10700AC8 + 128))(
                 dword_10700AC8,
                 3,
                 0,
                 a1);
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 136))(a2);
  return (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_10700AC8 + 128))(dword_10700AC8, 3, v3);
}

bool __userpurge sub_1029E980@<al>(int *a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  bool v4; // bl
  int v5; // eax
  int v6; // esi

  v4 = sub_10265750(a1, a2, a3, a4);
  return ((*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a3)
       || (v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 20))(a3)) == 0
       || (v6 = *(_DWORD *)(v5 + 424)) == 0
       || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 40))(v6)
       || ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6) >= 80.0)
      && v4;
}

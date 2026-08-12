void __userpurge sub_1023A720(int (__thiscall ***a1)(_DWORD)@<ecx>, char *String2, void *a3, int a4)
{
  int (__thiscall ***v5)(_DWORD, int, int); // edi
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // eax

  v5 = (int (__thiscall ***)(_DWORD, int, int))sub_10239950(a1, String2, 0);
  if ( v5 )
  {
    v6 = dword_1047CA74;
    v7 = *(_DWORD *)dword_1047CA74;
    v8 = ((int (__thiscall *)(int (__thiscall ***)(_DWORD), _DWORD))**a1)(a1, 0.0);
    v9 = (**v5)(v5, a4, v8);
    (*(void (__thiscall **)(int, int))(v7 + 80))(v6, v9);
  }
  else
  {
    sub_1022AF00(a3);
  }
}

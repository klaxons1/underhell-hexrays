bool __userpurge sub_102D54D0@<al>(int *a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  int v5; // eax
  int v6; // esi
  bool result; // al

  result = 0;
  if ( sub_10265430(a2, a3, a1[1])
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a3) )
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 20))(a3);
    v6 = v5;
    if ( v5 )
    {
      if ( !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B3CDC + 112))(
              dword_106B3CDC,
              a1[2],
              *(_DWORD *)(v5 + 420))
        && (*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B3CDC + 112))(
             dword_106B3CDC,
             a1[3],
             *(_DWORD *)(v6 + 420)) )
      {
        return 1;
      }
    }
  }
  return result;
}

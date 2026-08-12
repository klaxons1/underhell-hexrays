char __userpurge sub_10236B70@<al>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  char result; // al
  int v5; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 288))(a1);
  if ( !result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 528))(a1);
    if ( result )
    {
      v5 = (**(int (__thiscall ***)(int))a1)(a1);
      result = sub_10236A90(a2, v5);
      if ( result )
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 412))(a1, a3);
    }
  }
  return result;
}

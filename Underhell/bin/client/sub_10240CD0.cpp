char __userpurge sub_10240CD0@<al>(unsigned int *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // eax
  char result; // al
  bool v6; // zf
  unsigned int v7; // eax
  int v8; // eax

  a1[14] = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
  v4 = (*(int (__thiscall **)(unsigned int *))*a1)(a1);
  result = sub_10236A90(a2, v4);
  if ( result )
  {
    result = (*(int (__thiscall **)(unsigned int *))(*a1 + 292))(a1);
    if ( !result )
    {
      v6 = (*(unsigned __int8 (__thiscall **)(unsigned int *))(*a1 + 528))(a1) == 0;
      v7 = *a1;
      if ( v6 )
      {
        return (*(int (__thiscall **)(unsigned int *))(v7 + 684))(a1);
      }
      else if ( !(*(unsigned __int8 (__thiscall **)(unsigned int *))(v7 + 288))(a1)
             || (v8 = sub_10240220(a1 + 33),
                 (result = (*(int (__thiscall **)(int, int, unsigned int *))(*(_DWORD *)v8 + 80))(v8, a3, a1)) == 0) )
      {
        (*(void (__thiscall **)(unsigned int *, int))(*a1 + 404))(a1, a3);
        return (*(int (__thiscall **)(unsigned int *))(*a1 + 684))(a1);
      }
    }
  }
  return result;
}

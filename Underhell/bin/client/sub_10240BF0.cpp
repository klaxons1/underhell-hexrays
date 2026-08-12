char __userpurge sub_10240BF0@<al>(unsigned int *a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // edi
  char result; // al
  int v6; // eax
  bool v7; // zf
  unsigned int v8; // eax
  int v9; // eax

  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
  if ( (*(unsigned __int8 (__thiscall **)(unsigned int *))(*a1 + 420))(a1) && (int)(v4 - a1[14]) < 300 )
    return (*(int (__thiscall **)(unsigned int *, int))(*a1 + 724))(a1, a3);
  sub_1026CB60(a1, a3);
  v6 = (*(int (__thiscall **)(unsigned int *))*a1)(a1);
  result = sub_10236A90(a2, v6);
  if ( result )
  {
    result = (*(int (__thiscall **)(unsigned int *))(*a1 + 292))(a1);
    if ( !result )
    {
      v7 = (*(unsigned __int8 (__thiscall **)(unsigned int *))(*a1 + 528))(a1) == 0;
      v8 = *a1;
      if ( v7 )
      {
        return (*(int (__thiscall **)(unsigned int *))(v8 + 684))(a1);
      }
      else if ( !(*(unsigned __int8 (__thiscall **)(unsigned int *))(v8 + 288))(a1)
             || (v9 = sub_10240220(a1 + 33),
                 (result = (*(int (__thiscall **)(int, int, unsigned int *))(*(_DWORD *)v9 + 48))(v9, a3, a1)) == 0) )
      {
        (*(void (__thiscall **)(unsigned int *, int))(*a1 + 400))(a1, a3);
        return (*(int (__thiscall **)(unsigned int *))(*a1 + 684))(a1);
      }
    }
  }
  return result;
}

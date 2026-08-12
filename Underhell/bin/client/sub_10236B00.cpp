char __userpurge sub_10236B00@<al>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int (*v4)(void); // edx
  int v5; // eax
  char result; // al
  bool v7; // zf
  int (**v8)(void); // eax
  int v9; // ecx

  v4 = **(int (***)(void))a1;
  *(_DWORD *)(a1 + 56) = 0;
  v5 = v4();
  result = sub_10236A90(a2, v5);
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 292))(a1);
    if ( !result )
    {
      v7 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 528))(a1) == 0;
      v8 = *(int (***)(void))a1;
      v9 = a1;
      if ( !v7 )
      {
        result = ((int (__thiscall *)(int))v8[72])(a1);
        if ( result )
          return result;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 424))(a1, a3);
        v8 = *(int (***)(void))a1;
        v9 = a1;
      }
      return ((int (__thiscall *)(int))v8[171])(v9);
    }
  }
  return result;
}

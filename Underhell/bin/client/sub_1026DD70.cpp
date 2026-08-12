int __usercall sub_1026DD70@<eax>(_DWORD *a1@<ecx>, const char *a2@<ebp>)
{
  int v2; // ebx
  int (__thiscall **v4)(int, int); // edi
  int v5; // eax
  int result; // eax
  int i; // ebx
  int v8; // ecx
  char v9; // al
  int v10; // ecx
  _DWORD *v11; // ebp
  int (__thiscall **v12)(_DWORD *, int); // edi
  int v13; // eax
  void *retaddr; // [esp+10h] [ebp+0h]

  v2 = dword_1047CA7C;
  v4 = (int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32);
  v5 = (*(int (__thiscall **)(_DWORD *))(*a1 + 80))(a1);
  result = (*v4)(v2, v5);
  for ( i = 0; i < a1[56]; ++i )
  {
    v8 = *(_DWORD *)(a1[53] + 4 * i);
    v9 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v8 + 912))(v8, a2);
    v10 = a1[53];
    if ( v9 )
    {
      v11 = *(_DWORD **)(v10 + 4 * i);
      a2 = "ButtonBorder";
      v12 = (int (__thiscall **)(_DWORD *, int))(*v11 + 1016);
      v13 = (*(int (__thiscall **)(void *))(*(_DWORD *)retaddr + 8))(retaddr);
      result = (*v12)(v11, v13);
    }
    else
    {
      a2 = 0;
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v10 + 4 * i) + 1016))(*(_DWORD *)(v10 + 4 * i));
    }
  }
  return result;
}

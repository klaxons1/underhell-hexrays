void __userpurge sub_1023B140(int a1@<ecx>, _DWORD *a2, _DWORD *a3)
{
  int v4; // ebx
  bool i; // zf
  int v6; // ebp
  void (__thiscall **v7)(int, void *, int, int); // edi
  int v8; // eax
  int v9; // ebp
  int v10; // ebx
  void (__thiscall **v11)(int, int, _DWORD *, int); // edi
  int v12; // eax
  int v13; // [esp+18h] [ebp-18h]
  void *retaddr; // [esp+30h] [ebp+0h]

  if ( *(_BYTE *)(a1 + 156) == 1 )
    goto LABEL_9;
  sub_1022ACE0(a2, "panel", a1);
  v4 = *(_DWORD *)(a1 + 96) - 1;
  for ( i = *(_DWORD *)(a1 + 96) == 1; v4 > 0; i = v4 == 0 )
  {
    if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(
           dword_1047CA74,
           *(_DWORD *)(*(_DWORD *)(a1 + 84) + 4 * v4)) )
    {
      v6 = dword_1047CA74;
      v7 = (void (__thiscall **)(int, void *, int, int))(*(_DWORD *)dword_1047CA74 + 80);
      v13 = (**(int (__thiscall ***)(int, _DWORD))a1)(a1, 0.0);
      v8 = sub_1022AD00(a3);
      (*v7)(v6, retaddr, v8, v13);
    }
    --v4;
  }
  if ( i
    && (v9 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA74 + 64))(
               dword_1047CA74,
               **(_DWORD **)(a1 + 84))) != 0 )
  {
    v10 = dword_1047CA74;
    v11 = (void (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)dword_1047CA74 + 80);
    v12 = (**(int (__thiscall ***)(int, _DWORD))a1)(a1, 0.0);
    (*v11)(v10, v9, a3, v12);
  }
  else
  {
LABEL_9:
    sub_1022AF00(a2);
  }
}

_DWORD *__userpurge sub_10355660@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int *v4; // ecx
  char **v5; // eax
  char *v6; // eax
  int v7; // edx
  int v8; // ecx
  _DWORD *v9; // eax
  _DWORD *result; // eax

  v4 = (int *)a3;
  v5 = (char **)(a3 + 8);
  if ( *(_DWORD *)(a3 + 24) != 2 )
  {
    a3 = 0;
    v5 = (char **)&a3;
  }
  v6 = *v5;
  v7 = v4[1];
  v8 = *v4;
  if ( !v6 )
    v6 = (char *)String;
  v9 = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, v8, v7, 0);
  if ( !v9 )
    return (_DWORD *)sub_10353060(a1, a2);
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v9 + 8))(v9);
  *(_DWORD *)(a1 + 4092) = *result;
  return result;
}

int __stdcall sub_1025D460(int *a1)
{
  int result; // eax
  int v2; // edi
  _DWORD *v4; // ebx
  int (__thiscall **v5)(_DWORD *, int); // esi
  int v6; // eax
  int v7; // eax
  int v8; // [esp+4h] [ebp+4h]

  result = sub_10237C80(dword_103FD3B0);
  if ( result )
  {
    v2 = sub_10237C80(dword_103FD3B0);
    v4 = (_DWORD *)sub_10237C80(dword_103FD3B0);
    v8 = *a1;
    v5 = (int (__thiscall **)(_DWORD *, int))(*v4 + 912);
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 84))(v2);
    v7 = (*(int (__thiscall **)(int *, const char *, int))(v8 + 12))(a1, "DefaultSmall", v6);
    return (*v5)(v4, v7);
  }
  return result;
}

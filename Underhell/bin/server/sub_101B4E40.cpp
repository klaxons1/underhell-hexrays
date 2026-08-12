int __cdecl sub_101B4E40(int (__cdecl *a1)(int))
{
  int result; // eax
  int v2; // ebx
  void *v3; // esp
  int i; // esi
  _DWORD v5[3]; // [esp+0h] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106BAFF4 + 180))(dword_106BAFF4);
  v2 = result;
  if ( result )
  {
    v3 = alloca(4 * result);
    result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 184))(dword_106BAFF4, v5);
    for ( i = 0; i < v2; ++i )
    {
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[i] + 68))(v5[i]);
      if ( result )
        result = a1(result);
    }
  }
  return result;
}

int __cdecl sub_100D76A0(int a1)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  const char *v7; // eax
  int i; // [esp+Ch] [ebp+8h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 12))(a1) - 1;
  for ( i = result; i >= 0; --i )
  {
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 16))(a1, result);
    v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v3);
    if ( v4 || (v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0 )
    {
      v5 = *(_DWORD *)(v4 + 12);
      if ( v5 )
      {
        v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
        if ( v6 )
        {
          v7 = (const char *)(*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 220))(
                               dword_106B31D0,
                               v3,
                               "closecaption");
          if ( *v7 )
          {
            if ( !atoi(v7) )
              sub_10219DB0(v6);
          }
        }
      }
    }
    result = i - 1;
  }
  return result;
}

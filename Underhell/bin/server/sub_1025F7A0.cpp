int __cdecl sub_1025F7A0(int a1, int *a2)
{
  int v2; // eax
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = 0;
  v2 = (*(int (__thiscall **)(int, int, const char *, int *, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_106B31D8
                                                                                              + 276))(
         dword_106B31D8,
         a1,
         "GAME",
         &v4,
         1,
         1,
         0,
         0,
         0);
  if ( a2 )
    *a2 = v2;
  return v4;
}

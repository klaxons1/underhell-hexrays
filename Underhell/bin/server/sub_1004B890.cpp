int __cdecl sub_1004B890(int a1, int a2, int a3)
{
  int v3; // edi
  void (__thiscall *v4)(int, char *); // edx
  int j; // ebx
  char v7[256]; // [esp+4h] [ebp-130h] BYREF
  char v8[32]; // [esp+104h] [ebp-30h] BYREF
  int v9; // [esp+124h] [ebp-10h]
  int i; // [esp+128h] [ebp-Ch]
  __int16 v11; // [esp+12Ch] [ebp-8h] BYREF
  __int16 v12; // [esp+130h] [ebp-4h] BYREF

  v3 = a1;
  v4 = *(void (__thiscall **)(int, char *))(*(_DWORD *)a1 + 24);
  v9 = -1;
  v4(a1, v8);
  if ( !strcmp(v8, "AI_Behaviors") )
  {
    (*(void (__thiscall **)(int, __int16 *, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, &v11, 1, 0);
    if ( v11 == 2 )
    {
      (*(void (__thiscall **)(int, __int16 *, int, _DWORD))(*(_DWORD *)v3 + 48))(v3, &v12, 1, 0);
      for ( i = 0; i < v12; ++i )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
        (*(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)v3 + 80))(v3, v7, 256, 0);
        (*(void (__thiscall **)(int, char *, int, _DWORD))(*(_DWORD *)v3 + 64))(v3, (char *)&a1 + 3, 1, 0);
        for ( j = 0; j < a3; ++j )
        {
          if ( !strcmp(
                  *(const char **)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 4 * j) + 276))(*(_DWORD *)(a2 + 4 * j))
                                 + 8),
                  v7) )
          {
            if ( HIBYTE(a1) )
              v9 = j;
            (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 4 * j) + 64))(*(_DWORD *)(a2 + 4 * j), v3);
          }
        }
        (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 32))(v3);
      }
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 32))(v3);
  return v9;
}

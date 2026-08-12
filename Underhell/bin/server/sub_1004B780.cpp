int __cdecl sub_1004B780(int *a1, int a2, int a3, int a4)
{
  int *v4; // esi
  void (__thiscall *v5)(int *, int *, int); // edx
  int v6; // edi
  void (__thiscall *v7)(int *, int *, int); // edx
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  int v11; // edi
  void (__thiscall *v12)(int *, char *, int); // edx
  int v14; // [esp+Ch] [ebp-4h] BYREF

  v4 = a1;
  (*(void (__thiscall **)(int *, const char *))(*a1 + 32))(a1, "AI_Behaviors");
  v5 = *(void (__thiscall **)(int *, int *, int))(*v4 + 44);
  v14 = 2;
  v5(v4, &v14, 1);
  v6 = a4;
  v7 = *(void (__thiscall **)(int *, int *, int))(*v4 + 44);
  v14 = (unsigned __int16)a4;
  v7(v4, &v14, 1);
  v8 = 0;
  if ( v6 > 0 )
  {
    do
    {
      if ( strcmp(
             *(const char **)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 4 * v8) + 276))(*(_DWORD *)(a3 + 4 * v8))
                            + 8),
             off_10601D5C) )
      {
        (*(void (__thiscall **)(int *))(*v4 + 28))(v4);
        v9 = *v4;
        v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 4 * v8) + 276))(*(_DWORD *)(a3 + 4 * v8));
        (*(void (__thiscall **)(int *, _DWORD))(v9 + 92))(v4, *(_DWORD *)(v10 + 8));
        v11 = a3;
        v12 = *(void (__thiscall **)(int *, char *, int))(*v4 + 60);
        HIBYTE(a1) = a2 == *(_DWORD *)(a3 + 4 * v8);
        v12(v4, (char *)&a1 + 3, 1);
        (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v11 + 4 * v8) + 60))(*(_DWORD *)(v11 + 4 * v8), v4);
        (*(void (__thiscall **)(int *))(*v4 + 36))(v4);
      }
      ++v8;
    }
    while ( v8 < a4 );
  }
  return (*(int (__thiscall **)(int *))(*v4 + 36))(v4);
}

void __cdecl sub_101B5BD0(_DWORD *a1, int a2)
{
  const char *v2; // eax
  int v3; // edi
  int i; // esi
  _DWORD v5[1024]; // [esp+0h] [ebp-1000h] BYREF

  if ( a2 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 40))(a2) )
  {
    v2 = (const char *)a1[23];
    if ( !v2 )
      v2 = String;
    DevMsg(2, "Putting entity to sleep: %s\n", v2);
    v3 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*a1 + 624))(a1, v5, 1024);
    for ( i = 0; i < v3; ++i )
    {
      sub_101DBCA0(v5[i]);
      (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v5[i] + 100))(v5[i]);
    }
  }
}

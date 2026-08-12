int __cdecl sub_10114A30(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // esi
  const char *v5; // eax
  int v6; // eax
  int v7; // edx
  _BYTE v9[4]; // [esp+8h] [ebp-63Ch] BYREF
  char String2[1592]; // [esp+Ch] [ebp-638h] BYREF

  v3 = 0;
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436250 + 152))(dword_10436250, *(_DWORD *)(a3 + 8));
  while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4) )
  {
    v5 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
    v6 = _stricmp(v5, "solid");
    v7 = *(_DWORD *)v4;
    if ( v6 )
    {
      (*(void (__thiscall **)(int))(v7 + 36))(v4);
    }
    else
    {
      (*(void (__thiscall **)(int, _BYTE *, _DWORD))(v7 + 12))(v4, v9, 0);
      if ( v3 < 24 )
        *(_DWORD *)(a1 + 4 * v3++) = sub_1001E140(a2, String2);
    }
  }
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10436250 + 156))(dword_10436250, v4);
  return v3;
}

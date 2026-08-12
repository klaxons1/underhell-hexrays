void __cdecl sub_100761D0(int a1)
{
  int v1; // edi
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  if ( a1 )
  {
    v1 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v2 = dword_1041337C;
    v3 = dword_1041337C;
    if ( dword_1041337C + 1 > dword_10413374 )
    {
      sub_1010AFF0(dword_1041337C - dword_10413374 + 1);
      v2 = dword_1041337C;
    }
    v4 = dword_10413370;
    dword_1041337C = v2 + 1;
    v5 = v2 - v3;
    dword_10413380 = dword_10413370;
    if ( v5 > 0 )
    {
      memcpy((void *)(dword_10413370 + 4 * v3 + 4), (const void *)(dword_10413370 + 4 * v3), 4 * v5);
      v4 = dword_10413370;
    }
    v6 = (_DWORD *)(v4 + 4 * v3);
    if ( v6 )
      *v6 = v1;
  }
}

void __stdcall sub_1012D8C0(int (__thiscall ***a1)(_DWORD))
{
  int v1; // eax
  int v2; // eax
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax

  if ( a1 )
  {
    v1 = (**a1)(a1);
    if ( *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1) != -1 )
    {
      v2 = dword_1069E3C4;
      v3 = dword_1069E3C4;
      if ( dword_1069E3C4 + 1 > dword_1069E3BC )
      {
        sub_102ABFC0(dword_1069E3C4 - dword_1069E3BC + 1);
        v2 = dword_1069E3C4;
      }
      v4 = dword_1069E3B8;
      dword_1069E3C4 = v2 + 1;
      v5 = v2 - v3;
      dword_1069E3C8 = dword_1069E3B8;
      if ( v5 > 0 )
      {
        memcpy((void *)(dword_1069E3B8 + 4 * v3 + 4), (const void *)(dword_1069E3B8 + 4 * v3), 4 * v5);
        v4 = dword_1069E3B8;
      }
      v6 = (_DWORD *)(v4 + 4 * v3);
      if ( v6 )
        *v6 = a1;
    }
  }
}

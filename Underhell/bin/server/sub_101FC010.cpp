int __stdcall sub_101FC010(int a1)
{
  int v1; // eax
  int v2; // edi
  int v4; // ecx
  int *v5; // esi
  void (__thiscall *v6)(int *, int); // eax

  v1 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 216))(dword_106B31D0, a1);
  v2 = v1;
  if ( v1 )
  {
    v4 = *(_DWORD *)(v1 + 12);
    if ( v4 )
      v5 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 20))(v4);
    else
      v5 = 0;
    sub_100EAA00(v5);
    sub_100EA940(v5, 384);
    (*(void (__thiscall **)(int *, _DWORD))(*v5 + 348))(v5, 0);
    v6 = *(void (__thiscall **)(int *, int))(*v5 + 1232);
    v5[63] |= 0x10000u;
    v6(v5, 1);
    (*(void (__thiscall **)(int *))(*v5 + 96))(v5);
    return v2;
  }
  else
  {
    Msg("Failed to create Bot.\n");
    return 0;
  }
}

char __stdcall sub_101828B0(int a1, int a2)
{
  int v2; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  void *v7; // eax

  v2 = sub_1005CDB0();
  if ( !v2 )
    return 0;
  v4 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 44))(v2, a1);
  sub_1022ACA0("deaths", v4);
  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 48))(v2, a1);
  sub_1022ACA0("frags", v5);
  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 40))(v2, a1);
  sub_1022ACA0("ping", v6);
  v7 = (void *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 32))(v2, a1);
  sub_1022ABA0("name", v7);
  sub_1022ACA0("playerIndex", a1);
  return 1;
}

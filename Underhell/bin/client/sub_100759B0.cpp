void __usercall sub_100759B0(int a1@<ecx>, int a2@<esi>)
{
  int i; // esi
  int v4; // eax
  int j; // esi
  int v6; // ecx
  int v7; // [esp-4h] [ebp-Ch]

  if ( byte_10413158 )
  {
    v7 = a2;
    byte_10413158 = 0;
    sub_100341C0(0);
    sub_100D3220();
    sub_10103440();
    (*((void (__thiscall **)(void ***))*off_103ECFF8[0] + 3))(off_103ECFF8[0]);
    ((void (__thiscall *)(void ***))(*off_103E9C2C)[4])(off_103E9C2C);
    sub_1007A900(off_103DCD78);
    for ( i = dword_104131E0; i; i = *(_DWORD *)(i + 4) )
      (**(void (__thiscall ***)(int, int))i)(i, v7);
    sub_100D3230();
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10439968 + 8))(dword_10439968);
    (*((void (__thiscall **)(void ***))*off_103E773C[0] + 2))(off_103E773C[0]);
    v4 = sub_100F0920(v7);
    sub_100EFA10(v4);
    sub_10064E20();
    sub_100B3DD0(&dword_1042FB78);
    ((void (__thiscall *)(int (__stdcall ***)(int, int, int, int)))(*off_103E7304)[5])(off_103E7304);
    ((void (__thiscall *)(int (__stdcall ***)(int)))(*off_103E75A8)[8])(off_103E75A8);
    sub_101FCC60(off_103EE614);
    for ( j = *(_DWORD *)(a1 + 16) - 1; j >= 0; --j )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * j);
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 52))(v6);
    }
    *(_DWORD *)(a1 + 16) = 0;
    dword_104131C8 = 0;
    dword_104131CC = 0;
    dword_104131D0 = 0;
    dword_104131D4 = 0;
    dword_104131D8 = 0;
    dword_104131DC = 0;
  }
}

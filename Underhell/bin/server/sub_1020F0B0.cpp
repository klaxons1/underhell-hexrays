void __userpurge sub_1020F0B0(int a1@<ecx>, int a2@<edi>, int a3, float *a4, float *a5)
{
  int v6; // eax
  int v7; // edi
  char *v8; // eax
  int v9; // edi
  int *v10; // ecx

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 424) + 36))(*(_DWORD *)(a1 + 424)) )
  {
    sub_1023C380((int)"Metal.SawbladeStick", 0.0, 0);
    (*(void (__thiscall **)(int, int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 416))(a1, a3, 0, 0, a2);
    v6 = sub_1020D1E0((void *)a1);
    v7 = v6;
    if ( v6 )
    {
      sub_1016AF10(v6);
      sub_1025FAC0(v7);
    }
    v8 = sub_100E3960((int)"point_enable_motion_fixup", a4, a5, a1);
    if ( v8 )
      (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v8 + 140))(v8, a1, -1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 424) + 60))(*(_DWORD *)(a1 + 424), 0);
    v9 = *(_DWORD *)(a1 + 248) | 0x40;
    if ( *(_DWORD *)(a1 + 248) != v9 )
    {
      if ( *(_BYTE *)(a1 + 84) )
      {
        *(_BYTE *)(a1 + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(a1 + 24);
        if ( v10 )
          sub_100194B0(v10, 248);
      }
      *(_DWORD *)(a1 + 248) = v9;
    }
    sub_100EBE30(a1, 1);
  }
}

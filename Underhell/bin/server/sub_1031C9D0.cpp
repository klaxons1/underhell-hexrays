int __cdecl sub_1031C9D0(int a1, int a2, float a3, char a4)
{
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // ebx
  int *v8; // ecx

  v4 = sub_101811E0("npc_heli_avoidsphere", -1);
  v5 = v4;
  *(float *)(v4 + 800) = a3;
  if ( a4 )
  {
    v6 = *(_DWORD *)(v4 + 248);
    v7 = v6 | 0x10000;
    if ( v6 != (v6 | 0x10000) )
    {
      if ( *(_BYTE *)(v5 + 84) )
      {
        *(_BYTE *)(v5 + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(v5 + 24);
        if ( v8 )
          sub_100194B0(v8, 248);
      }
      *(_DWORD *)(v5 + 248) = v7;
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 140))(v5, a1, a2);
  sub_100E10C0(v5, &flt_106F1CA8);
  sub_100E11A0(v5, &flt_106F1CB4);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 76))(v5, a1);
  return v5;
}

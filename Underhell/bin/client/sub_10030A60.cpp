int __usercall sub_10030A60@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  char *v3; // eax
  int v4; // esi
  int v5; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  void (__thiscall *v10)(int, _DWORD); // eax
  int v11; // eax
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v3 = (char *)sub_10034900(0x848u);
  v4 = (int)v3;
  if ( !v3 )
    return 0;
  sub_1002F0F0(v3);
  *(_DWORD *)(v4 + 1960) = &IPVSNotify::`vftable';
  *(_DWORD *)v4 = &C_ClientRagdoll::`vftable';
  *(_DWORD *)(v4 + 4) = &C_ClientRagdoll::`vftable';
  *(_DWORD *)(v4 + 8) = &C_ClientRagdoll::`vftable';
  *(_DWORD *)(v4 + 12) = &C_ClientRagdoll::`vftable';
  *(_DWORD *)(v4 + 1960) = &C_ClientRagdoll::`vftable';
  *(_DWORD *)(v4 + 1972) = 0;
  *(_DWORD *)(v4 + 1992) = -1;
  *(_WORD *)(v4 + 1996) = 0;
  *(_WORD *)(v4 + 1964) = 0;
  unknown_libname_1("client_ragdoll");
  sub_1002DD00(a1);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 4) + 36))(a1 + 4);
  v12 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 12))(dword_10413178, v5);
  if ( (*(unsigned __int8 (__thiscall **)(int, int, int))(*(_DWORD *)v4 + 324))(v4, v12, 7) )
  {
    sub_10036010(v4);
    v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 36))(a1, a2);
    sub_10037BA0(v7);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 40))(a1);
    sub_10037CA0(v8);
    sub_101156C0(v4, a1);
    sub_101157B0(v4, a1);
    *(_BYTE *)(v4 + 1938) = 1;
    sub_1002DD00(v4);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1) == 1 )
    {
      LOBYTE(v9) = sub_100249E0(a1);
      *(_BYTE *)(v4 + 1965) = v9;
      sub_10115DE0(v4, v9);
      *(_BYTE *)(v4 + 1964) = 1;
    }
    *(_BYTE *)(a1 + 1780) = 1;
    sub_1000DF30((_DWORD *)a1, 32);
    if ( (*(_DWORD *)(a1 + 112) & 0x10) != 0 )
      sub_1000DF30((_DWORD *)v4, 16);
    *(_BYTE *)(v4 + 84) = 23;
    sub_10035090(*(_BYTE *)(a1 + 116), 0);
    LOWORD(v13) = *(_DWORD *)(a1 + 88);
    BYTE2(v13) = BYTE2(*(_DWORD *)(a1 + 88));
    HIBYTE(v13) = HIBYTE(*(_DWORD *)(a1 + 88));
    if ( *(_DWORD *)(v4 + 88) != v13 )
      *(_DWORD *)(v4 + 88) = v13;
    *(_DWORD *)(v4 + 1200) = *(_DWORD *)(a1 + 1200);
    *(_DWORD *)(v4 + 1196) = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 4) + 156))(a1 + 4);
    *(float *)(v4 + 1248) = *(float *)(a1 + 1248);
    *(float *)(v4 + 1252) = *(float *)(a1 + 1252);
    *(float *)(v4 + 1256) = *(float *)(a1 + 1256);
    v10 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 408);
    *(_DWORD *)(v4 + 1260) = *(_DWORD *)(a1 + 1260);
    v10(v4, -1293.0);
    v11 = sub_100AF260(v12);
    sub_10034E80(v11);
    return v4;
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)(v4 + 8) + 4))(v4 + 8);
    return 0;
  }
}

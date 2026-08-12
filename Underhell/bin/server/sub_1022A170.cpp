void __fastcall sub_1022A170(_DWORD *a1)
{
  _DWORD *v1; // esi
  bool v2; // zf
  const char *v3; // eax
  char *v4; // ebx
  int v5; // esi
  _BYTE *v6; // edi
  int *v7; // ecx
  int v8; // ecx
  double v9; // st7
  int v10; // eax
  int v11; // eax
  const char *v12; // ecx
  _DWORD *v13; // eax
  int *v14; // eax
  char *v15; // [esp+14h] [ebp-110h]
  char Destination[256]; // [esp+20h] [ebp-104h] BYREF
  _DWORD *v17; // [esp+120h] [ebp-4h]

  v1 = a1;
  v2 = a1[202] == 0;
  v17 = a1;
  if ( !v2 )
  {
    v3 = (const char *)a1[202];
    if ( !v3 )
      v3 = String;
    if ( sub_10429530(v3, ".vcd") )
    {
      v4 = (char *)v1[202];
      if ( !v4 )
        v4 = (char *)String;
      v5 = sub_100E2680((int)"instanced_scripted_scene", &flt_106F1CA8, &flt_106F1CB4, 0);
      v6 = (_BYTE *)(v5 + 1544);
      sub_104299C0((char *)(v5 + 1544), v4, 0x80u);
      if ( v5 == -1544 || !*v6 )
        v6 = 0;
      *(_DWORD *)(v5 + 804) = v6;
      *(_DWORD *)(v5 + 1528) = -1;
      *(_BYTE *)(v5 + 1532) = 0;
      if ( *(_BYTE *)(v5 + 886) )
      {
        if ( *(_BYTE *)(v5 + 84) )
        {
          *(_BYTE *)(v5 + 88) |= 1u;
        }
        else
        {
          v7 = *(int **)(v5 + 24);
          if ( v7 )
            sub_100194B0(v7, 886);
        }
        *(_BYTE *)(v5 + 886) = 0;
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 912))(v5, 0.0);
      sub_10260750((char *)v5);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 136))(v5);
      v8 = *(_DWORD *)(v5 + 976);
      *(_BYTE *)(v5 + 1672) = 0;
      if ( v8 )
        sub_1041CB00(0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 752))(v5);
      if ( v17 != (_DWORD *)-812 )
        v17[203] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 880))(v5);
      v1 = v17;
      if ( 0.0 != v9 )
      {
        *((_BYTE *)v17 + 816) = 1;
        return;
      }
    }
    v10 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v1 + 896))(v1, 0);
    if ( v10 )
    {
      v11 = __RTDynamicCast(
              v10,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseFlex `RTTI Type Descriptor',
              (int)&CAI_BaseActor `RTTI Type Descriptor',
              0);
      if ( v11 )
      {
        v12 = (const char *)v1[202];
        if ( !v12 )
          v12 = String;
        v15 = (char *)v12;
        v13 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 1656))(v11);
        v14 = sub_100AD3C0(v13, (int)v1, v15, 0);
        if ( v14 )
        {
          sub_10065130((char *)v14, Destination, 0x100u);
          sub_102286F0(0, Destination, v1 + 203, 0.0, 0, 0, 0, 0);
        }
      }
    }
    a1 = v1;
  }
  (*(void (__fastcall **)(_DWORD *))(*v1 + 760))(a1);
}

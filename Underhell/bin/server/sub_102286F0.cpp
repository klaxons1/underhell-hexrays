int __cdecl sub_102286F0(int a1, char *Source, _DWORD *a3, float a4, char a5, _WORD *a6, char a7, _BYTE *a8)
{
  int v8; // eax
  int v9; // esi
  _BYTE *v10; // edi
  int *v11; // ecx
  int v12; // ecx
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  double v15; // st7
  float v17; // [esp+4h] [ebp-10h]

  v8 = sub_100E2680((int)"instanced_scripted_scene", &flt_106F1CA8, &flt_106F1CB4, 0);
  v9 = v8;
  v10 = (_BYTE *)(v8 + 1544);
  if ( a1 )
    sub_1023AFB0(Source, v10, 128);
  else
    sub_104299C0((char *)(v8 + 1544), Source, 0x80u);
  if ( !v10 || !*v10 )
    v10 = 0;
  *(_DWORD *)(v9 + 804) = v10;
  if ( a1 )
    *(_DWORD *)(v9 + 1528) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  else
    *(_DWORD *)(v9 + 1528) = -1;
  *(_BYTE *)(v9 + 1532) = a1 != 0;
  if ( a7 != *(_BYTE *)(v9 + 886) )
  {
    if ( *(_BYTE *)(v9 + 84) )
    {
      *(_BYTE *)(v9 + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(v9 + 24);
      if ( v11 )
        sub_100194B0(v11, 886);
    }
    *(_BYTE *)(v9 + 886) = a7;
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 912))(v9, LODWORD(a4));
  sub_10260750((char *)v9);
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 136))(v9);
  v12 = *(_DWORD *)(v9 + 976);
  *(_BYTE *)(v9 + 1672) = a5;
  if ( v12 )
    sub_1041CB00(a5);
  if ( a8 )
  {
    v13 = (_DWORD *)sub_10184390(32);
    if ( v13 )
      v14 = sub_10219BB0(v13);
    else
      v14 = 0;
    *(_DWORD *)(v9 + 1524) = v14;
    sub_10219C30((int)v14, a8);
  }
  if ( a6 )
  {
    v15 = sub_10065960(a6);
    if ( 0.0 != v15 )
    {
      v17 = v15;
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 920))(v9, LODWORD(v17));
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 752))(v9);
  if ( a6 )
    *(_BYTE *)(v9 + 928) = sub_100651F0(a6);
  if ( a3 )
    *a3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 880))(v9);
}

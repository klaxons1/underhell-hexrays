int __userpurge sub_1011E350@<eax>(int a1@<ecx>, int a2@<edi>, float a3)
{
  double v3; // st7
  int v5; // eax
  double v6; // st7
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // edx
  float v13; // [esp+28h] [ebp+8h]

  v3 = a3;
  v5 = *(_DWORD *)(a1 + 132);
  if ( (v5 & 0x1000) != 0 )
    v6 = v3 + 2.0;
  else
    v6 = v3 - 2.0;
  v7 = 0;
  if ( (v5 & 4) != 0 )
    v7 = 2 - ((v5 & 8) != 0);
  v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
  if ( v8 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  v9 = *(_DWORD *)(a1 + 136);
  if ( (v9 & 0x23) != 0 )
  {
    v10 = *(_DWORD *)v8;
    if ( (v9 & 0x10) != 0 )
      (*(void (__thiscall **)(int, int, bool))(v10 + 544))(
        v8,
        *(_BYTE *)(a1 + 136) & 1,
        (*(_DWORD *)(a1 + 136) & 2) != 0);
    else
      (*(void (__thiscall **)(int, int, bool, bool))(v10 + 48))(
        v8,
        *(_BYTE *)(a1 + 136) & 1,
        (*(_DWORD *)(a1 + 136) & 2) != 0,
        (*(_DWORD *)(a1 + 136) & 0x20) != 0);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 164))(v8);
  if ( v7 )
  {
    v13 = v6;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 168))(v8, LODWORD(v13));
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
}

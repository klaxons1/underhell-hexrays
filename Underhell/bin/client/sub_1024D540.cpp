int __usercall sub_1024D540@<eax>(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  int v3; // edi
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx

  *a1 = &vgui::Frame::`vftable';
  v3 = a1[17];
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 72))(dword_1047CA68) == v3 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 80))(dword_1047CA68);
    if ( a1[101] )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 76))(dword_1047CA68, a1[101]);
      a1[101] = 0;
    }
  }
  v4 = a1[73];
  if ( v4 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 120))(v4, 1);
  v5 = a1[74];
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 120))(v5, 1);
  v6 = a1[75];
  if ( v6 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 120))(v6, 1);
  v7 = a1[76];
  if ( v7 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 120))(v7, 1);
  v8 = a1[77];
  if ( v8 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 120))(v8, 1);
  v9 = a1[78];
  if ( v9 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 120))(v9, 1);
  v10 = a1[79];
  if ( v10 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v10 + 120))(v10, 1);
  v11 = a1[80];
  if ( v11 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v11 + 120))(v11, 1);
  v12 = a1[81];
  if ( v12 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 120))(v12, 1);
  v13 = a1[82];
  if ( v13 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 120))(v13, 1);
  v14 = a1[83];
  if ( v14 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 120))(v14, 1);
  v15 = a1[85];
  if ( v15 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 120))(v15, 1);
  v16 = a1[86];
  if ( v16 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v16 + 120))(v16, 1);
  v17 = a1[72];
  if ( v17 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v17 + 24))(v17, 1);
  return sub_1024C2A0(a1, a2);
}

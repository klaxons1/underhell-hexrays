char __userpurge sub_1026FAF0@<al>(int a1@<ecx>, int a2@<esi>, void **a3)
{
  int v4; // ebx
  int v6; // esi
  const char *v7; // eax

  v4 = sub_1025F7A0((int)a3, 0);
  if ( !v4 )
    return 0;
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106BAFF0 + 152))(dword_106BAFF0, v4, a2);
  a3 = &CVehicleChoreoViewParser::`vftable';
  while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6) )
  {
    v7 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
    if ( !_stricmp(v7, "vehicle_view") )
      (*(void (__thiscall **)(int, int, void ***))(*(_DWORD *)v6 + 28))(v6, a1 + 1584, &a3);
    else
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 36))(v6);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_106BAFF0 + 156))(dword_106BAFF0);
  sub_1025F7F0(v4);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 100))(a1);
  return 1;
}

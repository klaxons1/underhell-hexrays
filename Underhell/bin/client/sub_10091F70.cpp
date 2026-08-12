void __userpurge sub_10091F70(int a1@<esi>, int a2)
{
  int v2; // esi

  if ( a2 )
  {
    v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970, a1);
    if ( v2 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 688))(v2, a2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  }
}

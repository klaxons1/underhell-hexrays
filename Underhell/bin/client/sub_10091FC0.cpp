void __userpurge sub_10091FC0(int a1@<ecx>, int a2@<esi>, int a3, float a4)
{
  int v5; // esi

  if ( a3 )
  {
    v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C970 + 380))(dword_1047C970, a2);
    if ( v5 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 704))(v5, a3);
    if ( 0.0 != a4 )
      ++*(_DWORD *)(a1 + 4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 12))(v5);
    (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
  }
}

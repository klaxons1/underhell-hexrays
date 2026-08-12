bool __cdecl sub_102175A0(int a1)
{
  _DWORD *v1; // eax

  v1 = sub_1012BC90(&dword_1069E3E0, 0, "game_ragdoll_manager");
  if ( !v1 )
    return 0;
  return *((_BYTE *)v1 + 816)
      && ((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 220))(a1) == 2
       || (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 220))(a1) == 3);
}

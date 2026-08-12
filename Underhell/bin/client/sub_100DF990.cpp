_DWORD *__cdecl sub_100DF990(char *a1)
{
  int v1; // eax
  int v3; // eax

  if ( a1 )
  {
    v3 = sub_100B4090(&dword_1042FB78, "CHudMessage");
    return sub_100DF6B0(v3, a1);
  }
  else
  {
    v1 = sub_100B4090(&dword_1042FB78, "CHudMessage");
    return (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 24))(v1);
  }
}

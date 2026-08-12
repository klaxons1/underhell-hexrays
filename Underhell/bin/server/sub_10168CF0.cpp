_DWORD *__thiscall sub_10168CF0(_DWORD *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      return sub_10168C60(this, (char *)String);
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  return sub_10168C60(this, v4);
}

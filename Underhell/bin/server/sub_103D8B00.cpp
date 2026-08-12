void __thiscall sub_103D8B00(_DWORD *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
    {
      sub_103D8A90(this, (char *)String);
      return;
    }
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  sub_103D8A90(this, v4);
}

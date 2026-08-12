void __thiscall sub_100BD550(_DWORD *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
    {
LABEL_7:
      v4 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v4 = (char *)sub_1010D460(v3);
  }
  if ( !v4 || !*v4 )
    goto LABEL_7;
LABEL_8:
  sub_100BD480(this, v4);
}

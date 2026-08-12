unsigned int __thiscall sub_10179D70(_DWORD *this, int a2)
{
  const char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax

  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v3 = *(const char **)(a2 + 8);
    if ( !v3 )
    {
LABEL_7:
      v3 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v3 = sub_1010D460(a2 + 8);
  }
  if ( !v3 || !*v3 )
    goto LABEL_7;
LABEL_8:
  this[200] = v3;
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *(char **)(a2 + 8);
    if ( !v4 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460(a2 + 8);
  }
  sub_101797B0(this, v4);
  v5 = (char *)this[53];
  if ( !v5 )
    v5 = (char *)String;
  sub_101798F0(this, v5);
  v6 = (char *)this[202];
  if ( !v6 )
    v6 = (char *)String;
  return sub_10179980(this, v6);
}

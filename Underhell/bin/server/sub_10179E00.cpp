unsigned int __thiscall sub_10179E00(_DWORD *this, int a2)
{
  const char *v3; // eax
  char *v4; // esi
  char *v6; // eax

  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    v3 = sub_1010D460(a2 + 8);
LABEL_5:
    if ( v3 && *v3 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v3 = *(const char **)(a2 + 8);
  if ( v3 )
    goto LABEL_5;
LABEL_7:
  v3 = 0;
LABEL_8:
  this[201] = v3;
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *(char **)(a2 + 8);
    if ( v4 )
      return sub_10179860(this, v4);
    else
      return sub_10179860(this, (char *)String);
  }
  else
  {
    v6 = (char *)sub_1010D460(a2 + 8);
    return sub_10179860(this, v6);
  }
}

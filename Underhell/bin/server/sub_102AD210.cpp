void __thiscall sub_102AD210(_DWORD *this, int *a2)
{
  char **v3; // ecx
  char *v4; // eax

  v3 = (char **)(a2 + 2);
  if ( a2[6] == 2 )
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
    v4 = (char *)sub_1010D460((int)v3);
  }
  if ( !v4 || !*v4 )
    goto LABEL_7;
LABEL_8:
  this[244] = v4;
  sub_102AC860(this, v4, *a2, a2[1]);
  this[247] = 2;
  sub_102ACCC0(this);
}

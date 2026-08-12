void __thiscall sub_102AD270(_DWORD *this, int *a2)
{
  char **v3; // ecx
  char *v4; // eax
  _DWORD *v5; // eax

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
  this[245] = v4;
  if ( !v4 )
    v4 = (char *)String;
  v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, *a2, a2[1], 0);
  if ( v5 )
    this[250] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5);
  this[247] = 1;
  sub_102ACCC0(this);
}

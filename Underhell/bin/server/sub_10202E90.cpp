_DWORD *__thiscall sub_10202E90(int this, int a2)
{
  int *v2; // ebx
  const char *v4; // eax
  int v5; // ecx
  int *v6; // eax
  const char *v7; // eax
  _DWORD *result; // eax
  char *v9; // eax
  char *v10; // eax

  v2 = (int *)a2;
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *(const char **)(a2 + 8);
    if ( !v4 )
      goto LABEL_6;
  }
  else
  {
    v4 = sub_1010D460(a2 + 8);
  }
  if ( !v4 )
  {
LABEL_12:
    *(_DWORD *)(this + 212) = 0;
    *(_DWORD *)(this + 808) = -1;
    return (_DWORD *)sub_100EC4A0((int *)this, -1.0, 0);
  }
LABEL_6:
  v5 = v2[6];
  if ( v5 == 2 )
  {
    v6 = v2 + 2;
  }
  else
  {
    a2 = 0;
    v6 = &a2;
  }
  if ( !*v6 )
    goto LABEL_12;
  if ( v5 == 2 )
  {
    v7 = (const char *)v2[2];
    if ( !v7 )
      goto LABEL_12;
  }
  else
  {
    v7 = sub_1010D460((int)(v2 + 2));
  }
  if ( !*v7 )
    goto LABEL_12;
  if ( v2[6] == 2 )
  {
    v9 = (char *)v2[2];
    if ( !v9 )
      v9 = (char *)String;
  }
  else
  {
    v9 = (char *)sub_1010D460((int)(v2 + 2));
  }
  v10 = (char *)*sub_10162BE0(&a2, v9);
  *(_DWORD *)(this + 212) = v10;
  if ( !v10 )
    v10 = (char *)String;
  result = sub_1012BF20(&dword_1069E3E0, 0, v10, 0, *v2, v2[1], 0);
  if ( result )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 8))(result);
    *(_DWORD *)(this + 808) = *result;
  }
  else
  {
    *(_DWORD *)(this + 808) = -1;
  }
  if ( !*(_BYTE *)(this + 800) )
  {
    result = (_DWORD *)sub_1026A890(this + 808);
    if ( result )
      return (_DWORD *)sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  }
  return result;
}

int __thiscall sub_10248C60(int *this, int a2)
{
  int *v3; // ecx
  char **v4; // eax
  char *v5; // eax
  int v6; // ecx
  _DWORD *v7; // eax

  v3 = (int *)a2;
  v4 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v4 = (char **)&a2;
  }
  v5 = *v4;
  this[208] = (int)v5;
  v6 = *v3;
  if ( !v5 )
    v5 = (char *)String;
  v7 = sub_1012C5B0(0, v5, (int)this, v6, 0);
  if ( v7 )
    this[201] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v7 + 8))(v7);
  else
    this[201] = -1;
  return sub_100EC4A0(this, *(float *)(dword_106B31C8 + 12), 0);
}

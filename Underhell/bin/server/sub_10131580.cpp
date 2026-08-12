void __thiscall sub_10131580(void *this, int a2)
{
  char **v2; // eax
  int v4; // ecx
  int *v5; // edx
  char *v6; // eax
  int v7; // eax

  v2 = (char **)(a2 + 8);
  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 == 2 )
  {
    v5 = (int *)(a2 + 8);
  }
  else
  {
    a2 = 0;
    v5 = &a2;
  }
  if ( *v5 )
  {
    if ( v4 != 2 )
    {
      a2 = 0;
      v2 = (char **)&a2;
    }
    v6 = *v2;
    if ( !v6 )
      v6 = (char *)String;
    v7 = sub_100BDF40((int)this, v6);
    if ( v7 != -1 )
      sub_100C1170((int)this, v7);
  }
}

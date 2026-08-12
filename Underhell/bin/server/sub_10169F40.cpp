void __thiscall sub_10169F40(int this, int a2)
{
  char **v3; // ecx
  char *v4; // ecx
  char *v5; // esi
  int v6; // eax
  int *v7; // ecx

  if ( *(_DWORD *)(this + 3620) )
  {
    v3 = (char **)(a2 + 8);
    if ( *(_DWORD *)(a2 + 24) == 2 )
    {
      v4 = *v3;
      if ( v4 )
        v5 = v4;
      else
        v5 = (char *)String;
    }
    else
    {
      v5 = (char *)sub_1010D460((int)v3);
    }
    v6 = atoi(v5);
    if ( !v6 && *v5 != 48 )
      v6 = sub_100BDF40(this, v5);
    sub_100C3330(this, v6);
    if ( 0.0 == *(float *)(this + 864) )
      sub_100C3330(this, 0);
    if ( *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(float *)(this + 904) = 0.0;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 904);
        *(float *)(this + 904) = 0.0;
      }
    }
  }
}

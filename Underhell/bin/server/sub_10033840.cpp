int __thiscall sub_10033840(int this, int a2)
{
  int *v3; // ecx
  const char *v5; // eax

  if ( a2 <= -1 )
  {
    v5 = *(const char **)(this + 92);
    if ( !v5 )
      v5 = String;
    DevWarning(2, "%s invalid sequence requested\n", v5);
    return sub_100C1170(0);
  }
  else
  {
    if ( (*(_DWORD *)(this + 908) != a2 || !*(_BYTE *)(this + 897)) && *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(this + 24);
        if ( v3 )
          sub_100194B0(v3, 904);
      }
      *(float *)(this + 904) = 0.0;
    }
    sub_100C3330(a2);
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 2604) + 80))(*(_DWORD *)(this + 2604));
  }
}

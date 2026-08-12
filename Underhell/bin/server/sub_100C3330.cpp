void __thiscall sub_100C3330(int this, int a2)
{
  int v3; // ebx
  const char *v4; // esi
  const char *v5; // eax
  int *v6; // ecx
  int *v8; // ecx
  const char *v9; // [esp-4h] [ebp-14h]
  bool v10; // [esp+1Bh] [ebp+Bh]

  if ( *(_DWORD *)(dword_10695FE4 + 48) && (*(_DWORD *)(this + 236) & 0x1000) != 0 )
  {
    v3 = *(_DWORD *)(this + 908);
    v4 = *(const char **)(this + 92);
    if ( !v4 )
      v4 = String;
    v9 = sub_100BE1F0(this, a2);
    v5 = sub_100BE1F0(this, v3);
    DevMsg("ResetSequence : %s: %s -> %s\n", v4, v5, v9);
  }
  if ( !*(_BYTE *)(this + 897) && *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 904);
    }
    *(float *)(this + 904) = 0.0;
  }
  v10 = a2 != *(_DWORD *)(this + 908);
  if ( *(_DWORD *)(this + 908) != a2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 908);
    }
    *(_DWORD *)(this + 908) = a2;
  }
  if ( v10 || !*(_BYTE *)(this + 897) )
    sub_100C2AB0(this);
}

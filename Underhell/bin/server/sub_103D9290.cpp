void __thiscall sub_103D9290(int this, int *a2)
{
  char *v3; // eax
  _DWORD *v4; // eax
  unsigned int v5; // eax
  const char *v6; // eax
  const char *v7; // ecx

  if ( a2[6] == 2 )
  {
    v3 = (char *)a2[2];
    if ( !v3 )
      v3 = (char *)String;
  }
  else
  {
    v3 = (char *)sub_1010D460((int)(a2 + 2));
  }
  v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, *a2, a2[1], 0);
  if ( v4 )
    *(_DWORD *)(this + 3808) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 8))(v4);
  else
    *(_DWORD *)(this + 3808) = -1;
  v5 = *(_DWORD *)(this + 3808);
  if ( v5 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 2] == v5 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 1] )
  {
    *(float *)(this + 3812) = 0.0;
  }
  else
  {
    if ( a2[6] == 2 )
    {
      if ( a2[2] )
        v6 = (const char *)a2[2];
      else
        v6 = String;
    }
    else
    {
      v6 = sub_1010D460((int)(a2 + 2));
    }
    v7 = *(const char **)(this + 92);
    if ( !v7 )
      v7 = String;
    DevMsg("Sniper %s cannot find protect target %s\n", v7, v6);
  }
}

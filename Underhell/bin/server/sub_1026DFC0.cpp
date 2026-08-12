void __thiscall sub_1026DFC0(_DWORD *this, int *a2, char *String1, char *String2)
{
  const char *v4; // edi
  int *v6; // edi
  int v7; // eax
  int v8; // ecx
  int *v9; // edi
  int v10; // eax
  int v11; // esi
  int v12; // esi
  bool v13; // sf
  const char *v14; // ebx
  int v15; // edi
  int *v16; // eax
  int v17; // edx
  double v18; // st7
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int *v24; // eax

  v4 = String1;
  if ( !_stricmp(String1, "gear") )
  {
    v6 = a2;
    v7 = sub_1026C960(a2 + 1, a2[4]);
    v8 = 2 * v7;
    *(float *)(v6[1] + 8 * v8 + 8) = 0.0;
    *(float *)(v6[1] + 8 * v8 + 12) = 1.0;
    if ( v7 )
    {
      *(float *)(v6[1] + 16 * v7 + 4) = *(float *)(v6[1] + 16 * v7 - 8);
      this[1] = v7;
    }
    else
    {
      *(float *)(v6[1] + 4) = 0.0;
      this[1] = 0;
    }
    return;
  }
  if ( !_stricmp(v4, "state") )
  {
    this[2] = 0;
    return;
  }
  if ( !_stricmp(v4, "crashsound") )
  {
    v9 = a2;
    v10 = sub_1026C9D0(a2 + 6, a2[9]);
    this[3] = v10;
    *(float *)(v9[6] + 20 * v10 + 4) = 0.0;
    *(float *)(v9[6] + 20 * this[3] + 8) = 0.0;
    *(_DWORD *)(v9[6] + 20 * this[3] + 16) = 0;
    return;
  }
  if ( (int)this[1] >= 0 )
  {
    if ( !_stricmp(v4, "max_speed") )
    {
      v11 = a2[1] + 16 * this[1];
      *(float *)(v11 + 8) = atof(String2);
      return;
    }
    if ( !_stricmp(v4, "speed_approach_factor") )
    {
      v12 = a2[1] + 16 * this[1];
      *(float *)(v12 + 12) = atof(String2);
      return;
    }
  }
  v13 = (int)this[2] < 0;
  this[1] = -1;
  if ( !v13 )
  {
    if ( !_stricmp(v4, "name") )
    {
      v14 = String2;
      v15 = 0;
      while ( _stricmp((&off_106549B0)[v15], v14) )
      {
        if ( ++v15 >= 20 )
        {
          v15 = -1;
          break;
        }
      }
      v16 = a2;
      this[2] = v15;
      v16[v15 + 20] = 0;
      *(float *)&v16[this[2] + 40] = 0.0;
      return;
    }
    if ( !_stricmp(v4, "sound") )
    {
      v17 = *sub_10162BE0(&String2, String2);
      a2[this[2] + 20] = v17;
      return;
    }
    if ( !_stricmp(v4, "min_time") )
    {
      v18 = atof(String2);
      *(float *)&a2[this[2] + 40] = v18;
      return;
    }
  }
  v13 = (int)this[3] < 0;
  this[2] = -1;
  if ( v13 )
    goto LABEL_34;
  if ( !_stricmp(v4, "min_speed") )
  {
    v19 = a2[6] + 20 * this[3];
    *(float *)(v19 + 4) = atof(String2);
    return;
  }
  if ( !_stricmp(v4, "sound") )
  {
    v20 = a2[6] + 20 * this[3];
    *(_DWORD *)(v20 + 16) = *sub_10162BE0(&a2, String2);
    return;
  }
  if ( !_stricmp(v4, "min_speed_change") )
  {
    v21 = a2[6] + 20 * this[3];
    *(float *)(v21 + 8) = atof(String2);
    return;
  }
  if ( _stricmp(v4, "gear_limit") )
  {
LABEL_34:
    this[3] = -1;
    v23 = 0;
    while ( _stricmp(v4, (&off_10654A10)[v23]) )
    {
      if ( ++v23 >= 9 )
        return;
    }
    v24 = sub_10162BE0(&String2, String2);
    a2[v23 + 11] = *v24;
  }
  else
  {
    v22 = a2[6] + 20 * this[3];
    *(_DWORD *)(v22 + 12) = atoi(String2);
  }
}

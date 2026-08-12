char *__thiscall sub_10286680(int this)
{
  _DWORD *i; // esi
  const char *v3; // ecx
  const char *v4; // eax
  float *v5; // ebx
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  double v10; // st7
  int v11; // eax
  _DWORD *v12; // eax
  char *result; // eax
  char *v14; // esi
  int *v15; // ecx

  sub_100DAA70((_DWORD *)this);
  for ( i = sub_1012BC90(&dword_1069E3E0, 0, "env_particlelight");
        i;
        i = sub_1012BC90(&dword_1069E3E0, (int)i, "env_particlelight") )
  {
    v3 = (const char *)i[204];
    if ( !v3 )
      v3 = String;
    v4 = *(const char **)(this + 260);
    if ( !v4 )
      v4 = String;
    if ( v4 == v3 || !_stricmp(v4, v3) )
    {
      v5 = (float *)(this + 836);
      if ( *((_BYTE *)i + 820) )
        v5 = (float *)(this + 868);
      if ( *((_DWORD *)v5 + 7) != i[200] )
      {
        v6 = *(_DWORD *)v5;
        if ( *(_BYTE *)(*(_DWORD *)v5 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
        }
        else
        {
          v7 = *(_DWORD **)(v6 + 24);
          if ( v7 )
          {
            *v7 |= 0x101u;
            *(_WORD *)(sub_10153460(v7) + 2) = 0;
          }
        }
        v5[7] = *((float *)i + 200);
      }
      sub_102863D0(v5 + 4, (float *)i + 201);
      if ( (i[63] & 0x800) != 0 )
        sub_100DAE60((int)i);
      sub_10286350(v5 + 1, (float *)i + 145);
    }
  }
  v8 = *(_DWORD *)(this + 836);
  if ( *(_BYTE *)(v8 + 84) )
  {
    *(_BYTE *)(v8 + 88) |= 1u;
  }
  else
  {
    v9 = *(_DWORD **)(v8 + 24);
    if ( v9 )
    {
      *v9 |= 0x101u;
      *(_WORD *)(sub_10153460(v9) + 2) = 0;
    }
  }
  v10 = 0.0039215689;
  *(float *)(this + 852) = *(float *)(this + 852) * 0.0039215689;
  *(float *)(this + 856) = *(float *)(this + 856) * 0.0039215689;
  *(float *)(this + 860) = *(float *)(this + 860) * 0.0039215689;
  v11 = *(_DWORD *)(this + 868);
  if ( *(_BYTE *)(v11 + 84) )
  {
    *(_BYTE *)(v11 + 88) |= 1u;
  }
  else
  {
    v12 = *(_DWORD **)(v11 + 24);
    if ( v12 )
    {
      *v12 |= 0x101u;
      v10 = 0.0039215689;
      *(_WORD *)(sub_10153460(v12) + 2) = 0;
    }
  }
  *(float *)(this + 884) = *(float *)(this + 884) * v10;
  *(float *)(this + 888) = *(float *)(this + 888) * v10;
  *(float *)(this + 892) = v10 * *(float *)(this + 892);
  result = sub_10150240((float *)this);
  if ( *(_DWORD *)(this + 908) == -1 )
  {
    result = (char *)sub_100E8220(this, "particle/SmokeStack.vmt");
    v14 = result;
    if ( *(char **)(this + 908) != result )
    {
      result = (char *)this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 908) = v14;
      }
      else
      {
        v15 = *(int **)(this + 24);
        if ( v15 )
          result = (char *)sub_100194B0(v15, 908);
        *(_DWORD *)(this + 908) = v14;
      }
    }
  }
  return result;
}

int __thiscall sub_1004D980(int this)
{
  int v2; // eax
  int v3; // eax
  char *v4; // ecx
  int result; // eax

  v2 = (int)floor(*(float *)(this + 1192) * 0.027777778);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        if ( (*(_BYTE *)(this + 1204) & 2) != 0 )
          v4 = "env_fire_medium_smoke";
        else
          v4 = "env_fire_medium";
      }
      else if ( (*(_BYTE *)(this + 1204) & 2) != 0 )
      {
        v4 = "env_fire_large_smoke";
      }
      else
      {
        v4 = "env_fire_large";
      }
    }
    else if ( (*(_BYTE *)(this + 1204) & 2) != 0 )
    {
      v4 = "env_fire_small_smoke";
    }
    else
    {
      v4 = "env_fire_small";
    }
  }
  else
  {
    v4 = "env_fire_tiny_smoke";
    if ( (*(_BYTE *)(this + 1204) & 2) == 0 )
      v4 = "env_fire_tiny";
  }
  result = sub_100EA350(v4, 0, -1, SLODWORD(flt_10459240), qword_10459244, SHIDWORD(qword_10459244));
  *(_DWORD *)(this + 11668) = result;
  return result;
}

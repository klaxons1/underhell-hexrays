char __thiscall sub_1016A430(int this)
{
  int v2; // eax
  float *v3; // esi
  int *v4; // ecx
  int *v5; // ecx
  int *v7; // ecx
  float v8; // [esp+4h] [ebp-4h]

  v2 = sub_100D1940((_DWORD *)this);
  if ( !v2 )
    return 0;
  v3 = (float *)(v2 + 1672);
  v8 = *(float *)(dword_106B31C8 + 12) + 1.0;
  if ( *(_DWORD *)(v2 + 1672) != LODWORD(v8) )
  {
    if ( *(_BYTE *)(v2 + 84) )
    {
      *(_BYTE *)(v2 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(v2 + 24);
      if ( v4 )
        sub_100194B0(v4, 1672);
    }
    *v3 = v8;
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 944))(this, 0);
  if ( *(_DWORD *)(this + 1200) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 1200);
    }
    *(_DWORD *)(this + 1200) = 0;
  }
  if ( *(_DWORD *)(this + 1204) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 1204) = 0;
      return 1;
    }
    v7 = *(int **)(this + 24);
    if ( v7 )
      sub_100194B0(v7, 1204);
    *(_DWORD *)(this + 1204) = 0;
  }
  return 1;
}

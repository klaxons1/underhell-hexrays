char __thiscall sub_1016A010(_DWORD *this, int a2)
{
  int v2; // eax
  float *v3; // esi
  int *v5; // ecx
  float v6; // [esp+0h] [ebp-4h]

  v2 = sub_100D1940(this);
  if ( v2 )
  {
    v3 = (float *)(v2 + 1672);
    v6 = *(float *)(dword_106B31C8 + 12) + 0.5;
    if ( *(_DWORD *)(v2 + 1672) != LODWORD(v6) )
    {
      if ( *(_BYTE *)(v2 + 84) )
      {
        *(_BYTE *)(v2 + 88) |= 1u;
        *v3 = v6;
        return 1;
      }
      v5 = *(int **)(v2 + 24);
      if ( v5 )
        sub_100194B0(v5, 1672);
      *v3 = v6;
    }
  }
  return 1;
}

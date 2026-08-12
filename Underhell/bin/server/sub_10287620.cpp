int __thiscall sub_10287620(int this, float *a2, float a3)
{
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  float *v9; // edx
  int *v10; // ecx
  int *v11; // ecx
  int *v12; // ecx
  int *v13; // ecx
  int *v14; // ecx
  int *v15; // ecx
  _DWORD *v16; // ecx
  float v18; // [esp+Ch] [ebp-8h]
  float v19; // [esp+Ch] [ebp-8h]
  float v20; // [esp+Ch] [ebp-8h]
  float v21; // [esp+Ch] [ebp-8h]
  float v22; // [esp+Ch] [ebp-8h]
  float v23; // [esp+20h] [ebp+Ch]
  float v24; // [esp+20h] [ebp+Ch]
  float v25; // [esp+20h] [ebp+Ch]
  float v26; // [esp+20h] [ebp+Ch]
  float v27; // [esp+20h] [ebp+Ch]

  v18 = *(float *)(this + 896) / *(float *)(this + 916);
  if ( *(_DWORD *)(this + 896) != LODWORD(v18) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 896);
    }
    *(float *)(this + 896) = v18;
  }
  v19 = *(float *)(this + 900) * *(float *)(this + 916);
  if ( *(_DWORD *)(this + 900) != LODWORD(v19) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 900);
    }
    *(float *)(this + 900) = v19;
  }
  v20 = *(float *)(this + 884) * *(float *)(this + 916);
  if ( *(_DWORD *)(this + 884) != LODWORD(v20) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 884);
    }
    *(float *)(this + 884) = v20;
  }
  v21 = *(float *)(this + 888) * *(float *)(this + 916);
  if ( *(_DWORD *)(this + 888) != LODWORD(v21) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 888);
    }
    *(float *)(this + 888) = v21;
  }
  v22 = *(float *)(this + 892) * *(float *)(this + 916);
  if ( *(_DWORD *)(this + 892) != LODWORD(v22) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 892);
    }
    *(float *)(this + 892) = v22;
  }
  sub_10287240((float *)(this + 904), a2);
  v9 = (float *)(this + 916);
  if ( *(_DWORD *)(this + 916) != LODWORD(a3) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        sub_100194B0(v10, 916);
    }
    v9 = (float *)(this + 916);
    *(float *)(this + 916) = a3;
  }
  v23 = *v9 * *(float *)(this + 896);
  if ( *(_DWORD *)(this + 896) != LODWORD(v23) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, 896);
    }
    *(float *)(this + 896) = v23;
  }
  v24 = *(float *)(this + 900) / *(float *)(this + 916);
  if ( *(_DWORD *)(this + 900) != LODWORD(v24) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v12 = *(int **)(this + 24);
      if ( v12 )
        sub_100194B0(v12, 900);
    }
    *(float *)(this + 900) = v24;
  }
  v25 = *(float *)(this + 884) / *(float *)(this + 916);
  if ( *(_DWORD *)(this + 884) != LODWORD(v25) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v13 = *(int **)(this + 24);
      if ( v13 )
        sub_100194B0(v13, 884);
    }
    *(float *)(this + 884) = v25;
  }
  v26 = *(float *)(this + 888) / *(float *)(this + 916);
  if ( *(_DWORD *)(this + 888) != LODWORD(v26) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v14 = *(int **)(this + 24);
      if ( v14 )
        sub_100194B0(v14, 888);
    }
    *(float *)(this + 888) = v26;
  }
  v27 = *(float *)(this + 892) / *(float *)(this + 916);
  if ( *(_DWORD *)(this + 892) != LODWORD(v27) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v15 = *(int **)(this + 24);
      if ( v15 )
        sub_100194B0(v15, 892);
    }
    *(float *)(this + 892) = v27;
  }
  if ( sub_102871E0((float *)this) )
    v16[63] |= 0x20000u;
  else
    v16[63] &= ~0x20000u;
  return sub_100D8500(v16);
}

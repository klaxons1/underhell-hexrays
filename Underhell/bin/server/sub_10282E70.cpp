int __usercall sub_10282E70@<eax>(int a1@<ecx>, int a2@<edi>)
{
  double v3; // st7
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int v7; // edi
  int *v8; // ecx
  int v9; // edi
  int *v10; // ecx
  int v11; // edi
  int result; // eax
  int *v13; // ecx
  float v14; // [esp+Ch] [ebp-4h]

  sub_10140CE0(a1);
  v3 = 0.0;
  *(_DWORD *)a1 = &CPlasma::`vftable';
  if ( *(_DWORD *)(a1 + 804) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(a1 + 24);
      if ( v4 )
      {
        sub_100194B0(v4, 804);
        v3 = 0.0;
      }
    }
    *(float *)(a1 + 804) = v3;
  }
  v14 = v3;
  if ( *(_DWORD *)(a1 + 808) != LODWORD(v14) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      *(float *)(a1 + 808) = v3;
    }
    else
    {
      v5 = *(int **)(a1 + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 808);
        v3 = 0.0;
      }
      *(float *)(a1 + 808) = v3;
    }
  }
  if ( *(_DWORD *)(a1 + 812) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(a1 + 24);
      if ( v6 )
        sub_100194B0(v6, 812);
    }
    *(_DWORD *)(a1 + 812) = 0;
  }
  v7 = sub_100E8220(a2, "sprites/plasma1.vmt");
  if ( *(_DWORD *)(a1 + 816) != v7 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(a1 + 24);
      if ( v8 )
        sub_100194B0(v8, 816);
    }
    *(_DWORD *)(a1 + 816) = v7;
  }
  v9 = sub_100E8220(v7, "sprites/plasma1.vmt");
  if ( *(_DWORD *)(a1 + 820) != v9 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(a1 + 24);
      if ( v10 )
        sub_100194B0(v10, 820);
    }
    *(_DWORD *)(a1 + 820) = v9;
  }
  v11 = sub_100E8220(v9, "sprites/fire_floor.vmt");
  result = a1;
  if ( *(_DWORD *)(a1 + 824) != v11 )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
      *(_DWORD *)(a1 + 824) = v11;
    }
    else
    {
      v13 = *(int **)(a1 + 24);
      if ( v13 )
        sub_100194B0(v13, 824);
      *(_DWORD *)(a1 + 824) = v11;
      return a1;
    }
  }
  return result;
}

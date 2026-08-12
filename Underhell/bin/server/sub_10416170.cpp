int __thiscall sub_10416170(int this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  int v8; // eax
  int *v9; // ecx
  float v11[3]; // [esp+18h] [ebp-1Ch] BYREF
  float v12[3]; // [esp+24h] [ebp-10h] BYREF
  float v13; // [esp+30h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/weapons/flare.mdl");
  v12[0] = 2.0;
  v12[1] = 2.0;
  v12[2] = 2.0;
  v11[0] = -2.0;
  v11[1] = -2.0;
  v11[2] = -2.0;
  sub_1025F360((_DWORD *)this, (int)v11, (int)v12);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
  sub_100E0970(this, v2, 0, 0);
  v3 = *(_DWORD *)(this + 556);
  v13 = 0.60000002;
  if ( v3 != COERCE_INT(0.60000002) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 696))(this, this + 556);
    *(float *)(this + 556) = 0.60000002;
  }
  *(float *)(this + 552) = sub_10260720(400.0);
  v4 = *(_DWORD *)(this + 2112);
  v13 = *(float *)(dword_106B31C8 + 12) + 90.0;
  if ( v4 != LODWORD(v13) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 2112);
    }
    *(float *)(this + 2112) = v13;
  }
  sub_100EAB80((_DWORD *)this, 80);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 && *(_BYTE *)(this + 2133) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 2133);
    }
    *(_BYTE *)(this + 2133) = 0;
  }
  if ( (*(_BYTE *)(this + 248) & 2) != 0 && *(_BYTE *)(this + 2134) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        sub_100194B0(v7, 2134);
    }
    *(_BYTE *)(this + 2134) = 0;
  }
  if ( (*(_BYTE *)(this + 248) & 4) != 0 )
  {
    v8 = *(_DWORD *)(this + 2112);
    v13 = -1.0;
    if ( v8 != COERCE_INT(-1.0) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v9 = *(int **)(this + 24);
        if ( v9 )
          sub_100194B0(v9, 2112);
      }
      *(float *)(this + 2112) = -1.0;
    }
  }
  if ( (*(_BYTE *)(this + 248) & 8) != 0 )
    sub_100EAB80((_DWORD *)this, 32);
  return sub_100EA940((int *)this, 0x2000000);
}

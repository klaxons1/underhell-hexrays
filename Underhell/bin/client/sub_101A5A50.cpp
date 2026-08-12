bool __thiscall sub_101A5A50(_DWORD *this)
{
  int *v2; // eax
  int **v3; // eax
  int *v4; // edi
  int v5; // ecx
  float *v7; // eax
  float *v8; // edi
  int v9; // ecx
  float **v10; // eax
  float *v11; // edi
  int v12; // ecx
  int v13; // [esp-8h] [ebp-14h]
  int *v14; // [esp+8h] [ebp-4h] BYREF

  if ( !this[542] )
  {
    v13 = (*(int (__thiscall **)(_DWORD *, const char *))(this[1] + 140))(this + 1, "core");
    v2 = (int *)(*(int (__thiscall **)(_DWORD *))(*this + 8))(this);
    v3 = sub_100F15C0(&v14, (int)"physpowerup", *v2, v13, 0);
    v4 = *v3;
    if ( *v3 != (int *)this[542] )
    {
      if ( v4 )
        sub_100F2950(*v3);
      v5 = this[542];
      if ( v5 )
        sub_100F2FF0(v5);
      this[542] = v4;
    }
    if ( v14 )
      sub_100F2FF0((int)v14);
    if ( !this[542] )
      return 0;
  }
  if ( !this[544] )
  {
    v7 = sub_100F0D70(&flt_10459240, (int)"physpowerup_att");
    v8 = v7;
    if ( v7 != (float *)this[544] )
    {
      if ( v7 )
        sub_100F2950(v7);
      v9 = this[544];
      if ( v9 )
        sub_100F2FF0(v9);
      this[544] = v8;
    }
    if ( !this[544] )
      return 0;
  }
  if ( this[543] )
    return 1;
  v10 = sub_100F32D0((float **)&v14, (int)"physpowerup_glow");
  v11 = *v10;
  if ( *v10 != (float *)this[543] )
  {
    if ( v11 )
      sub_100F2950(*v10);
    v12 = this[543];
    if ( v12 )
      sub_100F2FF0(v12);
    this[543] = v11;
  }
  if ( v14 )
    sub_100F2FF0((int)v14);
  return this[543] != 0;
}

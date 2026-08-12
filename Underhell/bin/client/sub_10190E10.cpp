bool __thiscall sub_10190E10(_DWORD *this)
{
  float **v2; // eax
  float *v3; // edi
  int v4; // ecx
  float *v6; // eax
  float *v7; // eax
  float *v8; // edi
  int v9; // ecx
  float *v10; // [esp+8h] [ebp-4h] BYREF

  if ( !this[303] )
  {
    v2 = sub_100F32D0(&v10, (int)"energycore");
    v3 = *v2;
    if ( *v2 != (float *)this[303] )
    {
      if ( v3 )
        sub_100F2950(*v2);
      v4 = this[303];
      if ( v4 )
        sub_100F2FF0(v4);
      this[303] = v3;
    }
    if ( v10 )
      sub_100F2FF0((int)v10);
    if ( !this[303] )
      return 0;
  }
  if ( this[304] )
    return 1;
  v6 = (float *)(*(int (__thiscall **)(_DWORD *))(*this + 36))(this);
  v7 = sub_100F0D70(v6, (int)"energyattractor");
  v8 = v7;
  if ( v7 != (float *)this[304] )
  {
    if ( v7 )
      sub_100F2950(v7);
    v9 = this[304];
    if ( v9 )
      sub_100F2FF0(v9);
    this[304] = v8;
  }
  return this[304] != 0;
}

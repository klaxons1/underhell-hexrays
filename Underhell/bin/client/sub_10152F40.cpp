float *__thiscall sub_10152F40(float *this)
{
  float *v2; // ebx
  float *v3; // eax
  float *v4; // edi
  float *v5; // edi
  int v6; // ecx

  sub_1003D000((int)this);
  *(_DWORD *)this = &C_Embers::`vftable';
  *((_DWORD *)this + 1) = &C_Embers::`vftable';
  *((_DWORD *)this + 2) = &C_Embers::`vftable';
  *((_DWORD *)this + 3) = &C_Embers::`vftable';
  this[303] = -1.0;
  v2 = 0;
  this[304] = 0.0;
  this[305] = 0.0;
  v3 = (float *)sub_100DDA40(260);
  v4 = v3;
  if ( v3 )
  {
    sub_100F2BA0(v3, (int)"C_Embers");
    *(_DWORD *)v4 = &CEmberEmitter::`vftable';
    v2 = v4;
  }
  v5 = 0;
  if ( v2 )
  {
    sub_100F2950(v2);
    v5 = v2;
  }
  if ( v5 != *((float **)this + 305) )
  {
    if ( v5 )
      sub_100F2950(v5);
    v6 = *((_DWORD *)this + 305);
    if ( v6 )
      sub_100F2FF0(v6);
    *((_DWORD *)this + 305) = v5;
  }
  if ( v5 )
    sub_100F2FF0((int)v5);
  return this;
}

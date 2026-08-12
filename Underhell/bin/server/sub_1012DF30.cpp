_DWORD *__thiscall sub_1012DF30(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // ebx
  _DWORD *v4; // eax
  int v5; // esi
  _DWORD *v6; // ecx
  int v7; // ecx
  _DWORD *v8; // ecx

  *this = &CBaseEntityList::`vftable';
  this[16385] = 0;
  this[16386] = 0;
  this[16387] = 0;
  this[16388] = 0;
  v2 = this + 1;
  v3 = 4096;
  do
  {
    v2[3] = v2;
    v2[2] = v2;
    v2[1] = sub_10219A30() & 0x7FFF;
    *v2 = 0;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  v4 = this + 8199;
  v5 = 2047;
  do
  {
    v6 = (_DWORD *)*v4;
    if ( (_DWORD *)*v4 != v4 - 2 )
    {
      if ( v6 )
        v6[3] = v4[1];
      else
        this[16387] = v4[1];
      v7 = v4[1];
      if ( v7 )
        *(_DWORD *)(v7 + 8) = *v4;
      else
        this[16388] = *v4;
      v4[1] = v4 - 2;
      *v4 = v4 - 2;
    }
    v4[1] = 0;
    *v4 = this[16388];
    v8 = v4 - 2;
    this[16388] = v4 - 2;
    if ( *v4 )
      *(_DWORD *)(*v4 + 12) = v8;
    else
      this[16387] = v8;
    v4 += 4;
    --v5;
  }
  while ( v5 );
  return this;
}

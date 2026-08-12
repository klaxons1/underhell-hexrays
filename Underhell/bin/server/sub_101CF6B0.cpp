_DWORD *__thiscall sub_101CF6B0(_DWORD *this, char a2)
{
  int v3; // edx

  v3 = this[1422];
  *this = &CRagdollPropAttached::`vftable';
  this[280] = &CRagdollPropAttached::`vftable';
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, v3);
  this[1422] = 0;
  sub_101CC0A0((int)this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}

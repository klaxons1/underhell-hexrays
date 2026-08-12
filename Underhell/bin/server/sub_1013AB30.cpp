_DWORD *__thiscall sub_1013AB30(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = this[210];
  *this = &CEnvShake::`vftable';
  if ( v3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, v3);
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}

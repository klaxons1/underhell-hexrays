int __thiscall sub_100249C0(_DWORD *this)
{
  int v1; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // ebx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ebx

  v1 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v3 = (_DWORD *)this[275];
  if ( v3 && *v3 )
    v4 = this[275];
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  this[545] = sub_100BD5F0(v4, "aim_pitch");
  v5 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v6 = (_DWORD *)this[275];
  if ( v6 && *v6 )
    v7 = this[275];
  else
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  this[546] = sub_100BD5F0(v7, "aim_yaw");
  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v9 = (_DWORD *)this[275];
  if ( v9 && *v9 )
    v10 = this[275];
  else
    v10 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  this[547] = sub_100BD5F0(v10, "move_yaw");
  return nullsub_4(this);
}

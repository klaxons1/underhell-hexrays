int __thiscall sub_10019D50(_DWORD *this, int a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  int v9; // edi
  _DWORD *v10; // eax
  int v11; // ebx
  int v12; // edi
  _DWORD *v13; // eax
  int v14; // ebx
  int v15; // edi
  _DWORD *v16; // eax
  int v17; // ebx
  int v18; // edi
  _DWORD *v19; // eax
  int v20; // ebx
  int v21; // edi
  _DWORD *v22; // eax
  int v23; // ebx
  int v24; // edi
  _DWORD *v25; // eax
  int v26; // ebx

  sub_100EEE20(a2);
  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v4 = (_DWORD *)this[275];
  if ( v4 && *v4 )
    v5 = this[275];
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  this[961] = sub_100BD5F0(v5, "body_yaw");
  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v7 = (_DWORD *)this[275];
  if ( v7 && *v7 )
    v8 = this[275];
  else
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  this[962] = sub_100BD5F0(v8, "spine_yaw");
  v9 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v10 = (_DWORD *)this[275];
  if ( v10 && *v10 )
    v11 = this[275];
  else
    v11 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 104))(v9);
  this[963] = sub_100BD5F0(v11, "neck_trans");
  v12 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v13 = (_DWORD *)this[275];
  if ( v13 && *v13 )
    v14 = this[275];
  else
    v14 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 104))(v12);
  this[964] = sub_100BD5F0(v14, "head_yaw");
  v15 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v16 = (_DWORD *)this[275];
  if ( v16 && *v16 )
    v17 = this[275];
  else
    v17 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 104))(v15);
  this[965] = sub_100BD5F0(v17, "head_pitch");
  v18 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v19 = (_DWORD *)this[275];
  if ( v19 && *v19 )
    v20 = this[275];
  else
    v20 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v18 + 104))(v18);
  this[966] = sub_100BD5F0(v20, "head_roll");
  sub_10019700(this + 967, "body_rightleft");
  sub_10019700(this + 968, "chest_rightleft");
  sub_10019700(this + 969, "head_forwardback");
  sub_10019700(this + 970, "head_rightleft");
  sub_10019700(this + 971, "head_updown");
  sub_10019700(this + 972, "head_tilt");
  v21 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v22 = (_DWORD *)this[275];
  if ( v22 && *v22 )
    v23 = this[275];
  else
    v23 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v21 + 104))(v21);
  this[973] = sub_100BD5F0(v23, "gesture_height");
  v24 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v25 = (_DWORD *)this[275];
  if ( v25 && *v25 )
    v26 = this[275];
  else
    v26 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 104))(v24);
  this[974] = sub_100BD5F0(v26, "gesture_width");
  sub_10019700(this + 975, "gesture_updown");
  return sub_10019700(this + 976, "gesture_rightleft");
}

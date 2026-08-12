int __thiscall sub_10024D60(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // ebx
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // ebx
  float v8; // [esp+1Ch] [ebp-8h]
  int v9; // [esp+1Ch] [ebp-8h]
  int v10; // [esp+1Ch] [ebp-8h]
  float v11; // [esp+20h] [ebp-4h]

  v11 = sub_100BE820(this[545]);
  v8 = sub_100BE820(this[546]);
  sub_10424B50(0.0, v11, 3.0);
  sub_10424CA0(0.0);
  sub_10424B50(0.0, v8, 2.0);
  sub_10424CA0(0.0);
  v2 = dword_10700AC8;
  v9 = this[545];
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v3 = (_DWORD *)this[275];
  if ( !v3 || !*v3 )
    v3 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  sub_100BE7D0((int)v3, v9, 0.0);
  v4 = dword_10700AC8;
  v10 = this[546];
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v5 = (_DWORD *)this[275];
  if ( v5 && *v5 )
    v6 = this[275];
  else
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  return sub_100BE7D0(v6, v10, 0.0);
}

int __thiscall sub_1001A3C0(int this)
{
  double v2; // st7
  int v3; // edi
  _DWORD *v4; // ebx
  double v5; // st7
  int v6; // edi
  _DWORD *v7; // ebx
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // ebx
  int v12; // [esp+10h] [ebp-8h]
  int v13; // [esp+10h] [ebp-8h]
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]
  int v16; // [esp+14h] [ebp-4h]
  int v17; // [esp+14h] [ebp-4h]

  v2 = sub_100ED7A0(*(_DWORD *)(this + 3868));
  v3 = dword_10700AC8;
  *(float *)&v15 = v2 + *(float *)(this + 3724);
  v12 = *(_DWORD *)(this + 3844);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750(this);
  v4 = *(_DWORD **)(this + 1100);
  if ( !v4 || !*v4 )
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  sub_100BE7D0((int)v4, v12, *(float *)&v15);
  v5 = sub_100ED7A0(*(_DWORD *)(this + 3872));
  v6 = dword_10700AC8;
  *(float *)&v13 = v5 + *(float *)(this + 3720);
  v16 = *(_DWORD *)(this + 3848);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750(this);
  v7 = *(_DWORD **)(this + 1100);
  if ( !v7 || !*v7 )
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  sub_100BE7D0((int)v7, v16, *(float *)&v13);
  *(float *)&v14 = sub_100ED7A0(*(_DWORD *)(this + 3876));
  v8 = dword_10700AC8;
  v17 = *(_DWORD *)(this + 3852);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750(this);
  v9 = *(_DWORD **)(this + 1100);
  if ( v9 && *v9 )
    v10 = *(_DWORD *)(this + 1100);
  else
    v10 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  return sub_100BE7D0(v10, v17, *(float *)&v14);
}

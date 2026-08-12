int __thiscall sub_10318450(int this)
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
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v3 = *(_DWORD **)(this + 1100);
  if ( v3 && *v3 )
    v4 = *(_DWORD *)(this + 1100);
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
  *(_DWORD *)(this + 3928) = sub_100BD5F0(v4, "weapon_pitch");
  v5 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD **)(this + 1100);
  if ( v6 && *v6 )
    v7 = *(_DWORD *)(this + 1100);
  else
    v7 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 104))(v5);
  *(_DWORD *)(this + 3932) = sub_100BD5F0(v7, "weapon_yaw");
  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v9 = *(_DWORD **)(this + 1100);
  if ( v9 && *v9 )
    v10 = *(_DWORD *)(this + 1100);
  else
    v10 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  *(_DWORD *)(this + 3936) = sub_100BD5F0(v10, "rudder");
  return sub_100249C0((_DWORD *)this);
}

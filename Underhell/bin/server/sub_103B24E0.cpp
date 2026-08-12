int __thiscall sub_103B24E0(int this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx

  if ( !byte_106EADA4 )
  {
    v2 = dword_10700AC8;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v3 = *(_DWORD **)(this + 1100);
    if ( v3 && *v3 )
      v4 = *(_DWORD *)(this + 1100);
    else
      v4 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
    v5 = sub_100BD5F0(v4, "miniGunYaw");
    v6 = dword_10700AC8;
    dword_106EADA8 = v5;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
    if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
      sub_100BD750((volatile signed __int32 *)this);
    v7 = *(_DWORD **)(this + 1100);
    if ( v7 && *v7 )
      v8 = *(_DWORD *)(this + 1100);
    else
      v8 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
    dword_106EADAC = sub_100BD5F0(v8, "miniGunPitch");
    byte_106EADA4 = 1;
  }
  return sub_100249C0((_DWORD *)this);
}

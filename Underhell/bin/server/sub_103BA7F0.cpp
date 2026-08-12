int __thiscall sub_103BA7F0(int this)
{
  _DWORD *v2; // eax

  sub_10041230((float *)this);
  *(_DWORD *)(this + 3620) = &IStriderMinigunHost::`vftable';
  *(_DWORD *)this = &CNPC_Strider::`vftable';
  *(_DWORD *)(this + 2104) = &CNPC_Strider::`vftable';
  *(_DWORD *)(this + 3620) = &CNPC_Strider::`vftable';
  *(float *)(this + 3788) = 0.0;
  *(float *)(this + 3792) = 0.0;
  *(float *)(this + 3784) = -1.0;
  *(_DWORD *)(this + 3796) = -1;
  *(_DWORD *)(this + 3800) = -1;
  *(float *)(this + 3804) = -1.0;
  *(float *)(this + 3816) = -1.0;
  sub_101BD540((_DWORD *)(this + 3820));
  *(_DWORD *)(this + 3900) = -1;
  *(_DWORD *)(this + 3920) = -1;
  *(_DWORD *)(this + 3928) = -1;
  *(float *)(this + 3932) = -1.0;
  *(_DWORD *)(this + 3936) = &CAI_FreePass::`vftable';
  *(_DWORD *)(this + 3940) = 0;
  *(_DWORD *)(this + 3944) = -1;
  *(float *)(this + 3948) = 0.0;
  *(float *)(this + 3952) = 0.0;
  *(float *)(this + 3956) = 0.0;
  *(float *)(this + 3960) = 0.0;
  *(float *)(this + 3964) = -1.0;
  *(_DWORD *)(this + 4004) = 0;
  *(_DWORD *)(this + 4008) = 0;
  *(_DWORD *)(this + 4012) = 0;
  *(_DWORD *)(this + 4016) = 0;
  *(_DWORD *)(this + 4020) = 0;
  sub_10043190();
  if ( dword_10679E04 != dword_10694898 )
  {
    sub_103B8CF0();
    byte_10679E00 = 1;
    dword_10679E04 = dword_10694898;
  }
  *(_DWORD *)(this + 3896) = "null";
  *(_DWORD *)(this + 3900) = -1;
  v2 = (_DWORD *)sub_10184390(96);
  if ( v2 )
  {
    *v2 = &CStriderMinigun::`vftable';
    v2[7] = -1;
  }
  else
  {
    v2 = 0;
  }
  *(_DWORD *)(this + 3640) = v2;
  *(_DWORD *)(this + 3928) = -1;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)(this + 3936) + 4))(this + 3936, this);
  *(_BYTE *)(this + 3624) = 0;
  return this;
}

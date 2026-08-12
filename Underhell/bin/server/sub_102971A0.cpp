void __thiscall sub_102971A0(unsigned int this, unsigned int a2)
{
  int v2; // eax
  int v4; // [esp+10h] [ebp-4h] BYREF

  v2 = -1;
  v4 = -1;
  if ( a2 )
    v2 = *(_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 8))(a2);
  v4 = v2;
  sub_1010C270((float *)(this + 884), 13, (__int16 *)&v4);
  sub_1010DA50(
    (_DWORD *)(this + 884),
    *(_DWORD *)(this + 884),
    *(_DWORD *)(this + 888),
    *(_DWORD *)(this + 892),
    *(_DWORD *)(this + 896),
    *(_DWORD *)(this + 900),
    __SPAIR64__(this, a2),
    0.0);
}

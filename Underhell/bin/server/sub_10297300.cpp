void __thiscall sub_10297300(unsigned int this, unsigned int a2)
{
  int v2; // eax
  int v4; // [esp+10h] [ebp-4h] BYREF

  v2 = -1;
  v4 = -1;
  if ( a2 )
    v2 = *(_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a2 + 8))(a2);
  v4 = v2;
  sub_1010C270((float *)(this + 932), 13, (__int16 *)&v4);
  sub_1010DA50(
    (_DWORD *)(this + 932),
    *(_DWORD *)(this + 932),
    *(_DWORD *)(this + 936),
    *(_DWORD *)(this + 940),
    *(_DWORD *)(this + 944),
    *(_DWORD *)(this + 948),
    __SPAIR64__(this, a2),
    0.0);
}

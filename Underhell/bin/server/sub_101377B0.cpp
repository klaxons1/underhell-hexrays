void __thiscall sub_101377B0(unsigned int this, int *a2)
{
  int v3; // eax
  __int16 v4; // si

  v3 = *(_DWORD *)(this + 248);
  v4 = 2 - ((v3 & 1) != 0);
  if ( (v3 & 2) != 0 )
    v4 |= 4u;
  if ( (v3 & 8) != 0 )
    v4 |= 8u;
  if ( (v3 & 4) != 0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*a2 + 324))(*a2) )
      sub_102600B0(*a2, this + 116, *(float *)(this + 800), *(float *)(this + 804), v4);
  }
  else
  {
    sub_10260010(this + 116, *(float *)(this + 800), *(float *)(this + 804), v4 | 0x10);
  }
  sub_1010DD80((_DWORD *)(this + 808), __SPAIR64__(this, *a2), 0.0);
}

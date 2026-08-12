int __thiscall sub_10169970(int this, int a2)
{
  void ***v3; // eax
  float *v4; // eax
  float *v5; // edi
  float v7; // [esp+8h] [ebp-18h]

  sub_101693B0(this - 4);
  sub_101698D0(this - 4);
  if ( ((**(int (__thiscall ***)(int, int, _DWORD))dword_104131A0)(dword_104131A0, this + 12, 0) & 0x20) != 0 )
  {
    v3 = (void ***)sub_100A08D0();
  }
  else
  {
    if ( (*(_BYTE *)(this + 36) & 0x40) == 0 )
    {
      v4 = (float *)sub_100DDA40(216);
      v5 = v4;
      if ( v4 )
      {
        sub_100AFB90(v4);
        *(_DWORD *)v5 = &CExplosionOverlay::`vftable';
        v5[41] = 0.0;
        v5[1] = *(float *)(this + 12);
        v5[2] = *(float *)(this + 16);
        v5[3] = *(float *)(this + 20);
        *((_DWORD *)v5 + 34) = 1;
        v5[42] = 1.0;
        v5[43] = 0.89999998;
        v5[44] = 0.69999999;
        v5[13] = 0.050000001;
        v5[14] = 0.025;
        sub_100B0E30(v5);
      }
    }
    v3 = sub_100A0860();
  }
  v7 = (float)*(int *)(this + 60);
  return ((int (__thiscall *)(void ***, int, _DWORD, _DWORD, _DWORD))**v3)(
           v3,
           this + 12,
           LODWORD(v7),
           *(float *)(this + 28),
           *(_DWORD *)(this + 36));
}

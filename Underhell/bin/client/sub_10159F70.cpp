char __thiscall sub_10159F70(int this, int *a2, int (__thiscall ***a3)(_DWORD, const char *, _DWORD))
{
  int v4; // ecx
  char result; // al
  int (__thiscall *v6)(int); // edx
  float *v7; // eax
  int (__thiscall *v8)(int, _DWORD); // eax
  char Buffer[256]; // [esp+1Ch] [ebp-100h] BYREF

  if ( this == 1424 )
    v4 = 0;
  else
    v4 = this - 232;
  result = sub_100F0010(a2, this - 228, v4);
  if ( result )
  {
    (*(void (__thiscall **)(int, int *, int (__thiscall ***)(_DWORD, const char *, _DWORD)))(*(_DWORD *)(this + 7600) + 4))(
      this + 7600,
      a2,
      a3);
    *(float *)(this + 7636) = 0.5;
    sub_1015C8C0(40.0);
    v6 = *(int (__thiscall **)(int))(*(_DWORD *)(this - 1424) + 36);
    *(float *)(this + 7644) = 0.0;
    *(float *)(this + 7648) = 0.0;
    *(float *)(this + 7660) = 3.0;
    *(float *)(this + 7664) = 10.0;
    *(float *)(this + 7668) = 0.0;
    v7 = (float *)v6(this - 1424);
    sub_10034A30((float *)(this + 6176), v7);
    sub_10228370(Buffer, 0x100u, "particle/particle_smokegrenade%d", 1);
    *(_DWORD *)(this + 940) = sub_100F0C50(this - 228, (int)a2, this, Buffer);
    if ( *(_BYTE *)(this + 4) == 2 )
      sub_10159BD0((char *)(this - 1424));
    if ( a3 )
    {
      if ( (**a3)(a3, "-FillVolume", 0) )
        sub_10159BD0((char *)(this - 1424));
    }
    v8 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 1424) + 408);
    *(_BYTE *)(this + 936) = 1;
    return v8(this - 1424, -1293.0);
  }
  return result;
}

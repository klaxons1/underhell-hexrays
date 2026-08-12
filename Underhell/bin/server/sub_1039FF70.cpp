void __thiscall sub_1039FF70(int this, int a2, int a3)
{
  double v4; // st7
  int v5; // eax
  int *v6; // ecx
  int v7; // edi
  __int64 v8; // [esp+0h] [ebp-18h]
  float v9; // [esp+24h] [ebp+Ch]

  if ( a3 == 1 )
  {
    if ( *(_BYTE *)(this + 157) )
      v4 = 0.1;
    else
      v4 = *(float *)(dword_106EA74C + 44);
    v9 = v4 + *(float *)(dword_106B31C8 + 12);
    if ( *(_DWORD *)(this + 132) != LODWORD(v9) )
    {
      v5 = this - 3672;
      if ( *(_BYTE *)(this - 3588) )
      {
        *(_BYTE *)(v5 + 88) |= 1u;
        *(float *)(this + 132) = v9;
      }
      else
      {
        v6 = *(int **)(v5 + 24);
        if ( v6 )
          sub_100194B0(v6, 3804);
        *(float *)(this + 132) = v9;
      }
    }
  }
  else
  {
    *(float *)(this + 68) = flt_106F1CA8;
    v7 = this - 3672;
    *(float *)(this + 72) = flt_106F1CAC;
    *(float *)(this + 76) = flt_106F1CB0;
    if ( *(_DWORD *)(this - 3672 + 3832) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(
        dword_106BAFF4,
        *(_DWORD *)(this - 3672 + 3832));
      *(_DWORD *)(v7 + 3832) = 0;
    }
    sub_1010C110(dword_10614CA8, this - 3672, "JoltVehicle");
    HIDWORD(v8) = this - 3672;
    LODWORD(v8) = a2;
    *(_DWORD *)(v7 + 3812) = -1;
    sub_1010DD80((_DWORD *)(this + 28), v8, 0.0);
    *(_BYTE *)(this + 136) = 1;
    *(_BYTE *)(this + 92) = 1;
    sub_1023C380((_DWORD *)(this - 3672), (int)"NPC_RollerMine.Held", 0.0, 0);
  }
}

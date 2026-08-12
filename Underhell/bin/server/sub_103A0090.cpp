void __thiscall sub_103A0090(int this, int a2, int a3)
{
  bool v4; // zf
  double v5; // st7
  int v6; // eax
  int *v7; // ecx
  int *v8; // edi
  int v9; // ebx
  unsigned __int16 v10; // ax
  __int64 v11; // [esp+0h] [ebp-18h]
  float v12; // [esp+14h] [ebp-4h]

  v4 = *(_BYTE *)(this + 157) == 0;
  *(_BYTE *)(this + 136) = 0;
  if ( v4 )
    v5 = *(float *)(dword_106EA74C + 44);
  else
    v5 = 0.1;
  v12 = v5 + *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(this + 132) != LODWORD(v12) )
  {
    v6 = this - 3672;
    if ( *(_BYTE *)(this - 3588) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v6 + 24);
      if ( v7 )
        sub_100194B0(v7, 3804);
    }
    *(float *)(this + 132) = v12;
  }
  *(_BYTE *)(this + 92) = 0;
  if ( a3 == 3 )
  {
    if ( *(_BYTE *)(this + 128) )
    {
      v8 = *(int **)(this - 3248);
      *(_DWORD *)(this - 3476) = nullsub_5;
      v9 = *v8;
      v10 = (*(int (__thiscall **)(int *))(*v8 + 92))(v8);
      (*(void (__thiscall **)(int *, int))(v9 + 88))(v8, v10 | 0xC);
    }
    sub_1023C380((_DWORD *)(this - 3672), (int)"NPC_RollerMine.Tossed", 0.0, 0);
  }
  HIDWORD(v11) = this - 3672;
  LODWORD(v11) = a2;
  sub_1010DD80((_DWORD *)(this + 4), v11, 0.0);
}

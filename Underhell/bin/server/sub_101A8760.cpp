char __thiscall sub_101A8760(int this)
{
  float *v2; // ebx
  char v3; // al
  int v4; // ecx
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ecx
  const char *v9; // eax
  int v10; // ecx
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  double v14; // st7
  double v15; // st7

  v2 = (float *)(this + 3676);
  *(float *)(this + 3688) = *(float *)(this + 3676);
  *(float *)(this + 3692) = *(float *)(this + 3680);
  *(float *)(this + 3696) = *(float *)(this + 3684);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *v2 = *(float *)(this + 580);
  v2[1] = *(float *)(this + 584);
  v2[2] = *(float *)(this + 588);
  v3 = sub_1007E020(*(_DWORD **)(this + 2588));
  v4 = *(_DWORD *)(this + 2588);
  if ( v3 )
  {
    sub_100820C0(v4);
LABEL_5:
    sub_101A83B0(this);
    sub_10027CD0((_DWORD *)this, 0);
    *(_DWORD *)(this + 2608) = -1;
    return 1;
  }
  v6 = **(_DWORD **)(v4 + 36);
  if ( v6 )
  {
    if ( (*(_BYTE *)(v6 + 32) & 2) != 0 )
    {
      v7 = *(_DWORD *)(v6 + 24);
      if ( v7 != -1 && off_1061BE18[4 * (v7 & 0xFFF) + 2] == v7 >> 12 )
      {
        v8 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
        if ( v8 )
        {
          if ( *(float *)(v8 + 108) > 0.0 )
          {
            if ( *(float *)(v8 + 108) > 1.0 )
            {
              v9 = *(const char **)(v8 + 260);
              if ( !v9 )
                v9 = String;
              Warning(
                "path_track %s tried to tell the npc_vehicledriver to set speed to %.3f. npc_vehicledriver only accepts v"
                "alues between 0 and 1.\n",
                v9,
                *(float *)(v8 + 108));
            }
            else
            {
              *(float *)(this + 3728) = *(float *)(v8 + 108);
              sub_101A8420(this);
            }
          }
        }
      }
    }
    sub_100820C0(*(_DWORD *)(this + 2588));
    v10 = *(_DWORD *)(this + 2588);
    if ( !**(_DWORD **)(v10 + 36) )
      goto LABEL_5;
    v11 = (float *)sub_1007DFE0((_DWORD *)v10);
    *(float *)(this + 3664) = *v11;
    *(float *)(this + 3668) = v11[1];
    *(float *)(this + 3672) = v11[2];
    sub_101A82E0(this);
    sub_10184660(*(_DWORD *)(this + 3644));
    *(_DWORD *)(this + 3644) = *(_DWORD *)(this + 3648);
    v12 = (float *)sub_10184390(76);
    if ( v12 )
      v13 = sub_101A84C0(v12, v2, (float *)(this + 3664), (float *)(this + 3700), (float *)(this + 3712));
    else
      v13 = 0;
    v14 = *(float *)(this + 3724);
    *(_DWORD *)(this + 3640) = v13;
    v15 = v14 - 1.0;
    *(_DWORD *)(this + 3648) = v13;
    if ( v15 < 0.0 )
      v15 = 0.0;
    *(float *)(this + 3724) = v15;
    sub_101A9BF0(this);
  }
  return 0;
}

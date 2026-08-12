bool __thiscall sub_102FFFD0(int this, float *a2, int a3, float *a4)
{
  double v6; // st4
  double v7; // st6
  double v8; // st4
  double v9; // st5
  double v10; // st6
  float *v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  float *v15; // [esp-8h] [ebp-74h]
  float v16; // [esp+8h] [ebp-64h]
  _BYTE v17[76]; // [esp+18h] [ebp-54h] BYREF
  int v18; // [esp+64h] [ebp-8h]
  int savedregs; // [esp+6Ch] [ebp+0h] BYREF

  if ( !sub_102FF260(*a4, a4[1], a4[2]) )
    return 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v6 = a4[1] - *(float *)(this + 584);
  v7 = v6 * v6;
  v8 = *a4 - *(float *)(this + 580);
  v9 = v7;
  v10 = a4[2] - *(float *)(this + 588);
  v16 = v8 * v8 + v9 + v10 * v10;
  if ( off_10689708(v16) < 128.0 )
    return 0;
  if ( (*(_DWORD *)(this + 248) & 0x20000) != 0 )
  {
    if ( *(_DWORD *)(dword_106E2C8C + 48) )
    {
      v15 = (float *)sub_10073730(*(_DWORD *)(this + 1676));
      v11 = (float *)sub_10073710(*(_DWORD *)(this + 1676));
      sub_100231A0((int)&savedregs, this, a4, a4, v11, v15, 33701899, this, 0, (int)v17);
      if ( v18 )
      {
        v12 = sub_100D7680(v18);
        if ( v12 )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 220))(v12) == 4 )
          {
            v13 = __RTDynamicCast(
                    v12,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
                    (int)&CNPC_Antlion `RTTI Type Descriptor',
                    0);
            v14 = v13;
            if ( v13 )
            {
              if ( sub_102FDD20(v13) )
              {
                sub_10078690(*(_DWORD *)(v14 + 2604), (int)a4, 0.0, 0.0);
                sub_100457E0((_DWORD *)v14, 68);
                *(float *)(v14 + 3656) = *(float *)(dword_106B31C8 + 12) + 2.0;
              }
            }
          }
        }
      }
    }
  }
  return sub_10042560(a2, a3, a4, 512.0, 512.0, 1024.0);
}

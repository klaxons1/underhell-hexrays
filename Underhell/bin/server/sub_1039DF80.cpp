void __thiscall sub_1039DF80(int this)
{
  _DWORD *v2; // ecx
  int i; // eax
  int v4; // edx
  double v5; // st7
  int v6; // edi
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // eax
  _BYTE v12[256]; // [esp+4h] [ebp-130h] BYREF
  _DWORD v13[5]; // [esp+104h] [ebp-30h] BYREF
  float v14[3]; // [esp+118h] [ebp-1Ch] BYREF
  float v15[3]; // [esp+124h] [ebp-10h] BYREF
  int v16; // [esp+130h] [ebp-4h] BYREF

  if ( *(_BYTE *)(this + 3827) && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3804) )
  {
    v2 = *(_DWORD **)(this + 2796);
    *(_BYTE *)(this + 3827) = 0;
    if ( v2 )
    {
      for ( i = sub_100B1560(v2, &v16, 1); i; i = sub_100B1630(*(_DWORD **)(this + 2796), &v16, 1) )
        sub_1039DD90((_DWORD *)this, i);
    }
    else
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v4 = *(_DWORD *)(this + 252) >> 11;
      v5 = 256.0;
      v14[0] = *(float *)(this + 580) + 256.0;
      v14[1] = *(float *)(this + 584) + 256.0;
      v14[2] = *(float *)(this + 588) + 64.0;
      if ( (v4 & 1) != 0 )
      {
        sub_100DAE60(this);
        v5 = 256.0;
      }
      v15[0] = *(float *)(this + 580) - v5;
      v15[1] = *(float *)(this + 584) - v5;
      v15[2] = *(float *)(this + 588) - 64.0;
      sub_1025F990(v13, (int)v12, 64, 0x2000);
      v6 = sub_1025F9C0((int)v15, (int)v14, (int)v13);
      v7 = 0;
      while ( v6 > 0 )
      {
        v8 = *(_DWORD *)&v12[4 * v6-- - 4];
        v9 = sub_100D7680(v8);
        if ( v9 )
        {
          if ( *(_DWORD *)(v9 + 92) == *(_DWORD *)(this + 92) && v9 != this )
          {
            v10 = __RTDynamicCast(
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
                    (int)&CNPC_RollerMine `RTTI Type Descriptor',
                    0);
            if ( v10 )
            {
              if ( *(_DWORD *)(v10 + 2324) == 1 )
              {
                *(_BYTE *)(v10 + 3827) = 0;
                if ( *(_DWORD *)(v10 + 2336) != 2 )
                  *(_DWORD *)(v10 + 2336) = 2;
                if ( ++v7 >= 2 )
                  break;
              }
            }
          }
        }
      }
    }
  }
}

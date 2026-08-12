void __thiscall sub_1037D460(int this, int a2)
{
  int *v4; // ebx
  bool v5; // zf
  int v6; // edx
  int v7; // eax
  int v8; // eax
  double v9; // st7
  unsigned int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  char v14; // al
  int v15; // eax
  char v16; // al
  float v17; // [esp+0h] [ebp-1A0h]
  float v18[24]; // [esp+18h] [ebp-188h] BYREF
  char v19[44]; // [esp+78h] [ebp-128h] BYREF
  float v20; // [esp+A4h] [ebp-FCh]
  int v21; // [esp+C4h] [ebp-DCh]
  int v22[20]; // [esp+CCh] [ebp-D4h] BYREF
  int v23[3]; // [esp+11Ch] [ebp-84h] BYREF
  int v24[13]; // [esp+128h] [ebp-78h] BYREF
  int v25; // [esp+15Ch] [ebp-44h]
  int v26; // [esp+160h] [ebp-40h]
  __int16 v27; // [esp+164h] [ebp-3Ch]
  int v28; // [esp+168h] [ebp-38h]
  int v29; // [esp+16Ch] [ebp-34h]
  float v30[3]; // [esp+170h] [ebp-30h] BYREF
  float v31[3]; // [esp+17Ch] [ebp-24h] BYREF
  int v32[3]; // [esp+188h] [ebp-18h] BYREF
  float v33; // [esp+194h] [ebp-Ch] BYREF
  float v34; // [esp+198h] [ebp-8h]
  float v35; // [esp+19Ch] [ebp-4h]
  int savedregs; // [esp+1A0h] [ebp+0h] BYREF
  int v37; // [esp+1A8h] [ebp+8h]

  if ( ((*(_BYTE *)(a2 + 356) & 0x28) == 0 || *(_BYTE *)(a2 + 225) >= 2u)
    && *(char **)(a2 + 92) != "hunter_flechette"
    && !sub_100D6240((_DWORD *)a2, "hunter_flechette") )
  {
    v4 = (int *)sub_101C46A0();
    sub_10079DC0((float *)v23, (int)v4);
    v5 = *(_BYTE *)(a2 + 225) == 0;
    v24[11] = v4[14];
    v24[12] = v4[15];
    v25 = v4[16];
    v26 = v4[17];
    v27 = *((_WORD *)v4 + 36);
    v28 = v4[19];
    v29 = v4[20];
    if ( v5 )
    {
      v16 = *(_BYTE *)(a2 + 306);
      if ( !v16 && (v25 & 0x40000) == 0
        || v16 == 7 && (*(char **)(a2 + 92) == "func_breakable" || sub_100D6240((_DWORD *)a2, "func_breakable")) )
      {
        sub_1037D2A0(this, a2, (int)v23);
      }
      else
      {
        if ( (v25 & 0x40000) == 0 )
          sub_10262ED0((int)v23, 2, 0);
        sub_1025FAC0(this);
      }
    }
    else
    {
      if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
        sub_100DAFD0(this);
      v6 = *(_DWORD *)(this + 480);
      v7 = *(_DWORD *)(this + 484);
      v32[0] = *(_DWORD *)(this + 476);
      v32[1] = v6;
      v32[2] = v7;
      sub_10247FD0();
      off_10689714();
      v37 = *(int *)(dword_106E876C + 44);
      v8 = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBreakable `RTTI Type Descriptor',
             0);
      if ( !v8 || *(_DWORD *)(v8 + 812) )
      {
        v9 = *(float *)&v37;
      }
      else
      {
        v9 = (double)*(int *)(a2 + 220);
        if ( *(float *)&v37 >= v9 )
          v9 = *(float *)&v37;
      }
      v10 = *(_DWORD *)(this + 412);
      if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 2] != v10 >> 12 )
        v11 = 0;
      else
        v11 = off_1061BE18[4 * (*(_DWORD *)(this + 412) & 0xFFF) + 1];
      v17 = v9;
      sub_10248110((int)v22, this, v11, v17, 67112960, 0);
      sub_10248690((float *)v22, (float *)v32, (float *)v24, 0.69999999);
      v22[4] = v24[0];
      v22[5] = v24[1];
      v22[6] = v24[2];
      sub_100E8760((void *)a2, (int)v22, (int)v32, (int)v23);
      sub_10248230();
      if ( *(_DWORD *)(a2 + 420) != 6 )
      {
        v33 = 0.0;
        v34 = 0.0;
        v35 = 0.0;
        sub_100DD660(this, &v33);
        sub_1023C380((_DWORD *)this, (int)"NPC_Hunter.FlechetteHitBody", 0.0, 0);
        sub_101AB0C0(this);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        sub_10422220(this + 704, v31);
        off_10689714();
        v12 = *(_DWORD *)(this + 252) >> 11;
        v33 = v31[0] * 128.0;
        v34 = v31[1] * 128.0;
        v35 = 128.0 * v31[2];
        if ( (v12 & 1) != 0 )
          sub_100DAE60(this);
        v13 = *(_DWORD *)(this + 252) >> 11;
        v30[0] = v33 + *(float *)(this + 580);
        v30[1] = *(float *)(this + 584) + v34;
        v30[2] = *(float *)(this + 588) + v35;
        if ( (v13 & 1) != 0 )
          sub_100DAE60(this);
        sub_1002A5F0((int)&savedregs, a2, (float *)(this + 580), v30, 16449, a2, 0, (int)v19);
        if ( 1.0 != v20 && (!v21 || !*(_BYTE *)(v21 + 306)) )
          sub_1001F130(v18);
        v14 = *(_BYTE *)(a2 + 306);
        if ( (v14 == 6 || v14 == 7) && (*(int *)(a2 + 220) > 0 || *(_BYTE *)(a2 + 225) == 1) )
        {
          v15 = __RTDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                  (int)&CPhysicsProp `RTTI Type Descriptor',
                  0);
          if ( v15 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)(v15 + 1120) + 88))(v15 + 1120, 15);
          sub_1037D2A0(this, a2, (int)v23);
        }
        else
        {
          *(_DWORD *)(this + 196) = 0;
          sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
          sub_100EC3F0((_DWORD *)this, 0, 0.0, off_1067425C);
          sub_1025FAC0(this);
        }
      }
    }
  }
}

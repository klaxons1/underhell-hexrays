void __thiscall sub_10383F60(float *this, char **a2, float a3, int a4)
{
  int v6; // ecx
  int v7; // ecx
  double v8; // st7
  int v9; // eax
  int v10; // ecx
  float *v11; // ebx
  double v12; // st7
  double v13; // st6
  double v14; // st5
  int v15; // ecx
  double v16; // st6
  double v17; // st7
  float v18; // ecx
  float v19; // edx
  float v20; // eax
  double v21; // st7
  int v22; // ecx
  int v23; // ebx
  double v24; // st6
  double v25; // st7
  int v26; // eax
  float v27; // [esp+4h] [ebp-E0h]
  int v28[20]; // [esp+1Ch] [ebp-C8h] BYREF
  float v29[24]; // [esp+6Ch] [ebp-78h] BYREF
  int v30; // [esp+CCh] [ebp-18h] BYREF
  float v31; // [esp+D0h] [ebp-14h]
  float v32; // [esp+D4h] [ebp-10h]
  float v33; // [esp+D8h] [ebp-Ch]
  float v34; // [esp+DCh] [ebp-8h]
  float v35; // [esp+E0h] [ebp-4h]
  int v36; // [esp+ECh] [ebp+8h]
  int v37; // [esp+F0h] [ebp+Ch]

  if ( !*((_BYTE *)this + 447) || !(*((unsigned __int8 (__thiscall **)(char **))*a2 + 80))(a2) )
  {
    v6 = *((_DWORD *)this + 106);
    if ( !v6
      || ((*(int (__thiscall **)(int))(*(_DWORD *)v6 + 76))(v6) & 4) == 0
      || !a2
      || a2 != (char **)(*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 632))(this, 3.4028235e38) )
    {
      if ( *((_BYTE *)a2 + 225) )
      {
        *(float *)&v36 = *(float *)(dword_106E9A5C + 44) * a3;
        if ( (*((unsigned __int8 (__thiscall **)(char **))*a2 + 80))(a2) )
          *(float *)&v36 = *(float *)&v36 + *(float *)&v36;
        v7 = *((_DWORD *)this + 106);
        if ( v7 && ((*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7) & 4) != 0 )
        {
          v8 = a3 * 100.0;
        }
        else if ( (*((unsigned __int8 (__thiscall **)(char **))*a2 + 71))(a2)
               && (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 632))(this, 0.34999999) )
        {
          v8 = *(float *)(dword_106E792C + 44);
        }
        else if ( __RTDynamicCast(
                    (int)a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CBaseProp `RTTI Type Descriptor',
                    0)
               || __RTDynamicCast(
                    (int)a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CBreakable `RTTI Type Descriptor',
                    0) )
        {
          v8 = (double)(int)a2[55];
        }
        else if ( (*((unsigned __int8 (__thiscall **)(char **))*a2 + 71))(a2)
               && (*(int (__thiscall **)(float *, char **))(*(_DWORD *)this + 1080))(this, a2) == 1
               && (a2[23] == "npc_combine_s" || sub_100D6240(a2, "npc_combine_s")) )
        {
          v8 = *(float *)&v36 * 6.0;
        }
        else
        {
          v8 = *(float *)&v36;
        }
        if ( v8 < 1.0 )
          v8 = 1.0;
        v27 = v8;
        sub_10248110((int)v28, (int)this, (int)this, v27, 4, 0);
        v9 = (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 632))(this, 0.34999999);
        if ( v9 )
          v28[11] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
        v10 = a4;
        v11 = (float *)(a4 + 12);
        v12 = *(float *)(a4 + 12) - *(float *)a4;
        *(float *)&v30 = v12;
        v13 = *(float *)(a4 + 16) - *(float *)(a4 + 4);
        v31 = v13;
        v14 = *(float *)(a4 + 20) - *(float *)(a4 + 8);
        v32 = v14;
        if ( flt_106F1CA8 == v12 && flt_106F1CAC == v13 && flt_106F1CB0 == v14 )
        {
          if ( ((_DWORD)this[63] & 0x800) != 0 )
          {
            sub_100DAE60((int)this);
            v10 = a4;
          }
          v15 = *(_DWORD *)(v10 + 76);
          v37 = v15;
          if ( (*(_DWORD *)(v15 + 252) & 0x800) != 0 )
          {
            sub_100DAE60(v15);
            v15 = v37;
          }
          v16 = *(float *)(v15 + 584) - this[146];
          v17 = *(float *)(v15 + 588) - this[147];
          *(float *)&v30 = *(float *)(v15 + 580) - this[145];
          v31 = v16;
          v32 = v17;
        }
        sub_10248690((float *)v28, (float *)&v30, v11, 1.0);
        sub_100D9E70((int *)a2, (int)this, v28);
        if ( (*((int (__thiscall **)(char **))*a2 + 69))(a2) == -1 )
        {
          sub_1001F130(v29);
          v18 = this[906];
          v29[0] = *v11;
          v19 = this[907];
          v20 = this[908];
          v29[1] = *(float *)(a4 + 16);
          v21 = *(float *)(a4 + 20);
          v33 = v18;
          v22 = *((_DWORD *)this + 63);
          v29[2] = v21;
          v34 = v19;
          v35 = v20;
          if ( (v22 & 0x800) != 0 )
            sub_100DAE60((int)this);
          v29[9] = this[176];
          v29[10] = this[177];
          v29[11] = this[178];
          off_10689714();
          v23 = a4;
          v24 = *(float *)(a4 + 28);
          v25 = (*(float *)(a4 + 32) + v35) * 0.5;
          v29[6] = (v33 + *(float *)(a4 + 24)) * 0.5;
          v29[7] = (v24 + v34) * 0.5;
          v29[8] = v25;
          sub_1028E890((int)"ManhackSparks", (int)v29);
          sub_1023C380(this, (int)"NPC_Manhack.Grind", 0.0, 0);
        }
        else
        {
          v26 = (*((int (__thiscall **)(char **))*a2 + 69))(a2);
          sub_100E84B0(*(_DWORD *)(a4 + 12), *(_DWORD *)(a4 + 16), *(_DWORD *)(a4 + 20), (int)&flt_106B4F40, v26, 6.0);
          sub_1023C380(this, (int)"NPC_Manhack.Slice", 0.0, 0);
          v23 = a4;
        }
        sub_10382FE0(this, a2, v23);
        this[682] = *(float *)(dword_106B31C8 + 12);
        if ( *(float *)(dword_106B31C8 + 12) <= (double)this[953] )
        {
          if ( *((_BYTE *)this + 3853) )
          {
            *((_BYTE *)this + 3853) = 0;
            sub_1023C380(this, (int)"NPC_Manhack.ChargeEnd", 0.0, 0);
          }
          this[952] = *(float *)(dword_106B31C8 + 12) + 2.0;
          this[953] = *(float *)(dword_106B31C8 + 12) - 0.1;
          sub_10044510((int)this, (int)"Stopping burst");
        }
      }
    }
  }
}

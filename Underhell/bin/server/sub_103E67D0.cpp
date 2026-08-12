void __thiscall sub_103E67D0(unsigned int *this)
{
  unsigned int v2; // eax
  const char *v3; // eax
  char *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  unsigned int v7; // ecx
  int *v8; // eax
  unsigned int v9; // ecx
  const char *v10; // ecx
  const char *v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  _DWORD *v15; // ecx
  unsigned int v16; // eax
  int v17; // ebx
  char *v18; // eax
  char *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // eax
  _DWORD *v28; // eax
  float *v29; // ebx
  _DWORD *v30; // eax
  float *v31; // eax
  double v32; // st7
  int v33; // eax
  __int16 v34; // [esp-8h] [ebp-4Ch]
  int v35[3]; // [esp+14h] [ebp-30h] BYREF
  int v36[3]; // [esp+20h] [ebp-24h] BYREF
  _DWORD v37[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v38; // [esp+38h] [ebp-Ch] BYREF
  double v39; // [esp+3Ch] [ebp-8h] BYREF

  sub_102075B0(this);
  v2 = this[429];
  if ( v2 == -1 || off_1061BE18[4 * (this[429] & 0xFFF) + 2] != v2 >> 12 || !off_1061BE18[4 * (this[429] & 0xFFF) + 1] )
  {
    if ( this[428] )
    {
      v4 = (char *)this[428];
      if ( !v4 )
        v4 = (char *)String;
      v5 = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, 0, 0, 0);
      v6 = __RTDynamicCast(
             (int)v5,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CPhysMagnet `RTTI Type Descriptor',
             0);
      if ( v6 )
        this[429] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
      else
        this[429] = -1;
      v7 = this[429];
      if ( v7 != -1
        && (v8 = &off_1061BE18[4 * (this[429] & 0xFFF) + 1],
            v9 = v7 >> 12,
            off_1061BE18[4 * (this[429] & 0xFFF) + 2] == v9)
        && *v8 )
      {
        if ( off_1061BE18[4 * (this[429] & 0xFFF) + 2] == v9 )
          v12 = *v8;
        else
          v12 = 0;
        sub_100E05E0(v12, 2048.0);
        *(float *)&v37[2] = 3.0;
        v37[0] = 0;
        v37[1] = 15;
        v13 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_106BAFF4 + 92))(dword_106BAFF4, v37);
        this[432] = v13;
        v14 = this[429];
        if ( v14 == -1 || off_1061BE18[4 * (this[429] & 0xFFF) + 2] != v14 >> 12 )
          v15 = 0;
        else
          v15 = (_DWORD *)off_1061BE18[4 * (this[429] & 0xFFF) + 1];
        sub_101DC8C0(v15, v13);
        sub_100BEFA0(this, "cable_tip", (int)v35, (int)v36);
        v16 = this[429];
        if ( v16 == -1 || off_1061BE18[4 * (this[429] & 0xFFF) + 2] != v16 >> 12 )
          HIDWORD(v39) = 0;
        else
          HIDWORD(v39) = off_1061BE18[4 * (this[429] & 0xFFF) + 1];
        v17 = this[432];
        v18 = sub_100E3960((int)"crane_tip", (float *)v35, (float *)v36, 0);
        if ( v18 )
          v19 = sub_103E5450((int)v18, SHIDWORD(v39), v17) != 0 ? v18 : 0;
        else
          v19 = 0;
        if ( v19 )
          this[430] = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v19 + 8))(v19);
        else
          this[430] = -1;
        if ( sub_102DC130(this + 430) )
        {
          sub_1025FAC0((int)this);
        }
        else
        {
          (*(void (__thiscall **)(unsigned int))(*(_DWORD *)this[432] + 4))(this[432]);
          v20 = sub_1026A890(this + 429);
          v34 = sub_100BEF30(v20, "magnetcable_a");
          v21 = sub_1026A890(this + 429);
          v22 = sub_1021C690((int)this, (int)this, v21, 1, v34, 2, "cable/cable.vmt", 5);
          sub_10019680(this + 431, v22);
          if ( sub_1026A890(this + 431) )
          {
            HIDWORD(v39) = 3;
            v23 = sub_1026A890(this + 431);
            sub_100C1CA0((float *)(v23 + 816), (int *)&v39 + 1);
            HIDWORD(v39) = 5;
            v24 = sub_1026A890(this + 431);
            sub_1021B400((_DWORD *)(v24 + 824), (_DWORD *)&v39 + 1);
            v25 = sub_1026A890(this + 431);
            sub_1021BF30(v25, v26, 0);
            v27 = sub_1026A890(this + 431);
            sub_1021B970(v27, COERCE_INT(0.0));
            v28 = (_DWORD *)sub_1026A890(this + 430);
            v29 = (float *)sub_10019640(v28);
            v30 = (_DWORD *)sub_1026A890(this + 429);
            v31 = (float *)sub_10019640(v30);
            v38 = *v31 - *v29;
            *(float *)&v39 = v31[1] - v29[1];
            v32 = v31[2] - v29[2];
            *((float *)&v39 + 1) = v32;
            sub_100D7A40(&v38);
            v39 = v32 * 1.1;
            v33 = sub_1026A890(this + 431);
            sub_103E6080((int *)(v33 + 844), &v39);
          }
          sub_103E6680((unsigned int)this);
        }
      }
      else
      {
        v10 = (const char *)this[428];
        if ( !v10 )
          v10 = String;
        v11 = (const char *)this[65];
        if ( !v11 )
          v11 = String;
        Warning("prop_vehicle_crane %s failed to find magnet %s.\n", v11, v10);
        sub_1025FAC0((int)this);
      }
    }
    else
    {
      v3 = (const char *)this[65];
      if ( !v3 )
        v3 = String;
      Warning("prop_vehicle_crane %s has no magnet entity specified!\n", v3);
      sub_1025FAC0((int)this);
    }
  }
}

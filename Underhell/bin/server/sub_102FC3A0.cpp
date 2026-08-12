void __thiscall sub_102FC3A0(int this, int a2)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  float v8; // eax
  float v9; // ecx
  int v10; // edx
  bool v11; // cl
  float *v12; // eax
  double v13; // st7
  float *v14; // eax
  float v15; // [esp+Ch] [ebp-94h]
  float v16; // [esp+10h] [ebp-90h]
  float v17; // [esp+10h] [ebp-90h]
  int v18[20]; // [esp+24h] [ebp-7Ch] BYREF
  int v19; // [esp+74h] [ebp-2Ch] BYREF
  float v20; // [esp+78h] [ebp-28h]
  float v21; // [esp+7Ch] [ebp-24h]
  int v22; // [esp+80h] [ebp-20h] BYREF
  float v23; // [esp+84h] [ebp-1Ch]
  float v24; // [esp+88h] [ebp-18h]
  float v25; // [esp+8Ch] [ebp-14h]
  float v26; // [esp+90h] [ebp-10h]
  float v27; // [esp+94h] [ebp-Ch]
  int v28; // [esp+98h] [ebp-8h]
  int v29; // [esp+9Ch] [ebp-4h]
  float v30; // [esp+A8h] [ebp+8h]
  bool v31; // [esp+ABh] [ebp+Bh]

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v4 = sub_10261B20();
    v5 = v4;
    if ( v4 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 1088))(v5) )
        {
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 1092))(v5);
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 32))(v6);
          v29 = v7;
          if ( v7 == a2 )
          {
            v28 = __RTDynamicCast(
                    v7,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CPropVehicleDriveable `RTTI Type Descriptor',
                    0);
            if ( v28 )
            {
              if ( (*(_DWORD *)(a2 + 252) & 0x1000) != 0 )
                sub_100DAFD0(a2);
              v8 = *(float *)(a2 + 480);
              v9 = *(float *)(a2 + 484);
              v22 = *(int *)(a2 + 476);
              v10 = *(_DWORD *)(a2 + 252) >> 11;
              v23 = v8;
              v24 = v9;
              if ( (v10 & 1) != 0 )
                sub_100DAE60(a2);
              if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
                sub_100DAE60(this);
              v25 = *(float *)(this + 580) - *(float *)(a2 + 580);
              v26 = *(float *)(this + 584) - *(float *)(a2 + 584);
              v27 = *(float *)(this + 588) - *(float *)(a2 + 588);
              off_10689714();
              off_10689714();
              v11 = sub_100697A0((_DWORD *)this, 93, 1);
              v31 = v11;
              if ( *(int *)(v28 + 1648) > 75 && v23 * v26 + v25 * *(float *)&v22 + v24 * v27 <= 0.0 || v11 )
              {
                if ( sub_102FB040((_DWORD *)this) || v31 )
                {
                  v30 = (float)*(int *)(this + 220);
                  v13 = v30;
                  if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 10) > 4 )
                    v13 = v13 + 25.0;
                  v15 = v13;
                  sub_10248110((int)v18, v29, v5, v15, 16, 0);
                  v14 = (float *)sub_10019640((_DWORD *)a2);
                  sub_10248690((float *)v18, (float *)&v22, v14, 1.0);
                  sub_100D9E70((int *)this, this, v18);
                }
                else
                {
                  sub_10248110((int)v18, v29, v5, 0.0, 16, 0);
                  (*(void (__thiscall **)(int, int *))(*(_DWORD *)this + 1624))(this, v18);
                  sub_10023CB0((char *)this, 73);
                  v27 = 0.0;
                  *(float *)&v19 = v25 * 250.0;
                  v20 = 250.0 * v26;
                  v21 = 64.0;
                  sub_100EA150(this, (float *)&v19);
                  sub_101C73D0((unsigned int *)this, 0);
                  v12 = (float *)sub_10019640((_DWORD *)this);
                  sub_1023D4B0(1024, v12, 256, 0.5, this, 0, 0);
                }
              }
            }
          }
        }
      }
    }
  }
  sub_100DA300((_DWORD *)this, a2);
  if ( *(_DWORD *)(this + 2372) == 28
    && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 1484))(this, a2)
    && !*(_BYTE *)(this + 4127) )
  {
    v16 = (float)*(int *)(dword_106E2B24 + 48);
    sub_10248110((int)v18, this, this, v16, 4, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    *(float *)&v19 = 0.0;
    v20 = 0.0;
    v21 = 1.0;
    sub_10248690((float *)v18, (float *)&v19, (float *)(this + 580), 1.0);
    sub_100D9E70((int *)a2, this, v18);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
    {
      if ( (*(_DWORD *)(a2 + 256) & 0x4000) == 0 && *(_BYTE *)(a2 + 306) != 8 )
      {
        *(float *)&v19 = 4.0;
        v20 = 0.0;
        v21 = 0.0;
        sub_100D8FC0((void *)a2, (int)&v19);
      }
    }
    else if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2) )
    {
      goto LABEL_33;
    }
    *(_BYTE *)(this + 4127) = 1;
  }
LABEL_33:
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 1484))(this, a2)
      || (*(_BYTE *)(this + 2716) & 1) != 0 )
    {
      return;
    }
    if ( !sub_100697A0((_DWORD *)this, 68, 1) && !sub_100697A0((_DWORD *)this, 93, 1) )
      sub_100347E0((float *)this, (float *)a2);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 284))(a2)
    && (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 220))(a2) == 10 )
  {
    v17 = (float)(*(_DWORD *)(this + 220) + 25);
    sub_10248110((int)v18, a2, a2, v17, 0, 0);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
      sub_100DAE60(a2);
    *(float *)&v19 = *(float *)(a2 + 580) - *(float *)(this + 580);
    v20 = *(float *)(a2 + 584) - *(float *)(this + 584);
    v21 = *(float *)(a2 + 588) - *(float *)(this + 588);
    sub_10248740((int)v18, (float *)&v19, (float *)(a2 + 580), 1.0);
    sub_100D9E70((int *)this, this, v18);
  }
}

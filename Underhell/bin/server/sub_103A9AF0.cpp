void __fastcall sub_103A9AF0(unsigned int a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // ecx
  float *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  void *v9; // eax
  int v10; // eax
  void *v11; // eax
  int v12; // eax
  void *v13; // eax
  int v14; // eax
  float *v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  float *v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // [esp+10h] [ebp-98h]
  int v22; // [esp+10h] [ebp-98h]
  float v23[12]; // [esp+18h] [ebp-90h] BYREF
  float v24[3]; // [esp+48h] [ebp-60h] BYREF
  float v25[3]; // [esp+54h] [ebp-54h] BYREF
  float v26[12]; // [esp+60h] [ebp-48h] BYREF
  int v27; // [esp+90h] [ebp-18h] BYREF
  float v28; // [esp+94h] [ebp-14h]
  float v29; // [esp+98h] [ebp-10h]
  int v30; // [esp+9Ch] [ebp-Ch] BYREF
  float v31; // [esp+A0h] [ebp-8h]
  float v32; // [esp+A4h] [ebp-4h]

  switch ( *a3 )
  {
    case 0x1C:
      if ( !sub_103A5070(a1) )
        goto LABEL_12;
      if ( sub_1002A5B0(v16) )
      {
        v17 = sub_1002A5B0((_DWORD *)a1);
        sub_10070340(v17, a1, (float *)&v27);
        sub_10042450(v23, (float *)&v27, -1, -1.0, 0, dword_10678E5C);
        (*(void (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(a1 + 2588) + 20))(
          *(_DWORD *)(a1 + 2588),
          v23,
          0);
      }
      else
      {
        v22 = dword_10678E5C;
        v18 = sub_103A50F0((float *)a1, v24);
        sub_10042450(v26, v18, -1, -1.0, 0, v22);
        v19 = sub_10022C40((_DWORD *)a1);
        v20 = *(_DWORD *)(a1 + 2588);
        LODWORD(v26[11]) = v19;
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v20 + 20))(v20, v26, 0);
      }
      return;
    case 0x9A:
      *(_DWORD *)(a1 + 3764) = 0;
      *(_BYTE *)(a1 + 4021) = 0;
      *(float *)(a1 + 3960) = *(float *)(dword_106B31C8 + 12) + 2.0;
      sub_10027CD0((_DWORD *)a1, 0);
      return;
    case 0x9B:
      *(_DWORD *)(a1 + 3764) = 4;
      sub_10027CD0((_DWORD *)a1, 0);
      return;
    case 0x9C:
      sub_103A9690(a1);
      sub_10022750((float *)a1, 0.1, 0.0);
      return;
    case 0x9D:
      if ( (*(_DWORD *)(a1 + 248) & 0x20000) != 0 )
      {
        v14 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 368))(a1);
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)v14 + 516))(v14, &v30);
        v15 = (float *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 576))(a1);
        *(float *)&v27 = *v15 - *(float *)&v30;
        v28 = v15[1] - v31;
        v29 = v15[2] - v32;
        off_10689714();
        *(float *)&v30 = *(float *)&v27 * 64.0 + *(float *)&v30;
        v31 = v28 * 64.0 + v31;
        v32 = 64.0 * v29 + v32;
        sub_1023D4B0(8, (float *)&v30, 256, 1.0, a1, 0, 0);
      }
      if ( *(_DWORD *)(a1 + 3888) )
      {
        sub_103A98B0(a1);
        sub_10022750((float *)a1, 1.0, 0.0);
      }
      else
      {
        (*(void (__thiscall **)(unsigned int, const char *))(*(_DWORD *)a1 + 1312))(a1, "No Flash");
      }
      return;
    case 0x9E:
      sub_103A9930(a1);
      sub_10022750((float *)a1, 0.050000001, 0.0);
      return;
    case 0x9F:
      if ( !sub_10022C40((_DWORD *)a1) )
        goto LABEL_12;
      v8 = sub_10022C40((_DWORD *)a1);
      v9 = (void *)sub_100D7680(v8);
      if ( !v9 )
        goto LABEL_18;
      sub_100B0F60(v9, dword_106EAA98, 0, a1);
      *(float *)(a1 + 3868) = *(float *)(dword_106B31C8 + 12) + 5.0;
      goto LABEL_16;
    case 0xA0:
      if ( !sub_10022C40((_DWORD *)a1) )
        goto LABEL_18;
      v10 = sub_10022C40((_DWORD *)a1);
      v11 = (void *)sub_100D7680(v10);
      if ( v11 )
      {
        sub_100B0F60(v11, dword_106EAA9C, 0, a1);
      }
      else
      {
        sub_100218B0((_DWORD *)a1, 0);
        (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)a1 + 1312))(a1, 1);
      }
      sub_10027CD0((_DWORD *)a1, 0);
      return;
    case 0xA1:
      if ( sub_10022C40((_DWORD *)a1) )
      {
        v12 = sub_10022C40((_DWORD *)a1);
        v13 = (void *)sub_100D7680(v12);
        if ( v13 )
        {
          sub_100B0F60(v13, dword_106EAAA4, 0, a1);
          sub_100218B0((_DWORD *)a1, 0);
          *(float *)(a1 + 3872) = *(float *)(dword_106B31C8 + 12) + 10.0;
          sub_10027CD0((_DWORD *)a1, 0);
        }
        else
        {
LABEL_18:
          (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)a1 + 1312))(a1, 1);
        }
      }
      else
      {
LABEL_12:
        (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 1312))(1);
      }
      return;
    case 0xA2:
      sub_103A4C60(a1);
      sub_10027CD0((_DWORD *)a1, 0);
      return;
    case 0xA3:
      if ( !sub_103A5070(a1) )
      {
        (*(void (__stdcall **)(const char *))(*(_DWORD *)a1 + 1312))("No inspection target to fly to!\n");
        return;
      }
      if ( sub_10022C40(v4) )
      {
        sub_1001EE90(v26, 1, &flt_106F1CA8, -1, -1.0, 0, dword_10678E5C);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(a1 + 2588) + 20))(
               *(_DWORD *)(a1 + 2588),
               v26,
               0) )
        {
          sub_10027CD0((_DWORD *)a1, 0);
          return;
        }
      }
      else
      {
        v21 = dword_10678E5C;
        v5 = sub_103A50F0((float *)a1, v25);
        sub_1001EE90(v26, 4, v5, -1, -1.0, 0, v21);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(a1 + 2588) + 20))(
               *(_DWORD *)(a1 + 2588),
               v26,
               0) )
        {
LABEL_16:
          sub_10027CD0((_DWORD *)a1, 0);
          return;
        }
      }
      v6 = sub_10022C40((_DWORD *)a1);
      v7 = __RTDynamicCast(
             v6,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CNPC_Citizen `RTTI Type Descriptor',
             0);
      if ( v7 )
        *(float *)(v7 + 5700) = *(float *)(dword_106B31C8 + 12) + 5.0;
      (*(void (__thiscall **)(unsigned int, const char *))(*(_DWORD *)a1 + 1312))(
        a1,
        "No route to inspection target!\n");
      return;
    default:
      sub_10329530(a1, a2, a3);
      return;
  }
}

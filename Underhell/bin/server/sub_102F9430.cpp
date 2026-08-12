void __thiscall sub_102F9430(unsigned int this, int a2)
{
  float v3; // edi
  int v4; // eax
  float v5; // edi
  int v6; // eax
  float *v7; // edi
  float *v8; // eax
  float *v9; // eax
  char v10; // al
  float v11; // edx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // eax
  float v16; // edi
  int v17; // eax
  char *v18; // eax
  char *v19; // eax
  int v20; // eax
  char *v21; // eax
  char *v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  float *v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // edi
  int v31; // eax
  int v32; // eax
  int v33; // ebx
  int v34; // eax
  int v35; // edi
  int v36; // eax
  _DWORD *v37; // eax
  int v38; // edi
  __int64 v39; // [esp+14h] [ebp-498h]
  char v40[256]; // [esp+28h] [ebp-484h] BYREF
  char Buffer[256]; // [esp+128h] [ebp-384h] BYREF
  char v42[256]; // [esp+228h] [ebp-284h] BYREF
  char v43[256]; // [esp+328h] [ebp-184h] BYREF
  float v44[12]; // [esp+428h] [ebp-84h] BYREF
  _DWORD v45[12]; // [esp+458h] [ebp-54h] BYREF
  int v46[3]; // [esp+488h] [ebp-24h] BYREF
  float v47; // [esp+494h] [ebp-18h]
  float v48; // [esp+498h] [ebp-14h]
  float v49; // [esp+49Ch] [ebp-10h]
  float v50; // [esp+4A0h] [ebp-Ch]
  float v51; // [esp+4A4h] [ebp-8h]
  float v52; // [esp+4A8h] [ebp-4h]

  switch ( *(_DWORD *)a2 )
  {
    case 3:
      sub_102F43F0((float *)this);
      goto LABEL_4;
    case 0x25:
      v24 = (*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)this + 1460))(this, 1048351);
      if ( v24 && (*(_BYTE *)(v24 + 16) & 1) != 0 && (*(_DWORD *)(v24 + 16) & 0x200000) != 0 )
        sub_102F49B0((_DWORD *)this, (unsigned int *)v24);
      goto LABEL_54;
    case 0x58:
      (*(void (__thiscall **)(unsigned int))(*(_DWORD *)this + 2420))(this);
      sub_10027CD0((_DWORD *)this, 0);
      return;
    case 0x7C:
      if ( !*(_DWORD *)(dword_106E280C + 48) )
        goto LABEL_4;
      if ( sub_1007E030(*(_DWORD **)(this + 2588)) && sub_1007E040(*(_DWORD **)(this + 2588))
        || sub_100223E0((_DWORD *)this) == 1 )
      {
        if ( *(_DWORD *)(dword_106934A4 + 48) )
        {
          v18 = sub_1001E280(Buffer, "[Nav] %s", "Start TASK_STOP_MOVING\n");
          sub_10029660((_DWORD *)this, (int)v18);
        }
        if ( *(_DWORD *)(dword_106934A4 + 48) )
        {
          v19 = sub_1001E280(v43, "[Nav] %s", "Initiating stopping path\n");
          sub_10029660((_DWORD *)this, (int)v19);
        }
        sub_10082A70(*(float **)(this + 2588), 0);
        v20 = *(_DWORD *)(this + 2188);
        if ( v20 >= 0 )
          sub_10019C10((_DWORD *)this, v20, 0.0);
      }
      else if ( sub_1007EBC0(*(_DWORD *)(this + 2588)) )
      {
        if ( *(_DWORD *)(dword_106934A4 + 48) )
        {
          v21 = sub_1001E280(v42, "[Nav] %s", "Start TASK_STOP_MOVING\n");
          sub_10029660((_DWORD *)this, (int)v21);
        }
        if ( *(_DWORD *)(dword_106934A4 + 48) )
        {
          v22 = sub_1001E280(v40, "[Nav] %s", "Initiating stopping path\n");
          sub_10029660((_DWORD *)this, (int)v22);
        }
      }
      else
      {
        sub_10081C10(*(_DWORD *)(this + 2588));
        if ( (*(unsigned __int8 (__thiscall **)(unsigned int))(*(_DWORD *)this + 296))(this) )
        {
          v23 = sub_10021B60((_DWORD *)this);
          sub_10039F40((int *)this, v23);
        }
LABEL_54:
        sub_10027CD0((_DWORD *)this, 0);
      }
      break;
    case 0x99:
      v29 = sub_102F4730((_DWORD *)this);
      v30 = __RTDynamicCast(
              v29,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&INPCInteractive `RTTI Type Descriptor',
              0);
      if ( v30 )
      {
        v31 = sub_102F4730((_DWORD *)this);
        sub_102F3CA0((void *)this, v31);
        (*(void (__thiscall **)(int))(*(_DWORD *)v30 + 12))(v30);
        (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v30 + 8))(v30, this);
        (*(void (__thiscall **)(int))(*(_DWORD *)v30 + 16))(v30);
        v39 = __PAIR64__(this, sub_102F4730((_DWORD *)this));
        sub_1010DD80((_DWORD *)(this + 5876), v39, 0.0);
      }
      goto LABEL_54;
    case 0x9A:
      v32 = sub_102F4730((_DWORD *)this);
      if ( __RTDynamicCast(
             v32,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&INPCInteractive `RTTI Type Descriptor',
             0) )
      {
        v33 = 3;
        do
        {
          v34 = sub_102F4730((_DWORD *)this);
          v35 = (int)*off_1061B7A0;
          v36 = (*(int (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v34 + 576))(v34, 1, 1, 0);
          (*(void (__thiscall **)(int (__stdcall ***)(char), int))(v35 + 12))(off_1061B7A0, v36);
          --v33;
        }
        while ( v33 );
        v37 = (_DWORD *)sub_102F4730((_DWORD *)this);
        sub_1023C380(v37, (int)"DoSpark", 0.0, 0);
        (*(void (__thiscall **)(unsigned int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2244))(
          this,
          "TLK_ALYX_INTERACTION_DONE",
          0,
          0,
          0,
          0);
        sub_10023E00((char *)this, 79);
        sub_10023E00((char *)this, 81);
        sub_10023CB0((char *)this, 80);
        sub_10023CB0((char *)this, 82);
        *(_DWORD *)(this + 5692) = -1;
      }
      goto LABEL_54;
    case 0x9B:
      (*(void (__thiscall **)(unsigned int, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 2344))(
        this,
        "TLK_ALYX_REQUEST_ITEM",
        0,
        0,
        0,
        0);
      sub_10027CD0((_DWORD *)this, 0);
      return;
    case 0x9C:
      if ( sub_102F46F0((_DWORD *)this) )
      {
        sub_10042370(v45, 8, -1, -1.0, 0, dword_1066A0A4);
        v45[0] = 4;
        v25 = sub_102F4730((_DWORD *)this);
        v26 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v25 + 576))(v25);
        *(float *)&v45[1] = *v26;
        *(float *)&v45[2] = v26[1];
        *(float *)&v45[3] = v26[2];
        v27 = sub_102F4730((_DWORD *)this);
        v28 = *(_DWORD *)(this + 2588);
        v45[11] = v27;
        (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v28 + 20))(v28, v45, 0);
      }
      else
      {
        (*(void (__thiscall **)(unsigned int, const char *))(*(_DWORD *)this + 1312))(this, "No interact target");
      }
      return;
    case 0x9D:
      sub_10022750((float *)this, *(float *)(a2 + 4), 0.0);
      return;
    case 0x9E:
      sub_102F3C00((_DWORD *)this);
      sub_10027CD0((_DWORD *)this, 0);
      return;
    case 0x9F:
      sub_102F88F0((_DWORD *)this);
      sub_10027CD0((_DWORD *)this, 0);
      return;
    case 0xA0:
      if ( *(_DWORD *)(this + 5832) == 1 )
      {
        *(_DWORD *)(this + 2792) = 2;
      }
      else
      {
        v16 = *(float *)this;
        v17 = sub_100CF460((_DWORD *)this);
        (*(void (__thiscall **)(unsigned int, int, _DWORD, _DWORD))(LODWORD(v16) + 960))(this, v17, 0, 0);
      }
      sub_10022750((float *)this, 1.0, 0.0);
      return;
    case 0xA1:
      if ( (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 368))(this)
        && (v3 = *(float *)this,
            v4 = sub_100217F0((void *)this),
            !(*(unsigned __int8 (__thiscall **)(unsigned int, int))(LODWORD(v3) + 880))(this, v4))
        && (v5 = *(float *)this,
            v6 = sub_100217F0((void *)this),
            (*(unsigned __int8 (__thiscall **)(unsigned int, int, int, _DWORD))(LODWORD(v5) + 544))(this, v6, 16449, 0)) )
      {
        v7 = (float *)sub_10019640((_DWORD *)this);
        v8 = (float *)sub_100217F0((void *)this);
        v50 = *v8 - *v7;
        v51 = v8[1] - v7[1];
        v52 = v8[2] - v7[2];
        off_10689714();
        v47 = v50 * 24.0;
        v48 = v51 * 24.0;
        v49 = 24.0 * v52;
        v9 = (float *)sub_10019640((_DWORD *)this);
        *(float *)v46 = *v9 - v47;
        *(float *)&v46[1] = v9[1] - v48;
        *(float *)&v46[2] = v9[2] - v49;
        sub_10042450(v44, (float *)v46, -1, -1.0, 0, dword_1066A0A4);
        v10 = (*(int (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(this + 2588) + 20))(
                *(_DWORD *)(this + 2588),
                v44,
                0);
        v11 = *(float *)this;
        if ( v10 )
        {
          v12 = (*(int (__thiscall **)(unsigned int))(LODWORD(v11) + 368))(this);
          v13 = *(_DWORD *)(this + 2604);
          v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 576))(v12);
          sub_10078690(v13, v14, 0.0, 0.0);
          v15 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 368))(this);
          sub_1007DF80(v15);
          sub_10027CD0((_DWORD *)this, 0);
        }
        else
        {
          (*(void (__thiscall **)(unsigned int, int))(LODWORD(v11) + 1312))(this, 11);
        }
      }
      else
      {
        (*(void (__thiscall **)(unsigned int, const char *))(*(_DWORD *)this + 1312))(
          this,
          "Defaulting To BaseClass::CombatFace");
      }
      return;
    case 0xA2:
      v38 = (int)*(float *)(a2 + 4);
      if ( (*(unsigned __int8 (__thiscall **)(unsigned int))(*(_DWORD *)this + 732))(this) )
        sub_10039F40((int *)this, v38);
      return;
    case 0xA3:
      sub_10022750((float *)this, 2.0, 0.0);
      return;
    default:
LABEL_4:
      sub_103953B0(a2);
      break;
  }
}

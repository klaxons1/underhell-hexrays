char __thiscall sub_1040D0B0(int this, int a2)
{
  _DWORD *v3; // edi
  int v4; // ebx
  float *v5; // edi
  float *v6; // eax
  int v7; // eax
  char *v8; // edi
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  __int64 v19; // [esp+8h] [ebp-18h]
  float v20; // [esp+Ch] [ebp-14h]
  float *v21; // [esp+10h] [ebp-10h]

  if ( *(float *)(this + 1696) <= 50.0 )
    return 0;
  if ( *(_BYTE *)(this + 1690) )
    return 0;
  v3 = (_DWORD *)a2;
  if ( !sub_1040B200(this, a2) )
    return 0;
  if ( !sub_1040B030((_DWORD *)this, v3) )
    return 0;
  v4 = sub_10019B00(v3);
  if ( !v4 )
    return 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 76))(this, v4);
  sub_1023C380((_DWORD *)this, (int)"Weapon_StriderBuster.StickToEntity", 0.0, 0);
  v5 = (float *)sub_1001F410((_DWORD *)this);
  v6 = (float *)sub_10019640((_DWORD *)this);
  sub_101AB000("striderbuster_attach", *v6, v6[1], v6[2], *v5, v5[1], v5[2], 0);
  if ( *(_DWORD *)(dword_106F0CBC + 48) )
  {
    v7 = sub_101811E0("info_particle_system", -1);
    v8 = (char *)v7;
    if ( v7 )
    {
      (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v7 + 128))(v7, "start_active", "1");
      (*(void (__thiscall **)(char *, const char *, const char *))(*(_DWORD *)v8 + 128))(
        v8,
        "effect_name",
        "striderbuster_attached_pulse");
      (*(void (__thiscall **)(char *, int, int))(*(_DWORD *)v8 + 140))(v8, this, -1);
      sub_100E10C0((int)v8, &flt_106F1CA8);
      sub_10260750(v8);
      (*(void (__thiscall **)(char *))(*(_DWORD *)v8 + 136))(v8);
    }
  }
  else
  {
    v9 = sub_10243040("sprites/orangeflare1.vmt", (float *)(this + 716), 0);
    sub_10019680((_DWORD *)(this + 1716), (int)v9);
    if ( sub_103E0CF0((unsigned int *)(this + 1716), 0) )
    {
      v10 = sub_1026A890((unsigned int *)(this + 1716));
      sub_10242BA0(v10);
      v11 = sub_1026A890((unsigned int *)(this + 1716));
      sub_10128950(v11, 9, 255, 255, 255, 255, 14);
      v21 = (float *)sub_10019640((_DWORD *)this);
      v12 = sub_1026A890((unsigned int *)(this + 1716));
      sub_100E0D20(v12, v21);
      v13 = sub_1026A890((unsigned int *)(this + 1716));
      sub_102428B0(v13, 5.0, 0.0);
      a2 = 11;
      v14 = sub_1026A890((unsigned int *)(this + 1716));
      sub_100C1C50((_BYTE *)(v14 + 112), (char *)&a2);
      v15 = sub_1026A890((unsigned int *)(this + 1716));
      sub_103072F0(v15, 16.0);
      v16 = sub_1026A890((unsigned int *)(this + 1716));
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v16 + 140))(v16, this, -1);
    }
  }
  *(_DWORD *)(this + 196) = 0;
  v17 = (_DWORD *)__RTDynamicCast(
                    v4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                    (int)&CNPC_Strider `RTTI Type Descriptor',
                    0);
  if ( !v17 )
    return 0;
  sub_103B8850(v17, this);
  HIDWORD(v19) = this;
  LODWORD(v19) = this;
  sub_1010DD80((_DWORD *)(this + 1748), v19, 0.0);
  v20 = *(float *)(dword_106B31C8 + 12) + 3.0;
  sub_100EC3F0((_DWORD *)this, (int)sub_1040ABA0, v20, off_10687804);
  sub_10163300((_DWORD *)this);
  return 1;
}

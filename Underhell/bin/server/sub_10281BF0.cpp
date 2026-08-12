int *__usercall sub_10281BF0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  char *v3; // eax
  unsigned int i; // esi
  const char *v5; // eax
  char *v6; // eax
  int *v7; // edi
  int v8; // esi
  int *v9; // ecx
  int *result; // eax
  float v11; // [esp+24h] [ebp-28h]
  void (__thiscall ***v12)(_DWORD, _DWORD); // [esp+38h] [ebp-14h]
  void (__thiscall ***v13)(_DWORD, int); // [esp+40h] [ebp-Ch]
  int v14; // [esp+48h] [ebp-4h] BYREF

  dword_106D1EF0 = (int)a1;
  byte_106B4F38 = 0;
  dword_106BB4DC = 0;
  sub_1042CBA0("sv_stepsize");
  (**v13)(v13, 18);
  sub_1042CBA0("room_type");
  (**v12)(v12, 0);
  if ( dword_106B3CDC )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 48))(dword_106B3CDC, 1);
  sub_102D6F40();
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 4))(dword_106B3CDC);
  sub_1023C7D0();
  sub_100E8660(1);
  v3 = *(char **)(*(int (__thiscall **)(_DWORD *, int *))(*a1 + 28))(a1, &v14);
  if ( !v3 )
    v3 = (char *)String;
  sub_1016FFF0(v3);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 464))(dword_106B3CDC);
  sub_10008CC0();
  sub_10003370();
  sub_1013BD70();
  sub_1013BF70();
  sub_102D9770();
  sub_102382B0();
  sub_101AADC0();
  sub_100CFA30();
  sub_1010E2F0(a2);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 152))(dword_106B3CDC);
  sub_10282370();
  sub_10110F90(&dword_106B3D08);
  if ( *(_DWORD *)(dword_106B3D0C + 48) == 1 )
    sub_100E8220(a2, "models/germangibs.mdl");
  else
    sub_100E8220(a2, "models/gibs/hgibs.mdl");
  sub_1023B8B0("BaseEntity.EnterWater");
  sub_1023B8B0("BaseEntity.ExitWater");
  for ( i = 0; i < 0xD; ++i )
    (*(void (__thiscall **)(int, unsigned int, char *))(*(_DWORD *)dword_106B31D0 + 156))(
      dword_106B31D0,
      i,
      off_10659DF4[i]);
  (*(void (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 156))(dword_106B31D0, 63, "a");
  sub_1008C360(a2);
  sub_100A7520(&dword_10694898);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 380))(dword_106B3CDC);
  nullsub_4();
  sub_10206410();
  if ( a1[200] )
  {
    v5 = (const char *)a1[200];
    if ( !v5 )
      v5 = String;
    DevMsg(2, "Chapter title: %s\n", v5);
    v6 = sub_100E3960((int)"env_message", &flt_106F1CA8, &flt_106F1CB4, 0);
    v7 = (int *)v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 202) = a1[200];
      v6[892] = 1;
      a1[200] = 0;
      v8 = *((_DWORD *)v6 + 62) | 1;
      if ( *((_DWORD *)v6 + 62) != v8 )
      {
        if ( v6[84] )
        {
          v6[88] |= 1u;
        }
        else
        {
          v9 = (int *)*((_DWORD *)v6 + 6);
          if ( v9 )
            sub_100194B0(v9, 248);
        }
        v7[62] = v8;
      }
      sub_100EC3F0(v7, (int)sub_100D5FD0, 0.0, 0);
      v11 = *(float *)(dword_106B31C8 + 12) + 1.0;
      sub_100EC4A0(v7, v11, 0);
    }
  }
  result = sub_10162BE0(&v14, "func_brush");
  dword_106954D4 = *result;
  return result;
}

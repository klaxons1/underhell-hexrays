void __thiscall sub_102D6740(unsigned __int16 *this)
{
  int v2; // edx
  int *v3; // ecx
  int *v4; // ecx
  int v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  char *v17; // ecx
  unsigned int v18; // esi
  int *v19; // eax
  float v20; // [esp+8h] [ebp-14h]
  float v21; // [esp+18h] [ebp-4h]
  float v22; // [esp+18h] [ebp-4h]

  (*(void (__thiscall **)(unsigned __int16 *))(*(_DWORD *)this + 100))(this);
  sub_10112C00((int)(this + 160), 2);
  sub_100E0970((int)this, v2, 5, 0);
  sub_101129A0(this + 160, 16);
  (*(void (__thiscall **)(unsigned __int16 *, const char *))(*(_DWORD *)this + 104))(this, "models/spitball_large.mdl");
  sub_1025F360(this, (int)&flt_106F1CA8, (int)&flt_106F1CA8);
  *((_DWORD *)this + 50) = sub_100F3C80;
  *((_DWORD *)this + 49) = sub_102D6410;
  v20 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v20, 0);
  v21 = *(float *)(dword_106DE994 + 44);
  if ( *((_DWORD *)this + 532) != LODWORD(v21) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        sub_100194B0(v3, 2128);
    }
    *((float *)this + 532) = v21;
  }
  v22 = *(float *)(dword_106DE9DC + 44);
  if ( *((_DWORD *)this + 528) != LODWORD(v22) )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v4 = (int *)*((_DWORD *)this + 6);
      if ( v4 )
        sub_100194B0(v4, 2112);
    }
    *((float *)this + 528) = v22;
  }
  if ( *((_BYTE *)this + 225) )
  {
    (*(void (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 480))(this, (int)this + 225);
    *((_BYTE *)this + 225) = 0;
  }
  if ( *((_DWORD *)this + 55) != 1 )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)this + 464))(this, this + 110);
    *((_DWORD *)this + 55) = 1;
  }
  *((float *)this + 138) = sub_10260720(600.0);
  if ( *((_DWORD *)this + 139) != COERCE_INT(0.80000001) )
  {
    (*(void (__thiscall **)(unsigned __int16 *, unsigned __int16 *))(*(_DWORD *)this + 696))(this, this + 278);
    *((float *)this + 139) = 0.80000001;
  }
  sub_100EBE30((int)this, 21);
  *((_DWORD *)this + 63) |= 0x80u;
  sub_100D8500(this);
  sub_100EAB80(this, 80);
  v5 = sub_101811E0("info_particle_system", -1);
  if ( v5 )
    *((_DWORD *)this + 536) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
  else
    *((_DWORD *)this + 536) = -1;
  v6 = *((_DWORD *)this + 536);
  if ( v6 != -1 )
  {
    v7 = &off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 2] == v8 )
    {
      if ( *v7 )
      {
        v9 = off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 2] == v8 ? *v7 : 0;
        (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v9 + 128))(v9, "start_active", "1");
        v10 = *((_DWORD *)this + 536);
        if ( v10 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 2] != v10 >> 12 )
          v11 = 0;
        else
          v11 = off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)v11 + 128))(
          v11,
          "effect_name",
          "antlion_spit_trail");
        v12 = *((_DWORD *)this + 536);
        if ( v12 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 2] != v12 >> 12 )
          v13 = 0;
        else
          v13 = off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, unsigned __int16 *, int))(*(_DWORD *)v13 + 140))(v13, this, -1);
        v14 = *((_DWORD *)this + 536);
        if ( v14 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 2] != v14 >> 12 )
          v15 = 0;
        else
          v15 = off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 1];
        sub_100E10C0(v15, &flt_106F1CA8);
        v16 = *((_DWORD *)this + 536);
        if ( v16 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = (char *)off_1061BE18[4 * (*((_DWORD *)this + 536) & 0xFFF) + 1];
        sub_10260750(v17);
        if ( *(float *)(dword_106B31C8 + 12) > 0.5 )
        {
          v18 = *((_DWORD *)this + 536);
          if ( v18 == -1 || off_1061BE18[4 * (v18 & 0xFFF) + 2] != v18 >> 12 )
          {
            (*(void (__thiscall **)(_DWORD))(MEMORY[0] + 136))(0);
          }
          else
          {
            v19 = &off_1061BE18[4 * (v18 & 0xFFF) + 1];
            (*(void (__thiscall **)(int))(*(_DWORD *)*v19 + 136))(*v19);
          }
        }
      }
    }
  }
}

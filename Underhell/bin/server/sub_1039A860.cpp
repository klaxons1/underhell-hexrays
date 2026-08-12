char __thiscall sub_1039A860(float *this, int a2)
{
  char v3; // bl
  int v4; // eax
  int v5; // esi
  float *v6; // eax
  double v7; // st7
  int v8; // esi
  double v9; // st7
  int v10; // esi
  int v11; // eax
  int v12; // eax
  float *v13; // eax
  float *v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  int *v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  float *v20; // eax
  float *v21; // eax
  int v22; // eax
  float *v23; // eax
  _DWORD *v24; // eax
  float *v26; // [esp-8h] [ebp-9Ch]
  float *v27; // [esp-8h] [ebp-9Ch]
  float *v28; // [esp-8h] [ebp-9Ch]
  float *v29; // [esp-8h] [ebp-9Ch]
  float v30; // [esp+4h] [ebp-90h]
  float v31; // [esp+4h] [ebp-90h]
  float v32; // [esp+4h] [ebp-90h]
  float *v33; // [esp+8h] [ebp-8Ch]
  _BYTE v34[44]; // [esp+18h] [ebp-7Ch] BYREF
  float v35; // [esp+44h] [ebp-50h]
  char v36; // [esp+4Fh] [ebp-45h]
  float v37[3]; // [esp+6Ch] [ebp-28h] BYREF
  float v38[3]; // [esp+78h] [ebp-1Ch] BYREF
  int v39; // [esp+84h] [ebp-10h] BYREF
  int v40; // [esp+88h] [ebp-Ch] BYREF
  int v41; // [esp+8Ch] [ebp-8h] BYREF
  int v42; // [esp+90h] [ebp-4h] BYREF
  int savedregs; // [esp+94h] [ebp+0h] BYREF

  v3 = sub_101722C0(a2);
  if ( v3 || !sub_1007E000(*((_DWORD **)this + 647)) )
    return v3;
  sub_10162BE0(&v42, "env_fire");
  sub_10162BE0(&v39, "combine_mine");
  sub_10162BE0(&v41, "npc_turret_floor");
  sub_10162BE0(&v40, "entityflame");
  if ( sub_100697A0(this, 28, 1) )
  {
    v4 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 1460))(this, 8);
    v5 = v4;
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 16) & 0xFFF00000) == 0x400000 )
      {
        v6 = (float *)sub_10019640(this);
        v7 = *(float *)(v5 + 36) - *v6;
        v8 = v5 + 36;
        v38[0] = v7;
        v38[1] = *(float *)(v8 + 4) - v6[1];
        v9 = *(float *)(v8 + 8) - v6[2];
        v38[2] = v9;
        sub_10018D40(v38);
        v30 = v9 * 0.5;
        sub_10074730(v8, v30, 1);
      }
    }
  }
  v10 = 0;
  while ( 1 )
  {
    if ( ((_DWORD)this[63] & 0x800) != 0 )
      sub_100DAE60((int)this);
    v11 = sub_1039A230(&off_106775D8, v10, this + 145, 216.0);
    v10 = v11;
    if ( !v11 )
      break;
    v12 = *(_DWORD *)(v11 + 92);
    if ( v12 == v42 )
    {
      if ( sub_1013ECF0(v10, v37, v38) )
      {
        v26 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
        v13 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
        sub_1002A5F0((int)&savedregs, v10, v13, v26, 16387, v10, 0, (int)v34);
        if ( 1.0 == v35 && !v36 )
        {
          if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
            sub_100DAE60(v10);
          v31 = (v38[0] - v37[0]) * 1.414 * 0.5 + 6.0;
          sub_10074730(v10 + 580, v31, 1);
        }
      }
    }
    else if ( v12 == v41 )
    {
      v27 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
      v14 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
      sub_1002A5F0((int)&savedregs, v10, v14, v27, 16449, v10, 0, (int)v34);
      if ( 1.0 == v35 && !v36 )
      {
        v32 = sub_10111020((float *)(v10 + 320)) * 1.4;
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
        sub_10074730(v15, v32, 2);
      }
    }
    else if ( v12 == v40
           && (v16 = *(_DWORD *)(v10 + 300), v16 != -1)
           && (v17 = &off_1061BE18[4 * (*(_DWORD *)(v10 + 300) & 0xFFF) + 1],
               v18 = v16 >> 12,
               off_1061BE18[4 * (*(_DWORD *)(v10 + 300) & 0xFFF) + 2] == v18)
           && *v17
           && (off_1061BE18[4 * (*(_DWORD *)(v10 + 300) & 0xFFF) + 2] != v18 ? (v19 = 0) : (v19 = *v17),
               !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v19 + 284))(v19)) )
    {
      v33 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
      v20 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
      sub_1004BCD0(v20, v33);
      if ( 216.0 > 18.0 )
      {
        v28 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
        v21 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
        sub_1002A5F0((int)&savedregs, v10, v21, v28, 16449, v10, 0, (int)v34);
        if ( 1.0 == v35 && !v36 )
        {
          v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
          sub_10074730(v22, 18.0, 2);
        }
      }
    }
    else if ( *(_DWORD *)(v10 + 92) == v39 && !*(_BYTE *)(v10 + 1177) )
    {
      if ( *(_BYTE *)(v10 + 1128) )
      {
        v29 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
        v23 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 576))(this);
        sub_1002A5F0((int)&savedregs, v10, v23, v29, 16449, v10, 0, (int)v34);
        if ( 1.0 == v35 && !v36 )
        {
          v24 = sub_10019640((_DWORD *)v10);
          sub_10074730((int)v24, 80.0, 1);
        }
      }
    }
  }
  return 0;
}

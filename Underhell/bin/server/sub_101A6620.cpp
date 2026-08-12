int __thiscall sub_101A6620(int this)
{
  double v2; // st7
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int *v6; // edi
  int v7; // eax
  bool v8; // zf
  signed int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int *v14; // ecx
  int *v15; // edi
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  bool v19; // zf
  bool v20; // zf
  signed int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int *v26; // edi
  int v27; // ebx
  bool v28; // zf
  signed int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // ebx
  bool v36; // zf
  signed int v37; // eax
  int v38; // eax
  int v39; // eax
  int *v40; // edi
  int v41; // eax
  int v42; // eax
  int v44; // [esp-8h] [ebp-18h]
  int v45; // [esp-8h] [ebp-18h]
  int v46; // [esp-8h] [ebp-18h]
  int v47; // [esp-8h] [ebp-18h]
  int v48; // [esp-8h] [ebp-18h]
  int v49; // [esp-8h] [ebp-18h]
  int v50; // [esp-8h] [ebp-18h]
  int v51; // [esp+8h] [ebp-8h] BYREF
  int v52; // [esp+Ch] [ebp-4h]

  v2 = *(float *)(this + 3908);
  *(_BYTE *)(this + 1712) = 1;
  if ( 0.0 != v2 )
    *(float *)(this + 3876) = *(float *)(this + 3908);
  v3 = *(_DWORD *)(this + 3892);
  if ( v3 == 2 || v3 == 1 )
  {
    if ( v3 == 1 )
    {
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/infected/infected_worker.mdl");
      *(_DWORD *)(this + 1676) = 0;
      v51 = sub_10219A30() % 6;
      sub_10031670((_DWORD *)(this + 848), &v51);
      v51 = sub_10219A30() % 9;
      v26 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
      *v26 = sub_10219A30() % 100;
      v27 = sub_10219A30() % 4;
      sub_10020460((_DWORD *)this, 0x200000);
      *(_BYTE *)(this + 1670) = 0;
      if ( *v26 > 29 )
      {
        *v26 = 0;
        goto LABEL_67;
      }
      if ( *v26 >= 5 )
      {
        v29 = sub_10219A30() & 0x80000001;
        v28 = v29 == 0;
        if ( v29 < 0 )
          v28 = (((_BYTE)v29 - 1) | 0xFFFFFFFE) == -1;
        if ( !v28 )
        {
          *v26 = 1;
          goto LABEL_67;
        }
        *v26 = 2;
        sub_10020480((_DWORD *)this, 0x200000);
      }
      else
      {
        *v26 = 3;
        sub_10020480((_DWORD *)this, 0x200000);
        *(_BYTE *)(this + 1712) = 0;
      }
      *(_BYTE *)(this + 1670) = 1;
      if ( *v26 == 2 )
        goto LABEL_74;
LABEL_67:
      v30 = *(_DWORD *)(this + 3896);
      if ( v30 )
      {
        if ( v30 != 1 )
          goto LABEL_74;
      }
      else if ( sub_10219A30() % 10 )
      {
        goto LABEL_74;
      }
      if ( sub_10219A30() % 5 )
        *(_DWORD *)(this + 2900) = "weapon_melee_wrench";
      else
        *(_DWORD *)(this + 2900) = "weapon_melee_axe";
LABEL_74:
      if ( *v26 )
      {
        if ( *v26 != 1 )
        {
          if ( *v26 != 2 )
          {
LABEL_81:
            if ( *v26 > 0 )
              sub_10020480((_DWORD *)this, 8);
            v33 = sub_100BF520(this, "helmet");
            sub_100C1600(this, v33, v27 == 0);
            v49 = v51;
            v34 = sub_100BF520(this, "head");
            sub_100C1600(this, v34, v49);
            v50 = *v26;
            goto LABEL_97;
          }
          v47 = sub_10219A30() % 2;
          v31 = sub_100BF520(this, "Glove_L");
LABEL_80:
          sub_100C1600(this, v31, v47);
          goto LABEL_81;
        }
      }
      else
      {
        v48 = sub_10219A30() % 2;
        v32 = sub_100BF520(this, "Glove_L");
        sub_100C1600(this, v32, v48);
      }
      v47 = sub_10219A30() % 2;
      v31 = sub_100BF520(this, "Glove_R");
      goto LABEL_80;
    }
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/infected/infected_doctor.mdl");
    *(_DWORD *)(this + 1676) = 0;
    v51 = sub_10219A30() % 6;
    sub_10031670((_DWORD *)(this + 848), &v51);
    v35 = sub_10219A30() % 9;
    v6 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
    *v6 = sub_10219A30() % 100;
    sub_10020460((_DWORD *)this, 0x200000);
    *(_BYTE *)(this + 1670) = 0;
    if ( *v6 > 29 )
    {
      *v6 = 0;
LABEL_95:
      v45 = v35;
      v12 = sub_100BF520(this, "head");
LABEL_96:
      sub_100C1600(this, v12, v45);
      v50 = *v6;
LABEL_97:
      v38 = sub_100BF520(this, "arms");
      sub_100C1600(this, v38, v50);
      goto LABEL_98;
    }
    if ( *v6 >= 5 )
    {
      v37 = sub_10219A30() & 0x80000001;
      v36 = v37 == 0;
      if ( v37 < 0 )
        v36 = (((_BYTE)v37 - 1) | 0xFFFFFFFE) == -1;
      if ( !v36 )
      {
        *v6 = 1;
        goto LABEL_94;
      }
      *v6 = 2;
      sub_10020480((_DWORD *)this, 0x200000);
    }
    else
    {
      *v6 = 3;
      sub_10020480((_DWORD *)this, 0x200000);
      *(_BYTE *)(this + 1712) = 0;
    }
    *(_BYTE *)(this + 1670) = 1;
    if ( *v6 <= 0 )
      goto LABEL_95;
LABEL_94:
    sub_10020480((_DWORD *)this, 8);
    goto LABEL_95;
  }
  if ( v3 != 6 )
  {
    switch ( v3 )
    {
      case 0:
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/infected/infected_inmate.mdl");
        goto LABEL_12;
      case 3:
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(
          this,
          "models/infected/infected_uniform.mdl");
        v4 = sub_10219A30();
        v5 = 9;
        goto LABEL_13;
      case 4:
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/infected/infected_urban.mdl");
        v4 = sub_10219A30();
        v5 = 9;
        goto LABEL_13;
      case 5:
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/infected/infected_rural.mdl");
        v4 = sub_10219A30();
        v5 = 9;
        goto LABEL_13;
      case 7:
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/infected/infected_office.mdl");
LABEL_12:
        v4 = sub_10219A30();
        v5 = 3;
LABEL_13:
        v51 = v4 % v5;
        sub_10031670((_DWORD *)(this + 848), &v51);
        break;
      default:
        break;
    }
    *(_DWORD *)(this + 1676) = 0;
    v51 = sub_10219A30() % 9;
    v6 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
    *v6 = sub_10219A30() % 100;
    sub_10020460((_DWORD *)this, 0x200000);
    *(_BYTE *)(this + 1670) = 0;
    v7 = *v6;
    if ( *v6 > 29 )
    {
      *v6 = v7 % 2;
LABEL_24:
      if ( *v6 > 1 )
        sub_10020480((_DWORD *)this, 8);
      v10 = *v6 % 2;
      v44 = v51;
      v11 = sub_100BF520(this, "head");
      sub_100C1600(this, v11, v44);
      v45 = v10;
      v12 = sub_100BF520(this, "body");
      goto LABEL_96;
    }
    if ( v7 >= 5 )
    {
      v9 = sub_10219A30() & 0x80000001;
      v8 = v9 == 0;
      if ( v9 < 0 )
        v8 = (((_BYTE)v9 - 1) | 0xFFFFFFFE) == -1;
      if ( !v8 )
      {
        *v6 = *v6 % 2 + 2;
        goto LABEL_24;
      }
      *v6 = *v6 % 2 + 4;
      sub_10020480((_DWORD *)this, 0x200000);
    }
    else
    {
      *v6 = 7 - (sub_10219A30() % 2 != 0);
      sub_10020480((_DWORD *)this, 0x200000);
      *(_BYTE *)(this + 1712) = 0;
    }
    *(_BYTE *)(this + 1670) = 1;
    goto LABEL_24;
  }
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/infected/infected_guard.mdl");
  *(_DWORD *)(this + 1676) = 0;
  v13 = sub_10219A30() % 3;
  if ( *(_DWORD *)(this + 848) != v13 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v14 = *(int **)(this + 24);
      if ( v14 )
        sub_100194B0(v14, 848);
    }
    *(_DWORD *)(this + 848) = v13;
  }
  v52 = sub_10219A30() % 20;
  v15 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
  v16 = sub_10219A30() % 100;
  *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) = v16;
  v17 = sub_10219A30() % 4;
  v51 = sub_10219A30() % 2;
  sub_10020460((_DWORD *)this, 0x200000);
  *(_BYTE *)(this + 1670) = 0;
  if ( *v15 > 29 )
  {
    *v15 = 0;
    goto LABEL_36;
  }
  if ( *v15 >= 5 )
  {
    v21 = sub_10219A30() & 0x80000001;
    v20 = v21 == 0;
    if ( v21 < 0 )
      v20 = (((_BYTE)v21 - 1) | 0xFFFFFFFE) == -1;
    if ( !v20 )
    {
      *v15 = 1;
      sub_10020480((_DWORD *)this, 8);
      goto LABEL_50;
    }
    *v15 = 2;
    sub_10020480((_DWORD *)this, 0x200000);
  }
  else
  {
    *v15 = 3;
    sub_10020480((_DWORD *)this, 0x200000);
    *(_BYTE *)(this + 1712) = 0;
  }
  *(_BYTE *)(this + 1670) = 1;
  if ( *v15 <= 0 )
  {
LABEL_36:
    v18 = *(_DWORD *)(this + 3896);
    if ( v18 )
      v19 = v18 == 1;
    else
      v19 = sub_10219A30() % 10 == 0;
    if ( v19 )
      *(_DWORD *)(this + 2900) = "weapon_melee_baton";
    goto LABEL_50;
  }
  sub_10020480((_DWORD *)this, 8);
LABEL_50:
  if ( v52 > 9 )
    v52 = 9;
  if ( v17 == 3 )
    v51 = 0;
  v22 = sub_100BF520(this, "helmet");
  sub_100C1600(this, v22, v17);
  v23 = sub_100BF520(this, "head");
  sub_100C1600(this, v23, v52);
  v46 = *v15;
  v24 = sub_100BF520(this, "arms");
  sub_100C1600(this, v24, v46);
  v25 = sub_100BF520(this, "respirator");
  sub_100C1600(this, v25, v51);
  if ( v17 == 3 )
    sub_100C1A60(this, "VisorDown");
LABEL_98:
  if ( *(_DWORD *)(this + 2552) )
  {
    sub_10021C00((_DWORD *)this);
    if ( *(_DWORD *)(this + 3892) == 6 )
    {
      v39 = sub_100BF520(this, "helmet");
      if ( sub_100BF4B0(this, v39) == 3 )
        sub_100C1A60(this, "VisorDown");
    }
    v40 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this);
    v41 = sub_100BF520(this, "arms");
    *v40 = sub_100BF4B0(this, v41);
    v42 = *(_DWORD *)(this + 3892);
    if ( v42 == 2 || v42 == 1 || v42 == 6 )
    {
      switch ( *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) )
      {
        case 0:
LABEL_109:
          sub_10020460((_DWORD *)this, 2097160);
          *(_BYTE *)(this + 1670) = 0;
          break;
        case 1:
LABEL_106:
          sub_10020480((_DWORD *)this, 8);
          sub_10020460((_DWORD *)this, 0x200000);
          *(_BYTE *)(this + 1670) = 0;
          break;
        case 2:
LABEL_107:
          sub_10020480((_DWORD *)this, 0x200000);
          sub_10020480((_DWORD *)this, 8);
          goto LABEL_111;
        case 3:
LABEL_110:
          sub_10020480((_DWORD *)this, 8);
          sub_10020480((_DWORD *)this, 0x200000);
          *(_BYTE *)(this + 1712) = 0;
LABEL_111:
          *(_BYTE *)(this + 1670) = 1;
          break;
        default:
          break;
      }
    }
    else
    {
      switch ( *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1136))(this) )
      {
        case 0:
        case 1:
          goto LABEL_109;
        case 2:
        case 3:
          goto LABEL_106;
        case 4:
        case 5:
          goto LABEL_107;
        case 6:
        case 7:
          goto LABEL_110;
        default:
          break;
      }
    }
  }
  sub_10027A90(this, 1);
  sub_10020F00((char *)this);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)this + 1416))(this, 1);
}

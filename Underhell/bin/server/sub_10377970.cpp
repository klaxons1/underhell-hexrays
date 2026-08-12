int __thiscall sub_10377970(int this, int a2)
{
  int v2; // ebx
  unsigned int v4; // eax
  int v5; // esi
  unsigned int v6; // eax
  char *v7; // ecx
  char *v8; // eax
  int v10; // eax
  float v11; // esi
  unsigned int v12; // eax
  int (__thiscall ***v13)(_DWORD); // esi
  double v14; // st7
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // esi
  unsigned int v20; // ecx
  int *v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  int v24; // [esp+Ch] [ebp-84h]
  float v25; // [esp+10h] [ebp-80h]
  float v26; // [esp+10h] [ebp-80h]
  int v27; // [esp+20h] [ebp-70h] BYREF
  float v28; // [esp+24h] [ebp-6Ch]
  float v29; // [esp+28h] [ebp-68h]
  float v30; // [esp+2Ch] [ebp-64h]
  float v31; // [esp+30h] [ebp-60h]
  float v32; // [esp+34h] [ebp-5Ch]
  float v33; // [esp+38h] [ebp-58h]
  float v34; // [esp+54h] [ebp-3Ch]
  char v35; // [esp+60h] [ebp-30h]
  float v36[3]; // [esp+70h] [ebp-20h] BYREF
  float v37; // [esp+7Ch] [ebp-14h] BYREF
  float v38; // [esp+80h] [ebp-10h]
  float v39; // [esp+84h] [ebp-Ch]
  float v40; // [esp+88h] [ebp-8h]
  float v41; // [esp+8Ch] [ebp-4h]

  v2 = a2;
  sub_1001E4E0(&v27, a2);
  v4 = *(_DWORD *)(a2 + 40);
  if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  v6 = *(_DWORD *)(a2 + 44);
  if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v6 >> 12 )
    v41 = 0.0;
  else
    v41 = *(float *)&off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
  if ( v5 )
  {
    v7 = *(char **)(v5 + 92);
    if ( v7 == (char *)dword_106E8514 || v7 == (char *)dword_106E8510 )
    {
      sub_100EC3F0((_DWORD *)this, (int)sub_103716B0, *(float *)(dword_106B31C8 + 12), off_10674254);
      *(float *)(this + 4560) = *(float *)(dword_106B31C8 + 12) + 2.0;
      v34 = *(float *)(dword_106E8C7C + 44);
      sub_10023CB0((char *)this, 78);
    }
    else
    {
      v8 = *(char **)(this + 92);
      if ( !v8 )
        v8 = (char *)String;
      if ( (v7 == v8 || sub_100D6240((_DWORD *)v5, v8)) && *(_DWORD *)(a2 + 64)
        || (*(char **)(v5 + 92) == "hunter_flechette" || sub_100D6240((_DWORD *)v5, "hunter_flechette"))
        && !*(_BYTE *)(v5 + 1708) )
      {
        return 0;
      }
    }
  }
  if ( sub_10050FC0((_DWORD *)(this + 4292)) )
  {
    v10 = sub_10050FC0((_DWORD *)(this + 4292));
    if ( v10 == LODWORD(v41) )
      return 0;
  }
  v11 = v41;
  LOBYTE(v2) = 0;
  if ( ((*(_BYTE *)(a2 + 64) & 1) == 0
     || v41 == 0.0
     || !(*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v41) + 320))(COERCE_FLOAT(LODWORD(v41))))
    && (*(_BYTE *)(a2 + 64) & 0x10) == 0 )
  {
    goto LABEL_45;
  }
  v40 = v34;
  if ( v34 < 10.0 )
  {
    v34 = 0.0;
    goto LABEL_45;
  }
  v12 = *(_DWORD *)(a2 + 40);
  if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v12 >> 12 )
    v13 = 0;
  else
    v13 = (int (__thiscall ***)(_DWORD))off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  if ( (*(_BYTE *)(a2 + 64) & 0x10) != 0 )
    goto LABEL_41;
  if ( !v13 || !(*v13)[85](v13) )
  {
LABEL_43:
    sub_10023CB0((char *)this, 78);
    goto LABEL_44;
  }
  if ( !__RTDynamicCast(
          (int)v13,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
          (int)&CPropVehicleDriveable `RTTI Type Descriptor',
          0)
    || (*v13[371])(v13 + 371) )
  {
    LOBYTE(v2) = 0;
LABEL_41:
    v34 = *(float *)(dword_106E8C34 + 44) * v40;
    ((void (__thiscall *)(int (__thiscall ***)(_DWORD), float *))(*v13)[134])(v13, &v37);
    v25 = v38 * v38 + v37 * v37 + v39 * v39;
    if ( off_10689708(v25) >= *(float *)(dword_106E90B4 + 44) )
    {
      sub_1023C380((_DWORD *)this, (int)"NPC_Hunter.HitByVehicle", 0.0, 0);
      sub_10019680((_DWORD *)(this + 4636), (int)v13);
      sub_100EC3F0((_DWORD *)this, (int)sub_10374290, *(float *)(dword_106B31C8 + 12), off_10674258);
    }
    goto LABEL_43;
  }
  LOBYTE(v2) = 1;
LABEL_44:
  v11 = v41;
LABEL_45:
  if ( (v35 & 0x41) != 0 && v34 > 0.0 && !(_BYTE)v2 )
    sub_10023CB0((char *)this, 78);
  if ( sub_10023D10((_DWORD *)this, 78) )
  {
    v37 = -v28;
    v38 = -v29;
    v39 = -v30;
    off_10689714();
    v36[0] = v31;
    v36[1] = v32;
    v36[2] = v33;
    sub_103715E0(this, v2, this, v36, &v37);
    *(float *)(this + 4276) = v28;
    *(float *)(this + 4280) = v29;
    *(float *)(this + 4284) = v30;
    off_10689714();
  }
  v41 = 1.0;
  if ( v11 == 0.0
    || (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v11) + 220))(COERCE_FLOAT(LODWORD(v11))) != 8
    && (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v11) + 220))(COERCE_FLOAT(LODWORD(v11))) != 2
    && (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v11) + 220))(COERCE_FLOAT(LODWORD(v11))) != 3
    || (v14 = *(float *)(dword_106E8CC4 + 44), v41 = *(float *)(dword_106E8CC4 + 44), 0.0 != v14) )
  {
    if ( !sub_10023D10((_DWORD *)this, 78) )
      sub_103719A0(this, (float *)a2);
    if ( v11 != 0.0 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(float))(*(_DWORD *)LODWORD(v11) + 320))(COERCE_FLOAT(LODWORD(v11))) )
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
          || (v15 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this),
              !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 320))(v15)) )
        {
          if ( (*(_DWORD *)(LODWORD(v11) + 252) & 0x800) != 0 )
            sub_100DAE60(SLODWORD(v11));
          (*(void (__thiscall **)(int, float, int, int))(*(_DWORD *)this + 1876))(
            this,
            COERCE_FLOAT(LODWORD(v11)),
            LODWORD(v11) + 580,
            this);
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
          {
            v26 = *(float *)(dword_106B31C8 + 12) + 5.0;
            v24 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
            v16 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 1868))(this);
            sub_10077890(v16, v24, v26);
          }
        }
      }
    }
    v34 = v34 * v41;
  }
  v17 = *(_DWORD *)(this + 3624);
  if ( v17 )
    v18 = (*(int (__thiscall **)(int, int *))(*(_DWORD *)v17 + 200))(v17, &v27);
  else
    v18 = sub_10035940((int *)this, this, (int)&v27);
  v19 = v18;
  sub_10375490(this + 4292, (int)&v27);
  if ( !*(_BYTE *)(this + 4230) && (double)*(int *)(dword_106E8574 + 48) * 0.3 >= (double)*(int *)(this + 220) )
    sub_10371B00(this);
  if ( *(_DWORD *)(this + 4624) )
  {
    v20 = *(_DWORD *)(a2 + 44);
    if ( v20 != -1 )
    {
      v21 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
      v22 = v20 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v22 )
      {
        if ( *v21 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v22 )
            v23 = *v21;
          else
            v23 = 0;
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v23 + 320))(v23) )
            *(float *)(this + 4628) = *(float *)(dword_106B31C8 + 12);
        }
      }
    }
  }
  return v19;
}

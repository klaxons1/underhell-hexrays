int __thiscall sub_10359F20(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  unsigned int v18; // eax
  int *v19; // ecx
  _DWORD *v20; // edi
  unsigned int v21; // eax
  int v22; // eax
  int v23; // eax
  int (__thiscall ***v24)(_DWORD); // edi
  int v25; // eax
  float *v26; // edi
  float *v27; // eax
  float *v28; // eax
  int v29; // eax
  _DWORD *v30; // edi
  int *v31; // ebx
  int v32; // edx
  float *v33; // eax
  float *v34; // ebx
  float *v35; // edi
  float *v36; // eax
  float *v37; // eax
  float *v38; // edi
  float *v39; // eax
  float *v40; // eax
  const char *v42; // [esp+4h] [ebp-64h]
  int v43; // [esp+8h] [ebp-60h]
  int v44; // [esp+Ch] [ebp-5Ch]
  int v45; // [esp+10h] [ebp-58h]
  int v46; // [esp+14h] [ebp-54h]
  int v47; // [esp+18h] [ebp-50h]
  int v48; // [esp+1Ch] [ebp-4Ch]
  int v49; // [esp+24h] [ebp-44h]
  int v50[3]; // [esp+34h] [ebp-34h] BYREF
  int v51[3]; // [esp+40h] [ebp-28h] BYREF
  int v52; // [esp+4Ch] [ebp-1Ch] BYREF
  int v53; // [esp+50h] [ebp-18h]
  int v54; // [esp+54h] [ebp-14h]
  int v55; // [esp+58h] [ebp-10h] BYREF
  int v56; // [esp+5Ch] [ebp-Ch]
  int v57; // [esp+60h] [ebp-8h]
  _DWORD *v58; // [esp+64h] [ebp-4h]

  v3 = *(_DWORD *)(this + 4176);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 4176) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        v6 = v4[1] == v5 ? *v4 : 0;
        sub_1016AF10(v6);
        v7 = *(_DWORD *)(this + 4176);
        if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4176) & 0xFFF) + 2] != v7 >> 12 )
          v8 = 0;
        else
          v8 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 4176) & 0xFFF) + 1];
        sub_100E9550(v8, 6, 0, 0, 0);
        v9 = *(_DWORD *)(this + 4176);
        if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4176) & 0xFFF) + 2] != v9 >> 12 )
          v10 = 0;
        else
          v10 = off_1061BE18[4 * (*(_DWORD *)(this + 4176) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 76))(v10, 0);
        *(_DWORD *)(this + 4176) = -1;
        v11 = sub_100CF460((_DWORD *)this);
        if ( v11 )
          sub_1025FAC0(v11);
      }
    }
  }
  v12 = sub_100BF520(this, "helmet");
  v13 = sub_100BF4B0(this, v12);
  v14 = sub_100BF520(this, "head");
  v15 = sub_100BF4B0(this, v14);
  if ( *(_BYTE *)(this + 4977) && v13 && v15 == 1 )
  {
    sub_100C1600(this, v12, 0);
    sub_100BEFA0((void *)this, "Eyes", (int)&v52, (int)&v55);
    if ( v13 <= 3 )
    {
      sub_101CB6F0(this, (int)"item_helmet_pmc", *(float *)&v52, v53, v54, *(float *)&v55, v56, v57, 1, v13);
    }
    else
    {
      sub_101CB6F0(this, (int)"item_headset_pmc", *(float *)&v52, v53, v54, *(float *)&v55, v56, v57, 1, v13);
      if ( v13 == 5 )
      {
        v49 = 5;
        v46 = v55;
        v47 = v56;
        v48 = v57;
        v16 = v53;
        v43 = v52;
        v17 = v54;
        v42 = "item_cap_pmc";
LABEL_32:
        v44 = v16;
        v45 = v17;
        goto LABEL_33;
      }
    }
  }
  else if ( *(_BYTE *)(this + 4976) )
  {
    if ( v13 && v15 == 1 )
    {
      sub_100C1600(this, v12, 0);
      sub_100BEFA0((void *)this, "Eyes", (int)&v55, (int)&v52);
      v49 = v13;
      v46 = v52;
      v47 = v53;
      v48 = v54;
      v16 = v56;
      v43 = v55;
      v17 = v57;
      v42 = "item_helmet_prison";
      goto LABEL_32;
    }
  }
  else if ( v13 && v15 == 1 )
  {
    sub_100C1600(this, v12, 0);
    sub_100BEFA0((void *)this, "Eyes", (int)&v55, (int)&v52);
    v49 = v13;
    v46 = v52;
    v47 = v53;
    v48 = v54;
    v43 = v55;
    v44 = v56;
    v45 = v57;
    v42 = "item_helmet_guard";
LABEL_33:
    sub_101CB6F0(this, (int)v42, *(float *)&v43, v44, v45, *(float *)&v46, v47, v48, 1, v49);
  }
  if ( *(_DWORD *)(dword_106E7A04 + 48) && !(unsigned __int8)sub_103FA550() )
  {
    v18 = *(_DWORD *)(a2 + 44);
    if ( v18 != -1
      && (v19 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v18 >> 12)
      && (v20 = (_DWORD *)*v19) != 0
      && (*(unsigned __int8 (__thiscall **)(int))(*v20 + 320))(*v19) )
    {
      v58 = v20;
    }
    else
    {
      v21 = *(_DWORD *)(a2 + 44);
      if ( v21 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v21 >> 12 )
        v22 = 0;
      else
        v22 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
      v23 = __RTDynamicCast(
              v22,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CPropVehicleDriveable `RTTI Type Descriptor',
              0);
      if ( !v23 )
        return sub_10340D30((_DWORD *)this, a2);
      v24 = (int (__thiscall ***)(_DWORD))(v23 + 1484);
      if ( !(**(int (__thiscall ***)(int))(v23 + 1484))(v23 + 1484) )
        return sub_10340D30((_DWORD *)this, a2);
      v25 = (**v24)(v24);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v25 + 320))(v25) )
        return sub_10340D30((_DWORD *)this, a2);
      v58 = (_DWORD *)(**v24)(v24);
      if ( !v58 )
        return sub_10340D30((_DWORD *)this, a2);
    }
    if ( *(_BYTE *)(this + 4960) )
    {
      if ( (*(_DWORD *)(this + 248) & 0x40000) == 0 )
      {
        v26 = sub_1001F010((float *)v51, -4.0, 4.0);
        v27 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
        *(float *)&v52 = *v27 + *v26;
        *(float *)&v53 = v27[1] + v26[1];
        *(float *)&v54 = v27[2] + v26[2];
        v28 = sub_1014AE30((float *)v50, 0.0, 360.0);
        v29 = sub_10021920(
                (_DWORD *)this,
                (int)"item_ammo_ar2_altfire",
                v52,
                v53,
                v54,
                *(_DWORD *)v28,
                *((_DWORD *)v28 + 1),
                *((_DWORD *)v28 + 2));
        v30 = (_DWORD *)v29;
        if ( v29 )
        {
          v31 = *(int **)(v29 + 424);
          if ( v31 )
          {
            sub_1001F010((float *)&v52, -64.0, 64.0);
            sub_1001F010((float *)&v55, -300.0, 300.0);
            v32 = *v31;
            *(float *)&v54 = 0.0;
            (*(void (__thiscall **)(int *, int *, int *))(v32 + 208))(v31, &v52, &v55);
          }
          if ( (*(_DWORD *)(a2 + 64) & 0x4000000) != 0 )
          {
            v33 = (float *)__RTDynamicCast(
                             (int)v30,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                             (int)&CBaseAnimating `RTTI Type Descriptor',
                             0);
            if ( v33 )
              sub_100C3210(
                v33,
                0,
                *(float *)(dword_106B31C8 + 12),
                0,
                0,
                SLODWORD(flt_106F1CA8),
                SLODWORD(flt_106F1CAC),
                SLODWORD(flt_106F1CB0),
                0);
          }
          else
          {
            sub_10163570(v30);
          }
        }
      }
    }
    v34 = (float *)dword_106B3CDC;
    if ( sub_102D97E0((float *)dword_106B3CDC, (int)v58) )
    {
      v35 = sub_1001F010((float *)v50, -4.0, 4.0);
      v36 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
      *(float *)&v52 = *v36 + *v35;
      *(float *)&v53 = v35[1] + v36[1];
      *(float *)&v54 = v35[2] + v36[2];
      v37 = sub_1014AE30((float *)v51, 0.0, 360.0);
      sub_10021920(
        (_DWORD *)this,
        (int)"item_healthvial",
        v52,
        v53,
        v54,
        *(_DWORD *)v37,
        *((_DWORD *)v37 + 1),
        *((_DWORD *)v37 + 2));
      sub_102D9840(v34);
    }
    if ( (*(_DWORD *)(this + 248) & 0x20000) == 0 && sub_102DA280(v34, v58) )
    {
      v38 = sub_1001F010((float *)v50, -4.0, 4.0);
      v39 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
      *(float *)&v52 = *v38 + *v39;
      *(float *)&v53 = v39[1] + v38[1];
      *(float *)&v54 = v39[2] + v38[2];
      v40 = sub_1014AE30((float *)v51, 0.0, 360.0);
      sub_10021920(
        (_DWORD *)this,
        (int)"weapon_frag",
        v52,
        v53,
        v54,
        *(_DWORD *)v40,
        *((_DWORD *)v40 + 1),
        *((_DWORD *)v40 + 2));
      sub_102D9860(v34);
    }
    return sub_10340D30((_DWORD *)this, a2);
  }
  return sub_10340D30((_DWORD *)this, a2);
}

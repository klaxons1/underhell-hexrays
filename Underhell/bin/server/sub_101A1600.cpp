int __thiscall sub_101A1600(int this, int a2)
{
  int *v3; // ecx
  float *v4; // eax
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // eax
  int (__thiscall ***v11)(_DWORD); // edi
  int v12; // eax
  float *v13; // edi
  float *v14; // eax
  float *v15; // eax
  int v16; // eax
  _DWORD *v17; // edi
  int *v18; // ebx
  int v19; // edx
  float *v20; // eax
  int v21; // ebx
  float *v22; // edi
  float *v23; // eax
  float *v24; // eax
  float *v25; // edi
  float *v26; // eax
  float *v27; // eax
  float v29; // [esp+8h] [ebp-5Ch]
  int v30; // [esp+14h] [ebp-50h]
  int v31; // [esp+18h] [ebp-4Ch]
  int v32; // [esp+1Ch] [ebp-48h]
  int v33[3]; // [esp+30h] [ebp-34h] BYREF
  int v34[3]; // [esp+3Ch] [ebp-28h] BYREF
  int v35[3]; // [esp+48h] [ebp-1Ch] BYREF
  int v36; // [esp+54h] [ebp-10h] BYREF
  int v37; // [esp+58h] [ebp-Ch]
  int v38; // [esp+5Ch] [ebp-8h]
  int v39; // [esp+60h] [ebp-4h]

  if ( *(_DWORD *)(this + 848) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 848);
    }
    *(_DWORD *)(this + 848) = 0;
  }
  sub_1023C380((int)"NPC_Ace.Dissolve", 0.0, 0);
  v30 = LODWORD(flt_106F1CA8);
  v31 = LODWORD(flt_106F1CAC);
  v32 = LODWORD(flt_106F1CB0);
  v29 = *(float *)(dword_106B31C8 + 12) + 2.0;
  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 208))(this);
  sub_100C3210(v4, (int)String, v29, 0, 0, v30, v31, v32, 0);
  if ( *(_DWORD *)(dword_106B8F0C + 48) && !(unsigned __int8)sub_103FA550() )
  {
    v5 = *(_DWORD *)(a2 + 44);
    if ( v5 != -1
      && (v6 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v5 >> 12)
      && (v7 = *v6) != 0
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 320))(*v6) )
    {
      v39 = v7;
    }
    else
    {
      v8 = *(_DWORD *)(a2 + 44);
      if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v8 >> 12 )
        v9 = 0;
      else
        v9 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
      v10 = __RTDynamicCast(
              v9,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CPropVehicleDriveable `RTTI Type Descriptor',
              0);
      if ( !v10 )
        return sub_10340D30(a2);
      v11 = (int (__thiscall ***)(_DWORD))(v10 + 1484);
      if ( !(**(int (__thiscall ***)(int))(v10 + 1484))(v10 + 1484) )
        return sub_10340D30(a2);
      v12 = (**v11)(v11);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v12 + 320))(v12) )
        return sub_10340D30(a2);
      v39 = (**v11)(v11);
      if ( !v39 )
        return sub_10340D30(a2);
    }
    if ( *(_BYTE *)(this + 4960) )
    {
      if ( (*(_DWORD *)(this + 248) & 0x40000) == 0 )
      {
        v13 = sub_1001F010((float *)v34, -4.0, 4.0);
        v14 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
        *(float *)&v36 = *v14 + *v13;
        *(float *)&v37 = v14[1] + v13[1];
        *(float *)&v38 = v14[2] + v13[2];
        v15 = sub_1014AE30((float *)v33, 0.0, 360.0);
        v16 = sub_10021920(
                (_DWORD *)this,
                (int)"item_ammo_ar2_altfire",
                v36,
                v37,
                v38,
                *(_DWORD *)v15,
                *((_DWORD *)v15 + 1),
                *((_DWORD *)v15 + 2));
        v17 = (_DWORD *)v16;
        if ( v16 )
        {
          v18 = *(int **)(v16 + 424);
          if ( v18 )
          {
            sub_1001F010((float *)&v36, -64.0, 64.0);
            sub_1001F010((float *)v35, -300.0, 300.0);
            v19 = *v18;
            *(float *)&v38 = 0.0;
            (*(void (__thiscall **)(int *, int *, int *))(v19 + 208))(v18, &v36, v35);
          }
          if ( (*(_DWORD *)(a2 + 64) & 0x4000000) != 0 )
          {
            v20 = (float *)__RTDynamicCast(
                             (int)v17,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                             (int)&CBaseAnimating `RTTI Type Descriptor',
                             0);
            if ( v20 )
              sub_100C3210(
                v20,
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
            sub_10163570(v17);
          }
        }
      }
    }
    v21 = dword_106B3CDC;
    if ( (unsigned __int8)sub_102D97E0(v39) )
    {
      v22 = sub_1001F010((float *)v33, -4.0, 4.0);
      v23 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
      *(float *)&v36 = *v22 + *v23;
      *(float *)&v37 = v22[1] + v23[1];
      *(float *)&v38 = v22[2] + v23[2];
      v24 = sub_1014AE30((float *)v34, 0.0, 360.0);
      sub_10021920(
        (_DWORD *)this,
        (int)"item_healthvial",
        v36,
        v37,
        v38,
        *(_DWORD *)v24,
        *((_DWORD *)v24 + 1),
        *((_DWORD *)v24 + 2));
      sub_102D9840(v21);
    }
    if ( (*(_DWORD *)(this + 248) & 0x20000) == 0 )
    {
      if ( (unsigned __int8)sub_102DA280(v39) )
      {
        v25 = sub_1001F010((float *)v33, -4.0, 4.0);
        v26 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
        *(float *)&v36 = *v25 + *v26;
        *(float *)&v37 = v26[1] + v25[1];
        *(float *)&v38 = v26[2] + v25[2];
        v27 = sub_1014AE30((float *)v34, 0.0, 360.0);
        sub_10021920(
          (_DWORD *)this,
          (int)"weapon_frag",
          v36,
          v37,
          v38,
          *(_DWORD *)v27,
          *((_DWORD *)v27 + 1),
          *((_DWORD *)v27 + 2));
        sub_102D9860(v21);
      }
    }
    return sub_10340D30(a2);
  }
  return sub_10340D30(a2);
}

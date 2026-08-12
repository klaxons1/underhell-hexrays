char __thiscall sub_102A3830(int *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  int (__thiscall *v14)(int); // edx
  float *v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  int *v24; // edi
  float *v25; // eax
  float v26; // edx
  float v27; // ecx
  float v28; // eax
  int v29; // edx
  float *v30; // eax
  double v31; // st4
  double v32; // st5
  double v33; // st7
  int v34; // eax
  int v35; // eax
  unsigned int v36; // eax
  int *v37; // edi
  float *v38; // eax
  float v39; // edx
  float v40; // ecx
  float v41; // eax
  int v42; // edx
  float *v43; // eax
  double v44; // st4
  double v45; // st6
  double v46; // st4
  double v47; // st5
  double v48; // st6
  double v49; // st7
  int v50; // eax
  int v51; // eax
  unsigned int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  float ArgList_4; // [esp+20h] [ebp-B0h]
  float ArgList_4a; // [esp+20h] [ebp-B0h]
  char Buffer[128]; // [esp+2Ch] [ebp-A4h] BYREF
  float v61[3]; // [esp+ACh] [ebp-24h] BYREF
  float v62[3]; // [esp+B8h] [ebp-18h] BYREF
  float v63; // [esp+C4h] [ebp-Ch]
  float v64; // [esp+C8h] [ebp-8h]
  float v65; // [esp+CCh] [ebp-4h]

  v2 = this[17];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (this[17] & 0xFFF) + 1];
    v2 >>= 12;
    if ( v3[1] == v2 )
    {
      if ( *v3 )
      {
        v4 = (*(int (__thiscall **)(int *))(*this + 52))(this);
        v5 = sub_1007DB30((_DWORD *)(v4 + 52), 100000);
        if ( sub_10023D10((_DWORD *)this[1], v5) )
          sub_102A01C0(this, (int)"TLK_PASSENGER_IMPACT", 0, 0, 0, 0);
        v6 = (*(int (__thiscall **)(int *))(*this + 52))(this);
        v7 = sub_1007DB30((_DWORD *)(v6 + 52), 100005);
        if ( sub_10023D10((_DWORD *)this[1], v7) )
          sub_102A01C0(this, (int)"TLK_PASSENGER_OVERTURNED", 0, 0, 0, 0);
        v8 = (*(int (__thiscall **)(int *))(*this + 52))(this);
        v9 = sub_1007DB30((_DWORD *)(v8 + 52), 100013);
        if ( sub_10023D10((_DWORD *)this[1], v9) )
        {
          v10 = this[17];
          if ( v10 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v10 >> 12 )
            v11 = 0;
          else
            v11 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
          (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)v11 + 528))(v11, v62, 0, 0);
          v12 = this[17];
          if ( v12 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v12 >> 12 )
            v13 = 0;
          else
            v13 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
          v14 = *(int (__thiscall **)(int))(*(_DWORD *)v13 + 576);
          v63 = v62[0] * 64.0;
          v64 = v62[1] * 64.0;
          v65 = 64.0 * v62[2];
          v15 = (float *)v14(v13);
          v16 = this[1];
          v61[0] = *v15 + v63;
          v61[1] = v15[1] + v64;
          v61[2] = v15[2] + v65;
          (*(void (__thiscall **)(int, float *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v16 + 1804))(
            v16,
            v61,
            1.0,
            1.0,
            0.0);
          sub_102A01C0(this, (int)"TLK_PASSENGER_WARN_COLLISION", 0, 0, 0, 0);
          v17 = (*(int (__thiscall **)(int *))(*this + 52))(this);
          v18 = sub_1007DB30((_DWORD *)(v17 + 52), 100013);
          sub_10023E00((char *)this[1], v18);
        }
        v19 = (*(int (__thiscall **)(int *))(*this + 52))(this);
        v20 = sub_1007DB30((_DWORD *)(v19 + 52), 100007);
        if ( sub_10023D10((_DWORD *)this[1], v20) )
          sub_102A01C0(this, (int)"TLK_PASSENGER_ERRATIC_DRIVING", 0, 0, 0, 0);
        v21 = (*(int (__thiscall **)(int *))(*this + 52))(this);
        v22 = sub_1007DB30((_DWORD *)(v21 + 52), 100004);
        if ( sub_10023D10((_DWORD *)this[1], v22) )
        {
          v23 = this[17];
          if ( v23 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v23 >> 12 )
            v24 = 0;
          else
            v24 = (int *)off_1061BE18[4 * (this[17] & 0xFFF) + 1];
          v25 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this[1] + 576))(this[1]);
          v26 = v25[1];
          v27 = *v25;
          v28 = v25[2];
          v64 = v26;
          v29 = *v24;
          v63 = v27;
          v65 = v28;
          v30 = (float *)(*(int (__thiscall **)(int *))(v29 + 576))(v24);
          v31 = v64 - v30[1];
          v32 = v65 - v30[2];
          ArgList_4 = v32 * v32 + v31 * v31 + (v63 - *v30) * (v63 - *v30);
          v33 = off_10689708(ArgList_4);
          sub_10092C10(Buffer, "vehicle_distance:%f", v33);
          sub_102A01C0(this, (int)"TLK_PASSENGER_VEHICLE_STOPPED", (int)Buffer, 0, 0, 0);
        }
        v34 = (*(int (__thiscall **)(int *))(*this + 52))(this);
        v35 = sub_1007DB30((_DWORD *)(v34 + 52), 100003);
        if ( sub_10023D10((_DWORD *)this[1], v35) )
        {
          v36 = this[17];
          if ( v36 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v36 >> 12 )
            v37 = 0;
          else
            v37 = (int *)off_1061BE18[4 * (this[17] & 0xFFF) + 1];
          v38 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this[1] + 576))(this[1]);
          v39 = v38[1];
          v40 = *v38;
          v41 = v38[2];
          v64 = v39;
          v42 = *v37;
          v63 = v40;
          v65 = v41;
          v43 = (float *)(*(int (__thiscall **)(int *))(v42 + 576))(v37);
          v44 = v64 - v43[1];
          v45 = v44 * v44;
          v46 = v63 - *v43;
          v47 = v45;
          v48 = v65 - v43[2];
          ArgList_4a = v46 * v46 + v47 + v48 * v48;
          v49 = off_10689708(ArgList_4a);
          sub_10092C10(Buffer, "vehicle_distance:%f", v49);
          sub_102A01C0(this, (int)"TLK_PASSENGER_VEHICLE_STARTED", (int)Buffer, 0, 0, 0);
        }
        v50 = (*(int (__thiscall **)(int *))(*this + 52))(this);
        v51 = sub_1007DB30((_DWORD *)(v50 + 52), 100009);
        if ( sub_10023D10((_DWORD *)this[1], v51) )
        {
          v52 = this[17];
          if ( v52 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v52 >> 12 )
            v53 = 0;
          else
            v53 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
          v54 = __RTDynamicCast(
                  v53,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CPropVehicleDriveable `RTTI Type Descriptor',
                  (int)&CPropJeepEpisodic `RTTI Type Descriptor',
                  0);
          if ( v54 && *(int *)(v54 + 2124) > 0 )
            sub_102A01C0(this, (int)"TLK_PASSENGER_PLAYER_EXITED", (int)"radar_has_targets", 0, 0, 0);
          else
            sub_102A01C0(this, (int)"TLK_PASSENGER_PLAYER_EXITED", 0, 0, 0, 0);
        }
        v55 = (*(int (__thiscall **)(int *))(*this + 52))(this);
        v56 = sub_1007DB30((_DWORD *)(v55 + 52), 100008);
        LOBYTE(v2) = sub_10023D10((_DWORD *)this[1], v56);
        if ( (_BYTE)v2 )
          LOBYTE(v2) = sub_102A01C0(this, (int)"TLK_PASSENGER_PLAYER_ENTERED", 0, 0, 0, 0);
      }
    }
  }
  return v2;
}

char __thiscall sub_10083E70(float *this, _DWORD *a2, int a3)
{
  _DWORD *v4; // eax
  int *v5; // eax
  void (__thiscall *v7)(float *); // eax
  float *v8; // edi
  char *v9; // eax
  char *v10; // eax
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  char *v19; // eax
  char *v20; // eax
  char *v21; // eax
  char *v22; // eax
  char *v23; // eax
  char *v24; // eax
  char *v25; // eax
  char *v26; // eax
  char *v27; // eax
  char *v28; // eax
  char *v29; // eax
  char *v30; // eax
  char *v31; // eax
  char *v32; // eax
  const char *v33; // eax
  char *v34; // eax
  char *v35; // eax
  int v36; // eax
  const char *v37; // eax
  char *v38; // eax
  char *v39; // eax
  int v40; // eax
  char *v41; // eax
  char *v42; // eax
  int v43; // esi
  float *v44; // ecx
  char *v45; // eax
  int v46; // ecx
  int v47; // edi
  int v48; // edx
  int v49; // esi
  int v50; // ecx
  float *v51; // esi
  int v52; // eax
  char *v53; // eax
  char *v54; // eax
  char *v55; // eax
  int v56; // esi
  int v57; // eax
  int v58; // [esp+10h] [ebp-384h]
  double v59; // [esp+10h] [ebp-384h]
  int v60; // [esp+14h] [ebp-380h]
  char Buffer[256]; // [esp+24h] [ebp-370h] BYREF
  char v62[48]; // [esp+124h] [ebp-270h] BYREF
  char v63[256]; // [esp+154h] [ebp-240h] BYREF
  char v64[256]; // [esp+254h] [ebp-140h] BYREF
  char v65[12]; // [esp+354h] [ebp-40h] BYREF
  char v66[12]; // [esp+360h] [ebp-34h] BYREF
  char v67[12]; // [esp+36Ch] [ebp-28h] BYREF
  char v68[12]; // [esp+378h] [ebp-1Ch] BYREF
  int v69; // [esp+384h] [ebp-10h]
  int v70; // [esp+388h] [ebp-Ch]
  int v71; // [esp+38Ch] [ebp-8h]
  char v72; // [esp+393h] [ebp-1h]
  int v73; // [esp+3A0h] [ebp+Ch]

  if ( *((_BYTE *)sub_1001F570() + 24) )
  {
    qmemcpy(v62, a2, sizeof(v62));
    v4 = (_DWORD *)sub_10184390(88);
    if ( v4 )
    {
      v4[3] = 1;
      *v4 = &CMemberFunctor2<CAI_Navigator *,bool (__thiscall CAI_Navigator::*)(AI_NavGoal_t const &,unsigned int),AI_NavGoal_t,unsigned int,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
      v4[2] = &CMemberFunctor2<CAI_Navigator *,bool (__thiscall CAI_Navigator::*)(AI_NavGoal_t const &,unsigned int),AI_NavGoal_t,unsigned int,CRefCounted1<CFunctor,CRefCountServiceBase<1,CRefMT>>,CFuncMemPolicyNone>::`vftable';
      v4[4] = sub_1007E3F0;
      v4[5] = 0;
      v4[6] = this;
      qmemcpy(v4 + 8, v62, 0x30u);
      v4[20] = a3;
    }
    else
    {
      v4 = 0;
    }
    v60 = (int)v4;
    v58 = *((_DWORD *)this + 1);
    v5 = (int *)sub_1001F570();
    sub_10035510(v5, v58, v60);
    if ( (a3 & 8) == 0
      || (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 1752))(*((_DWORD *)this + 1)) )
    {
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
    }
    return 1;
  }
  else
  {
    v7 = *(void (__thiscall **)(float *))(*(_DWORD *)this + 44);
    v69 = *((_DWORD *)this + 9);
    v7(this);
    if ( (a3 & 1) != 0 )
      sub_100810C0(this);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 1) + 1752))(*((_DWORD *)this + 1))
      || *(_DWORD *)(dword_106B345C + 48) )
    {
      LOBYTE(a3) = a3 | 8;
    }
    v8 = (float *)a2;
    v72 = sub_10083B10(this, (float *)a2, a3);
    if ( v72 )
    {
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v19 = sub_1001E280(v64, "[Nav] %s", "New goal set:\n");
        sub_10029660(*((_DWORD **)this + 1), (int)v19);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v20 = sub_1001E280(v64, "   Type:         %s\n", *(const char **)&off_10608840[4 * *a2]);
        v21 = sub_1001E280(v63, "[Nav] %s", v20);
        sub_10029660(*((_DWORD **)this + 1), (int)v21);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        if ( *((float *)a2 + 1) == *(float *)&dword_1060887C
          && *((float *)a2 + 2) == *(float *)&dword_10608880
          && *((float *)a2 + 3) == *(float *)&dword_10608884 )
        {
          v22 = "AIN_NO_DEST";
        }
        else
        {
          v22 = sub_1001E280(v64, "(%f, %f, %f)", *((float *)a2 + 1), *((float *)a2 + 2), *((float *)a2 + 3));
        }
        v23 = sub_1001E280(v63, "   Dest:         %s\n", v22);
        v24 = sub_1001E280(Buffer, "[Nav] %s", v23);
        sub_10029660(*((_DWORD **)this + 1), (int)v24);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v25 = sub_1001E280(v64, "   Dest node:    %d\n", a2[4]);
        v26 = sub_1001E280(v63, "[Nav] %s", v25);
        sub_10029660(*((_DWORD **)this + 1), (int)v26);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v27 = sub_1001E280(v64, "   Target:       %#x\n", a2[11]);
        v28 = sub_1001E280(v63, "[Nav] %s", v27);
        sub_10029660(*((_DWORD **)this + 1), (int)v28);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v29 = sub_1001E280(v64, "   Tolerance:    %.1f\n", *(float *)(*((_DWORD *)this + 9) + 4));
        v30 = sub_1001E280(v63, "[Nav] %s", v29);
        sub_10029660(*((_DWORD **)this + 1), (int)v30);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v31 = sub_1001E280(v64, "   Waypoint tol: %.1f\n", *(float *)(*((_DWORD *)this + 9) + 32));
        v32 = sub_1001E280(v63, "[Nav] %s", v31);
        sub_10029660(*((_DWORD **)this + 1), (int)v32);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v33 = sub_10008F90(*(_DWORD *)(*((_DWORD *)this + 9) + 8));
        v34 = sub_1001E280(v64, "   Activity:     %s\n", v33);
        v35 = sub_1001E280(v63, "[Nav] %s", v34);
        sub_10029660(*((_DWORD **)this + 1), (int)v35);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v36 = sub_100A5FB0(*((_DWORD *)this + 9));
        v37 = sub_10008F90(v36);
        v38 = sub_1001E280(v64, "   Arrival act:  %s\n", v37);
        v39 = sub_1001E280(v63, "[Nav] %s", v38);
        sub_10029660(*((_DWORD **)this + 1), (int)v39);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v40 = sub_100A5FE0(*((_DWORD *)this + 9));
        v41 = sub_1001E280(v64, "   Arrival seq:  %d\n", v40);
        v42 = sub_1001E280(v63, "[Nav] %s", v41);
        sub_10029660(*((_DWORD **)this + 1), (int)v42);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v43 = *((_DWORD *)this + 1);
        if ( (*(_DWORD *)(v43 + 252) & 0x800) != 0 )
          sub_100DAE60(*((_DWORD *)this + 1));
        v44 = (float *)sub_100A6560(v66, v43 + 580);
        if ( *v44 == *(float *)&dword_1060887C
          && v44[1] == *(float *)&dword_10608880
          && v44[2] == *(float *)&dword_10608884 )
        {
          v45 = "AIN_NO_DEST";
        }
        else
        {
          v46 = *((_DWORD *)this + 1);
          v73 = v46;
          if ( (*(_DWORD *)(v46 + 252) & 0x800) != 0 )
            sub_100DAE60(v46);
          v47 = *((_DWORD *)this + 1);
          v48 = *(_DWORD *)(v47 + 252) >> 11;
          v71 = *((_DWORD *)this + 9);
          if ( (v48 & 1) != 0 )
            sub_100DAE60(v47);
          v49 = *((_DWORD *)this + 1);
          v50 = *(_DWORD *)(v49 + 252) >> 11;
          v70 = *((_DWORD *)this + 9);
          if ( (v50 & 1) != 0 )
            sub_100DAE60(v49);
          v51 = (float *)sub_100A6560(v68, v49 + 580);
          v59 = *(float *)(sub_100A6560(v65, v73 + 580) + 8);
          v52 = sub_100A6560(v67, v47 + 580);
          v45 = sub_1001E280(v64, "(%f, %f, %f)", *v51, *(float *)(v52 + 4), v59);
          v8 = (float *)a2;
        }
        v53 = sub_1001E280(v63, "   Goal dir:     %s\n", v45);
        v54 = sub_1001E280(Buffer, "[Nav] %s", v53);
        sub_10029660(*((_DWORD **)this + 1), (int)v54);
      }
      if ( ((_BYTE)v8[10] & 1) != 0 )
      {
        if ( *(_DWORD *)(dword_106934A4 + 48) )
        {
          v55 = sub_1001E280(v64, "[Nav] %s", "   Yaw to dest\n");
          sub_10029660(*((_DWORD **)this + 1), (int)v55);
        }
        v56 = *((_DWORD *)this + 5);
        v57 = sub_100A6140(v69);
        sub_10078690(v56, v57, 0.0, 0.0);
      }
      (*(void (__thiscall **)(float *, int, float))(*(_DWORD *)this + 28))(this, 1, v8[9]);
    }
    else
    {
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v9 = sub_1001E280(Buffer, "[Nav] %s", "Failed to pathfind to nav goal:\n");
        sub_10029660(*((_DWORD **)this + 1), (int)v9);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v10 = sub_1001E280(Buffer, "   Type:      %s\n", *(const char **)&off_10608840[4 * *a2]);
        v11 = sub_1001E280(v63, "[Nav] %s", v10);
        sub_10029660(*((_DWORD **)this + 1), (int)v11);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        if ( *((float *)a2 + 1) == *(float *)&dword_1060887C
          && *((float *)a2 + 2) == *(float *)&dword_10608880
          && *((float *)a2 + 3) == *(float *)&dword_10608884 )
        {
          v12 = "AIN_NO_DEST";
        }
        else
        {
          v12 = sub_1001E280(v63, "(%f, %f, %f)", *((float *)a2 + 1), *((float *)a2 + 2), *((float *)a2 + 3));
        }
        v13 = sub_1001E280(Buffer, "   Dest:      %s\n", v12);
        v14 = sub_1001E280(v64, "[Nav] %s", v13);
        sub_10029660(*((_DWORD **)this + 1), (int)v14);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v15 = sub_1001E280(v64, "   Dest node: %d\n", a2[4]);
        v16 = sub_1001E280(v63, "[Nav] %s", v15);
        sub_10029660(*((_DWORD **)this + 1), (int)v16);
      }
      if ( *(_DWORD *)(dword_106934A4 + 48) )
      {
        v17 = sub_1001E280(v64, "   Target:    %#x\n", a2[11]);
        v18 = sub_1001E280(v63, "[Nav] %s", v17);
        sub_10029660(*((_DWORD **)this + 1), (int)v18);
      }
      if ( (a3 & 4) != 0 )
      {
        sub_100810C0(this);
        return v72;
      }
    }
    return v72;
  }
}

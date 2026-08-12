void __thiscall sub_100360A0(_BYTE *this, int a2, int a3, int a4)
{
  bool v5; // zf
  int v7; // edx
  int *v8; // ecx
  float v9; // edx
  float v10; // ecx
  unsigned int v11; // eax
  int v12; // edi
  float v13; // eax
  float v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // edi
  int v20; // eax
  int v21; // eax
  float v22; // eax
  float v23; // edx
  bool v24; // cc
  double v25; // st7
  double v26; // st7
  double v27; // st7
  double v28; // st7
  double v29; // st7
  int v30; // eax
  double v31; // st7
  double v32; // st7
  unsigned int v33; // ecx
  int *v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // eax
  int v38; // ecx
  float v39; // [esp+Ch] [ebp-DCh]
  float v40; // [esp+Ch] [ebp-DCh]
  _BYTE v41[68]; // [esp+1Ch] [ebp-CCh] BYREF
  int v42; // [esp+60h] [ebp-88h]
  int v43; // [esp+70h] [ebp-78h] BYREF
  float v44; // [esp+74h] [ebp-74h]
  float v45; // [esp+78h] [ebp-70h]
  float v46; // [esp+7Ch] [ebp-6Ch]
  int v47; // [esp+98h] [ebp-50h]
  float v48; // [esp+A4h] [ebp-44h]
  int v49; // [esp+B0h] [ebp-38h]
  float v50; // [esp+C0h] [ebp-28h]
  float v51; // [esp+C4h] [ebp-24h]
  float v52; // [esp+C8h] [ebp-20h]
  char v53[4]; // [esp+CCh] [ebp-1Ch] BYREF
  float v54; // [esp+D0h] [ebp-18h]
  float v55; // [esp+D4h] [ebp-14h]
  int v56; // [esp+D8h] [ebp-10h]
  float v57; // [esp+DCh] [ebp-Ch] BYREF
  float v58; // [esp+E0h] [ebp-8h]
  float v59; // [esp+E4h] [ebp-4h]
  int savedregs; // [esp+E8h] [ebp+0h] BYREF
  int v61; // [esp+F0h] [ebp+8h]
  bool v62; // [esp+F3h] [ebp+Bh]

  v5 = this[225] == 0;
  LOBYTE(v56) = 0;
  this[2904] = 0;
  if ( !v5 )
  {
    sub_1001E4E0(&v43, a2);
    v7 = a4;
    *((_DWORD *)this + 436) = *(_DWORD *)(a4 + 68);
    v61 = *(__int16 *)(a4 + 72);
    if ( *((_DWORD *)this + 208) != v61 )
    {
      if ( this[84] )
      {
        this[88] |= 1u;
      }
      else
      {
        v8 = (int *)*((_DWORD *)this + 6);
        if ( v8 )
        {
          sub_100194B0(v8, 832);
          v7 = a4;
        }
      }
      *((_DWORD *)this + 208) = v61;
    }
    v62 = *(_DWORD *)(dword_10690A3C + 48) != 0;
    if ( !*(_DWORD *)(v7 + 68) && !*(_DWORD *)(v7 + 80) )
    {
      v9 = *(float *)(a2 + 16);
      v10 = *(float *)(a2 + 24);
      v54 = *(float *)(a2 + 20);
      v11 = *(_DWORD *)(a2 + 40);
      *(float *)v53 = v9;
      v55 = v10;
      if ( v11 == -1 || off_1061BE18[4 * (v11 & 0xFFF) + 2] != v11 >> 12 )
        v12 = 0;
      else
        v12 = off_1061BE18[4 * (v11 & 0xFFF) + 1];
      if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
        sub_100DAE60(v12);
      v13 = *(float *)(v12 + 580);
      v14 = *(float *)(v12 + 584);
      v59 = *(float *)(v12 + 588);
      v57 = v13;
      v58 = v14;
      v50 = *(float *)v53 - v13;
      v51 = v54 - v14;
      v52 = v55 - (v59 + 64.0);
      off_10689714();
      v15 = *(_DWORD *)(a2 + 40);
      if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v15 >> 12 )
        v16 = 0;
      else
        v16 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
      v57 = v50 * 128.0 + *(float *)v53;
      v58 = v51 * 128.0 + v54;
      v59 = 128.0 * v52 + v55;
      sub_1002A5F0((int)&savedregs, (int)this, (float *)v53, &v57, 1174421507, v16, 0, (int)v41);
      *(_DWORD *)(a4 + 68) = v42;
      LOBYTE(v56) = 1;
    }
    v17 = __RTDynamicCast(
            (int)this,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
            (int)&CNPC_CombineS `RTTI Type Descriptor',
            0);
    if ( v17 )
    {
      if ( *(_BYTE *)(v17 + 4977) )
      {
        v18 = sub_100BF520("helmet");
        if ( (int)sub_100BF4B0(v18) > 3 )
        {
          v19 = (_DWORD *)a4;
          goto LABEL_32;
        }
      }
    }
    v19 = (_DWORD *)a4;
    if ( *(_DWORD *)(a4 + 68) != 1 )
      goto LABEL_32;
    v20 = *((_DWORD *)this + 202);
    if ( v20 != 1 && v20 != 6 && v20 != 8 )
      goto LABEL_32;
    v21 = sub_100BF520("helmet");
    if ( !sub_100BF4B0(v21) )
      goto LABEL_32;
    v22 = *(float *)(a2 + 16);
    v23 = *(float *)(a2 + 24);
    v58 = *(float *)(a2 + 20);
    v57 = v22;
    v59 = v23;
    ((void (__thiscall *)(int (__stdcall ***)(char), float *, int, int, _DWORD))(*off_1061B7A0)[3])(
      off_1061B7A0,
      &v57,
      1,
      1,
      0);
    sub_10031BF0((int)this, *(_DWORD *)(a4 + 68), (int)&v43, v56);
    v24 = *((_DWORD *)this + 429) <= 0;
    this[2904] = 1;
    if ( v24 )
    {
LABEL_32:
      if ( *((int *)this + 429) > 0 )
        sub_10031BF0((int)this, v19[17], (int)&v43, v56);
      switch ( v19[17] )
      {
        case 0:
          if ( v62 )
            DevMsg("Hit Location: Generic\n");
          break;
        case 1:
          v25 = ((double (__thiscall *)(_BYTE *, int, int))*(_DWORD *)(*(_DWORD *)this + 2080))(this, 1, a2);
          v48 = v25 * v48;
          if ( v62 )
            DevMsg("Hit Location: Head\n");
          break;
        case 2:
          v26 = ((double (__thiscall *)(_BYTE *, int, int))*(_DWORD *)(*(_DWORD *)this + 2080))(this, 2, a2);
          v48 = v26 * v48;
          if ( v62 )
            DevMsg("Hit Location: Chest\n");
          break;
        case 3:
          v27 = ((double (__thiscall *)(_BYTE *, int, int))*(_DWORD *)(*(_DWORD *)this + 2080))(this, 3, a2);
          v48 = v27 * v48;
          if ( v62 )
            DevMsg("Hit Location: Stomach\n");
          break;
        case 4:
          if ( this[1713] && *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1136))(this) == 1
            || *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1136))(this) == 3 )
          {
            goto LABEL_53;
          }
          goto LABEL_48;
        case 5:
          if ( this[1713] && *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1136))(this) == 2
            || *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 1136))(this) == 3 )
          {
LABEL_53:
            v19[17] = 0;
            v48 = 0.0099999998;
          }
          else
          {
LABEL_48:
            v28 = ((double (__thiscall *)(_BYTE *, _DWORD, int))*(_DWORD *)(*(_DWORD *)this + 2080))(this, v19[17], a2);
            v48 = v28 * v48;
            if ( v62 )
              DevMsg("Hit Location: Left/Right Arm\n");
          }
          break;
        case 6:
        case 7:
          v29 = ((double (__thiscall *)(_BYTE *, _DWORD, int))*(_DWORD *)(*(_DWORD *)this + 2080))(this, v19[17], a2);
          v48 = v29 * v48;
          if ( v62 )
            DevMsg("Hit Location: Left/Right Leg\n");
          break;
        case 0xA:
          v48 = 0.0099999998;
          v19[17] = 0;
          if ( v62 )
            DevMsg("Hit Location: Gear\n");
          break;
        default:
          if ( v62 )
            DevMsg("Hit Location: UNKNOWN\n");
          break;
      }
      if ( v48 >= 1.0 && (v49 & 0x100) == 0 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 320))(this)
          || (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)this + 320))(this)
          && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
        {
          v39 = v48;
          v30 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 276))(this);
          sub_100E84B0(v19[3], v19[4], v19[5], a3, v30, v39);
        }
        sub_100EA500(v48, a3, (int)v19, v49);
        if ( v19[17] == 1 && (double)*((int *)this + 55) - v48 > 0.0 )
          this[2904] = 1;
      }
      if ( (*(_DWORD *)(a2 + 64) & 0x2000000) != 0 && (double)*((int *)this + 55) <= v48 )
      {
        v40 = v45 * v45 + v44 * v44 + v46 * v46;
        v31 = off_10689708(v40);
        if ( 0.0 != v31 && v31 < 26000.0 )
        {
          v32 = 26000.0 / v31;
          v44 = v44 * v32;
          v45 = v45 * v32;
          v46 = v32 * v46;
        }
      }
      v33 = *(_DWORD *)(a2 + 40);
      if ( v33 != -1
        && (v34 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1],
            v35 = v33 >> 12,
            off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v35)
        && *v34 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == v35 )
        {
          v36 = *v34;
          if ( v36 )
          {
            v47 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v36 + 8))(v36);
LABEL_84:
            sub_102482C0(&v43, this);
            return;
          }
        }
      }
      else
      {
        v37 = *(_DWORD *)(a2 + 44);
        if ( v37 != -1 && off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] == v37 >> 12 )
        {
          v38 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
          if ( v38 )
          {
            v47 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v38 + 8))(v38);
            goto LABEL_84;
          }
        }
      }
      v47 = -1;
      goto LABEL_84;
    }
  }
}

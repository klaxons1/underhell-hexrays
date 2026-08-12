void __thiscall sub_10232210(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  unsigned int v8; // ebx
  int *v9; // ecx
  unsigned int v10; // eax
  int *v11; // ebx
  int v12; // eax
  int *v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  _DWORD *v18; // ebx
  int v19; // eax
  const char *v20; // eax
  unsigned int v21; // esi
  int v22; // esi
  bool v23; // al
  int v24; // edx
  bool v25; // zf
  int v26; // ebx
  _DWORD *v27; // eax
  double v28; // st7
  double v29; // st7
  float v30; // eax
  int v31; // ebx
  const char *v32; // eax
  const char *v33; // [esp+14h] [ebp-30h]
  double v34; // [esp+18h] [ebp-2Ch]
  double v35; // [esp+20h] [ebp-24h]
  const char *v36; // [esp+24h] [ebp-20h]
  float v37[3]; // [esp+34h] [ebp-10h] BYREF
  int v38; // [esp+40h] [ebp-4h]

  v2 = *(_DWORD *)(this + 880);
  if ( v2 == -1 )
    return;
  v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 )
    return;
  v4 = *v3;
  if ( !v4 )
    return;
  v5 = sub_100D7680(v4);
  v6 = v5;
  if ( !v5 )
    return;
  v7 = *(_DWORD *)(v5 + 248);
  v8 = v7 & 0xFFFFFF7F;
  if ( v7 != (v7 & 0xFFFFFF7F) )
  {
    if ( *(_BYTE *)(v6 + 84) )
    {
      *(_BYTE *)(v6 + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(v6 + 24);
      if ( v9 )
        sub_100194B0(v9, 248);
    }
    *(_DWORD *)(v6 + 248) = v8;
  }
  v10 = *(_DWORD *)(v6 + 2688);
  if ( v10 != -1 )
  {
    v11 = off_1061BE18;
    v12 = v10 >> 12;
    v13 = &off_1061BE18[4 * (*(_DWORD *)(v6 + 2688) & 0xFFF) + 1];
    v38 = v12;
    if ( v13[1] == v12 )
    {
      if ( *v13 )
      {
        if ( v13[1] == v12 )
          v14 = *v13;
        else
          v14 = 0;
        v15 = *(_DWORD *)(v14 + 884);
        if ( v15 != -1 && off_1061BE18[4 * (v15 & 0xFFF) + 2] == v15 >> 12 && off_1061BE18[4 * (v15 & 0xFFF) + 1] )
        {
          if ( v13[1] == v38 )
            v16 = *v13;
          else
            v16 = 0;
          v17 = *(_DWORD *)(v16 + 884);
          if ( v17 == -1 || off_1061BE18[4 * (v17 & 0xFFF) + 2] != v17 >> 12 )
            v18 = 0;
          else
            v18 = (_DWORD *)off_1061BE18[4 * (v17 & 0xFFF) + 1];
          if ( v13[1] == v38 )
            v19 = *v13;
          else
            v19 = 0;
          if ( (unsigned __int8)sub_103E0CF0(v19) )
            v18[220] = -1;
          v36 = sub_100D6390(v18);
          v20 = sub_100D6390((_DWORD *)this);
          DevMsg(2, "script \"%s\" kicking script \"%s\" out of the queue\n", v20, v36);
          v11 = off_1061BE18;
        }
        v21 = *(_DWORD *)(v6 + 2688);
        if ( v21 == -1 || v11[4 * (v21 & 0xFFF) + 2] != v21 >> 12 )
          v22 = 0;
        else
          v22 = v11[4 * (v21 & 0xFFF) + 1];
        if ( this )
          *(_DWORD *)(v22 + 884) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
        else
          *(_DWORD *)(v22 + 884) = -1;
        return;
      }
    }
  }
  if ( !*(_DWORD *)(this + 820) )
    *(_DWORD *)(this + 884) = -1;
  *(_DWORD *)(v6 + 2608) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  *(float *)(v6 + 2348) = 0.0;
  *(_DWORD *)(v6 + 2340) = 0;
  *(_DWORD *)(v6 + 2688) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  sub_100218B0((_DWORD *)v6, this);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 1272))(v6);
  *(_BYTE *)(this + 902) = *(_DWORD *)(v6 + 2352) != 0;
  v23 = sub_100204B0((_DWORD *)v6);
  if ( *(_BYTE *)(this + 902) )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 1412))(v6, 1);
LABEL_46:
    *(_BYTE *)(this + 902) = 1;
    sub_100EAB80((_DWORD *)v6, 32);
    goto LABEL_47;
  }
  if ( v23 )
    goto LABEL_46;
LABEL_47:
  v24 = *(_DWORD *)(this + 192);
  *(_DWORD *)(this + 864) = *(_DWORD *)(v6 + 192) & 0xFFFFFFDF;
  sub_100EAB80((_DWORD *)v6, v24);
  v25 = *(_BYTE *)(this + 836) == 0;
  *(_DWORD *)(this + 868) = *(_DWORD *)(v6 + 256);
  *(_DWORD *)(this + 872) = *(_DWORD *)(v6 + 420);
  if ( !v25 )
    sub_100EBE30(v6, 19);
  switch ( *(_DWORD *)(this + 828) )
  {
    case 0:
    case 5:
      goto LABEL_54;
    case 1:
      *(_DWORD *)(v6 + 2684) = 4;
      break;
    case 2:
      *(_DWORD *)(v6 + 2684) = 5;
      break;
    case 3:
      *(_DWORD *)(v6 + 2684) = 6;
      break;
    case 4:
      *(_BYTE *)(this + 890) = 1;
      v26 = *(_DWORD *)v6;
      v27 = sub_10019640((_DWORD *)this);
      (*(void (__thiscall **)(int, _DWORD *, _DWORD, float *))(v26 + 416))(v6, v27, 0, &flt_106F1CA8);
      v28 = *(float *)(this + 732);
      *(_BYTE *)(this + 890) = 0;
      *(float *)(*(_DWORD *)(v6 + 2604) + 20) = v28;
      sub_100D7260((float *)v6, &flt_106F1CB4);
      sub_100EAB80((_DWORD *)v6, 8);
      v29 = *(float *)(this + 732);
      v30 = *(float *)(v6 + 736);
      v37[0] = *(float *)(v6 + 728);
      v37[1] = v29;
      v37[2] = v30;
      sub_100E11A0(v6, v37);
LABEL_54:
      *(_DWORD *)(v6 + 2684) = 1;
      if ( *(_BYTE *)(this + 835) )
      {
        sub_100EA940((int *)v6, 1024);
        sub_101C73D0((unsigned int *)v6, 0);
      }
      break;
    default:
      break;
  }
  *(_BYTE *)(this + 852) = 0;
  sub_10231080(this, 1u);
  if ( *(_DWORD *)(v6 + 2336) != 4 )
    *(_DWORD *)(v6 + 2336) = 4;
  if ( (*(_DWORD *)(v6 + 252) & 0x400000) != 0 && -1.0 != sub_100E9200((_DWORD *)v6, 0) )
  {
    v31 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v6 + 24));
    v38 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(this + 24));
    v35 = sub_100E9200((_DWORD *)v6, 0);
    v34 = *(float *)(dword_106B31C8 + 12);
    v33 = sub_100D6390((_DWORD *)v6);
    v32 = sub_100D6390((_DWORD *)this);
    DevWarning("scripted_sequence %d:%s - restarting dormant entity %d:%s : %.1f:%.1f\n", v38, v32, v31, v33, v34, v35);
    sub_100EC4A0((int *)v6, *(float *)(dword_106B31C8 + 12), 0);
  }
}

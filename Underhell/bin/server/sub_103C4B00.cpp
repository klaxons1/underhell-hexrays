void __thiscall sub_103C4B00(int this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  _DWORD *v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int16 *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  unsigned int *v26; // ecx
  int v27; // eax
  int v28; // eax
  double v29; // st7
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int *v37; // ecx
  int v38; // eax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // eax
  int v42; // eax
  unsigned int v43; // eax
  int v44; // ecx
  unsigned int v45; // ebx
  int v46; // eax
  int v47; // [esp+0h] [ebp-14h]
  int v48; // [esp+4h] [ebp-10h]
  int v49; // [esp+4h] [ebp-10h]
  int v50; // [esp+4h] [ebp-10h]
  int v51; // [esp+4h] [ebp-10h]

  v3 = *(_DWORD *)(this + 3808);
  if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 1], v4[1] != v3 >> 12) || !*v4 )
  {
    v5 = sub_10243040("sprites/glow1.vmt", (float *)(this + 716), 0);
    if ( v5 )
      *(_DWORD *)(this + 3808) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 8))(v5);
    else
      *(_DWORD *)(this + 3808) = -1;
    v6 = *(_DWORD *)(this + 3808);
    if ( v6 == -1 )
      return;
    v7 = &off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 1];
    v8 = v6 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 2] != v8 || !*v7 )
      return;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 2] == v8 )
      v9 = *v7;
    else
      v9 = 0;
    sub_10128950(v9, 9, 255, 0, 0, 128, 14);
    v10 = *(_DWORD *)(this + 3808);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 1];
    sub_10126B10(v11, this, *(_DWORD *)(this + 3796));
  }
  v12 = *(_DWORD *)(this + 248);
  if ( (v12 & 0x200) != 0 && (v12 & 0x100) == 0 && sub_1012B040((unsigned int *)(this + 3812), 0) )
  {
    v13 = sub_100FB5C0("effects/laser1.vmt", 1.0);
    if ( v13 )
      *(_DWORD *)(this + 3812) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13);
    else
      *(_DWORD *)(this + 3812) = -1;
    if ( sub_1012B040((unsigned int *)(this + 3812), 0) )
      return;
    v14 = sub_1026A890((unsigned int *)(this + 3812));
    sub_100FAE40(v14, (_DWORD *)this, (_DWORD *)this);
    v15 = (unsigned __int16 *)sub_1026A890((unsigned int *)(this + 3812));
    sub_100EACE0(v15, this, 1);
    v48 = sub_100BEF30(this, "laser_start");
    v16 = sub_1026A890((unsigned int *)(this + 3812));
    sub_1024A060(v16, v48);
    v49 = sub_100BEF30(this, "laser_end");
    v17 = sub_1026A890((unsigned int *)(this + 3812));
    sub_1005BC90(v17, v49);
    v18 = sub_1026A890((unsigned int *)(this + 3812));
    sub_100FA790(v18, 0.0);
    v19 = sub_1026A890((unsigned int *)(this + 3812));
    sub_1005C620((_BYTE *)(v19 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v19 + 116)));
    v20 = sub_1026A890((unsigned int *)(this + 3812));
    sub_100FA830(v20, 0);
    v21 = sub_1026A890((unsigned int *)(this + 3812));
    sub_1005C3A0(v21, 1.0);
    v22 = sub_1026A890((unsigned int *)(this + 3812));
    sub_1005C410(v22, 1.0);
    v23 = sub_1026A890((unsigned int *)(this + 3812));
    sub_100FB020(v23, 160);
    v24 = sub_1026A890((unsigned int *)(this + 3812));
    sub_100FAAC0(v24, 128);
  }
  *(_DWORD *)(this + 3804) = a2;
  switch ( a2 )
  {
    case 1:
      *(_BYTE *)(this + 3734) = *(_BYTE *)(this + 3734) == 0;
      v25 = sub_1026A890((unsigned int *)(this + 3808));
      sub_1005C620((_BYTE *)(v25 + 116), 255, 128, 0, HIBYTE(*(_DWORD *)(v25 + 116)));
      *(float *)&v50 = 0.1;
      v26 = (unsigned int *)(this + 3808);
      if ( *(_BYTE *)(this + 3734) )
      {
        v27 = sub_1026A890(v26);
        sub_102428B0(v27, 0.25, *(float *)&v50);
        *(float *)&v51 = 0.1;
        v47 = 164;
        goto LABEL_37;
      }
      v28 = sub_1026A890(v26);
      sub_102428B0(v28, 0.2, *(float *)&v50);
      v29 = 0.1;
      goto LABEL_36;
    case 2:
      v30 = sub_1026A890((unsigned int *)(this + 3808));
      sub_1005C620((_BYTE *)(v30 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v30 + 116)));
      v31 = sub_1026A890((unsigned int *)(this + 3808));
      sub_102428B0(v31, 0.1, 0.5);
      v29 = 0.5;
      goto LABEL_36;
    case 3:
      v32 = sub_1026A890((unsigned int *)(this + 3808));
      sub_1005C620((_BYTE *)(v32 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v32 + 116)));
      v33 = sub_1026A890((unsigned int *)(this + 3808));
      sub_102428B0(v33, 0.1, 3.0);
      *(float *)&v51 = 3.0;
      v47 = 0;
      goto LABEL_37;
    case 4:
      v34 = sub_1026A890((unsigned int *)(this + 3808));
      sub_1005C620((_BYTE *)(v34 + 116), 0, 255, 0, HIBYTE(*(_DWORD *)(v34 + 116)));
      v35 = sub_1026A890((unsigned int *)(this + 3808));
      sub_102428B0(v35, 0.1, 1.0);
      *(float *)&v51 = 1.0;
      v47 = 0;
      goto LABEL_37;
    case 5:
      *(_BYTE *)(this + 3734) = *(_BYTE *)(this + 3734) == 0;
      v36 = sub_1026A890((unsigned int *)(this + 3808));
      sub_1005C620((_BYTE *)(v36 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v36 + 116)));
      v37 = (unsigned int *)(this + 3808);
      if ( *(_BYTE *)(this + 3734) )
      {
        v38 = sub_1026A890(v37);
        sub_102428B0(v38, 0.75, 0.050000001);
        *(float *)&v51 = 0.050000001;
        v47 = 192;
      }
      else
      {
        v39 = sub_1026A890(v37);
        sub_102428B0(v39, 0.25, 0.25);
        v29 = 0.25;
LABEL_36:
        *(float *)&v51 = v29;
        v47 = 64;
      }
LABEL_37:
      v40 = sub_1026A890((unsigned int *)(this + 3808));
      sub_10242820(v40, v47, *(float *)&v51);
      break;
    default:
      v41 = *(_DWORD *)(this + 3808);
      if ( v41 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 2] != v41 >> 12 )
        v42 = 0;
      else
        v42 = off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 1];
      sub_1005C620((_BYTE *)(v42 + 116), 255, 0, 0, HIBYTE(*(_DWORD *)(v42 + 116)));
      v43 = *(_DWORD *)(this + 3808);
      if ( v43 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 2] != v43 >> 12 )
        v44 = 0;
      else
        v44 = off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 1];
      sub_10242820(v44, 164, 0.1);
      v45 = *(_DWORD *)(this + 3808);
      if ( v45 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 2] != v45 >> 12 )
        v46 = 0;
      else
        v46 = off_1061BE18[4 * (*(_DWORD *)(this + 3808) & 0xFFF) + 1];
      sub_102428B0(v46, 0.40000001, 0.1);
      return;
  }
}

int __thiscall sub_103BA0F0(unsigned int this, int a2)
{
  unsigned int v3; // eax
  int *v5; // ecx
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v11; // eax
  int v12; // ebx
  _DWORD *v13; // eax
  int v14; // eax
  float v15; // eax
  float v16; // edx
  void (__thiscall *v17)(unsigned int, float *, float *, _DWORD); // eax
  float v18; // edx
  float v19; // eax
  int v20; // edx
  int (__thiscall *v21)(unsigned int); // eax
  int v22; // eax
  int v23; // eax
  int v24; // ebx
  _DWORD *v25; // eax
  int v26; // eax
  int v27; // ebx
  _DWORD *v28; // eax
  int v29; // eax
  int v30; // ebx
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // eax
  int (__thiscall *v34)(unsigned int); // eax
  double v35; // st7
  bool v36; // zf
  int (__thiscall *v37)(unsigned int); // eax
  int v38; // eax
  int v39; // eax
  _DWORD *v40; // ebx
  _DWORD *v41; // ebx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  _DWORD *v45; // [esp+2Ch] [ebp-44h]
  _DWORD *v46; // [esp+2Ch] [ebp-44h]
  __int64 v47; // [esp+30h] [ebp-40h]
  __int64 v48; // [esp+30h] [ebp-40h]
  __int64 v49; // [esp+30h] [ebp-40h]
  __int64 v50; // [esp+30h] [ebp-40h]
  _DWORD *v51; // [esp+34h] [ebp-3Ch]
  _DWORD *v52; // [esp+34h] [ebp-3Ch]
  float v53[3]; // [esp+48h] [ebp-28h] BYREF
  float v54[3]; // [esp+54h] [ebp-1Ch] BYREF
  float v55; // [esp+60h] [ebp-10h] BYREF
  float v56; // [esp+64h] [ebp-Ch]
  float v57; // [esp+68h] [ebp-8h]
  int v58; // [esp+6Ch] [ebp-4h] BYREF
  int v59; // [esp+78h] [ebp+8h]
  int v60; // [esp+78h] [ebp+8h]
  char v61; // [esp+7Bh] [ebp+Bh]

  v3 = *(_DWORD *)(a2 + 40);
  if ( v3 == -1 )
    goto LABEL_14;
  v5 = &off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == *(_DWORD *)(a2 + 40) >> 12 && *v5 )
  {
    v6 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] == *(_DWORD *)(a2 + 40) >> 12 ? *v5 : 0;
    v7 = *(_DWORD *)(v6 + 412);
    if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (v7 & 0xFFF) + 1];
    if ( v8 == this )
      return 0;
  }
  if ( off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 2] != v3 >> 12 )
LABEL_14:
    v9 = 0;
  else
    v9 = off_1061BE18[4 * (*(_DWORD *)(a2 + 40) & 0xFFF) + 1];
  if ( (unsigned __int8)sub_103D2100(v9) )
    return sub_103B9C80((_DWORD *)this, a2, (_DWORD *)a2);
  if ( !*(_DWORD *)(a2 + 64) )
    return sub_10035940((int *)this, a2, a2);
  if ( *(_BYTE *)(this + 3912) )
  {
    v11 = sub_1001E870((_DWORD *)a2);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 320))(v11) )
    {
      v12 = *(_DWORD *)this;
      v13 = (_DWORD *)sub_1001E870((_DWORD *)a2);
      v51 = sub_10019640(v13);
      v14 = sub_1001E870((_DWORD *)a2);
      (*(void (__thiscall **)(unsigned int, int, _DWORD *, _DWORD))(v12 + 1876))(this, v14, v51, 0);
    }
  }
  if ( (*(_BYTE *)(a2 + 64) & 0x40) == 0 )
    return 0;
  if ( *(float *)(a2 + 56) <= 50.0 )
    return 0;
  v15 = *(float *)(a2 + 16);
  v16 = *(float *)(a2 + 24);
  v56 = *(float *)(a2 + 20);
  v55 = v15;
  v17 = *(void (__thiscall **)(unsigned int, float *, float *, _DWORD))(*(_DWORD *)this + 520);
  v57 = v16;
  v17(this, v54, &v55, 0);
  v18 = *(float *)(a2 + 20);
  v19 = *(float *)(a2 + 24);
  v55 = *(float *)(a2 + 16);
  v56 = v18;
  v20 = *(_DWORD *)(this + 320);
  v57 = v19;
  v21 = *(int (__thiscall **)(unsigned int))(v20 + 8);
  v53[0] = v55 - v54[0];
  v53[1] = v56 - v54[1];
  v53[2] = v57 - v54[2];
  v59 = v21(this + 320);
  v22 = (*(int (__thiscall **)(unsigned int))(*(_DWORD *)(this + 320) + 4))(this + 320);
  if ( sqrt(sub_104243D0(v22, v59, v53)) >= 200.0 )
    return 0;
  v23 = sub_1001E870((_DWORD *)a2);
  v61 = (*(int (__thiscall **)(int))(*(_DWORD *)v23 + 320))(v23);
  if ( v61 )
  {
    sub_100B8FC0(this + 3936, 0);
    v24 = *(_DWORD *)this;
    v25 = (_DWORD *)sub_1001E870((_DWORD *)a2);
    v45 = sub_10019640(v25);
    v26 = sub_1001E870((_DWORD *)a2);
    (*(void (__thiscall **)(unsigned int, int, _DWORD *, _DWORD, _DWORD, _DWORD))(v24 + 1704))(
      this,
      v26,
      v45,
      1.0,
      2.0,
      0.0);
    v27 = *(_DWORD *)this;
    v28 = (_DWORD *)sub_1001E870((_DWORD *)a2);
    v52 = sub_10019640(v28);
    v29 = sub_1001E870((_DWORD *)a2);
    (*(void (__thiscall **)(unsigned int, int, _DWORD *, _DWORD))(v27 + 1876))(this, v29, v52, 0);
  }
  else
  {
    v30 = *(_DWORD *)this;
    v31 = (_DWORD *)sub_1001E870((_DWORD *)a2);
    v46 = sub_10019640(v31);
    v32 = sub_1001E870((_DWORD *)a2);
    (*(void (__thiscall **)(unsigned int, int, _DWORD *, _DWORD, _DWORD, _DWORD))(v30 + 1704))(
      this,
      v32,
      v46,
      0.5,
      2.0,
      0.0);
  }
  v33 = *(_DWORD *)(this + 248) >> 17;
  v58 = 20;
  if ( (v33 & 1) != 0 )
    v58 = 1;
  if ( v61 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1) )
    {
      v34 = *(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 448);
      v58 = *(int *)(dword_106EB5AC + 44);
      v35 = (double)v34(this);
    }
    else
    {
      v36 = (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 3) == 0;
      v37 = *(int (__thiscall **)(unsigned int))(*(_DWORD *)this + 448);
      if ( v36 )
        v58 = *(int *)(dword_106EB5F4 + 44);
      else
        v58 = *(int *)(dword_106EB63C + 44);
      v35 = (double)v37(this);
    }
    v58 = (int)(v35 / *(float *)&v58);
  }
  sub_10125F80((int *)(this + 220), &v58);
  v47 = __PAIR64__(this, sub_1001E870((_DWORD *)a2));
  sub_1010DD80((_DWORD *)(this + 2944), v47, 0.0);
  v38 = sub_1001E870((_DWORD *)a2);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v38 + 320))(v38) )
  {
    v48 = __PAIR64__(this, sub_1001E870((_DWORD *)a2));
    sub_1010DD80((_DWORD *)(this + 3256), v48, 0.0);
  }
  else
  {
    v39 = sub_1001E870((_DWORD *)a2);
    v40 = (_DWORD *)__RTDynamicCast(
                      v39,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&CAI_BaseNPC `RTTI Type Descriptor',
                      0);
    if ( *(int *)(dword_106B31C8 + 20) <= 1 )
      v60 = sub_10261B20();
    else
      v60 = 0;
    if ( !v40
      || !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v40 + 264))(v40)
      || !v60
      || !v40[699]
      || !sub_100296A0(v40) )
    {
      goto LABEL_49;
    }
  }
  v49 = __PAIR64__(this, sub_1001E870((_DWORD *)a2));
  sub_1010DD80((_DWORD *)(this + 3280), v49, 0.0);
LABEL_49:
  if ( *(_DWORD *)(this + 220) <= *(_DWORD *)(this + 216) / 2 )
  {
    HIDWORD(v50) = this;
    LODWORD(v50) = this;
    sub_1010DD80((_DWORD *)(this + 2992), v50, 0.0);
  }
  sub_100C7570((volatile signed __int32 *)this, 144, COERCE_FLOAT(1), 1);
  (*(void (__thiscall **)(unsigned int))(*(_DWORD *)this + 1624))(this);
  v41 = *(_DWORD **)(this + 3640);
  v42 = sub_103AFAE0(v41);
  sub_103B1710((int)v41, this + 3620, v42, 1.1);
  v43 = sub_1001E870((_DWORD *)a2);
  v44 = (*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)this + 1868))(this, v43);
  sub_10077460(v44, a2);
  if ( !sub_103B2060((_DWORD *)this) && *(_DWORD *)(this + 220) <= *(_DWORD *)(dword_106EAE14 + 48) / 2 )
    sub_103B84A0((_DWORD *)this);
  return v58;
}

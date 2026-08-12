int __thiscall sub_102979E0(int this, int a2)
{
  int v3; // edi
  double v4; // st7
  int v5; // eax
  unsigned int v6; // eax
  int *v7; // edi
  _DWORD *v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  _DWORD *v12; // eax
  char *v13; // ebx
  char *v14; // eax
  char *v15; // edi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edi
  int v20; // eax
  int v21; // eax
  _DWORD *v23; // edi
  _DWORD *v24; // ebx
  const char *v25; // eax
  int v26; // eax
  _DWORD *v27; // eax
  int v28; // edi
  float *v29; // eax
  _DWORD *v30; // edi
  _DWORD *v31; // eax
  int v32; // eax
  char *v33; // eax
  _DWORD *v34; // eax
  int v35; // [esp-14h] [ebp-230h]
  float *v36; // [esp-10h] [ebp-22Ch]
  int v37; // [esp-10h] [ebp-22Ch]
  float v38; // [esp+4h] [ebp-218h]
  const char *v39; // [esp+4h] [ebp-218h]
  int v40; // [esp+4h] [ebp-218h]
  char Destination[512]; // [esp+14h] [ebp-208h] BYREF
  _DWORD *v42; // [esp+214h] [ebp-8h]
  char v43; // [esp+21Bh] [ebp-1h]
  const char *v44; // [esp+224h] [ebp+8h]

  v3 = dword_106B31C8;
  if ( *(_BYTE *)(this + 17) )
    goto LABEL_5;
  if ( *(float *)(dword_106B31C8 + 12) <= (double)*(float *)(this + 40) )
    return 0;
  if ( sub_10295D00((_DWORD *)this) )
  {
LABEL_5:
    v4 = *(float *)(v3 + 12) + 2.0;
  }
  else
  {
    v38 = *(float *)(dword_106DB094 + 44) + *(float *)(dword_106DB094 + 44);
    v4 = RandomFloat(*(float *)(dword_106DB094 + 44), LODWORD(v38)) + *(float *)(dword_106B31C8 + 12);
  }
  v5 = *(_DWORD *)(this + 4);
  *(float *)(this + 40) = v4;
  v6 = *(_DWORD *)(v5 + 2888);
  v7 = off_1061BE18;
  v43 = 0;
  if ( v6 == -1 || off_1061BE18[4 * (v6 & 0xFFF) + 2] != v6 >> 12 )
    v8 = 0;
  else
    v8 = (_DWORD *)off_1061BE18[4 * (v6 & 0xFFF) + 1];
  v42 = v8;
  if ( !v8 )
  {
    if ( sub_10295D00((_DWORD *)this) )
    {
      v9 = *(_DWORD *)(this + 60);
      if ( v9 == -1 || v7[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 2] != v9 >> 12 )
        v10 = 0;
      else
        v10 = v7[4 * (*(_DWORD *)(this + 60) & 0xFFF) + 1];
      if ( !*(_BYTE *)(v10 + 864)
        || *(int *)(this + 80) < 2
        || (*(int *)(dword_106B31C8 + 20) <= 1 ? (v11 = sub_10261B20()) : (v11 = 0),
            (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 876))(v11, *(_DWORD *)(this + 4))) )
      {
        v12 = (_DWORD *)sub_10295740(this);
      }
      else
      {
        v12 = (_DWORD *)sub_10295820((int *)this);
        v43 = 1;
      }
    }
    else
    {
      v12 = (_DWORD *)sub_102956E0(this);
    }
    v42 = v12;
    if ( !v12 )
    {
      if ( sub_10295D00((_DWORD *)this) )
        *(float *)(this + 40) = *(float *)(dword_106B31C8 + 12) + 10.0;
      return 0;
    }
  }
  v13 = (char *)v42[208];
  if ( !v13 )
    v13 = (char *)String;
  v14 = strchr(v13, 32);
  v15 = v14;
  if ( v14 )
  {
    if ( !sub_104291C0(v14 + 1, "teleport", 8) )
      *(_BYTE *)(this + 24) = 1;
    sub_104299C0(Destination, v13, v15 - v13 + 1);
    v16 = sub_10008FB0((int)Destination);
    v17 = sub_10295DD0(dword_106DB10C, v16, Destination);
  }
  else
  {
    v18 = sub_10008FB0((int)v13);
    v17 = sub_10295DD0(dword_106DB10C, v18, v13);
  }
  v19 = v17;
  if ( !sub_10296D00((int *)this, v17, 0) )
    return 0;
  v20 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v21 = sub_1007DB30((_DWORD *)(v20 + 52), 100000);
  if ( sub_10023D10(*(_DWORD **)(this + 4), v21) )
  {
    if ( *(_BYTE *)(this + 17) )
      sub_10295E70(this);
    return a2;
  }
  *(_DWORD *)(this + 56) = v19;
  if ( v19 == -1 )
    return a2;
  if ( *(_DWORD *)(dword_106DB0DC + 48) == 4 )
  {
    v23 = *(_DWORD **)(this + 4);
    v44 = (const char *)v23[23];
    if ( !v44 )
      v44 = String;
    v24 = v42;
    v39 = sub_100D6390(v42);
    v25 = sub_100D6390(v23);
    Msg("ACTBUSY: NPC %s (%s) found Actbusy node %s \n", v44, v25, v39);
  }
  else
  {
    v24 = v42;
  }
  if ( sub_100519F0((_DWORD *)this) )
  {
    v26 = sub_100519F0((_DWORD *)this);
    sub_10070510(v26, 0.0);
  }
  sub_100448D0(*(_DWORD **)(this + 4), (int)v24);
  if ( !sub_100519F0((_DWORD *)this) )
    return 0;
  v40 = *(_DWORD *)(this + 4);
  v27 = (_DWORD *)sub_100519F0((_DWORD *)this);
  if ( !sub_10070B10(v27, v40) )
    return 0;
  if ( *(_DWORD *)(dword_106DB0DC + 48) == 2 )
  {
    v28 = *(_DWORD *)(this + 4);
    v36 = (float *)sub_10019640(v24);
    v29 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v28 + 576))(v28);
    sub_1011BC50(v29, v36, 0, 255, 0, 1, 5.0);
    v30 = *(_DWORD **)(this + 4);
    v37 = sub_1001F490(v30);
    v35 = sub_1001F470(v30);
    v31 = sub_10019640(v24);
    sub_1011BB20((int)v31, v35, v37, 0, 255, 0, 64, 5.0);
  }
  if ( sub_1026A890((unsigned int *)(this + 60)) )
  {
    v32 = sub_1026A890((unsigned int *)(this + 60));
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v32 + 740))(v32, *(_DWORD *)(this + 4));
  }
  *(_BYTE *)(this + 37) = 1;
  if ( sub_1026A890((unsigned int *)(this + 60)) && *(_DWORD *)(sub_1026A890((unsigned int *)(this + 60)) + 868) )
  {
    v33 = *(char **)(sub_1026A890((unsigned int *)(this + 60)) + 868);
    if ( !v33 )
      v33 = (char *)String;
    v34 = sub_1012BF20(&dword_1069E3E0, 0, v33, 0, 0, 0, 0);
    sub_10043F10((_DWORD *)(this + 68), (int)v34);
  }
  sub_1004C260((char **)this, 100001);
  if ( *(_BYTE *)(this + 24) )
    return 100004;
  if ( v43 )
  {
    *(_DWORD *)(this + 80) = 0;
    return 100004;
  }
  return 100000;
}

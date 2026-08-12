void __thiscall sub_1034D440(_DWORD *this, int a2)
{
  int *v2; // eax
  bool v3; // zf
  char **v5; // ecx
  char *v6; // ecx
  int v7; // edx
  int v8; // eax
  _DWORD *v9; // eax
  float *v10; // esi
  char *v11; // eax
  _DWORD *v12; // eax
  int v13; // ebx
  const char *v14; // eax
  const char *v15; // ecx
  int v16; // eax
  float v17[3]; // [esp+1Ch] [ebp-28h] BYREF
  int v18[3]; // [esp+28h] [ebp-1Ch] BYREF
  int v19[3]; // [esp+34h] [ebp-10h] BYREF
  int v20; // [esp+40h] [ebp-4h]
  int savedregs; // [esp+44h] [ebp+0h] BYREF

  v2 = (int *)a2;
  v3 = *(_DWORD *)(a2 + 24) == 2;
  v5 = (char **)(a2 + 8);
  v20 = (int)this;
  if ( !v3 )
  {
    a2 = 0;
    v5 = (char **)&a2;
  }
  v6 = *v5;
  v7 = v2[1];
  v8 = *v2;
  if ( !v6 )
    v6 = (char *)String;
  v9 = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, v8, v7, 0);
  if ( v9 )
  {
    v10 = (float *)sub_100D7680((int)v9);
    if ( ((_DWORD)v10[63] & 0x800) != 0 )
      sub_100DAE60((int)v10);
    sub_10349B00(
      (int)&savedregs,
      (int)v10,
      v17,
      v10[145],
      v10[146],
      v10[147],
      (int)v10,
      flt_106F1CA8,
      flt_106F1CAC,
      flt_106F1CB0,
      flt_106F1CA8,
      flt_106F1CAC,
      flt_106F1CB0);
    sub_100E0D20((int)v10, v17);
    v11 = (char *)this[this[1029] + 1022];
    if ( !v11 )
      goto LABEL_15;
    v12 = sub_1012BF20(&dword_1069E3E0, 0, v11, 0, 0, 0, 0);
    v13 = (int)v12;
    if ( !v12 )
    {
      v14 = *(const char **)(v20 + 4 * *(_DWORD *)(v20 + 4116) + 4088);
      if ( !v14 )
        v14 = String;
      v15 = *(const char **)(v20 + 260);
      if ( !v15 )
        v15 = String;
      Warning("npc_combinedropship %s couldn't find dustoff target named %s\n", v15, v14);
      this = (_DWORD *)v20;
LABEL_15:
      if ( ((_DWORD)v10[63] & 0x800) != 0 )
        sub_100DAE60((int)v10);
      sub_1023D4B0(8392704, v10 + 145, 128, 0.1, 0, 0, 0);
      sub_1034CF90((int)this, (int)v10);
      return;
    }
    if ( *(_DWORD *)(dword_106E673C + 48) == 1 )
    {
      v16 = v12[63];
      *(float *)v19 = 10.0;
      *(float *)&v19[1] = 10.0;
      *(float *)&v19[2] = 10.0;
      *(float *)v18 = -10.0;
      *(float *)&v18[1] = -10.0;
      *(float *)&v18[2] = -10.0;
      if ( (v16 & 0x800) != 0 )
        sub_100DAE60(v13);
      sub_1011BB20(v13 + 580, (int)v18, (int)v19, 0, 255, 0, 8, 5.0);
    }
    sub_1002B660((int)v10, 2);
    (*(void (__thiscall **)(float *, int, int, int))(*(_DWORD *)v10 + 1860))(v10, 79, v13, 11);
    if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
      sub_100DAE60(v13);
    sub_1007DF50(v13 + 704);
    sub_10023EE0(v10, (int)&unk_10670A28, 17);
    sub_1034CF90(v20, (int)v10);
  }
}

void __thiscall sub_10396960(int this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int *v6; // ebx
  char v7; // al
  int v8; // edi
  _DWORD *v9; // edi
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  int v15; // ebx
  const char *v16; // eax
  char *v17; // eax
  _DWORD *v18; // ebx
  const char *v19; // eax
  int v20; // edi
  float *v21; // eax
  float *v22; // eax
  const char *v23; // eax
  char *v24; // [esp-Ch] [ebp-A4h]
  _DWORD v25[27]; // [esp+18h] [ebp-80h] BYREF
  int v26[3]; // [esp+84h] [ebp-14h] BYREF
  int v27; // [esp+90h] [ebp-8h]
  char v28; // [esp+96h] [ebp-2h]
  char v29; // [esp+97h] [ebp-1h]
  int savedregs; // [esp+98h] [ebp+0h] BYREF

  if ( *(_DWORD *)(dword_106B31C8 + 20) != 1
    || !sub_103948B0((_BYTE *)this)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1088))(this) )
  {
    return;
  }
  v3 = sub_10261B20();
  v4 = v3;
  v5 = *(_DWORD *)(v3 + 252) >> 11;
  v27 = v3;
  if ( (v5 & 1) != 0 )
    sub_100DAE60(v3);
  v6 = (int *)(v4 + 580);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 220))(this) == 3 || *(_BYTE *)(this + 5640) )
  {
    v29 = 1;
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v29 = 0;
  }
  v28 = v7;
  if ( !v7 )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v8 = sub_1008E9F0(*(_DWORD ***)(this + 2596), this + 580, v4 + 580, v4, 0.0, -1, 0);
    if ( v8 )
    {
      v28 = 1;
      sub_100A6450(v25);
      sub_100A61F0((int)v25, v8, 0);
      sub_1008DB10(*(_DWORD **)(this + 2596), v8);
      sub_100A61E0(v25);
    }
  }
  v9 = (_DWORD *)sub_10072DB0(this, 902, 2, 1200.0, v6);
  if ( v9 )
  {
    while ( 1 )
    {
      sub_10070B10(v9, this);
      sub_10070510((int)v9, 0.5);
      sub_100703C0((int)v9, *(_DWORD *)(this + 1676), (float *)v26);
      if ( sub_1007EA60(*(_DWORD *)(this + 2588), (int)&savedregs, (int)v9, this, (float *)v26, 33701899, 0, 1) )
      {
        if ( v28 )
          goto LABEL_32;
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v10 = *(float *)(v27 + 584) - *(float *)(this + 584);
        v11 = v10 * v10;
        v12 = *(float *)(v27 + 580) - *(float *)(this + 580);
        v13 = v11;
        v14 = *(float *)(v27 + 588) - *(float *)(this + 588);
        if ( v12 * v12 + v13 + v14 * v14 <= 230400.0 )
          goto LABEL_32;
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v15 = sub_1008E9F0(*(_DWORD ***)(this + 2596), this + 580, (int)v26, v27, 0.0, -1, 0);
        if ( v15 )
        {
          sub_100A6450(v25);
          sub_1008DB10(*(_DWORD **)(this + 2596), v15);
          sub_100A61F0((int)v25, v15, 0);
          sub_100A61E0(v25);
LABEL_32:
          v19 = *(const char **)(this + 260);
          v20 = v9[205];
          if ( !v19 )
            v19 = String;
          DevMsg(2, "NPC \"%s\" teleported to transition point %d\n", v19, v20);
LABEL_39:
          (*(void (__thiscall **)(int, int *, _DWORD, _DWORD))(*(_DWORD *)this + 416))(this, v26, 0, 0);
          nullsub_5(a2);
          return;
        }
        v16 = *(const char **)(this + 260);
        if ( !v16 )
          v16 = String;
        DevMsg(2, "NPC \"%s\" failed to teleport to transition a point because there is no path\n", v16);
      }
      else if ( *(_DWORD *)(dword_106C765C + 48) )
      {
        v24 = sub_10073730(*(_DWORD *)(this + 1676));
        v17 = sub_10073710(*(_DWORD *)(this + 1676));
        sub_1011BB20((int)v26, (int)v17, (int)v24, 255, 0, 0, 8, 999.0);
      }
      v18 = (_DWORD *)v27;
      v9 = (_DWORD *)sub_10072DB0(this, 902, 2, 1200.0, (int *)(v27 + 580));
      if ( !v9 )
        goto LABEL_36;
    }
  }
  v18 = (_DWORD *)v27;
LABEL_36:
  if ( v29 )
  {
    v21 = (float *)sub_10019640(v18);
    if ( sub_1002FEE0((int)&savedregs, (float *)v26, v21, this, 45.248001, 1) )
      goto LABEL_39;
    v22 = (float *)sub_10019640(v18);
    if ( sub_1002FEE0((int)&savedregs, (float *)v26, v22, this, 45.248001, 0) )
      goto LABEL_39;
  }
  v23 = *(const char **)(this + 260);
  if ( !v23 )
    v23 = String;
  DevMsg(2, "NPC \"%s\" failed to find a suitable transition a point\n", v23);
  nullsub_5(a2);
}

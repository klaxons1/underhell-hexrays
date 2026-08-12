char __thiscall sub_1002AD10(int this)
{
  int i; // ebx
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  int v6; // edi
  const char *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  char v16; // cl
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v30; // [esp-4h] [ebp-14h]
  char v31[4]; // [esp+Ch] [ebp-4h] BYREF

  sub_10023E60((_DWORD *)this, (int)a2, 12);
  for ( i = sub_100AAD20(v31); i; i = sub_100AAD50(v31) )
  {
    if ( !(unsigned __int8)sub_1023C660(i) )
    {
      v6 = 37;
LABEL_32:
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
      v8 = sub_1007DB30(v6);
      if ( v8 != -1 && v8 != 999999999 )
        *(_DWORD *)(this + 4 * ((v8 - 1000000000) >> 5) + 2192) |= 1 << (v8 & 0x1F);
      if ( (v6 == 53 || v6 == 56 || v6 == 57 || v6 == 50) && *(_DWORD *)(this + 808) < 8u )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
        v9 = sub_1007DB30(10);
        if ( v9 == -1
          || (v10 = v9 - 1000000000, v10 == -1)
          || ((1 << (v10 & 0x1F)) & *(_DWORD *)(this + 4 * (v10 >> 5) + 2192)) == 0 )
        {
          if ( !(unsigned __int8)sub_1007E040(*(_DWORD *)(this + 2588)) )
          {
            v11 = *(_DWORD *)(this + 2688);
            if ( v11 == -1
              || off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 2] != v11 >> 12
              || !off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 1] )
            {
              if ( *(int *)(dword_106B31C8 + 20) <= 1 )
                v12 = sub_10261B20();
              else
                v12 = 0;
              sub_10042C50(v12, i + 36, &flt_106F1CA8, 1, this);
            }
          }
        }
      }
      continue;
    }
    v3 = *(_DWORD *)(i + 16) & 0xFFFFF;
    if ( v3 > 0x200 )
    {
      if ( (*(_DWORD *)(i + 16) & 0xFFFFFu) > 0x1000 )
      {
        if ( v3 == 0x2000 )
        {
LABEL_10:
          v6 = 55;
          goto LABEL_32;
        }
        if ( v3 == 0x20000 )
        {
          v6 = 60;
          goto LABEL_32;
        }
        goto LABEL_29;
      }
      if ( v3 == 4096 )
      {
        v6 = 58;
        goto LABEL_32;
      }
      if ( v3 == 1024 )
      {
        v6 = 57;
        goto LABEL_32;
      }
      if ( v3 != 2048 )
        goto LABEL_29;
    }
    else
    {
      if ( v3 == 512 )
      {
        v6 = 52;
        goto LABEL_32;
      }
      if ( (*(_DWORD *)(i + 16) & 0xFFFFFu) > 8 )
      {
        if ( v3 == 16 )
        {
          v6 = 56;
          goto LABEL_32;
        }
        if ( v3 == 256 )
        {
          v6 = 51;
          goto LABEL_32;
        }
        goto LABEL_29;
      }
      if ( v3 != 8 )
      {
        v4 = v3 - 1;
        if ( !v4 )
        {
          v6 = *(_DWORD *)(i + 32) != 8 ? 53 : 59;
          goto LABEL_32;
        }
        v5 = v4 - 1;
        if ( !v5 )
        {
          v6 = 54;
          goto LABEL_32;
        }
        if ( v5 == 2 )
          goto LABEL_10;
LABEL_29:
        v30 = *(_DWORD *)(i + 16);
        v7 = sub_10019630((_DWORD *)this);
        DevMsg("**ERROR: NPC %s hearing sound of unknown type %d!\n", v7, v30);
        continue;
      }
      if ( *(float *)(this + 3592) < (double)*(float *)(dword_106B31C8 + 12) )
      {
        v6 = 50;
        goto LABEL_32;
      }
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
  v13 = sub_1007DB30(50);
  if ( v13 == -1
    || (v14 = v13 - 1000000000, v14 == -1)
    || ((1 << (v14 & 0x1F)) & *(_DWORD *)(this + 4 * (v14 >> 5) + 2192)) == 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
    v15 = sub_1007DB30(61);
    if ( v15 != -1 )
    {
      v16 = v15;
      if ( v15 != 999999999 )
      {
        v17 = (_DWORD *)(this + 4 * ((v15 - 1000000000) >> 5) + 2192);
        *v17 |= 1 << (v16 & 0x1F);
      }
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
  v18 = sub_1007DB30(54);
  if ( v18 != -1 )
  {
    v19 = v18 - 1000000000;
    if ( v19 != -1 && ((1 << (v19 & 0x1F)) & *(_DWORD *)(this + 4 * (v19 >> 5) + 2192)) != 0 )
    {
      sub_1010DD80(this, this, 0.0);
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 1160))(this);
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
  v20 = sub_1007DB30(60);
  if ( v20 != -1 )
  {
    v21 = v20 - 1000000000;
    if ( v21 != -1 && ((1 << (v21 & 0x1F)) & *(_DWORD *)(this + 4 * (v21 >> 5) + 2192)) != 0 )
      sub_1010DD80(this, this, 0.0);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
  v22 = sub_1007DB30(55);
  if ( v22 != -1 )
  {
    v23 = v22 - 1000000000;
    if ( v23 != -1 && ((1 << (v23 & 0x1F)) & *(_DWORD *)(this + 4 * (v23 >> 5) + 2192)) != 0 )
      sub_1010DD80(this, this, 0.0);
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
  v24 = sub_1007DB30(53);
  if ( v24 != -1 )
  {
    v25 = v24 - 1000000000;
    if ( v25 != -1 && ((1 << (v25 & 0x1F)) & *(_DWORD *)(this + 4 * (v25 >> 5) + 2192)) != 0 )
      goto LABEL_79;
  }
  if ( ((*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this), v26 = sub_1007DB30(56), v26 != -1)
    && (v27 = v26 - 1000000000, v27 != -1)
    && ((1 << (v27 & 0x1F)) & *(_DWORD *)(this + 4 * (v27 >> 5) + 2192)) != 0
    || ((*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this), v28 = sub_1007DB30(50), v28 != -1)
    && (v28 -= 1000000000, v28 != -1)
    && (LOBYTE(v28) = ((1 << (v28 & 0x1F)) & *(_DWORD *)(this + 4 * (v28 >> 5) + 2192)) != 0, (_BYTE)v28) )
  {
LABEL_79:
    LOBYTE(v28) = sub_1010DD80(this, this, 0.0);
  }
  return v28;
}

BOOL __thiscall sub_1002F420(int this)
{
  int v2; // edi
  int v3; // eax
  int v4; // ecx
  bool v5; // bl
  int v7; // eax
  unsigned __int8 (__thiscall *v8)(int); // edx
  _DWORD *v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char v14; // cl
  _DWORD *v15; // eax
  int v16; // eax
  char v17; // cl
  _DWORD *v18; // eax
  char v19; // [esp+17h] [ebp-5h]
  bool v20; // [esp+18h] [ebp-4h]
  char v21; // [esp+19h] [ebp-3h]
  char v22; // [esp+1Ah] [ebp-2h]
  bool v23; // [esp+1Bh] [ebp-1h]

  if ( *(_DWORD *)(dword_10690574 + 48) )
    sub_10029660((_DWORD *)this, (int)"ChooseEnemy() {\n");
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  v3 = *(_DWORD *)(this + 2716);
  v20 = (v3 & 0x18000) != 0;
  v19 = BYTE2(v3) & 1;
  if ( (v3 & 0x18000) == 0 || v2 )
  {
    v22 = 0;
    if ( !v2 || ((*(void (__thiscall **)(int))(*(_DWORD *)this + 1868))(this), !(unsigned __int8)sub_10077840(v2)) )
    {
      v21 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    v22 = 1;
  }
  v21 = 1;
LABEL_7:
  if ( *(_BYTE *)(this + 2158) || !*(_DWORD *)(this + 2124) || (unsigned __int8)sub_10043A50(this) )
  {
    v5 = 1;
    v23 = 1;
  }
  else
  {
    v4 = *(_DWORD *)(this + 2124);
    v5 = (*(_DWORD *)(v4 + 12) & 0x4000000) != 0;
    v23 = (*(_DWORD *)(v4 + 12) & 0x800) != 0;
    if ( (*(_DWORD *)(v4 + 12) & 0x4000000) == 0 )
      v5 = sub_100241C0((_DWORD *)this, 26);
    if ( !v23 )
      v23 = sub_100241C0((_DWORD *)this, 11);
  }
  if ( v22 )
  {
    if ( !v5 && !v23 )
    {
      v7 = *(_DWORD *)(this + 2124);
      if ( v7 )
        DevMsg(2, "WARNING: AI enemy went NULL but schedule (%s) is not interested\n", *(const char **)(v7 + 44));
    }
  }
  else if ( !v5 && (!v23 || !v21) )
  {
    *(_BYTE *)(this + 2322) = 1;
    if ( *(_DWORD *)(dword_10690574 + 48) )
      sub_10029660((_DWORD *)this, (int)"Skipped enemy selection due to schedule restriction\n");
    if ( *(_DWORD *)(dword_10690574 + 48) )
      sub_10029660((_DWORD *)this, (int)"}\n");
    return v2 != 0;
  }
  v8 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 1492);
  *(_BYTE *)(this + 2322) = 0;
  if ( v8(this) )
  {
    v9 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 1480))(this);
    if ( v9 != (_DWORD *)v2 )
      goto LABEL_36;
  }
  else
  {
    v9 = (_DWORD *)v2;
  }
  if ( !v22 )
    return v9 != 0;
LABEL_36:
  if ( *(_DWORD *)(dword_10690574 + 48) )
  {
    sub_100D6390(v9);
    sub_100D6390(v2);
    sub_10029660((_DWORD *)this, (int)"Enemy changed from %s to %s\n");
  }
  *(_DWORD *)(this + 2716) &= 0xFFFE7FFF;
  if ( v2 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 264))(v2) )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
      v10 = sub_1007DB30(30);
      if ( v10 != -1 && v10 != 999999999 )
        *(_DWORD *)(this + 4 * ((v10 - 1000000000) >> 5) + 2192) |= 1 << (v10 & 0x1F);
    }
  }
  sub_100285C0((_DWORD *)this, v9, 1);
  if ( v20 )
  {
    sub_1004AF00(this);
    *(_DWORD *)(this + 2716) &= ~0x20000u;
  }
  if ( v9 )
  {
    *(_DWORD *)(this + 2716) |= (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v9 + 320))(v9) != 0 ? 0x10000 : 0x8000;
    return v9 != 0;
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
  v11 = sub_1007DB30(30);
  if ( v11 == -1
    || (v12 = v11 - 1000000000, v12 == -1)
    || ((1 << (v12 & 0x1F)) & *(_DWORD *)(this + 4 * (v12 >> 5) + 2192)) == 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
    v13 = sub_1007DB30(12);
    if ( v13 != -1 )
    {
      v14 = v13;
      if ( v13 != 999999999 )
      {
        v15 = (_DWORD *)(this + 4 * ((v13 - 1000000000) >> 5) + 2192);
        *v15 |= 1 << (v14 & 0x1F);
      }
    }
  }
  if ( v21 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
    v16 = sub_1007DB30(11);
    if ( v16 != -1 )
    {
      v17 = v16;
      if ( v16 != 999999999 )
      {
        v18 = (_DWORD *)(this + 4 * ((v16 - 1000000000) >> 5) + 2192);
        *v18 |= 1 << (v17 & 0x1F);
      }
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 1632))(this);
  }
  if ( v19 )
    sub_1010DD80(v2, this, 0.0);
  sub_1010DD80(v2, this, 0.0);
  return 0;
}

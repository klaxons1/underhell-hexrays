char __thiscall sub_102B6F80(int this)
{
  float *v2; // ebx
  int v3; // eax
  double v4; // st7
  int v5; // edi
  float v6; // edx
  float v7; // eax
  double v8; // st4
  double v9; // st6
  double v10; // st4
  double v11; // st5
  double v12; // st6
  double v14; // st7
  int v15; // eax
  double v16; // st7
  bool v17; // cc
  float v18; // [esp+0h] [ebp-88h]
  int v19[19]; // [esp+14h] [ebp-74h] BYREF
  float v20[3]; // [esp+60h] [ebp-28h] BYREF
  float v21; // [esp+6Ch] [ebp-1Ch]
  float v22; // [esp+70h] [ebp-18h]
  float v23; // [esp+74h] [ebp-14h]
  float v24; // [esp+78h] [ebp-10h] BYREF
  float v25; // [esp+7Ch] [ebp-Ch]
  float v26; // [esp+80h] [ebp-8h]
  float v27; // [esp+84h] [ebp-4h]

  sub_10072560(v19);
  sub_10070FE0(v19, 15);
  sub_1042C170(2);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = (float *)(this + 580);
  sub_10072770(v19, (float *)(this + 580), 180.0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v3 = sub_10072EC0((float *)(this + 580), v19);
  if ( v3 )
  {
    v4 = 120.0;
    v5 = v3;
  }
  else
  {
    v5 = sub_1012BC10(&dword_1069E3E0, 0);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v6 = *(float *)(this + 584);
    v7 = *(float *)(this + 588);
    v21 = *v2;
    v22 = v6;
    v23 = v7;
    if ( !v5 )
    {
LABEL_16:
      sub_100725D0(v19);
      return 1;
    }
    while ( 1 )
    {
      if ( *(_DWORD *)(v5 + 92) == *(_DWORD *)(this + 92) && v5 != this )
      {
        if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
          sub_100DAE60(v5);
        v8 = v22 - *(float *)(v5 + 584);
        v9 = v8 * v8;
        v10 = v21 - *(float *)(v5 + 580);
        v11 = v9;
        v12 = v23 - *(float *)(v5 + 588);
        if ( v10 * v10 + v11 + v12 * v12 < 676.0 )
          break;
      }
      v5 = sub_1012BC10(&dword_1069E3E0, v5);
      if ( !v5 )
        goto LABEL_16;
    }
    v4 = 60.0;
  }
  v27 = v4;
  v14 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 424) + 116))(*(_DWORD *)(this + 424));
  v15 = *(_DWORD *)(v5 + 252);
  v24 = 0.0;
  v25 = 0.0;
  v26 = v14 * 200.0;
  if ( (v15 & 0x800) != 0 )
    sub_100DAE60(v5);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v21 = *v2 - *(float *)(v5 + 580);
  v22 = *(float *)(this + 584) - *(float *)(v5 + 584);
  v23 = 0.0;
  off_10689714();
  v16 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(this + 424) + 116))(*(_DWORD *)(this + 424));
  v17 = *(_DWORD *)(this + 1180) <= 5;
  v24 = v21 * v16 * v27 + v24;
  v25 = v22 * v16 * v27 + v25;
  v26 = v16 * v23 * v27 + v26;
  v20[0] = 100.0;
  v20[1] = 0.0;
  v20[2] = 0.0;
  v18 = 0.0;
  if ( v17 )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_CombineMine.FlipOver", v18, 0);
    (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 424) + 236))(*(_DWORD *)(this + 424), &v24);
    (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(this + 424) + 244))(*(_DWORD *)(this + 424), v20);
    ++*(_DWORD *)(this + 1180);
  }
  else
  {
    sub_100EC3F0((_DWORD *)this, 0, v18, 0);
  }
  sub_100725D0(v19);
  return 0;
}

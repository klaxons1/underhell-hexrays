char __thiscall sub_10186050(int this, char a2)
{
  int v3; // eax
  int v5; // eax
  char *v6; // eax
  _DWORD *v7; // eax
  float *v8; // ebx
  double v9; // st7
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  unsigned int v15; // eax
  int v16; // edi
  int v17; // ecx
  float *v18; // eax
  _DWORD *v19; // edi
  const char *v20; // eax
  float *v21; // [esp-1Ch] [ebp-2BCh]
  _DWORD v22[128]; // [esp+4h] [ebp-29Ch] BYREF
  char v23[12]; // [esp+204h] [ebp-9Ch] BYREF
  float v24; // [esp+210h] [ebp-90h]
  float v25; // [esp+214h] [ebp-8Ch]
  float v26; // [esp+218h] [ebp-88h]
  char v27[8]; // [esp+258h] [ebp-48h] BYREF
  float v28[3]; // [esp+260h] [ebp-40h] BYREF
  float v29[3]; // [esp+26Ch] [ebp-34h] BYREF
  float v30[3]; // [esp+278h] [ebp-28h] BYREF
  float v31[3]; // [esp+284h] [ebp-1Ch] BYREF
  float v32[2]; // [esp+290h] [ebp-10h] BYREF
  float v33; // [esp+298h] [ebp-8h]
  int v34; // [esp+29Ch] [ebp-4h]
  int savedregs; // [esp+2A0h] [ebp+0h] BYREF
  int v36; // [esp+2A8h] [ebp+8h]
  int i; // [esp+2A8h] [ebp+8h]

  if ( *(_DWORD *)(dword_106B6E24 + 48) )
    return 0;
  if ( *(int *)(dword_106B3E7C + 48) < 3 )
  {
    v5 = *(_DWORD *)(this + 912);
    if ( v5 > 0 && *(_DWORD *)(this + 908) >= v5 )
      return 0;
  }
  else
  {
    v3 = *(_DWORD *)(this + 916);
    if ( v3 > 0 && *(_DWORD *)(this + 908) >= v3 )
      return 0;
  }
  v6 = *(char **)(this + 928);
  if ( v6 )
  {
    v7 = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, 0, 0, 0);
    if ( v7 )
      *(_DWORD *)(this + 924) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v7 + 8))(v7);
    else
      *(_DWORD *)(this + 924) = -1;
  }
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v8 = (float *)(this + 580);
  v9 = 34.0;
  v10 = *(_DWORD *)(this + 252) >> 11;
  v30[0] = *(float *)(this + 580) - 34.0;
  v30[1] = *(float *)(this + 584) - 34.0;
  v30[2] = *(float *)(this + 588);
  if ( (v10 & 1) != 0 )
  {
    sub_100DAE60(this);
    v9 = 34.0;
  }
  v11 = *(_DWORD *)(this + 252) >> 11;
  v32[0] = *v8 + v9;
  v32[1] = v9 + *(float *)(this + 584);
  v33 = *(float *)(this + 588);
  if ( (v11 & 1) != 0 )
    sub_100DAE60(this);
  v33 = *(float *)(this + 588);
  if ( !a2 )
  {
    sub_1025F990(v22, 128, 8320);
    v12 = sub_1025F9C0(v30, v32, v27);
    v34 = v12;
    if ( v12 )
    {
      v13 = 0;
      v36 = 0;
      if ( v12 > 0 )
      {
        do
        {
          v14 = v22[v13];
          if ( v14 && ((*(int (__thiscall **)(int))(*(_DWORD *)(v14 + 320) + 48))(v14 + 320) & 4) == 0 )
          {
            v15 = *(_DWORD *)(this + 924);
            if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 924) & 0xFFF) + 2] != v15 >> 12 )
              v16 = 0;
            else
              v16 = off_1061BE18[4 * (*(_DWORD *)(this + 924) & 0xFFF) + 1];
            if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
              sub_100DAE60(this);
            v17 = *(_DWORD *)(this + 252);
            v31[0] = *v8;
            v31[1] = *(float *)(this + 584);
            v31[2] = *(float *)(this + 588) - 8192.0;
            if ( (v17 & 0x800) != 0 )
              sub_100DAE60(this);
            v29[0] = *v8;
            v29[1] = *(float *)(this + 584);
            v29[2] = *(float *)(this + 588) + 2.0;
            v21 = (float *)sub_10073730(0);
            v18 = (float *)sub_10073710(0);
            sub_100231A0((int)&savedregs, this, v29, v31, v18, v21, 33701899, v16, 0, (int)v23);
            v28[0] = v24;
            v28[1] = v25;
            v28[2] = v26 + 1.0;
            if ( !sub_10185FB0((_DWORD *)this, v28) )
              return 0;
            v13 = v36;
          }
          v36 = ++v13;
        }
        while ( v13 < v34 );
      }
    }
  }
  if ( (*(_DWORD *)(this + 248) & 0x80) != 0 )
  {
    for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
    {
      v19 = (_DWORD *)sub_1025FB50(i);
      if ( v19 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*v19 + 872))(v19, this + 580) )
        {
          if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
            sub_100DAE60(this);
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int, _DWORD))(*v19 + 544))(v19, this + 580, 16449, 0) )
          {
            if ( (v19[64] & 0x8000) == 0 )
              return 0;
            v20 = *(const char **)(this + 260);
            if ( !v20 )
              v20 = String;
            DevMsg(2, "Spawner %s spawning even though seen due to notarget\n", v20);
          }
        }
      }
    }
  }
  return 1;
}

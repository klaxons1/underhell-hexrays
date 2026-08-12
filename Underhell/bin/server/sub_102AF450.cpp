char __thiscall sub_102AF450(int this)
{
  char result; // al
  float v3; // eax
  float v4; // ecx
  int v5; // edx
  char *v6; // eax
  _DWORD *v7; // ebx
  double v8; // st7
  int v9; // eax
  const char *v10; // eax
  char *v11; // eax
  unsigned int v12; // ecx
  char *v13; // edi
  int v14; // edx
  double v15; // st7
  int v16; // edi
  int v17; // eax
  float v18; // [esp+0h] [ebp-58h]
  unsigned __int64 v19; // [esp+4h] [ebp-54h] BYREF
  int v20; // [esp+Ch] [ebp-4Ch]
  float v21[3]; // [esp+1Ch] [ebp-3Ch] BYREF
  float v22[2]; // [esp+28h] [ebp-30h] BYREF
  float v23; // [esp+30h] [ebp-28h]
  int v24; // [esp+34h] [ebp-24h] BYREF
  float v25; // [esp+38h] [ebp-20h]
  float v26; // [esp+3Ch] [ebp-1Ch]
  int v27; // [esp+40h] [ebp-18h] BYREF
  float v28; // [esp+44h] [ebp-14h]
  float v29; // [esp+48h] [ebp-10h]
  int v30; // [esp+4Ch] [ebp-Ch]
  char *String1; // [esp+50h] [ebp-8h] BYREF
  int v32; // [esp+54h] [ebp-4h] BYREF

  if ( (*(_DWORD *)(this + 248) & 0x800) == 0 && !*(_DWORD *)(this + 960) )
    return sub_10187C40(this, this);
  result = sub_102ACA60((_DWORD *)this, 1);
  if ( result )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v3 = *(float *)(this + 584);
    v4 = *(float *)(this + 588);
    v27 = *(int *)(this + 580);
    v5 = *(_DWORD *)(this + 252) >> 11;
    v28 = v3;
    v29 = v4;
    if ( (v5 & 1) != 0 )
      sub_100DAE60(this);
    v6 = *(char **)(this + 964);
    if ( !v6 )
      v6 = (char *)String;
    v7 = sub_1012BF20(&dword_1069E3E0, 0, v6, this, 0, 0, 0);
    if ( v7 )
      sub_10260A10((int)v7, 0, v7, 1.5, (float *)&v27);
    v8 = *(float *)(this + 968);
    v26 = flt_106F1CB0;
    v9 = *(_DWORD *)(this + 248);
    *(float *)&v24 = flt_106F1CA8;
    v25 = flt_106F1CAC;
    v32 = 0;
    LOBYTE(v30) = (v9 & 0x400) != 0;
    if ( (v9 & 0x800) != 0 )
    {
      *((float *)&v19 + 1) = v8;
      result = sub_102AD990((float *)this, (float *)&v24, *((float *)&v19 + 1), (int)v7);
      if ( !result )
        return result;
    }
    else
    {
      v18 = v8;
      result = sub_102AE570(this, (float *)&v27, v18, *(_DWORD *)(this + 960), &v32, v30);
      if ( !result )
        return result;
      sub_100703C0(v32, 5, (float *)&v24);
    }
    if ( v7 )
    {
      if ( (v7[63] & 0x800) != 0 )
        sub_100DAE60((int)v7);
      v27 = v7[145];
      v28 = *((float *)v7 + 146);
      v29 = *((float *)v7 + 147);
    }
    v10 = *(const char **)(this + 940);
    String1 = 0;
    if ( !v10 )
      v10 = String;
    sub_101812F0(0, this, (int *)&String1, (int)v10, 0);
    v11 = String1;
    if ( String1 )
    {
      v12 = *(_DWORD *)(this + 248) >> 11;
      v13 = String1;
      if ( (*(_DWORD *)(this + 248) & 0x800) == 0 )
      {
        sub_10070B10((_DWORD *)v32, (int)String1);
        sub_10070510(v32, 2.0);
        v11 = String1;
      }
      v20 = this;
      v19 = __PAIR64__((unsigned int)v11, v12);
      sub_1029BE60(&v19, (int)v11);
      sub_1002A0F0((int *)(this + 812), v19, SHIDWORD(v19), v20);
      sub_10035270((int)v13, v14, 4);
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)this + 724))(this, v13);
      sub_100E10C0((int)v13, (float *)&v24);
      if ( v7 )
      {
        v21[0] = *(float *)&v27 - *(float *)&v24;
        v21[1] = v28 - v25;
        v21[2] = v29 - v26;
        off_10689714();
        sub_10422540(v21, v22);
        v22[0] = 0.0;
        v23 = 0.0;
      }
      else if ( v32 )
      {
        v15 = sub_10070AF0(v32);
        v22[0] = 0.0;
        v23 = 0.0;
        v22[1] = v15;
      }
      sub_100E11A0((int)v13, v22);
      sub_10260750(v13);
      (*(void (__thiscall **)(char *))(*(_DWORD *)v13 + 136))(v13);
      *(_DWORD *)(this + 1044) = (*(_DWORD *)(this + 1044) + 1) % 4;
      sub_10031670((_DWORD *)v13 + 212, (_DWORD *)(this + 1044));
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)this + 728))(this, v13);
      v16 = __RTDynamicCast(
              (int)v13,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
              (int)&CNPC_Antlion `RTTI Type Descriptor',
              0);
      sub_102AE1E0((_DWORD *)this, v16);
      v20 = off_1065FD78;
      *((float *)&v19 + 1) = -1.0;
      LODWORD(v19) = 0;
      *(_BYTE *)(this + 1052) = 0;
      sub_100EC3F0((_DWORD *)this, v19, *((float *)&v19 + 1), v20);
      result = sub_102FBB50(&v24);
      if ( (*(_BYTE *)(this + 248) & 0x20) == 0 )
      {
        v17 = *(_DWORD *)(this + 1028);
        if ( v17 )
        {
          --*(_DWORD *)(this + 1024);
          if ( *(_DWORD *)(dword_106DBB3C + 48) == 2 )
            Msg(
              "SPAWNED: Pool: %d (max %d) (Regenerating %d every %f)\n",
              *(_DWORD *)(this + 1024),
              v17,
              *(_DWORD *)(this + 1032),
              *(float *)(this + 1036));
        }
        else
        {
          --*(_DWORD *)(this + 800);
        }
        result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 740))(this);
        if ( result )
        {
          HIDWORD(v19) = this;
          LODWORD(v19) = this;
          sub_1010DD80((_DWORD *)(this + 836), v19, 0.0);
          result = sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
          *(_DWORD *)(this + 200) = 0;
        }
      }
    }
    else
    {
      return Warning("NULL Ent in NPCMaker!\n");
    }
  }
  return result;
}

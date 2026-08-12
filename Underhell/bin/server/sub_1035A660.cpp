int __thiscall sub_1035A660(int this)
{
  const char *v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  int v12; // edx
  int v13; // ebx
  int v14; // ebx
  int v15; // ecx
  int v16; // ebx
  int v17; // ebx
  int result; // eax
  const char *v19; // eax
  int v20; // [esp-Ch] [ebp-2Ch]
  int v21; // [esp-Ch] [ebp-2Ch]
  int v22; // [esp-Ch] [ebp-2Ch]
  int v23; // [esp-Ch] [ebp-2Ch]
  int v24[3]; // [esp+4h] [ebp-1Ch] BYREF
  int v25[3]; // [esp+10h] [ebp-10h] BYREF
  int v26; // [esp+1Ch] [ebp-4h] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  v2 = *(const char **)(*(int (__thiscall **)(int, int *))(*(_DWORD *)this + 28))(this, &v26);
  if ( !v2 )
    v2 = String;
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, v2);
  if ( *(_BYTE *)(this + 4977) )
  {
    *(_DWORD *)(this + 4996) = sub_10219A30() % 6;
    *(_DWORD *)(this + 5000) = sub_10219A30() % 3;
  }
  v3 = *(_DWORD *)(this + 5004);
  if ( v3 == 2 || v3 == 4 )
    *(_DWORD *)(this + 4996) = 3;
  v20 = *(_DWORD *)(this + 5000);
  v4 = sub_100BF520(this, "Armor");
  sub_100C1600(this, v4, v20);
  v21 = *(_DWORD *)(this + 4996);
  v5 = sub_100BF520(this, "Helmet");
  sub_100C1600(this, v5, v21);
  v22 = *(_DWORD *)(this + 5008);
  v6 = sub_100BF520(this, "Legs");
  sub_100C1600(this, v6, v22);
  if ( *(_BYTE *)(this + 4976) )
  {
    v23 = *(_DWORD *)(this + 5016);
    v7 = sub_100BF520(this, "gasmask");
    sub_100C1600(this, v7, v23);
  }
  if ( *(_DWORD *)(this + 4996) == 3 )
  {
    if ( !*(_BYTE *)(this + 4976) && !*(_BYTE *)(this + 4977) )
      sub_100C1A60(this, "VisorDown");
    if ( *(_DWORD *)(this + 5004) )
    {
      *(_BYTE *)(this + 4188) = 1;
      v8 = (_DWORD *)sub_101811E0("item_shield", -1);
      v9 = sub_10219A30() % 2;
      v10 = *(_DWORD *)(this + 5004);
      if ( v10 == 4 || v10 == 5 || v9 && v10 == 1 )
      {
        (*(void (__thiscall **)(_DWORD *, const char *))(*v8 + 104))(v8, "models/items/ballisticshield.mdl");
      }
      else if ( v10 == 2 || v10 == 3 || !v9 && v10 == 1 )
      {
        (*(void (__thiscall **)(_DWORD *, const char *))(*v8 + 104))(v8, "models/items/riotshield.mdl");
      }
      v8[65] = *sub_10162BE0(&v26, "Shield");
      v11 = sub_100BEF30(this, "Shield");
      sub_100BEFA0((void *)this, "Shield", (int)v24, (int)v25);
      sub_100E11A0((int)v8, (float *)v25);
      (*(void (__thiscall **)(_DWORD *, int, int))(*v8 + 140))(v8, this, -1);
      (*(void (__thiscall **)(_DWORD *, int, int))(*v8 + 140))(v8, this, v11);
      sub_100E0970((int)v8, v12, 0, 0);
      sub_100E10C0((int)v8, &flt_106F1CA8);
      sub_100E11A0((int)v8, &flt_106F1CB4);
      (*(void (__thiscall **)(_DWORD *))(*v8 + 96))(v8);
      (*(void (__thiscall **)(_DWORD *))(*v8 + 136))(v8);
      (*(void (__thiscall **)(_DWORD *, int))(*v8 + 76))(v8, this);
      *(_DWORD *)(this + 4176) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v8 + 8))(v8);
      *(_DWORD *)(this + 4192) = (int)(*(float *)(dword_106E78E4 + 44) + *(float *)(dword_106E78E4 + 44));
    }
  }
  if ( *(_BYTE *)(this + 4960) )
  {
    v13 = (int)*(float *)(dword_106E792C + 44);
    if ( *(_DWORD *)(this + 220) != v13 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
      *(_DWORD *)(this + 220) = v13;
    }
    v14 = (int)*(float *)(dword_106E792C + 44);
    if ( *(_DWORD *)(this + 216) != v14 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
      *(_DWORD *)(this + 216) = v14;
    }
    v15 = dword_106E7974;
    goto LABEL_38;
  }
  v16 = (int)*(float *)(dword_106E789C + 44);
  if ( *(_DWORD *)(this + 220) != v16 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v16;
  }
  v17 = (int)*(float *)(dword_106E789C + 44);
  if ( *(_DWORD *)(this + 216) != v17 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 456))(this, this + 216);
    *(_DWORD *)(this + 216) = v17;
  }
  if ( !*(_DWORD *)(this + 5004) )
  {
    v15 = dword_106E78E4;
LABEL_38:
    *(_DWORD *)(this + 4192) = (int)*(float *)(v15 + 44);
  }
  sub_10020460((_DWORD *)this, 0x800000);
  sub_10020460((_DWORD *)this, 64);
  sub_10020460((_DWORD *)this, 3072);
  result = sub_1033EA60(this);
  if ( *(_DWORD *)(this + 5020) )
  {
    if ( (*(_DWORD *)(this + 248) & 0x10) == 0 )
    {
      v19 = sub_100D6390((_DWORD *)this);
      return Msg(
               "Soldier %s is set to use march anim, but is not an efficient AI. The blended march anim can only be used "
               "for dead-ahead walks!\n",
               v19);
    }
  }
  return result;
}

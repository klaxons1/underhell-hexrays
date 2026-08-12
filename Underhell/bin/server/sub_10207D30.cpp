int __thiscall sub_10207D30(int this)
{
  int v2; // esi
  int v3; // eax
  char *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  int v8; // eax
  int *v9; // ebx
  int v10; // esi
  int (__thiscall *v11)(int, int); // eax
  int v12; // eax
  _BYTE *v13; // eax
  _BYTE *v14; // eax
  _BYTE *v15; // eax
  _BYTE *v16; // eax
  _BYTE *v17; // eax
  _BYTE *v18; // eax
  _BYTE *v19; // eax
  int v20; // esi
  int v21; // eax
  const char *v22; // eax
  int *v23; // ebx
  int v24; // esi
  int v25; // eax
  char **v26; // ebx
  bool v27; // zf
  char **v28; // esi
  char **v29; // edi
  char *v30; // esi
  char *v31; // eax
  char *v32; // eax
  char *v33; // eax
  char *v34; // eax
  int v36; // [esp+0h] [ebp-DCh]
  int v37; // [esp+4h] [ebp-D8h]
  int v38; // [esp+8h] [ebp-D4h]
  const char *v39; // [esp+8h] [ebp-D4h]
  char Str[80]; // [esp+1Ch] [ebp-C0h] BYREF
  char Buffer[80]; // [esp+6Ch] [ebp-70h] BYREF
  char *v42; // [esp+BCh] [ebp-20h]
  char *v43; // [esp+C0h] [ebp-1Ch]
  int v44; // [esp+C4h] [ebp-18h]
  int v45; // [esp+C8h] [ebp-14h]
  char **v46; // [esp+CCh] [ebp-10h]
  char *v47; // [esp+D0h] [ebp-Ch] BYREF
  char v48; // [esp+D7h] [ebp-5h]
  char **v49; // [esp+D8h] [ebp-4h] BYREF

  if ( !sub_100D7240((void *)this) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    Error(
      "prop_door with no model at %.2f %.2f %.2f\n",
      *(float *)(this + 580),
      *(float *)(this + 584),
      *(float *)(this + 588));
  }
  v42 = 0;
  v44 = 0;
  v47 = 0;
  v45 = 0;
  v43 = 0;
  v48 = 0;
  if ( sub_1042A310(32) )
    v46 = (char **)sub_1042A330(String);
  else
    v46 = 0;
  v2 = *(_DWORD *)dword_106B31F0;
  v3 = sub_100D7240((void *)this);
  v37 = (*(int (__thiscall **)(int, int))(v2 + 72))(dword_106B31F0, v3);
  v36 = sub_100D7240((void *)this);
  v4 = (char *)(*(int (__thiscall **)(int))(v2 + 12))(dword_106B31F0);
  if ( (unsigned __int8)sub_1042BFB0(v4, v36, v37, 0) )
  {
    v49 = (char **)sub_1042ACB0("door_options", 0);
    if ( v49 )
    {
      sub_10429A00(Buffer, 0x50u, "skin%d", *(_DWORD *)(this + 848));
      if ( sub_1042ACB0(Buffer, 0) )
      {
        v5 = (_BYTE *)sub_1042B460("open", (int)String);
        v42 = (char *)*sub_10162BE0(&v47, v5);
        v6 = (_BYTE *)sub_1042B460("close", (int)String);
        v44 = *sub_10162BE0(&v47, v6);
        v7 = (_BYTE *)sub_1042B460("move", (int)String);
        v47 = (char *)*sub_10162BE0(&v47, v7);
        v8 = sub_1042B460("surfaceprop", (int)String);
        if ( v8 )
        {
          v9 = *(int **)(this + 424);
          if ( v9 )
          {
            v10 = *v9;
            v38 = v8;
            v11 = *(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF8 + 12);
            v48 = 1;
            v12 = v11(dword_106BAFF8, v38);
            (*(void (__thiscall **)(int *, int))(v10 + 156))(v9, v12);
          }
        }
      }
      sub_10429A00(Str, 0x50u, "hardware%d", *(_DWORD *)(this + 1668));
      if ( sub_1042ACB0(Str, 0) )
      {
        v13 = (_BYTE *)sub_1042B460("locked", (int)String);
        v45 = *sub_10162BE0(&v49, v13);
        v14 = (_BYTE *)sub_1042B460("unlocked", (int)String);
        v43 = (char *)*sub_10162BE0(&v49, v14);
      }
      if ( (!v42 || !v44 || !v47 || !v45 || !v43) && sub_1042ACB0("defaults", 0) )
      {
        if ( !v42 )
        {
          v15 = (_BYTE *)sub_1042B460("open", (int)String);
          v42 = (char *)*sub_10162BE0(&v49, v15);
        }
        if ( !v44 )
        {
          v16 = (_BYTE *)sub_1042B460("close", (int)String);
          v44 = *sub_10162BE0(&v49, v16);
        }
        if ( !v47 )
        {
          v17 = (_BYTE *)sub_1042B460("move", (int)String);
          v47 = (char *)*sub_10162BE0(&v49, v17);
        }
        if ( !v45 )
        {
          v18 = (_BYTE *)sub_1042B460("locked", (int)String);
          v45 = *sub_10162BE0(&v49, v18);
        }
        if ( !v43 )
        {
          v19 = (_BYTE *)sub_1042B460("unlocked", (int)String);
          v43 = (char *)*sub_10162BE0(&v49, v19);
        }
      }
    }
  }
  sub_1042B1A0(v46);
  if ( !v48 && *(_DWORD *)(this + 424) )
  {
    v20 = *(_DWORD *)dword_106B31F0;
    v21 = sub_100D7240((void *)this);
    v39 = (const char *)(*(int (__thiscall **)(int, int))(v20 + 12))(dword_106B31F0, v21);
    v22 = sub_100D6390((_DWORD *)this);
    Warning(
      "%s has Door model (%s) with no door_options! Verify that SKIN is valid, and has a corresponding options block in t"
      "he model QC file\n",
      v22,
      v39);
    v23 = *(int **)(this + 424);
    v24 = *v23;
    v25 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106BAFF8 + 12))(dword_106BAFF8, "wood");
    (*(void (__thiscall **)(int *, int))(v24 + 156))(v23, v25);
  }
  v26 = (char **)(this + 1736);
  if ( !*(_DWORD *)(this + 1736) )
    *v26 = v42;
  v27 = *(_DWORD *)(this + 1740) == 0;
  v49 = (char **)(this + 1740);
  if ( v27 )
    *(_DWORD *)(this + 1740) = v44;
  v28 = (char **)(this + 1732);
  if ( !*(_DWORD *)(this + 1732) )
    *v28 = v47;
  v27 = *(_DWORD *)(this + 1680) == 0;
  v46 = (char **)(this + 1680);
  if ( v27 )
    *(_DWORD *)(this + 1680) = v45;
  v29 = (char **)(this + 1688);
  if ( !*v29 )
    *v29 = v43;
  sub_102609C0(v28, "DoorSound.Null");
  sub_102609C0(v26, "DoorSound.Null");
  sub_102609C0(v49, "DoorSound.Null");
  sub_102609C0(v46, "DoorSound.Null");
  sub_102609C0(v29, "DoorSound.Null");
  v30 = *v28;
  if ( !v30 )
    v30 = (char *)String;
  sub_1023B8B0(v30);
  v31 = *v26;
  if ( !*v26 )
    v31 = (char *)String;
  sub_1023B8B0(v31);
  v32 = *v49;
  if ( !*v49 )
    v32 = (char *)String;
  sub_1023B8B0(v32);
  v33 = *v46;
  if ( !*v46 )
    v33 = (char *)String;
  sub_1023B8B0(v33);
  v34 = *v29;
  if ( !*v29 )
    v34 = (char *)String;
  return sub_1023B8B0(v34);
}

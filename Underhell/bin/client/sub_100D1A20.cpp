unsigned int __usercall sub_100D1A20@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  unsigned int result; // eax
  char *v4; // ecx
  _DWORD *v5; // esi
  int v6; // eax
  int i; // ecx
  int (__thiscall *v8)(int, _DWORD, int); // edx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int (__thiscall *v12)(int, _DWORD); // edx
  int v13; // edi
  char *v14; // esi
  type_info *v15; // eax
  void (__thiscall *v16)(int, int); // edx
  char v17; // al
  char *v18; // esi
  int v19; // edi
  void (__thiscall *v20)(int, int); // eax
  void (__thiscall *v21)(int, int); // eax
  int v22; // edi
  int v23; // eax
  int v24; // ebx
  void (__thiscall *v25)(int, int); // edx
  int v26; // esi
  void (__thiscall *v27)(int, int); // eax
  int v28; // esi
  void (__thiscall *v29)(int, int); // eax
  int v30; // esi
  void (__thiscall *v31)(int, int); // eax
  int v32; // esi
  void (__thiscall *v33)(int, int); // eax
  int v34; // esi
  void (__thiscall *v35)(int, int); // eax
  unsigned __int16 v36[1024]; // [esp+8h] [ebp-B14h] BYREF
  char String2[128]; // [esp+808h] [ebp-314h] BYREF
  char Buffer[512]; // [esp+888h] [ebp-294h] BYREF
  char Destination[32]; // [esp+A88h] [ebp-94h] BYREF
  char v40[32]; // [esp+AA8h] [ebp-74h] BYREF
  int v41; // [esp+AC8h] [ebp-54h] BYREF
  _DWORD v42[5]; // [esp+ACCh] [ebp-50h]
  int v43; // [esp+AE0h] [ebp-3Ch]
  int v44; // [esp+AE4h] [ebp-38h] BYREF
  int v45; // [esp+AE8h] [ebp-34h]
  int v46; // [esp+AECh] [ebp-30h]
  int v47; // [esp+AF0h] [ebp-2Ch] BYREF
  int v48; // [esp+AF4h] [ebp-28h] BYREF
  int v49; // [esp+AF8h] [ebp-24h] BYREF
  int v50; // [esp+AFCh] [ebp-20h] BYREF
  int v51; // [esp+B00h] [ebp-1Ch]
  int v52; // [esp+B04h] [ebp-18h]
  int v53; // [esp+B08h] [ebp-14h]
  int v54; // [esp+B0Ch] [ebp-10h]
  _DWORD *v55; // [esp+B10h] [ebp-Ch]
  int v56; // [esp+B14h] [ebp-8h]
  int v57; // [esp+B18h] [ebp-4h]

  result = a1[57];
  if ( result == -1
    || (v4 = (char *)off_103DCD74 + 16 * (a1[57] & 0xFFF) + 4, result >>= 12, *((_DWORD *)v4 + 1) != result)
    || (v5 = *(_DWORD **)v4, (v55 = v5) == 0) )
  {
    a1[55] = 0;
    return result;
  }
  v42[0] = 20;
  v6 = sub_10076740() / 375;
  v54 = v6;
  if ( v6 <= 5 )
  {
    if ( v6 >= 1 )
      goto LABEL_10;
    v54 = 1;
  }
  else
  {
    v54 = 5;
  }
  v6 = v54;
LABEL_10:
  for ( i = 0; i < v6; ++i )
  {
    if ( i )
      v42[i] = v42[i - 1] + 355;
    else
      v42[0] = 20;
  }
  v8 = *(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 268);
  v46 = a1[55];
  v9 = v8(dword_1047CA6C, a1[59], a2);
  v10 = a1[61];
  v51 = v9 - 3;
  v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v10);
  v12 = *(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268);
  v43 = v11;
  v53 = v12(dword_1047CA6C, a1[63]);
  v47 = 255;
  v48 = 255;
  v50 = 255;
  v49 = 255;
  String2[0] = 0;
  v13 = 60;
  v57 = 0;
  v40[0] = 0;
  sub_102282F0(Destination, "class ", 0x20u);
  v14 = sub_10034D90(v5);
  if ( !*v14 )
  {
    v15 = (type_info *)__RTtypeid(v55);
    v14 = (char *)type_info::name(v15, (struct __type_info_node *)&unk_10481AF0);
    sub_102282F0(v40, " (classmap missing)", 0x20u);
    Destination[0] = 0;
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, a1[63]);
  v16 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72);
  v56 = -1;
  v16(dword_1047CA6C, -1);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v42[0] - 10, 58 - v53);
  v17 = (*(int (__thiscall **)(_DWORD *, char *, char *, char *))(v55[2] + 36))(v55 + 2, Destination, v14, v40);
  sub_10228370(Buffer, 0x200u, "entity # %i: %s%s%s", v17);
  (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    Buffer,
    v36,
    2048);
  (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
    dword_1047CA6C,
    v36,
    wcslen(v36),
    0);
  v53 = 0;
  if ( v46 > 0 )
  {
    v55 = 0;
    v45 = -60 - v51;
    do
    {
      v18 = (char *)v55 + a1[52];
      if ( _stricmp(v18, String2) )
      {
        v19 = v13 + 2;
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, a1[61]);
        v20 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72);
        v56 = -10158336;
        v20(dword_1047CA6C, -10158336);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v42[v57] - 10, v19);
        sub_10228370(Buffer, 0x200u, "%s", (char)v18);
        (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
          dword_1047CA78,
          Buffer,
          v36,
          2048);
        (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
          dword_1047CA6C,
          v36,
          wcslen(v36),
          0);
        v13 = v19 + v43 - 1;
        sub_102282F0(String2, v18, 0x80u);
      }
      sub_100D1870(v18[128], v18[259] == 0, v18[257], v18[258], &v47, &v48, &v50, &v49);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, a1[59]);
      LOBYTE(v52) = v47;
      BYTE1(v52) = v48;
      BYTE2(v52) = v50;
      v21 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72);
      HIBYTE(v52) = v49;
      v21(dword_1047CA6C, v52);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v42[v57], v13);
      sub_10228370(Buffer, 0x200u, "%s", (_BYTE)v18 - 127);
      (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
        dword_1047CA78,
        Buffer,
        v36,
        2048);
      (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
        dword_1047CA6C,
        v36,
        wcslen(v36),
        0);
      v13 += v51;
      if ( v13 >= v45 + sub_10076720() )
      {
        v13 = 60;
        if ( ++v57 >= v54 )
          break;
      }
      v55 += 65;
      ++v53;
    }
    while ( v53 < v46 );
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, a1[59]);
  (*(void (__thiscall **)(int, const char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    "Not networked, no differences",
    v36,
    2048);
  (*(void (__thiscall **)(int, _DWORD, unsigned __int16 *, int *, int *))(*(_DWORD *)dword_1047CA6C + 288))(
    dword_1047CA6C,
    a1[59],
    v36,
    &v44,
    &v41);
  v22 = sub_10076740() + -5 - v44;
  v23 = sub_10076720();
  v24 = v51;
  v25 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72);
  v26 = -80 - 7 * v51 + v23;
  v57 = -1;
  v25(dword_1047CA6C, -1);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v22, v26);
  sub_102282F0(Buffer, "Not networked, no differences", 0x200u);
  (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    Buffer,
    v36,
    2048);
  (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
    dword_1047CA6C,
    v36,
    wcslen(v36),
    0);
  v27 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72);
  v57 = -6900586;
  v28 = v24 + v26;
  v27(dword_1047CA6C, -6900586);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v22, v28);
  sub_102282F0(Buffer, "Networked, not checked", 0x200u);
  (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    Buffer,
    v36,
    2048);
  (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
    dword_1047CA6C,
    v36,
    wcslen(v36),
    0);
  v29 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72);
  v57 = -1985356;
  v30 = v24 + v28;
  v29(dword_1047CA6C, -1985356);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v22, v30);
  sub_102282F0(Buffer, "Networked, error checked", 0x200u);
  (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    Buffer,
    v36,
    2048);
  (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
    dword_1047CA6C,
    v36,
    wcslen(v36),
    0);
  v31 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72);
  v57 = -16711681;
  v32 = v24 + v30;
  v31(dword_1047CA6C, -16711681);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v22, v32);
  sub_102282F0(Buffer, "Differs, but within tolerance", 0x200u);
  (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    Buffer,
    v36,
    2048);
  (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
    dword_1047CA6C,
    v36,
    wcslen(v36),
    0);
  v33 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72);
  v57 = -10177356;
  v34 = v24 + v32;
  v33(dword_1047CA6C, -10177356);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v22, v34);
  sub_102282F0(Buffer, "Differs, but not networked", 0x200u);
  (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    Buffer,
    v36,
    2048);
  (*(void (__thiscall **)(int, unsigned __int16 *, unsigned int))(*(_DWORD *)dword_1047CA6C + 88))(
    dword_1047CA6C,
    v36,
    wcslen(v36));
  v35 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72);
  v57 = -16776961;
  v35(dword_1047CA6C, -16776961);
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, v22, v24 + v34);
  sub_102282F0(Buffer, "Differs, networked", 0x200u);
  (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    Buffer,
    v36,
    2048);
  return (*(int (__thiscall **)(int, unsigned __int16 *, unsigned int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
           dword_1047CA6C,
           v36,
           wcslen(v36),
           0);
}

int __thiscall sub_10188E50(_DWORD **this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int (__stdcall *v6)(int); // edx
  unsigned __int8 v7; // al
  int v8; // ebx
  int v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  __int16 v12; // cx
  int v13; // ebx
  char *v14; // eax
  _BYTE *v15; // eax
  int v16; // ebx
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // eax
  int *v21; // eax
  int *v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int result; // eax
  int v30; // [esp-4h] [ebp-11F4h]
  _BYTE v31[2048]; // [esp+Ch] [ebp-11E4h] BYREF
  _BYTE v32[2048]; // [esp+80Ch] [ebp-9E4h] BYREF
  _WORD v33[80]; // [esp+100Ch] [ebp-1E4h] BYREF
  char v34[128]; // [esp+10ACh] [ebp-144h] BYREF
  char Destination[128]; // [esp+112Ch] [ebp-C4h] BYREF
  wchar_t Buffer[10]; // [esp+11ACh] [ebp-44h] BYREF
  char v37[4]; // [esp+11C0h] [ebp-30h] BYREF
  char v38[4]; // [esp+11C4h] [ebp-2Ch] BYREF
  char v39[4]; // [esp+11C8h] [ebp-28h] BYREF
  char v40[4]; // [esp+11CCh] [ebp-24h] BYREF
  char v41[4]; // [esp+11D0h] [ebp-20h] BYREF
  int v42; // [esp+11D4h] [ebp-1Ch]
  int v43; // [esp+11D8h] [ebp-18h] BYREF
  int v44; // [esp+11DCh] [ebp-14h] BYREF
  int v45; // [esp+11E0h] [ebp-10h] BYREF
  _DWORD **v46; // [esp+11E4h] [ebp-Ch] BYREF
  int v47; // [esp+11E8h] [ebp-8h] BYREF
  int v48; // [esp+11ECh] [ebp-4h]

  sub_10132120((int)&v47, (int)v38);
  sub_10236250(v39, v40, v41, &v43);
  v2 = sub_1005CDB0();
  v42 = sub_10076690();
  v48 = sub_100766B0();
  v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_104453A8 + 16))(dword_104453A8, "overview");
  if ( !v3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 36))(v3) )
  {
    sub_102361A0(v47, v43);
    goto LABEL_7;
  }
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 32))(v3);
  (*(void (__thiscall **)(int, int, int *, _DWORD ***))(*(_DWORD *)dword_1047CA70 + 12))(dword_1047CA70, v4, &v45, &v46);
  (*(void (__thiscall **)(int, int, int *, char *))(*(_DWORD *)dword_1047CA70 + 20))(dword_1047CA70, v4, &v44, v37);
  if ( (int)v46 >= v43 )
  {
    sub_102361A0(v47, v43);
LABEL_7:
    sub_10236140(0, 0);
    goto LABEL_8;
  }
  sub_102361A0(v47 - v44 - v45, v43);
  sub_10236140(v45 + v44, 0);
LABEL_8:
  v5 = *this[5];
  v6 = (int (__stdcall *)(int))(*(this - 63))[218];
  v46 = this - 63;
  v7 = v6(v42);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(v5 + 124))(this[5], v7);
  if ( v48 > 0 && v48 <= *((_DWORD *)off_103DC81C + 5) && v2 )
  {
    v8 = *(_DWORD *)v2;
    v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 52))(v2, v48);
    v10 = (_DWORD *)(*(int (__thiscall **)(int, int))(v8 + 12))(v2, v9);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this[5] + 220))(this[5], *v10);
    v11 = 0;
    do
    {
      v12 = word_1032ADC0[v11];
      v33[v11++] = v12;
    }
    while ( v12 );
    memset(v34, 0, sizeof(v34));
    v13 = *(_DWORD *)dword_1047CA78;
    v14 = (char *)(*(int (__thiscall **)(int, int, char *, int))(*(_DWORD *)v2 + 32))(v2, v48, v34, 128);
    v15 = sub_10076950(v14);
    (*(void (__thiscall **)(int, _BYTE *))(v13 + 12))(dword_1047CA78, v15);
    v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 56))(v2, v48);
    if ( v16 > 0 && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v2 + 20))(v2, v48) )
    {
      _snwprintf(Buffer, 0x14u, L"%i", v16);
      v17 = *(_DWORD *)dword_1047CA78;
      v18 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
              dword_1047CA78,
              "#Spec_PlayerItem_Team");
      (*(void (__cdecl **)(int, _WORD *, int, int))(v17 + 32))(dword_1047CA78, v33, 160, v18);
      (*(void (__thiscall **)(_DWORD *, _WORD *, _DWORD))(*this[5] + 768))(this[5], v33, 0);
    }
    else
    {
      v19 = *(_DWORD *)dword_1047CA78;
      v20 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA78 + 8))(
              dword_1047CA78,
              "#Spec_PlayerItem");
      (*(void (__cdecl **)(int, _WORD *, int, int))(v19 + 32))(dword_1047CA78, v33, 160, v20);
      (*(void (__thiscall **)(_DWORD *, _WORD *, _DWORD))(*this[5] + 768))(this[5], v33, 0);
    }
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *, void *, _DWORD))(*this[5] + 768))(this[5], &unk_10302674, 0);
  }
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C) )
  {
    v21 = sub_100B1EE0();
    sub_10228370(Destination, 0x80u, "Spectators : %d", v21[21]);
    (*(void (__thiscall **)(int, char *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      Destination,
      v32,
      2048);
    v22 = sub_100B1EE0();
    sub_102282F0(Destination, (char *)v22 + 88, 0x80u);
    (*(void (__thiscall **)(int, char *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      Destination,
      v31,
      2048);
  }
  else
  {
    v23 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 204))(dword_1041315C);
    sub_102286F0(v23, Destination, 0x80u);
    (*(void (__thiscall **)(int, char *, char *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      Destination,
      v34,
      128);
    v24 = *(_DWORD *)dword_1047CA78;
    v25 = (*(int (__thiscall **)(int, const char *, int, char *))(*(_DWORD *)dword_1047CA78 + 8))(
            dword_1047CA78,
            "#Spec_Map",
            1,
            v34);
    (*(void (__cdecl **)(int, _BYTE *, int, int))(v24 + 32))(dword_1047CA78, v32, 2048, v25);
    (*(void (__thiscall **)(int, const char *, _BYTE *, int, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      Locale,
      v31,
      2048,
      v30);
  }
  v26 = sub_10239950("extrainfo", 0);
  v27 = __RTDynamicCast(
          v26,
          0,
          (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
          (int)&vgui::Label `RTTI Type Descriptor',
          0);
  if ( v27 )
    (*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v27 + 768))(v27, v32, 0);
  v28 = sub_10239950("titlelabel", 0);
  result = __RTDynamicCast(
             v28,
             0,
             (struct _s_RTTICompleteObjectLocator *)&vgui::Panel `RTTI Type Descriptor',
             (int)&vgui::Label `RTTI Type Descriptor',
             0);
  if ( result )
    return (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)result + 768))(result, v31, 0);
  return result;
}

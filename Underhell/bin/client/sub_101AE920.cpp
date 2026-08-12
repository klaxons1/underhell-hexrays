int __thiscall sub_101AE920(char *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  bool v6; // c0
  void (__thiscall *v7)(char *, _DWORD); // eax
  double v8; // st7
  double v9; // st7
  double v10; // st6
  bool v11; // c0
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // edx
  unsigned __int8 v17; // bl
  int v18; // ebx
  int v19; // eax
  int v20; // [esp+8h] [ebp-260h]
  char v21; // [esp+14h] [ebp-254h]
  unsigned __int16 v22[256]; // [esp+18h] [ebp-250h] BYREF
  char Buffer[64]; // [esp+218h] [ebp-50h] BYREF
  int v24; // [esp+258h] [ebp-10h] BYREF
  int v25; // [esp+25Ch] [ebp-Ch]
  int v26; // [esp+260h] [ebp-8h]
  float v27; // [esp+264h] [ebp-4h] BYREF

  v2 = *((_DWORD *)this + 77);
  if ( v2 == 3 )
    return (*(int (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 44))(this, 0);
  if ( !v2 )
  {
    v27 = *((float *)this + 73) - *((float *)off_103DC81C + 3);
    v9 = sub_100260E0(v27, 5.0, 0.0, -128.0, 255.0);
    v10 = 0.0;
    if ( v9 >= 0.0 )
      v10 = v9;
    v11 = v27 > 0.0;
    *((_DWORD *)this + 75) = (int)v10;
    if ( v11 )
      goto LABEL_15;
    *((_DWORD *)this + 77) = 1;
    v8 = *((float *)off_103DC81C + 3) + *((float *)this + 85);
    goto LABEL_14;
  }
  v4 = v2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v27 = *((float *)this + 73) - *((float *)off_103DC81C + 3);
      v5 = (int)sub_100260E0(v27, 0.0, 2.0, 0.0, 255.0);
      v6 = v27 > 0.0;
      *((_DWORD *)this + 75) = v5;
      if ( !v6 )
      {
        v7 = *(void (__thiscall **)(char *, _DWORD))(*(_DWORD *)this + 44);
        *((_DWORD *)this + 77) = 3;
        v7(this, 0);
      }
    }
    goto LABEL_15;
  }
  if ( *((float *)off_103DC81C + 3) >= (double)*((float *)this + 73) )
  {
    *((_DWORD *)this + 77) = 2;
    v8 = *((float *)off_103DC81C + 3) + 2.0;
LABEL_14:
    *((float *)this + 73) = v8;
  }
LABEL_15:
  sub_10132120((int)&v27, (int)&v24);
  sub_102361A0(LODWORD(v27), v24);
  if ( *(_DWORD *)(dword_104016C4 + 48) )
    sub_10228370(Buffer, 0x40u, "ClientTitleFont", v21);
  else
    sub_10228370(Buffer, 0x40u, "WeaponIcons", v21);
  v12 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA7C + 20))(dword_1047CA7C, "ClientScheme");
  v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v12);
  v14 = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)v13 + 12))(v13, Buffer, 0);
  v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, v14);
  v16 = *(_DWORD *)dword_1047CA6C;
  v17 = this[300];
  v25 = v15;
  v26 = *(_DWORD *)(this + 257);
  (*(void (__thiscall **)(int, int))(v16 + 68))(dword_1047CA6C, v14);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 76))(
    dword_1047CA6C,
    (unsigned __int8)v26,
    BYTE1(v26),
    BYTE2(v26),
    v17);
  (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
    dword_1047CA78,
    this + 352,
    v22,
    512);
  v26 = sub_101AE310(v22, v14);
  v18 = *(_DWORD *)dword_1047CA6C;
  v20 = v24 / 2 - v25 / 2;
  v25 /= 2;
  (*(void (__thiscall **)(int, int, int))(v18 + 80))(dword_1047CA6C, SLODWORD(v27) / 2 - v26 / 2, v20);
  (*(void (__thiscall **)(int, unsigned __int16 *, _DWORD))(*(_DWORD *)dword_1047CA6C + 492))(dword_1047CA6C, v22, 0);
  result = strlen(this + 608);
  if ( result > 0 )
  {
    (*(void (__thiscall **)(int, char *, unsigned __int16 *, int))(*(_DWORD *)dword_1047CA78 + 12))(
      dword_1047CA78,
      this + 608,
      v22,
      512);
    v19 = sub_101AE310(v22, v14);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
      dword_1047CA6C,
      SLODWORD(v27) / 2 - v19 / 2,
      v25 + v24 / 2);
    return (*(int (__thiscall **)(int, unsigned __int16 *, _DWORD))(*(_DWORD *)dword_1047CA6C + 492))(
             dword_1047CA6C,
             v22,
             0);
  }
  return result;
}

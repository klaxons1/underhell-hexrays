_DWORD *__thiscall sub_100D1440(_DWORD *this, int a2, char *Source)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v14; // [esp-8h] [ebp-2Ch]
  int v15; // [esp-8h] [ebp-2Ch]
  int v16; // [esp-8h] [ebp-2Ch]
  int v17; // [esp-8h] [ebp-2Ch]
  int v18; // [esp-8h] [ebp-2Ch]
  int v19; // [esp-8h] [ebp-2Ch]
  const char *v20; // [esp+Ch] [ebp-18h] BYREF
  const char *v21; // [esp+10h] [ebp-14h]
  const char *v22; // [esp+14h] [ebp-10h]
  const char *v23; // [esp+18h] [ebp-Ch]
  char v24; // [esp+1Ch] [ebp-8h]
  int (__cdecl *v25)(int); // [esp+20h] [ebp-4h]

  sub_10243490(a2, Source);
  *this = &CHudNumericDisplay::`vftable';
  if ( !byte_1043105C )
  {
    byte_1043105C = 1;
    v4 = sub_10242540("CHudNumericDisplay");
    *(_DWORD *)(v4 + 28) = sub_100D0D50;
    *(_DWORD *)(v4 + 24) = sub_10242540("vgui::Panel");
  }
  if ( !byte_1043105D )
  {
    byte_1043105D = 1;
    v5 = sub_102484C0("CHudNumericDisplay");
    *(_DWORD *)(v5 + 24) = sub_100D0D50;
    *(_DWORD *)(v5 + 20) = sub_102484C0("vgui::Panel");
  }
  if ( !byte_1043105E )
  {
    byte_1043105E = 1;
    v6 = sub_10242580("CHudNumericDisplay");
    *(_DWORD *)(v6 + 68) = sub_100D0D50;
    *(_DWORD *)(v6 + 24) = sub_10242580("vgui::Panel");
  }
  sub_100D11A0();
  sub_100D1200();
  *(_DWORD *)((char *)this + 293) = 0;
  sub_100D1260();
  *(_DWORD *)((char *)this + 298) = 0;
  sub_100D12C0();
  sub_100D1320();
  sub_100D1380();
  sub_100D13E0();
  if ( !byte_10431066 )
  {
    byte_10431066 = 1;
    v20 = "text_xpos";
    v21 = "text_xpos";
    v14 = *(_DWORD *)(sub_102484C0("CHudNumericDisplay") + 12);
    v22 = "proportional_float";
    v23 = "8";
    v25 = sub_100D0DB0;
    v24 = 0;
    sub_100F4BC0(v14, &v20);
  }
  if ( !byte_10431067 )
  {
    byte_10431067 = 1;
    v7 = sub_102484C0("CHudNumericDisplay");
    v20 = "text_ypos";
    v21 = "text_ypos";
    v15 = *(_DWORD *)(v7 + 12);
    v22 = "proportional_float";
    v23 = "20";
    v25 = sub_100D0DC0;
    v24 = 0;
    sub_100F4BC0(v15, &v20);
  }
  if ( !byte_10431068 )
  {
    byte_10431068 = 1;
    v8 = sub_102484C0("CHudNumericDisplay");
    v20 = "digit_xpos";
    v21 = "digit_xpos";
    v16 = *(_DWORD *)(v8 + 12);
    v22 = "proportional_float";
    v23 = "50";
    v25 = sub_100D0DD0;
    v24 = 0;
    sub_100F4BC0(v16, &v20);
  }
  if ( !byte_10431069 )
  {
    byte_10431069 = 1;
    v9 = sub_102484C0("CHudNumericDisplay");
    v20 = "digit_ypos";
    v21 = "digit_ypos";
    v17 = *(_DWORD *)(v9 + 12);
    v22 = "proportional_float";
    v23 = "2";
    v25 = sub_100D0DE0;
    v24 = 0;
    sub_100F4BC0(v17, &v20);
  }
  if ( !byte_1043106A )
  {
    byte_1043106A = 1;
    v10 = sub_102484C0("CHudNumericDisplay");
    v20 = "digit2_xpos";
    v21 = "digit2_xpos";
    v18 = *(_DWORD *)(v10 + 12);
    v22 = "proportional_float";
    v23 = "98";
    v25 = sub_100D0DF0;
    v24 = 0;
    sub_100F4BC0(v18, &v20);
  }
  if ( !byte_1043106B )
  {
    byte_1043106B = 1;
    v11 = sub_102484C0("CHudNumericDisplay");
    v20 = "digit2_ypos";
    v21 = "digit2_ypos";
    v19 = *(_DWORD *)(v11 + 12);
    v22 = "proportional_float";
    v23 = "16";
    v25 = sub_100D0E00;
    v24 = 0;
    sub_100F4BC0(v19, &v20);
  }
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 32))(dword_1044CC48);
  sub_10236510(v12);
  this[52] = 0;
  this[53] = 0;
  *((_WORD *)this + 108) = 0;
  this[70] = 1;
  return this;
}

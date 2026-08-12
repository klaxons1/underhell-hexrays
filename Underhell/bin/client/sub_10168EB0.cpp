int sub_10168EB0()
{
  int v0; // eax
  int v1; // ecx
  char *v2; // esi
  int v4[13]; // [esp+10h] [ebp-64h] BYREF
  int v5; // [esp+44h] [ebp-30h]
  float v6; // [esp+48h] [ebp-2Ch]
  float v7; // [esp+4Ch] [ebp-28h]
  float v8; // [esp+50h] [ebp-24h]
  int v9; // [esp+54h] [ebp-20h]
  __int16 v10; // [esp+58h] [ebp-1Ch]
  int v11; // [esp+5Ch] [ebp-18h]
  int v12; // [esp+60h] [ebp-14h]
  int v13; // [esp+64h] [ebp-10h]
  char v14; // [esp+68h] [ebp-Ch]
  int v15; // [esp+70h] [ebp-4h]

  v5 = -1;
  v9 = 0;
  v10 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v11 = 0;
  sub_1022A940("originx", 0.0);
  *(float *)v4 = 0.0;
  sub_1022A940("originy", 0.0);
  *(float *)&v4[1] = 0.0;
  sub_1022A940("originz", 0.0);
  *(float *)&v4[2] = 0.0;
  sub_1022A940("startx", 0.0);
  *(float *)&v4[3] = 0.0;
  sub_1022A940("starty", 0.0);
  *(float *)&v4[4] = 0.0;
  sub_1022A940("startz", 0.0);
  *(float *)&v4[5] = 0.0;
  sub_1022A940("normalx", 0.0);
  *(float *)&v4[6] = 0.0;
  sub_1022A940("normaly", 0.0);
  *(float *)&v4[7] = 0.0;
  sub_1022A940("normalz", 0.0);
  *(float *)&v4[8] = 0.0;
  sub_1022A940("anglesx", 0.0);
  *(float *)&v4[9] = 0.0;
  sub_1022A940("anglesy", 0.0);
  *(float *)&v4[10] = 0.0;
  sub_1022A940("anglesz", 0.0);
  *(float *)&v4[11] = 0.0;
  v4[12] = sub_1022A800("flags", 0);
  sub_1022A940("scale", 0.0);
  v6 = 0.0;
  sub_1022A940("magnitude", 0.0);
  v7 = 0.0;
  sub_1022A940("radius", 0.0);
  v8 = 0.0;
  v0 = sub_1022B4C0("surfaceprop", (int)Locale);
  v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10436258 + 12))(dword_10436258, v0);
  v12 = sub_1022A800("damagetype", 0);
  v13 = sub_1022A800("hitbox", 0);
  v14 = sub_1022A800("color", 0);
  v9 = sub_1022A800("attachmentindex", 0);
  v1 = *((_DWORD *)off_103DCD78 + 1);
  if ( v1 )
    v15 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1);
  else
    v15 = -1;
  v5 = sub_1022A910("entindex", v15);
  v2 = (char *)sub_1022B4C0("effectname", (int)Locale);
  sub_10168DB0(v2, (int)v4);
  return sub_101689E0((int)v4, v2);
}

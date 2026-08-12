int sub_10167620()
{
  _BYTE *v0; // eax
  int v1; // ebx
  int v2; // edi
  int v3; // esi
  float v5; // [esp+18h] [ebp-60h]
  float v6; // [esp+24h] [ebp-54h]
  float v7[3]; // [esp+38h] [ebp-40h] BYREF
  float v8[3]; // [esp+44h] [ebp-34h] BYREF
  int v9[3]; // [esp+50h] [ebp-28h] BYREF
  int v10[3]; // [esp+5Ch] [ebp-1Ch] BYREF
  int v11; // [esp+68h] [ebp-10h] BYREF
  int v12; // [esp+6Ch] [ebp-Ch]
  float v13; // [esp+70h] [ebp-8h]
  int v14; // [esp+74h] [ebp-4h]

  sub_1022A940("originx", 0.0);
  *(float *)v9 = 0.0;
  sub_1022A940("originy", 0.0);
  *(float *)&v9[1] = 0.0;
  sub_1022A940("originz", 0.0);
  *(float *)&v9[2] = 0.0;
  sub_1022A940("anglesx", 0.0);
  *(float *)v10 = 0.0;
  sub_1022A940("anglesy", 0.0);
  *(float *)&v10[1] = 0.0;
  sub_1022A940("anglesz", 0.0);
  *(float *)&v10[2] = 0.0;
  sub_1022A940("sizex", 0.0);
  v7[0] = 0.0;
  sub_1022A940("sizey", 0.0);
  v7[1] = 0.0;
  sub_1022A940("sizez", 0.0);
  v7[2] = 0.0;
  sub_1022A940("velx", 0.0);
  v8[0] = 0.0;
  sub_1022A940("vely", 0.0);
  v8[1] = 0.0;
  sub_1022A940("velz", 0.0);
  v8[2] = 0.0;
  sub_1022AA10((int)&v11, "color");
  v0 = (_BYTE *)sub_1022B4C0("model", (int)Locale);
  if ( *v0 )
    v14 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, v0);
  else
    v14 = 0;
  v1 = sub_1022A800("randomization", 0);
  v12 = v1;
  v2 = sub_1022A800("count", 0);
  sub_1022A940("duration", 0.0);
  v13 = 0.0;
  v3 = sub_1022A800("flags", 0);
  v5 = (float)v12;
  ((void (__thiscall *)(void ***, int *, int *, float *, float *, _DWORD, _DWORD, int, int, int))(*off_103E9C2C)[13])(
    off_103E9C2C,
    v9,
    v10,
    v7,
    v8,
    LODWORD(v5),
    LODWORD(v13),
    v2,
    v14,
    v3);
  v6 = (float)v14;
  return sub_10167140(v1, v7, v8, (float *)v9, (float *)v10, (int)v13, v2, v6, v3);
}

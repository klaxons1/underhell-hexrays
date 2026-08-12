int sub_10174840()
{
  _BYTE *v0; // eax
  int v1; // edi
  int v2; // esi
  float v4[3]; // [esp+2Ch] [ebp-20h] BYREF
  float v5[3]; // [esp+38h] [ebp-14h] BYREF
  int v6; // [esp+44h] [ebp-8h]
  float v7; // [esp+48h] [ebp-4h]

  sub_1022A940("originx", 0.0);
  v4[0] = 0.0;
  sub_1022A940("originy", 0.0);
  v4[1] = 0.0;
  sub_1022A940("originz", 0.0);
  v4[2] = 0.0;
  sub_1022A940("directionx", 0.0);
  v5[0] = 0.0;
  sub_1022A940("directiony", 0.0);
  v5[1] = 0.0;
  sub_1022A940("directionz", 0.0);
  v5[2] = 0.0;
  v0 = (_BYTE *)sub_1022B4C0("model", (int)Locale);
  if ( *v0 )
    v1 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, v0);
  else
    v1 = 0;
  v6 = sub_1022A800("speed", 0);
  sub_1022A940("noise", 0.0);
  v7 = 0.0;
  v2 = sub_1022A800("count", 0);
  ((void (__thiscall *)(void ***, float *, float *, int, int, int, int))(*off_103E9C2C)[23])(
    off_103E9C2C,
    v4,
    v5,
    v1,
    v2,
    (int)((double)v6 * 0.2),
    (int)((float)0.0 * 100.0));
  return sub_101745A0(v1, v4, v5, v6, v7, v2);
}

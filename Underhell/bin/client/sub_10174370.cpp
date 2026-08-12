int sub_10174370()
{
  _BYTE *v0; // eax
  int v1; // edi
  int v2; // eax
  void *v3; // edx
  int v4; // esi
  float v6; // [esp+20h] [ebp-2Ch]
  float v7[4]; // [esp+38h] [ebp-14h] BYREF
  float v8; // [esp+48h] [ebp-4h]

  sub_1022A940("originx", 0.0);
  v7[0] = 0.0;
  sub_1022A940("originy", 0.0);
  v7[1] = 0.0;
  sub_1022A940("originz", 0.0);
  v7[2] = 0.0;
  v0 = (_BYTE *)sub_1022B4C0("model", (int)Locale);
  if ( *v0 )
    v1 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, v0);
  else
    v1 = 0;
  sub_1022A940("scale", 0.0);
  v8 = 0.0;
  v2 = sub_1022A800("brightness", 0);
  v3 = (*off_103E9C2C)[20];
  v4 = v2;
  LODWORD(v7[3]) = v2;
  v6 = (double)v2 * 0.00392156862745098;
  ((void (__stdcall *)(float *, float *, _DWORD, int, int, _DWORD, _DWORD, _DWORD, int, float *))v3)(
    v7,
    &flt_10459240,
    0.0,
    v1,
    5,
    0,
    LODWORD(v6),
    0.0,
    256,
    &flt_10459240);
  return sub_10174130(v1, v7, v8, v4);
}

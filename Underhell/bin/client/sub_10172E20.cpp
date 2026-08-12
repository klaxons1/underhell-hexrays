int sub_10172E20()
{
  int v0; // ebx
  _BYTE *v1; // eax
  int v2; // edi
  int v3; // esi
  float v5[3]; // [esp+10h] [ebp-28h] BYREF
  float v6[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v7[3]; // [esp+28h] [ebp-10h] BYREF
  int v8; // [esp+34h] [ebp-4h]

  v0 = sub_1022A800("skin", 0);
  sub_1022A940("originx", 0.0);
  v7[0] = 0.0;
  sub_1022A940("originy", 0.0);
  v7[1] = 0.0;
  sub_1022A940("originz", 0.0);
  v7[2] = 0.0;
  sub_1022A940("anglesx", 0.0);
  v5[0] = 0.0;
  sub_1022A940("anglesy", 0.0);
  v5[1] = 0.0;
  sub_1022A940("anglesz", 0.0);
  v5[2] = 0.0;
  sub_1022A940("velx", 0.0);
  v6[0] = 0.0;
  sub_1022A940("vely", 0.0);
  v6[1] = 0.0;
  sub_1022A940("velz", 0.0);
  v6[2] = 0.0;
  v1 = (_BYTE *)sub_1022B4C0("model", (int)Locale);
  if ( *v1 )
    v2 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_10413178 + 8))(dword_10413178, v1);
  else
    v2 = 0;
  LOBYTE(v8) = sub_1022A800("breakmodel", 0) != 0;
  v3 = sub_1022A800("effects", 0);
  ((void (__thiscall *)(void ***, int, int, float *, float *, float *, _DWORD, int))(*off_103E9C2C)[29])(
    off_103E9C2C,
    v2,
    v0,
    v7,
    v5,
    v6,
    (unsigned __int8)v8,
    v3);
  return sub_10172A30(v2, v5, v6, v7, v8, v0, v3);
}

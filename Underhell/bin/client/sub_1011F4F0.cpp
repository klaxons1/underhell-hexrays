int __thiscall sub_1011F4F0(_BYTE *this)
{
  int result; // eax
  _DWORD v2[17]; // [esp+4h] [ebp-B0h] BYREF
  _DWORD v3[7]; // [esp+48h] [ebp-6Ch] BYREF
  _DWORD v4[7]; // [esp+64h] [ebp-50h] BYREF
  float v5[3]; // [esp+80h] [ebp-34h] BYREF
  _DWORD v6[3]; // [esp+8Ch] [ebp-28h] BYREF
  _DWORD v7[4]; // [esp+98h] [ebp-1Ch] BYREF
  char v8; // [esp+A8h] [ebp-Ch]
  int v9; // [esp+ACh] [ebp-8h] BYREF
  __int16 v10; // [esp+B0h] [ebp-4h]
  char v11; // [esp+B2h] [ebp-2h]

  if ( this[12] )
  {
    v5[0] = 0.0;
    v5[1] = 2000.0;
    v2[15] = "Fog override";
    v5[2] = 1.0;
    v3[5] = "Fog override";
    v2[16] = "Fog force enabled";
    v3[6] = "Fog force enabled";
    v8 = 1;
    v11 = 1;
    v2[0] = "Draw players";
    v2[1] = "Draw weapons";
    v2[2] = "Draw static props";
    v2[3] = "Draw misc";
    v2[4] = "Draw translucents";
    v2[5] = "Draw water";
    v2[6] = "Draw world";
    v2[7] = "Draw particles";
    v2[8] = "Draw ropes";
    v2[9] = "Draw skybox (2D)";
    v2[10] = "Clip skybox";
    v2[11] = "Clear color";
    v2[12] = "Clear depth";
    v2[13] = "Clear stencil";
    v2[14] = "Clear obey stencil";
    v7[0] = 16843009;
    v7[1] = 16843009;
    v7[2] = 16777473;
    v7[3] = 1;
    v4[0] = "Clear color R (0-255)";
    v4[1] = "Clear color G (0-255)";
    v4[2] = "Clear color B (0-255)";
    v4[3] = "Clear color A (0-255)";
    v4[4] = "Fog color R (0-255)";
    v4[5] = "Fog color G (0-255)";
    v4[6] = "Fog color B (0-255)";
    v6[0] = "Fog start (units)";
    v6[1] = "Fog end (units)";
    v6[2] = "Fog density (0-1)";
    v3[0] = "Hide default viewmodel";
    v3[1] = "Clear color";
    v3[2] = "Clear depth";
    v3[3] = "Clear stencil";
    v3[4] = "Clear obey stencil";
    v9 = 65792;
    v10 = 0;
    (*(void (__thiscall **)(int, const char *, int (__cdecl *)(int, _DWORD *, float *), _DWORD *, _DWORD *, int, _DWORD *, _DWORD, int, _DWORD *, float *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_104376B8 + 48))(
      dword_104376B8,
      "General view",
      sub_1011F040,
      v2,
      v7,
      17,
      v4,
      0,
      7,
      v6,
      v5,
      3,
      0,
      0,
      0);
    (*(void (__thiscall **)(int, const char *, int (__usercall *)@<eax>(int@<esi>, _BYTE *, unsigned __int8 *, float *), _DWORD *, int *, int, _DWORD *, _DWORD, int, _DWORD *, float *, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_104376B8 + 48))(
      dword_104376B8,
      "Viewmodel view",
      sub_1011F1C0,
      v3,
      &v9,
      7,
      v4,
      0,
      7,
      v6,
      v5,
      3,
      0,
      0,
      0);
    return (*(int (__thiscall **)(int))(*(_DWORD *)dword_104376B8 + 52))(dword_104376B8);
  }
  return result;
}

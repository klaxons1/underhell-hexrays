void __stdcall sub_10343510(int a1, int a2)
{
  double v2; // st7
  int (__thiscall *v3)(int); // eax
  int v4; // eax
  void (__thiscall *v5)(int, _BYTE *); // edx
  _BYTE v6[8]; // [esp+4h] [ebp-18h] BYREF
  float v7; // [esp+Ch] [ebp-10h]
  float v8; // [esp+18h] [ebp-4h]

  if ( a1 && a2 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v2 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 576))(a1) + 8) - *(float *)(a1 + 588);
    v3 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 576);
    v8 = v2 * 0.25;
    v4 = v3(a1);
    v5 = *(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 504);
    v8 = *(float *)(v4 + 8) - v8;
    v5(a1, v6);
    *(float *)(a2 + 8) = v8 + (v7 - v8) * 0.5;
  }
}

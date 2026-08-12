int __usercall sub_10144D60@<eax>(int a1@<esi>)
{
  int result; // eax
  int v2; // esi
  float *v3; // eax
  double v4; // st7
  _BYTE v5[12]; // [esp+0h] [ebp-18h] BYREF
  float v6[3]; // [esp+Ch] [ebp-Ch] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C);
  if ( result == 1 )
  {
    v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a1);
    if ( v2 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    v3 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v2 + 612))(v2, v5);
    v4 = *v3;
    flt_103E7EFC = *v3;
    flt_103E7F00 = v3[1];
    flt_103E7F04 = v3[2];
    v6[0] = v4 * 0.25;
    v6[1] = flt_103E7F00 * 0.25;
    v6[2] = 0.25 * flt_103E7F04;
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v2 + 608))(v2, v6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
  }
  return result;
}

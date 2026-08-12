double __usercall sub_1039F360@<st0>(int a1@<ecx>, double a2@<st0>)
{
  int v2; // esi
  double v3; // st7
  double v4; // st6
  float v6[3]; // [esp+4h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(a1 + 424);
  if ( *(_DWORD *)(a1 + 3812) != -1
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 3812) & 0xFFF) + 2] == *(_DWORD *)(a1 + 3812) >> 12
    && off_1061BE18[4 * (*(_DWORD *)(a1 + 3812) & 0xFFF) + 1]
    || *(_BYTE *)(a1 + 3808)
    || !v2
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2) )
  {
    return 0.0;
  }
  (*(void (__thiscall **)(int, _DWORD, float *))(*(_DWORD *)v2 + 204))(v2, 0, v6);
  sub_100D7A40(v6);
  v3 = a2 - 90.0;
  v4 = 720.0;
  if ( v3 <= 720.0 && (v4 = 1.0, v3 >= 1.0) )
    return v3 * 0.0013888889;
  else
    return v4 * 0.0013888889;
}

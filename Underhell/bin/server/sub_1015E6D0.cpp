int __stdcall sub_1015E6D0(float *a1)
{
  int v1; // edi
  float v3[3]; // [esp+Ch] [ebp-Ch] BYREF

  v1 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 1404))(a1);
  if ( (*(_DWORD *)(v1 + 252) & 0x800) != 0 )
    sub_100DAE60(v1);
  v3[0] = *(float *)(v1 + 580);
  v3[1] = *(float *)(v1 + 584);
  v3[2] = *(float *)(v1 + 588) + 1.0;
  sub_100E10C0((int)a1, v3);
  sub_100DD660((int)a1, &flt_106F1CA8);
  sub_100E11A0((int)a1, (float *)(v1 + 728));
  sub_100F5E90(a1 + 576, &flt_106F1CB4);
  sub_100F5EF0(a1 + 579, &flt_106F1CB4);
  sub_101E1CC0(v1 + 728, 0);
  return v1;
}

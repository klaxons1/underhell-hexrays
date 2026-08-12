int __userpurge sub_102AA620@<eax>(int a1@<ecx>, int a2@<edi>, int a3, int a4, float a5, float a6)
{
  int v7; // edi
  int result; // eax

  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 4))(a1, a3);
  *(float *)(a1 + 48) = a5;
  *(_DWORD *)(a1 + 60) = a4;
  *(float *)(a1 + 44) = a6;
  if ( a6 <= 0.0 )
  {
    DevMsg("ERROR: Invalid spotlight length <= 0, setting to 500\n");
    *(float *)(a1 + 44) = 500.0;
  }
  *(_DWORD *)(a1 + 52) = sub_100E8220(a2, "sprites/light_glow03.vmt");
  sub_100E8220(a2, "sprites/glow_test02.vmt");
  *(float *)(a1 + 16) = flt_106F1CA8;
  *(float *)(a1 + 20) = flt_106F1CAC;
  *(float *)(a1 + 24) = flt_106F1CB0;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = -1;
  v7 = *(_DWORD *)(a1 + 4);
  if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(a1 + 4));
  result = sub_10422220(v7 + 704, a1 + 28);
  *(float *)(a1 + 64) = 0.0;
  *(float *)(a1 + 68) = 0.0;
  *(float *)(a1 + 72) = 0.0;
  *(float *)(a1 + 76) = 1.0;
  *(float *)(a1 + 40) = *(float *)(a1 + 44);
  return result;
}

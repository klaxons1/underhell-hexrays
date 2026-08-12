void __stdcall sub_101C1200(int a1, float *a2)
{
  int v2; // edx
  double v3; // st7
  float v4; // eax
  int v5; // ecx
  double v6; // st7
  int v7; // [esp+4h] [ebp-Ch] BYREF
  float v8; // [esp+8h] [ebp-8h]
  int v9; // [esp+Ch] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1 + 320))(a1) )
  {
    v2 = *(_DWORD *)(a1 + 496);
    v3 = a2[28];
    v7 = *(_DWORD *)(a1 + 488);
    v8 = v3;
    v9 = v2;
    sub_100D7260((float *)a1, (float *)&v7);
    *(_DWORD *)(a1 + 3264) = 2;
    *(float *)(a1 + 3268) = *(float *)(a1 + 3268) + a2[27];
    *(float *)(a1 + 3272) = a2[28] + *(float *)(a1 + 3272);
    *(float *)(a1 + 3276) = a2[29] + *(float *)(a1 + 3276);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v4 = *(float *)(a1 + 708);
    v5 = *(_DWORD *)(a1 + 712);
    v7 = *(_DWORD *)(a1 + 704);
    v6 = a2[28] + v4;
    v9 = v5;
    v8 = v6;
    sub_100E0EA0(a1, (float *)&v7);
  }
}

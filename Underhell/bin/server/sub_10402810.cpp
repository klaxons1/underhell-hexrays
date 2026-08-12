void __usercall sub_10402810(int a1@<ecx>, float a2@<ebx>)
{
  int v3; // eax
  _DWORD *v4; // edi
  double v5; // st7
  float v6[19]; // [esp+4h] [ebp-64h] BYREF
  _DWORD *v7; // [esp+50h] [ebp-18h]
  float v8[3]; // [esp+58h] [ebp-10h] BYREF
  float v9; // [esp+64h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(a1 + 1400) && (*(_DWORD *)(a1 + 192) & 0x20) == 0 )
  {
    v3 = sub_100D1940((_DWORD *)a1);
    v4 = (_DWORD *)v3;
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) && !*(_BYTE *)(a1 + 1393) )
      {
        sub_103FBAC0(v4, v6);
        if ( 1.0 != v6[11]
          && v7
          && (v8[0] = v6[3] - v6[0],
              v8[1] = v6[4] - v6[1],
              v5 = v6[5] - v6[2],
              v8[2] = v5,
              sub_100D7A40(v8),
              v9 = v5,
              sub_103FB1B0() >= v9)
          && (sub_103FB260((_DWORD *)a1, v7) || sub_101FB220((int)v7, (int)v4)) )
        {
          *(_DWORD *)(a1 + 1396) = -1;
          sub_10401440(a1, a2);
        }
        else if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(a1 + 1420) && *(_DWORD *)(a1 + 1396) == -1 )
        {
          *(_DWORD *)(a1 + 1396) = 1;
          *(float *)(a1 + 1420) = *(float *)(dword_106B31C8 + 12) + 0.5;
        }
      }
    }
  }
}

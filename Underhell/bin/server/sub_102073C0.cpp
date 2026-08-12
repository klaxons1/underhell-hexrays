double __cdecl sub_102073C0(int a1, int a2)
{
  double v2; // st7
  int v3; // ebx
  double v4; // st7
  float v6; // [esp+Ch] [ebp+8h]

  v2 = *(float *)(a1 + 52);
  v3 = *(_DWORD *)(a1 + 64);
  v6 = *(float *)(a1 + 52);
  if ( (v3 & 2) != 0 )
  {
    if ( (v3 & 0x20000000) != 0 )
    {
      if ( a2 )
      {
        v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 12))(a2);
        v2 = (v4 + v4) * v6;
      }
      else
      {
        v2 = v2 * (*(float *)(dword_106C1D1C + 44) + *(float *)(dword_106C1D1C + 44));
      }
    }
    else if ( a2 )
    {
      v2 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 12))(a2) * v6;
    }
    else
    {
      v2 = v2 * *(float *)(dword_106C1D1C + 44);
    }
    v6 = v2;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    if ( a2 )
      v2 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 16))(a2) * v6;
    else
      v2 = v2 * *(float *)(dword_106C1D64 + 44);
    v6 = v2;
  }
  if ( (v3 & 0x40) != 0 )
  {
    if ( a2 )
      v2 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 20))(a2) * v6;
    else
      v2 = v2 * *(float *)(dword_106C1DAC + 44);
    v6 = v2;
  }
  if ( (v3 & 4) != 0 && (v3 & 1) != 0 )
    v6 = v2 * 10.0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 64))(dword_106B3CDC, v3) )
    return 0.0;
  else
    return v6;
}

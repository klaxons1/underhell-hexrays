int __thiscall sub_1035CFA0(int this, int a2)
{
  double v4; // st7
  float v5; // [esp+8h] [ebp-Ch]
  float v6; // [esp+Ch] [ebp-8h]

  if ( sub_100223E0((_DWORD *)this) == 2 && a2 == 1 )
    return 26;
  if ( a2 != 26 )
    return sub_1002CC40((_DWORD *)this, a2);
  if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 3656) )
  {
    if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 100) > 50
      || *(_BYTE *)(this + 3660)
      || *((float *)sub_10019660((_DWORD *)this) + 2) >= 0.0 )
    {
      v6 = 5.0;
      *(_BYTE *)(this + 3660) = 0;
      v4 = 3.0;
    }
    else
    {
      v6 = 4.0;
      *(_BYTE *)(this + 3660) = 1;
      v4 = 1.0;
    }
    v5 = v4;
    *(float *)(this + 3656) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                LODWORD(v5),
                                LODWORD(v6))
                            + *(float *)(dword_106B31C8 + 12);
  }
  if ( *(_BYTE *)(this + 3660) != 1 )
    return 26;
  return dword_106E7AD8;
}

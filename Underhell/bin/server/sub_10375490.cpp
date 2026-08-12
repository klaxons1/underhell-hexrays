void __thiscall sub_10375490(int this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  int v5; // eax
  double v6; // st7
  int v7; // ecx

  if ( *(float *)(a2 + 52) > 0.0 )
  {
    v3 = *(_DWORD *)(a2 + 44);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v3 >> 12 )
      v4 = 0;
    else
      v4 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
    {
      if ( sub_10050FC0((_DWORD *)this) )
      {
        v5 = sub_10050FC0((_DWORD *)this);
        if ( sub_100538F0(v5, 0) > 1
          && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 2796) + 80) )
        {
          v6 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                 dword_106B31E4,
                 15.0,
                 25.0)
             + *(float *)(dword_106B31C8 + 12);
          v7 = *(_DWORD *)(this + 4);
          *(float *)(this + 236) = v6;
          *(float *)(*(_DWORD *)(v7 + 2796) + 80) = v6 + 1.0;
        }
      }
    }
  }
}

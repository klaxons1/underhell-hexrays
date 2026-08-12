void __thiscall sub_10060FD0(int this)
{
  int v2; // edi
  int v3; // eax
  double v4; // st7
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  int v8; // eax
  int v9; // edi
  double v10; // st7
  double v11; // st7
  float v12; // [esp+8h] [ebp-10h]
  float v13; // [esp+14h] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 220)
    || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 240)
    || (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 296))(*(_DWORD *)(this + 4)) )
  {
    v5 = *(_DWORD *)(this + 4);
    *(float *)(this + 232) = 0.0;
    *(float *)(this + 236) = 0.0;
    *(float *)(this + 228) = 0.0;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 296))(v5) )
      *(float *)(this + 240) = *(float *)(dword_106B31C8 + 12) + 0.3;
  }
  else
  {
    v2 = *(_DWORD *)(this + 4);
    if ( (*(_DWORD *)(v2 + 252) & 0x800) != 0 )
      sub_100DAE60(*(_DWORD *)(this + 4));
    if ( *(float *)(v2 + 708) != *(float *)(this + 224) )
    {
      v13 = *(float *)(this + 224);
      v3 = sub_10060AC0((_DWORD *)this);
      v4 = v13;
      sub_10424C10(v13, *(float *)(v3 + 4));
      if ( v13 >= 0.0 )
        *(float *)(this + 236) = v4 + *(float *)(this + 236);
      else
        *(float *)(this + 232) = *(float *)(this + 232) - v4;
      *(float *)(this + 224) = *(float *)(sub_10060AC0((_DWORD *)this) + 4);
    }
    *(float *)(this + 228) = *(float *)(this + 236) + *(float *)(this + 232) + *(float *)(this + 228);
    *(float *)(this + 228) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                               dword_106B31E4,
                               0.40000001,
                               0.60000002)
                           + *(float *)(this + 228);
  }
  if ( *(float *)(this + 228) > 15.0 )
  {
    if ( *(float *)(this + 236) >= (double)*(float *)(this + 232) )
      v6 = sub_10078340(158);
    else
      v6 = sub_10078340(157);
    v7 = 0.0;
    *(float *)(this + 232) = 0.0;
    *(float *)(this + 236) = 0.0;
    if ( v6 != -1 )
    {
      v8 = sub_100C7460(v6, 1);
      v9 = v8;
      if ( v8 == -1 )
      {
        v11 = *(float *)(dword_106B31C8 + 12) + 0.3;
      }
      else
      {
        sub_100C60B0(v8, 100);
        v10 = 0.80000001;
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 0.80000001, 1.2);
        if ( *(float *)(this + 228) > 90.0 )
          v10 = 0.80000001 * 1.5;
        v12 = v10;
        sub_100C4EE0(v9, v12);
        v11 = sub_100C5400(v9) + *(float *)(dword_106B31C8 + 12);
      }
      *(float *)(this + 240) = v11;
      v7 = 0.0;
    }
    *(float *)(this + 232) = v7;
    *(float *)(this + 236) = v7;
    *(float *)(this + 228) = v7;
  }
}

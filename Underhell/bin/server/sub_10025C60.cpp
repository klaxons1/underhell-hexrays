char __thiscall sub_10025C60(int this)
{
  bool v2; // al
  int v3; // ecx
  double v5; // st7
  double v6; // st7

  if ( 3.4028235e38 == flt_105FE47C )
    dword_106916F4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)cvar + 52))(cvar, "host_timescale");
  v2 = !*(_BYTE *)(this + 2176) && *(_DWORD *)(dword_106907FC + 48) && *(_DWORD *)(dword_1069064C + 48);
  flt_10690410 = 0.0;
  if ( !v2 || (*(int (**)(void))(g_pVCR + 12))() )
    return 1;
  v3 = *(_DWORD *)(dword_106B31C8 + 4);
  if ( *(_DWORD *)(this + 2172) == v3 )
  {
    sub_100EC4A0(*(float *)(dword_106B31C8 + 12), 0);
    return 0;
  }
  if ( v3 != dword_105FE478 )
  {
    v5 = *(float *)(*(_DWORD *)(dword_106916F4 + 28) + 44);
    if ( v5 < 1.0 )
      v5 = 1.0;
    dword_105FE478 = *(_DWORD *)(dword_106B31C8 + 4);
    flt_105FE47C = v5 * 0.0099999998;
    flt_10690414 = 0.0;
    goto LABEL_16;
  }
  if ( flt_10690414 <= 0.0099999998 || *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2168) > 0.25 )
  {
LABEL_16:
    flt_10690410 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 196))(dword_106B31D0);
    v6 = *(float *)(this + 2168);
    *(_DWORD *)(this + 2172) = -1;
    *(_DWORD *)(this + 132) = (int)(v6 / *(float *)(dword_106B31C8 + 28) + 0.5);
    return 1;
  }
  *(_DWORD *)(this + 2172) = v3;
  sub_100EC4A0(*(float *)(dword_106B31C8 + 12), 0);
  return 0;
}

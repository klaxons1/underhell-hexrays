void __thiscall sub_100612F0(int this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // edi

  if ( *(_DWORD *)(this + 148) == -1 )
  {
    v2 = *(_DWORD *)(this + 4);
    v3 = *(_DWORD *)(v2 + 908);
    *(_DWORD *)(this + 148) = v3;
    *(float *)(this + 180) = *(float *)(v2 + 904);
    *(float *)(this + 184) = 0.40000001;
    *(_DWORD *)(this + 152) = -1;
    v4 = sub_100C71D0(v3, 0);
    *(_DWORD *)(this + 140) = v4;
    sub_100C6460(v4, 0.0);
    sub_100C4EE0(*(_DWORD *)(this + 140), 0.0);
    sub_100C4F40(*(_DWORD *)(this + 140), 1);
    sub_100C6320(*(_DWORD *)(this + 140), *(float *)(this + 180), *(float *)(this + 180));
    *(float *)(this + 156) = 0.0;
  }
  if ( *(_DWORD *)(this + 168) == -1 )
    sub_10060AE0(this);
  v5 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(this + 4));
  *(float *)(this + 208) = *(float *)(v5 + 580);
  *(float *)(this + 212) = *(float *)(v5 + 584);
  *(float *)(this + 216) = *(float *)(v5 + 588);
  v6 = *(_DWORD *)(this + 4);
  if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
    sub_100DAE60(*(_DWORD *)(this + 4));
  *(float *)(this + 196) = *(float *)(v6 + 580);
  *(float *)(this + 200) = *(float *)(v6 + 584);
  *(float *)(this + 204) = *(float *)(v6 + 588);
  *(_BYTE *)(this + 136) = 0;
}

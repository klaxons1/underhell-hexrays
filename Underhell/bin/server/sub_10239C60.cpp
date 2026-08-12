int __thiscall sub_10239C60(int this)
{
  double v2; // st7
  int v3; // ecx
  const char *v4; // eax
  int v5; // edx
  int v6; // edx
  const char *v8; // edi
  const char *v9; // eax
  double v10; // [esp+0h] [ebp-20h]
  double v11; // [esp+8h] [ebp-18h]
  double v12; // [esp+10h] [ebp-10h]

  v2 = *(float *)(this + 800);
  v3 = 0;
  if ( v2 > 0.0 && (*(_BYTE *)(this + 248) & 1) == 0 )
    v3 = (int)(__FYL2X__(v2 * 0.027777778, 0.3010299956639811952) * 20.0 + 40.0);
  *(_DWORD *)(this + 808) = v3;
  sub_10238160(this);
  v4 = *(const char **)(this + 920);
  if ( !v4 )
    v4 = String;
  if ( *(_DWORD *)(this + 920) && strlen(v4) )
  {
    sub_10112C00(this + 320, 0);
    sub_100E0970(this, v5, 0, 0);
    sub_100EC3F0((_DWORD *)this, (int)sub_10239840, 0.0, 0);
    sub_100EC4A0((int *)this, -1.0, 0);
    *(_BYTE *)(this + 913) = (*(_BYTE *)(this + 248) & 0x20) == 0;
    *(_BYTE *)(this + 912) = 0;
    *(_DWORD *)(this + 928) = -1;
    v6 = *(_DWORD *)this;
    *(_DWORD *)(this + 932) = -1;
    (*(void (__thiscall **)(int))(v6 + 100))(this);
    return sub_102384A0((_DWORD *)this);
  }
  else
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v8 = *(const char **)(this + 92);
    if ( !v8 )
      v8 = String;
    v12 = *(float *)(this + 588);
    v11 = *(float *)(this + 584);
    v10 = *(float *)(this + 580);
    v9 = sub_100D6390((_DWORD *)this);
    Warning("Empty %s (%s) at %.2f, %.2f, %.2f\n", v8, v9, v10, v11, v12);
    return sub_1025FAC0(this);
  }
}

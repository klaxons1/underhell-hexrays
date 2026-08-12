int __thiscall sub_1040EDE0(int this, float a2, float a3, float a4, float a5, float a6, float a7, float a8)
{
  _DWORD *v9; // edi
  void (__thiscall *v10)(_DWORD *); // eax
  int *v11; // ecx
  int v12; // ecx
  float v14; // [esp+0h] [ebp-1Ch]
  float v15[3]; // [esp+10h] [ebp-Ch] BYREF

  sub_100EC3F0((_DWORD *)this, (int)sub_1040E150, 0.0, 0);
  v14 = *(float *)(dword_106B31C8 + 12) + a6;
  sub_100EC4A0((int *)this, v14, 0);
  v9 = (_DWORD *)sub_101811E0("grenade_beam_chaser", -1);
  sub_100E10C0((int)v9, (float *)(this + 716));
  v10 = *(void (__thiscall **)(_DWORD *))(*v9 + 96);
  v9[280] = this;
  v10(v9);
  *(_DWORD *)(this + 2176) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v9 + 8))(v9);
  *(float *)(this + 2160) = a5;
  v15[0] = a2 * a5;
  v15[1] = a3 * a5;
  v15[2] = a5 * a4;
  sub_100DD660(this, v15);
  *(float *)(this + 2164) = a7;
  if ( *(_DWORD *)(this + 2128) != LODWORD(a8) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
        sub_100194B0(v11, 2128);
    }
    *(float *)(this + 2128) = a8;
  }
  v12 = *(_DWORD *)(this + 252) >> 11;
  *(float *)(this + 2168) = *(float *)(dword_106B31C8 + 12);
  if ( (v12 & 1) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 2144) = *(float *)(this + 580);
  *(float *)(this + 2148) = *(float *)(this + 584);
  *(float *)(this + 2152) = *(float *)(this + 588);
  *(float *)(this + 2172) = 0.0;
  sub_1040E950(this);
  return sub_1040E3B0(this);
}

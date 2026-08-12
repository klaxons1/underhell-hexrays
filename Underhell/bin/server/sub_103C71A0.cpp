int __thiscall sub_103C71A0(int this, float a2)
{
  int v3; // ebx
  int v4; // ecx
  double v5; // st7
  int v6; // edi
  int i; // esi
  int v8; // ecx
  _DWORD v10[16]; // [esp+Ch] [ebp-6Ch] BYREF
  _DWORD v11[5]; // [esp+4Ch] [ebp-2Ch] BYREF
  float v12[3]; // [esp+60h] [ebp-18h] BYREF
  float v13[3]; // [esp+6Ch] [ebp-Ch] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v4 = *(_DWORD *)(this + 252) >> 11;
  v5 = a2;
  v13[0] = *(float *)(this + 580) + a2;
  v13[1] = a2 + *(float *)(this + 584);
  v13[2] = a2 + *(float *)(this + 588);
  if ( (v4 & 1) != 0 )
  {
    sub_100DAE60(this);
    v5 = a2;
  }
  v12[0] = *(float *)(this + 580) - v5;
  v12[1] = *(float *)(this + 584) - v5;
  v12[2] = *(float *)(this + 588) - v5;
  sub_1025F990(v11, (int)v10, 16, 0x2000);
  v6 = sub_1025F9C0((int)v12, (int)v13, (int)v11);
  for ( i = 0; i < v6; ++i )
  {
    v8 = v10[i];
    if ( v8 && (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 220))(v8) == 4 )
      ++v3;
  }
  return v3;
}

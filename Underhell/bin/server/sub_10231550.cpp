int __thiscall sub_10231550(int this)
{
  _DWORD *v2; // eax
  int v3; // eax
  double v4; // st7
  double v5; // st7
  int result; // eax
  __int64 v7; // [esp+0h] [ebp-14h]
  float v8; // [esp+4h] [ebp-10h]
  float v9; // [esp+4h] [ebp-10h]
  float v10; // [esp+8h] [ebp-Ch]
  float v11; // [esp+10h] [ebp-4h]
  float v12; // [esp+10h] [ebp-4h]

  v2 = sub_102306B0(this);
  if ( v2 )
  {
    v3 = sub_102307E0(this, (int)v2);
    v4 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)dword_106B31D0 + 140))(dword_106B31D0, v3);
    v10 = v4 + *(float *)(this + 816);
    HIDWORD(v7) = this;
    LODWORD(v7) = 0;
    sub_1010DD80((_DWORD *)(this + 868), v7, v10);
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
      sub_1025FAC0(this);
    v11 = v4;
    v5 = *(float *)(this + 812) + v11 + 0.1;
    v12 = v5;
    if ( v5 < 0.0 )
      v12 = 0.0;
    sub_100EC3F0((_DWORD *)this, (int)&loc_10231630, 0.0, 0);
    v8 = *(float *)(dword_106B31C8 + 12) + v12 + *(float *)(this + 816);
    result = sub_100EC4A0((int *)this, v8, 0);
    *(_BYTE *)(this + 832) = 0;
  }
  else
  {
    v9 = *(float *)(this + 816) + *(float *)(dword_106B31C8 + 12) + 0.5;
    return sub_100EC4A0((int *)this, v9, 0);
  }
  return result;
}

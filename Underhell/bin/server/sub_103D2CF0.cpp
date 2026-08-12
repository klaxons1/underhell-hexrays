int __thiscall sub_103D2CF0(int this)
{
  int v2; // ecx
  double v3; // st7
  double v4; // st7
  int v5; // ecx
  int result; // eax
  unsigned int v7; // eax
  int v8; // eax
  float v9; // [esp+10h] [ebp-18h]
  float v10; // [esp+14h] [ebp-14h]
  float v11; // [esp+1Ch] [ebp-Ch] BYREF
  float v12; // [esp+20h] [ebp-8h]
  float v13; // [esp+24h] [ebp-4h]

  v2 = *(_DWORD *)(this + 424);
  *(_BYTE *)(this + 1145) = 1;
  *(_BYTE *)(this + 1140) = 0;
  (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v2 + 204))(v2, &v11, 0);
  v3 = off_10689714();
  if ( v3 <= 25.0 )
  {
    sub_100EC3F0((_DWORD *)this, 0, *(float *)(dword_106B31C8 + 12), off_1067E564);
    v7 = *(_DWORD *)(this + 1168);
    if ( v7 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 2] != v7 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(this + 1168) & 0xFFF) + 1];
    v10 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            dword_106B31E4,
            *(float *)(v8 + 812),
            *(float *)(v8 + 816));
    result = sub_103D23F0(this, v10);
    *(_BYTE *)(this + 1145) = 0;
  }
  else
  {
    v4 = v3 * 0.40000001;
    v5 = *(_DWORD *)(this + 424);
    v11 = v11 * v4;
    v12 = v12 * v4;
    v13 = v4 * v13;
    (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v5 + 196))(v5, &v11, 0);
    v9 = *(float *)(dword_106B31C8 + 12) + 0.0099999998;
    return sub_100EC3F0((_DWORD *)this, (int)sub_103D2CF0, v9, off_1067E564);
  }
  return result;
}

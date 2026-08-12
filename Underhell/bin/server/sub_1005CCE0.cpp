int __thiscall sub_1005CCE0(_DWORD *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int result; // eax
  _BYTE *v5; // esi
  int v6; // edi
  float v7[3]; // [esp+10h] [ebp-10h] BYREF
  int v8; // [esp+1Ch] [ebp-4h]

  v2 = this[5];
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (this[5] & 0xFFF) + 1], result = v2 >> 12, v3[1] != result) || !*v3 )
  {
    result = sub_100BEF30("zipline");
    v8 = result;
    if ( result != -1 )
    {
      v5 = (_BYTE *)sub_100FB5C0((int)"cable/cable.vmt", 1.0);
      sub_1005C620(v5 + 116, 150, 150, 150, HIBYTE(*((_DWORD *)v5 + 29)));
      sub_1005C3A0((int)v5, 0.30000001);
      sub_1005C410((int)v5, 0.30000001);
      v6 = this[1];
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
        sub_100DAE60(this[1]);
      v7[0] = *(float *)(v6 + 580);
      v7[1] = *(float *)(v6 + 584);
      v7[2] = *(float *)(v6 + 588) + 80.0;
      sub_100FAD20(v7, v6);
      sub_1005BC90((int)v5, v8);
      result = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 8))(v5);
      this[5] = result;
    }
  }
  return result;
}

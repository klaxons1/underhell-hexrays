unsigned int __thiscall sub_102CB6F0(float *this)
{
  unsigned int result; // eax
  int *v3; // ecx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  float v7; // ecx
  float v8[24]; // [esp+4h] [ebp-60h] BYREF

  result = *((_DWORD *)this + 353);
  if ( result != -1 )
  {
    v3 = &off_1061BE18[4 * ((_DWORD)this[353] & 0xFFF) + 1];
    result >>= 12;
    if ( v3[1] == result && *v3 && *((_DWORD *)this + 354) )
    {
      sub_1001F130(v8);
      v4 = *((_DWORD *)this + 353);
      if ( v4 == -1 || off_1061BE18[4 * ((_DWORD)this[353] & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * ((_DWORD)this[353] & 0xFFF) + 1];
      v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v5 + 24));
      v7 = this[354];
      v8[14] = 1.0;
      LODWORD(v8[13]) = v6;
      v8[17] = v7;
      return sub_1028E890((int)"AirboatMuzzleFlash", (int)v8);
    }
  }
  return result;
}

void __thiscall sub_101C7180(int this)
{
  unsigned int v2; // eax
  _DWORD *v3; // ecx
  float v4[3]; // [esp+4h] [ebp-18h] BYREF
  float v5; // [esp+10h] [ebp-Ch] BYREF
  float v6; // [esp+14h] [ebp-8h]
  float v7; // [esp+18h] [ebp-4h]

  if ( (*(_BYTE *)(this + 256) & 1) != 0 )
  {
    v2 = *(_DWORD *)(this + 452);
    if ( v2 != -1 && off_1061BE18[4 * (*(_DWORD *)(this + 452) & 0xFFF) + 2] == v2 >> 12 )
    {
      v3 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 452) & 0xFFF) + 1];
      if ( v3 )
      {
        if ( (v3[64] & 0x1000) != 0 )
        {
          (*(void (__thiscall **)(_DWORD *, float *))(*v3 + 564))(v3, &v5);
          if ( (*(_DWORD *)(this + 256) & 0x800000) != 0 )
          {
            v5 = *(float *)(this + 464) + v5;
            v6 = *(float *)(this + 468) + v6;
            v7 = *(float *)(this + 472) + v7;
          }
          sub_100EA940((int *)this, 0x800000);
          v4[1] = v6;
          v4[0] = v5;
          v4[2] = v7;
          sub_100D9710((float *)(this + 464), v4);
        }
      }
    }
  }
}

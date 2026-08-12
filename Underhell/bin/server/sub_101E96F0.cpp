void __thiscall sub_101E96F0(int this)
{
  int v2; // eax
  unsigned int v3; // eax
  int *v4; // ebx
  int v5; // edi
  int v6; // eax
  float v7; // [esp+4h] [ebp-20h]
  float v8[3]; // [esp+18h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 2122) )
  {
    if ( !*(_BYTE *)(this + 2124) )
    {
      v2 = sub_100CF460((_DWORD *)this);
      if ( !v2 || *(_DWORD *)(v2 + 1160) != 183 )
      {
        sub_102DEF10(5.0);
        *(_WORD *)(this + 2124) = 257;
        v3 = *(_DWORD *)(this + 4028);
        if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 4028) & 0xFFF) + 2] != v3 >> 12 )
          v4 = 0;
        else
          v4 = (int *)off_1061BE18[4 * (*(_DWORD *)(this + 4028) & 0xFFF) + 1];
        v5 = *v4;
        v6 = sub_10219A30();
        (*(void (__thiscall **)(int *, int))(v5 + 836))(v4, v6 % 3 + 5);
        v8[0] = -1.0;
        v8[1] = 0.0;
        v8[2] = 0.0;
        sub_100F7A60((float *)this, v8);
        v7 = *(float *)(dword_106B31C8 + 12) + 0.34999999;
        sub_100EC4A0((int *)this, v7, (int)"FlareHitContext");
      }
    }
  }
}

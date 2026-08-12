void __thiscall sub_101AE350(int this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // edi
  _BYTE v6[48]; // [esp+4h] [ebp-6Ch] BYREF
  _BYTE v7[48]; // [esp+34h] [ebp-3Ch] BYREF
  float v8[3]; // [esp+64h] [ebp-Ch] BYREF

  v2 = *(_DWORD *)(this + 816);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        if ( v3[1] == v4 )
          v5 = *v3;
        else
          v5 = 0;
        if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
          sub_100DAE60(v5);
        sub_10424F80(v5 + 500, v6);
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        sub_10421E30(v6, this + 500, v7);
        sub_10421CE0(v7, 3, this + 880);
        if ( (*(_DWORD *)(this + 248) & 8) != 0 )
        {
          sub_10421A90(v7, v8);
          sub_100E11A0(this, v8);
        }
        if ( (*(_DWORD *)(this + 248) & 0x20) != 0 )
        {
          *(float *)(this + 880) = 0.0;
          *(float *)(this + 884) = 0.0;
          *(float *)(this + 888) = 0.0;
        }
      }
    }
  }
}

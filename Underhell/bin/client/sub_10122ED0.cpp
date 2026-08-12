void __thiscall sub_10122ED0(_DWORD *this)
{
  int i; // edi
  int v3; // eax
  int v4; // esi
  double v5; // st7
  float v6; // edx
  float v7; // eax
  double v8; // st7
  int v9; // ecx
  int v10; // eax
  float v11[11]; // [esp+8h] [ebp-44h] BYREF
  int v12[6]; // [esp+34h] [ebp-18h] BYREF

  for ( i = this[6] - 1; i >= 0; --i )
  {
    v3 = this[3];
    v4 = *(_DWORD *)(v3 + 4 * i);
    if ( v4 && *(_DWORD *)(v4 + 68) && (*(_BYTE *)(v4 + 80) & 1) != 0 )
    {
      if ( sub_10121B10(*(_DWORD **)(v3 + 4 * i)) < 0 )
      {
        DevWarning(
          "CSoundPatch::ResumeSound: Lost EHAndle on restore - destroy the sound patch in your entity's StopLoopingSounds! (%s)\n",
          *(const char **)(v4 + 44));
      }
      else
      {
        sub_10013E00(v11);
        v5 = *(float *)(v4 + 72) * *(float *)(v4 + 16);
        v6 = *(float *)(v4 + 44);
        v7 = *(float *)(v4 + 32);
        v11[0] = *(float *)(v4 + 56);
        v11[2] = v5;
        v8 = *(float *)v4;
        v9 = *(_DWORD *)(v4 + 64) | 3;
        v11[1] = v6;
        v11[3] = v7;
        LODWORD(v11[4]) = v9;
        LODWORD(v11[5]) = (int)v8;
        v10 = sub_10121B10((_DWORD *)v4);
        sub_10121280(v4 + 76, v10, (int)v11);
        sub_1011A810(v12);
      }
    }
  }
}

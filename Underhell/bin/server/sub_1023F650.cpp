void __thiscall sub_1023F650(_DWORD *this)
{
  int i; // edi
  int v3; // eax
  int v4; // esi
  const char *v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // eax
  const char *v9; // esi
  int v10; // [esp+8h] [ebp-44h] BYREF
  const char *v11; // [esp+Ch] [ebp-40h]
  float v12; // [esp+10h] [ebp-3Ch]
  int v13; // [esp+14h] [ebp-38h]
  int v14; // [esp+18h] [ebp-34h]
  int v15; // [esp+1Ch] [ebp-30h]
  int v16[6]; // [esp+34h] [ebp-18h] BYREF

  for ( i = this[6] - 1; i >= 0; --i )
  {
    v3 = this[3];
    v4 = *(_DWORD *)(v3 + 4 * i);
    if ( v4 && *(_DWORD *)(v4 + 68) && (*(_BYTE *)(v4 + 80) & 1) != 0 )
    {
      if ( sub_1023DDA0(*(_DWORD **)(v3 + 4 * i)) < 0 )
      {
        v9 = *(const char **)(v4 + 44);
        if ( !v9 )
          v9 = String;
        DevWarning(
          "CSoundPatch::ResumeSound: Lost EHAndle on restore - destroy the sound patch in your entity's StopLoopingSounds! (%s)\n",
          v9);
      }
      else
      {
        sub_100F8510((float *)&v10);
        v5 = *(const char **)(v4 + 44);
        v10 = *(_DWORD *)(v4 + 56);
        v11 = v5;
        if ( !v5 )
          v11 = String;
        v6 = *(float *)(v4 + 72) * *(float *)(v4 + 16);
        v7 = *(_DWORD *)(v4 + 64) | 3;
        v13 = *(_DWORD *)(v4 + 32);
        v12 = v6;
        v14 = v7;
        v15 = (int)*(float *)v4;
        v8 = sub_1023DDA0((_DWORD *)v4);
        sub_1023BE40((_BYTE *)(v4 + 76), v8, (int)&v10);
        sub_102375F0(v16);
      }
    }
  }
}

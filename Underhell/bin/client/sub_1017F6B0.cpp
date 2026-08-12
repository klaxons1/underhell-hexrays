void __thiscall sub_1017F6B0(int this)
{
  unsigned int v2; // ecx
  __int16 **v3; // eax
  unsigned int v4; // ecx
  __int16 *v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  float *v9; // eax
  double v10; // st6
  double v11; // st7
  _BYTE v12[4]; // [esp+4h] [ebp-18h] BYREF
  float v13; // [esp+8h] [ebp-14h]
  float v14; // [esp+Ch] [ebp-10h]
  _BYTE v15[4]; // [esp+10h] [ebp-Ch] BYREF
  float v16; // [esp+14h] [ebp-8h]
  float v17; // [esp+18h] [ebp-4h]

  if ( 0.0 != *(float *)(this + 272) )
  {
    v2 = *(_DWORD *)(this + 284);
    if ( v2 != -1 )
    {
      v3 = (__int16 **)((char *)off_103DCD74 + 16 * (*(_DWORD *)(this + 284) & 0xFFF) + 4);
      v4 = v2 >> 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 284) & 0xFFF) + 2) == v4 )
      {
        if ( *v3 )
        {
          if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 284) & 0xFFF) + 2) == v4 )
            v5 = *v3;
          else
            v5 = 0;
          v6 = *(_DWORD *)dword_10413178;
          v7 = sub_10034480(v5);
          v8 = (*(int (__thiscall **)(int, int))(v6 + 4))(dword_10413178, v7);
          if ( v8 )
          {
            (*(void (__thiscall **)(int, int, _BYTE *, _BYTE *))(*(_DWORD *)dword_10413178 + 28))(
              dword_10413178,
              v8,
              v12,
              v15);
            v9 = *(float **)(this + 280);
            v10 = v13 + (v16 - v13) * 0.5 + v9[13];
            v11 = 0.5 * (v17 - v14) + v14 + v9[14];
            v9[7] = *(float *)(this + 272);
            *(float *)(*(_DWORD *)(this + 280) + 32) = -v10;
            *(float *)(*(_DWORD *)(this + 280) + 36) = -v11;
          }
        }
      }
    }
  }
}

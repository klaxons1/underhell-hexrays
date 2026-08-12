__int16 __thiscall sub_1008C210(int this, unsigned __int16 a2)
{
  int v2; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  int v8; // edx
  __int16 v9; // cx
  int v10; // edx
  double v11; // st6
  double v12; // st5
  double v13; // st7
  int v14; // eax
  int i; // ecx
  float v17[3]; // [esp+Ch] [ebp-18h] BYREF
  float v18[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = 168 * a2;
  v4 = *(_DWORD *)(this + 36);
  v5 = *(_DWORD *)(v4 + v2);
  v6 = v2 + v4;
  v7 = sub_1007A730(off_103DCD78, v5);
  if ( v7 )
  {
    if ( a2 == 0xFFFF )
    {
      v8 = 0;
    }
    else
    {
      v9 = *(_WORD *)(*(_DWORD *)(this + 36) + v2 + 8);
      if ( (v9 & 4) != 0 )
        v10 = *(_BYTE *)(this + 208) != 0;
      else
        v10 = (v9 & 0x10) != 0 ? 3 : 0;
      v8 = v10 + 1;
    }
    (*(void (__thiscall **)(int, float *, float *, int))(*(_DWORD *)v7 + 88))(v7, v17, v18, v8);
    v11 = v18[1] - v17[1];
    v12 = v18[0] - v17[0];
    v13 = v18[2] - v17[2];
    if ( v12 > v11 )
      v11 = v12;
    if ( v11 > v13 )
      v13 = v11;
    v14 = (int)(v13 + v13);
    for ( i = 1; i < v14; i *= 2 )
      ;
    LOWORD(v7) = sub_1008BF40((int *)(this + 64), i, i);
    *(_WORD *)(v6 + 148) = v7;
  }
  return v7;
}

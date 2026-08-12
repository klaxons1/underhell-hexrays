int __thiscall sub_10426900(int *this, _BYTE *a2)
{
  __int16 v3; // cx
  __int16 v4; // dx
  int result; // eax
  int v6; // ebx
  _BYTE *v7; // esi
  __int16 v8; // dx
  __int16 v9; // cx
  __int16 v10; // ax
  int v11; // [esp+Ch] [ebp-Ch]
  __int16 v12; // [esp+10h] [ebp-8h] BYREF
  __int16 v13; // [esp+12h] [ebp-6h]
  __int16 v14; // [esp+14h] [ebp-4h]
  __int16 v15; // [esp+16h] [ebp-2h]

  if ( this[1] == 8 )
  {
    HIBYTE(v3) = *a2;
    HIBYTE(v4) = a2[2];
    LOBYTE(v3) = a2[1];
    LOBYTE(v4) = a2[3];
    v15 = v3;
    HIBYTE(v3) = a2[4];
    v14 = v4;
    HIBYTE(v4) = a2[6];
    LOBYTE(v3) = a2[5];
    LOBYTE(v4) = a2[7];
    v13 = v3;
    v12 = v4;
    return sub_104267B0(this, (int)&v12, 0, (int)&unk_105C7638);
  }
  else
  {
    v6 = 0;
    v11 = 0;
    if ( *this > 0 )
    {
      v7 = a2 + 2;
      do
      {
        LOBYTE(v8) = v7[1];
        HIBYTE(v9) = *(v7 - 2);
        HIBYTE(v8) = *v7;
        HIBYTE(v10) = v7[2];
        LOBYTE(v9) = *(v7 - 1);
        v14 = v8;
        LOBYTE(v10) = v7[3];
        v15 = v9;
        HIBYTE(v9) = v7[4];
        v13 = v10;
        LOBYTE(v9) = v7[5];
        v12 = v9;
        sub_104267B0(this, (int)&v12, v6, (int)&unk_105C7638);
        sub_104267B0(this, (int)&v12, this[1] - v6 - 8, (int)&unk_105C7658);
        result = v11 + 1;
        v7 += 8;
        v6 += 8;
        ++v11;
      }
      while ( v11 < *this );
    }
  }
  return result;
}

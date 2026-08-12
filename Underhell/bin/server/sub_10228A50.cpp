void __thiscall sub_10228A50(int *this)
{
  int v2; // edi
  double v3; // st7
  int v4; // ebx
  int v5; // edi
  unsigned int v6; // eax
  int v7; // ecx
  int i; // ebx
  unsigned int v9; // eax
  float v10; // [esp+0h] [ebp-18h]
  float v11; // [esp+10h] [ebp-8h]
  char v12; // [esp+17h] [ebp-1h]

  byte_10646C34 = *(_DWORD *)(dword_106C4614 + 48) != 0;
  v10 = *(float *)(dword_106B31C8 + 12) + 0.001;
  sub_100EC4A0(this, v10, 0);
  v2 = dword_106B31C8;
  v3 = *(float *)(v2 + 12) - sub_100E92C0(this, 0);
  if ( v3 > 0.1 )
    v3 = 0.1;
  if ( (dword_1069042C & 1) == 0 )
  {
    v4 = this[203];
    v5 = 0;
    v12 = 0;
    if ( v4 > 0 )
    {
      do
      {
        v6 = *(_DWORD *)(this[200] + 4 * v5);
        if ( v6 != -1
          && off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v5) & 0xFFF) + 2] == v6 >> 12
          && (v7 = off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v5) & 0xFFF) + 1]) != 0 )
        {
          v11 = v3;
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 728))(LODWORD(v11));
          if ( this[203] < v4 )
          {
            v4 = this[203];
            --v5;
          }
        }
        else
        {
          v12 = 1;
        }
        ++v5;
      }
      while ( v5 < v4 );
      if ( v12 )
      {
        for ( i = v4 - 1; i >= 0; --i )
        {
          v9 = *(_DWORD *)(this[200] + 4 * i);
          if ( v9 == -1
            || off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * i) & 0xFFF) + 2] != v9 >> 12
            || !off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * i) & 0xFFF) + 1] )
          {
            if ( this[203] - i - 1 > 0 )
              memcpy((void *)(4 * i + this[200]), (const void *)(4 * i + this[200] + 4), 4 * (this[203] - i - 1));
            --this[203];
          }
        }
      }
    }
  }
}

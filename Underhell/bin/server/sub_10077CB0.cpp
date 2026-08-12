unsigned __int8 __thiscall sub_10077CB0(int this)
{
  unsigned __int8 result; // al
  int v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  bool v7; // zf
  int *v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // esi
  int v12; // esi
  unsigned __int8 v13; // [esp+7h] [ebp-5h]
  unsigned __int8 v14; // [esp+Bh] [ebp-1h]

  if ( *(float *)(this + 28) <= (double)*(float *)(this + 24) )
    *(float *)(this + 24) = *(float *)(this + 28) - 0.1;
  result = sub_10076510(this);
  v13 = result;
  if ( result != 0xFF )
  {
    while ( 1 )
    {
      v3 = 12 * result;
      v4 = *(_DWORD *)(v3 + *(_DWORD *)(this + 4) + 8);
      v14 = sub_100765B0((_DWORD *)this, v13);
      if ( *(_DWORD *)v4 != -1
        && off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 2] == *(_DWORD *)v4 >> 12
        && (v5 = off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 1]) != 0 )
      {
        v6 = sub_100D7680(v5);
        if ( !v6 )
          goto LABEL_13;
        v7 = *(_DWORD *)(v6 + 2324) == 7;
      }
      else
      {
        v7 = *(_BYTE *)(v4 + 52) == 0;
      }
      if ( v7 )
        goto LABEL_15;
LABEL_13:
      if ( !*(_BYTE *)(v4 + 54) && *(float *)(v4 + 28) + *(float *)(this + 28) < *(float *)(dword_106B31C8 + 12) )
      {
LABEL_15:
        sub_10184660(v4);
        if ( v13 != 0xFF )
        {
          sub_10076F90(this, v13);
          *(_BYTE *)(v3 + *(_DWORD *)(this + 4)) = v13;
          *(_BYTE *)(v3 + *(_DWORD *)(this + 4) + 1) = *(_BYTE *)(this + 18);
          --*(_BYTE *)(this + 17);
          *(_BYTE *)(this + 18) = v13;
        }
        goto LABEL_39;
      }
      if ( *(_DWORD *)v4 != -1 )
      {
        v8 = &off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 1];
        v9 = *(_DWORD *)v4 >> 12;
        if ( off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 2] == v9 )
        {
          if ( *v8 )
          {
            if ( *(float *)(v4 + 28) + *(float *)(this + 24) >= *(float *)(dword_106B31C8 + 12) )
            {
              v10 = off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 2] == v9 ? *v8 : 0;
              if ( (*(_DWORD *)(v10 + 256) & 0x8000) == 0 )
              {
                if ( off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 2] == v9 )
                  v11 = *v8;
                else
                  v11 = 0;
                if ( (*(_DWORD *)(v11 + 252) & 0x800) != 0 )
                  sub_100DAE60(v11);
                *(float *)(v4 + 4) = *(float *)(v11 + 580);
                *(float *)(v4 + 8) = *(float *)(v11 + 584);
                *(float *)(v4 + 12) = *(float *)(v11 + 588);
              }
            }
            if ( *(float *)(v4 + 28) >= (double)*(float *)(dword_106B31C8 + 12) )
            {
              if ( *(_DWORD *)v4 == -1 || off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 2] != *(_DWORD *)v4 >> 12 )
                v12 = 0;
              else
                v12 = off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 1];
              if ( (*(_DWORD *)(v12 + 252) & 0x800) != 0 )
                sub_100DAE60(v12);
              *(float *)(v4 + 16) = *(float *)(v12 + 580);
              *(float *)(v4 + 20) = *(float *)(v12 + 584);
              *(float *)(v4 + 24) = *(float *)(v12 + 588);
            }
          }
        }
      }
LABEL_39:
      result = v14;
      v13 = v14;
      if ( v14 == 0xFF )
        return result;
      result = v14;
    }
  }
  return result;
}

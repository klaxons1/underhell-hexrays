int __thiscall sub_103C8E10(void *this, int a2)
{
  unsigned int v4; // eax
  int v5; // ecx
  double v6; // st7
  int *v7; // [esp-4h] [ebp-5Ch]
  int v8[13]; // [esp+8h] [ebp-50h] BYREF
  float v9; // [esp+3Ch] [ebp-1Ch]

  if ( (*(_BYTE *)(a2 + 64) & 9) != 0 )
    return 0;
  v7 = (int *)a2;
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 220))(this) == 3 )
  {
    sub_1001E4E0(v8, a2);
    v4 = *(_DWORD *)(a2 + 44);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(a2 + 44) & 0xFFF) + 1];
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 220))(v5) == 4 && (*(_DWORD *)(a2 + 64) & 0x120000) != 0 )
    {
      v6 = *(float *)(dword_106EC0F4 + 44) * v9;
    }
    else
    {
      if ( (*(_BYTE *)(a2 + 64) & 0x40) == 0 )
      {
LABEL_14:
        v7 = v8;
        return sub_10396110((int)this, (int)v7);
      }
      v6 = v9 * 0.5;
    }
    v9 = v6;
    goto LABEL_14;
  }
  return sub_10396110((int)this, (int)v7);
}

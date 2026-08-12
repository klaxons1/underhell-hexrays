unsigned int __thiscall sub_1019F290(int this, int a2)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  float *v5; // eax
  unsigned int result; // eax
  float v7[3]; // [esp+8h] [ebp-Ch] BYREF

  sub_1002F9F0(this, a2);
  v3 = *(_DWORD *)(this + 1956);
  if ( v3 == -1 )
    goto LABEL_10;
  if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1956) & 0xFFF) + 2) == *(_DWORD *)(this + 1956) >> 12 )
  {
    if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1956) & 0xFFF) + 1) )
    {
      v4 = *(_DWORD *)(this + 1960);
      if ( v4 == -1
        || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1960) & 0xFFF) + 2) != v4 >> 12
        || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1960) & 0xFFF) + 1) )
      {
        v5 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)off_103DD080 + 120))(off_103DD080);
        *(float *)(this + 1984) = *v5;
        *(float *)(this + 1988) = v5[1];
        *(float *)(this + 1992) = v5[2];
        v7[0] = 0.0;
        v7[1] = 0.0;
        v7[2] = -1.0;
        return (*(int (__thiscall **)(void *, float *))(*(_DWORD *)off_103DD080 + 116))(off_103DD080, v7);
      }
    }
  }
  result = v3 >> 12;
  if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1956) & 0xFFF) + 2) != result
    || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1956) & 0xFFF) + 1) )
  {
LABEL_10:
    result = *(_DWORD *)(this + 1960);
    if ( result != -1 )
    {
      result >>= 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1960) & 0xFFF) + 2) == result )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1960) & 0xFFF) + 1) )
          return (*(int (__thiscall **)(void *, int))(*(_DWORD *)off_103DD080 + 116))(off_103DD080, this + 1984);
      }
    }
  }
  return result;
}

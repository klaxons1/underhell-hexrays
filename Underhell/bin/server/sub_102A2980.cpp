bool __thiscall sub_102A2980(_DWORD *this, float *a2)
{
  int v3; // eax
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  float v8[3]; // [esp+4h] [ebp-Ch] BYREF
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  if ( *(int *)(dword_106B31C8 + 20) > 1 )
    return 0;
  v3 = sub_10261B20();
  if ( !v3 )
    return 0;
  if ( !(*(unsigned __int8 (__thiscall **)(int, float *))(*(_DWORD *)v3 + 872))(v3, a2) )
  {
    v5 = this[17];
    if ( v5 == -1 || off_1061BE18[4 * (this[17] & 0xFFF) + 2] != v5 >> 12 )
      v6 = 0;
    else
      v6 = off_1061BE18[4 * (this[17] & 0xFFF) + 1];
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 340))(v6);
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v7 + 120))(v7, this[1], v8, 0) )
      return sub_1029F5D0((int)this, (int)&savedregs, (int)a2, (int)this, v8, a2) != 0;
  }
  return 0;
}

char __thiscall sub_102FB5A0(_DWORD *this, int a2, int a3)
{
  bool v4; // cl
  int v5; // eax
  int v6; // esi
  char result; // al

  v4 = sub_100428A0((int)this, a2, a3);
  if ( !*(_DWORD *)(dword_106E2C8C + 48) )
    return v4;
  v5 = *(_DWORD *)(this[647] + 32);
  if ( a2 < 0 || a2 >= *(_DWORD *)(v5 + 4) )
  {
    ++dword_10691DE0;
    return v4;
  }
  v6 = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 4 * a2);
  if ( !v6 )
    return v4;
  result = 1;
  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(v6 + 92) )
    return v4;
  return result;
}

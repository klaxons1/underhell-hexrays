char *__thiscall sub_102995D0(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  char *result; // eax
  int i; // esi
  char *v5; // eax
  float v6[3]; // [esp+8h] [ebp-1Ch] BYREF
  float v7[3]; // [esp+14h] [ebp-10h] BYREF
  _DWORD *v8; // [esp+20h] [ebp-4h]

  v2 = this + 24;
  this[27] = 0;
  result = *(char **)(a2 + 876);
  v8 = this;
  if ( result )
  {
    result = (char *)sub_1012BF20(&dword_1069E3E0, 0, result, 0, 0, 0, 0);
    for ( i = (int)result; result; i = (int)result )
    {
      sub_10111910((_BYTE *)(i + 320), (float *)(i + 328), (float *)(i + 340), v6, v7);
      sub_1039A340(v2[3], v6);
      v5 = *(char **)(a2 + 876);
      if ( !v5 )
        v5 = (char *)String;
      result = (char *)sub_1012BF20(&dword_1069E3E0, i, v5, 0, 0, 0, 0);
    }
  }
  if ( *(_DWORD *)(dword_106DB0DC + 48) == 5 )
    return (char *)Msg("Actbusy collected %d safe zones\n", v8[27]);
  return result;
}

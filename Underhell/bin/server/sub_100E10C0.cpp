int __thiscall sub_100E10C0(int this, float *a2)
{
  int result; // eax
  int *v4; // ecx
  float v5; // [esp+10h] [ebp+8h]

  result = COERCE_UNSIGNED_INT(*a2) & 0x7F800000;
  if ( result != 2139095040
    && (COERCE_UNSIGNED_INT(a2[1]) & 0x7F800000) != 0x7F800000
    && (COERCE_UNSIGNED_INT(a2[2]) & 0x7F800000) != 0x7F800000 )
  {
    result = sub_100D7840((float *)(this + 716), a2);
    if ( (_BYTE)result )
    {
      sub_100E98A0(1);
      sub_100DB570((float *)(this + 716), a2);
      result = dword_106B31C8;
      v5 = *(float *)(dword_106B31C8 + 12);
      if ( *(_DWORD *)(this + 128) != LODWORD(v5) )
      {
        result = this;
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
          *(float *)(this + 128) = v5;
        }
        else
        {
          v4 = *(int **)(this + 24);
          if ( v4 )
            result = sub_100194B0(v4, 128);
          *(float *)(this + 128) = v5;
        }
      }
    }
  }
  return result;
}

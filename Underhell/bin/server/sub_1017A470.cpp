unsigned int *__thiscall sub_1017A470(int this)
{
  unsigned int *result; // eax
  unsigned int *v3; // edi
  unsigned int v4; // esi
  int *v5; // ecx

  result = (unsigned int *)sub_100E38F0((float *)this);
  v3 = (unsigned int *)(this + 248);
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    if ( !*(_BYTE *)(this + 804) )
    {
      *(_BYTE *)(this + 804) = 1;
      sub_1012D950(&dword_1069E3E0, this + 800);
      result = (unsigned int *)sub_1017A2B0(this);
    }
    v4 = *v3 & 0xFFFFFFFE;
    if ( *v3 != v4 )
    {
      result = v3 - 62;
      if ( *((_BYTE *)v3 - 164) )
      {
        *((_BYTE *)result + 88) |= 1u;
        *v3 = v4;
      }
      else
      {
        v5 = (int *)result[6];
        if ( v5 )
          result = (unsigned int *)sub_100194B0(v5, 248);
        *v3 = v4;
      }
    }
  }
  else if ( *(_BYTE *)(this + 804) )
  {
    return sub_1012D950(&dword_1069E3E0, this + 800);
  }
  return result;
}

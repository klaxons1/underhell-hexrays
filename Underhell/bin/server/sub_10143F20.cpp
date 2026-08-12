int __thiscall sub_10143F20(_DWORD *this)
{
  _DWORD *v2; // eax
  int result; // eax
  unsigned int v4; // edx
  int *v5; // eax

  v2 = 0;
  while ( 1 )
  {
    v2 = sub_1012BC90(&dword_1069E3E0, (int)v2, "env_fog_controller");
    if ( !v2 )
      break;
    if ( this[3] )
    {
      if ( (v2[62] & 1) != 0 )
        this[3] = v2;
    }
    else
    {
      this[3] = v2;
    }
  }
  result = dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    result = sub_10261B20();
    if ( result )
    {
      v4 = *(_DWORD *)(result + 2436);
      if ( v4 == -1
        || off_1061BE18[4 * (*(_DWORD *)(result + 2436) & 0xFFF) + 2] != v4 >> 12
        || !off_1061BE18[4 * (*(_DWORD *)(result + 2436) & 0xFFF) + 1] )
      {
        v5 = sub_101437E0();
        return sub_101E6360(v5[3]);
      }
    }
  }
  return result;
}

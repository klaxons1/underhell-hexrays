unsigned int __thiscall sub_10203130(int this)
{
  unsigned int v2; // eax
  char *v3; // eax
  _DWORD *v4; // eax
  unsigned int v5; // eax
  unsigned int result; // eax
  _DWORD *v7; // eax
  unsigned int v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  const char *v11; // [esp+4h] [ebp-8h]

  sub_100E38F0((float *)this);
  v2 = *(_DWORD *)(this + 808);
  if ( v2 == -1
    || off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] != v2 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1] )
  {
    v3 = *(char **)(this + 212);
    if ( !v3 )
      v3 = (char *)String;
    v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, 0, 0, 0, 0);
    if ( v4 )
      *(_DWORD *)(this + 808) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 8))(v4);
    else
      *(_DWORD *)(this + 808) = -1;
  }
  v5 = *(_DWORD *)(this + 812);
  if ( v5 == -1
    || (result = v5 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 2] != result)
    || !off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 1] )
  {
    result = *(_DWORD *)(this + 804);
    if ( result )
    {
      v7 = sub_1012BF20(&dword_1069E3E0, 0, (char *)result, 0, 0, 0, 0);
      *(_DWORD *)(this + 812) = v7 ? *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v7 + 8))(v7) : -1;
      v8 = *(_DWORD *)(this + 812);
      if ( v8 == -1
        || (result = v8 >> 12, off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 2] != result)
        || !off_1061BE18[4 * (*(_DWORD *)(this + 812) & 0xFFF) + 1] )
      {
        v9 = *(const char **)(this + 804);
        if ( !v9 )
          v9 = String;
        v11 = v9;
        v10 = sub_100D6390((_DWORD *)this);
        result = DevMsg(1, "Angle sensor '%s' could not find look at entity '%s'.\n", v10, v11);
      }
    }
  }
  if ( !*(_BYTE *)(this + 800) )
  {
    result = *(_DWORD *)(this + 808);
    if ( result != -1 )
    {
      result >>= 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 2] == result )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 808) & 0xFFF) + 1] )
          return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
  return result;
}

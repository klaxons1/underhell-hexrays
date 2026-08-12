float *__thiscall sub_10074190(float *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  float *v6; // eax
  char v8[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( !*(_DWORD *)this )
  {
    v2 = *((_DWORD *)this + 1);
    if ( v2 != -1 )
    {
      v3 = &off_1061BE18[4 * ((_DWORD)this[1] & 0xFFF) + 1];
      v4 = v2 >> 12;
      if ( off_1061BE18[4 * ((_DWORD)this[1] & 0xFFF) + 2] == v4 )
      {
        if ( *v3 )
        {
          if ( off_1061BE18[4 * ((_DWORD)this[1] & 0xFFF) + 2] == v4 )
            v5 = *v3;
          else
            v5 = 0;
          v6 = (float *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v5 + 504))(v5, v8);
          this[2] = *v6;
          this[3] = v6[1];
          this[4] = v6[2];
        }
      }
    }
  }
  return this + 2;
}

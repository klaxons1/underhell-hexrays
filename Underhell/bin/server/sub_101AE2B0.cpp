int *__thiscall sub_101AE2B0(int *this)
{
  int *result; // eax
  unsigned int v3; // esi
  unsigned int v4; // esi
  int v5; // ecx

  result = (int *)this[200];
  if ( result )
  {
    (*(void (__thiscall **)(int, int *))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, result);
    this[200] = 0;
    sub_100EC3F0(this, 0, 0.0, 0);
    result = (int *)sub_100EC4A0(this, -1.0, 0);
    v3 = this[204];
    if ( v3 != -1 )
    {
      result = &off_1061BE18[4 * (v3 & 0xFFF) + 1];
      v4 = v3 >> 12;
      if ( result[1] == v4 )
      {
        if ( *result )
        {
          if ( result[1] == v4 )
            result = (int *)*result;
          else
            result = 0;
          v5 = result[106];
          if ( v5 )
            return (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 96))(v5);
        }
      }
    }
  }
  return result;
}

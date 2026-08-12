char *__thiscall sub_10024230(char *this, int a2)
{
  char *result; // eax
  char v4; // cl

  if ( a2 >= 1000000000 )
  {
    result = (char *)a2;
  }
  else
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 2160))(this);
    result = (char *)sub_1007DB30(a2);
  }
  if ( result != (char *)-1 )
  {
    v4 = (char)result;
    if ( result != (char *)999999999 )
    {
      result = &this[4 * ((int)(result - 1000000000) >> 5) + 2224];
      *(_DWORD *)result |= 1 << (v4 & 0x1F);
    }
  }
  return result;
}

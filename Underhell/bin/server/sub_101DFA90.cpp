unsigned int *__thiscall sub_101DFA90(unsigned int *this, int a2)
{
  unsigned int *v3; // edi
  unsigned int *result; // eax
  char *v5; // eax
  unsigned int v6; // esi
  int *v7; // ecx
  __int64 v8; // [esp-8h] [ebp-18h]

  sub_100EC6E0((int)this, a2);
  v3 = this + 62;
  result = (unsigned int *)(this[62] >> 12);
  if ( (this[62] & 0x1000) != 0 )
  {
    result = (unsigned int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    if ( !(_BYTE)result )
    {
      HIDWORD(v8) = this;
      LODWORD(v8) = this;
      sub_1010DD80(this + 259, v8, 0.0);
      v5 = (char *)this[53];
      if ( !v5 )
        v5 = (char *)String;
      result = (unsigned int *)sub_102467B0(v5, (int)this, (int)this, 3, 0.0);
      v6 = *v3 & 0xFFFFEFFF;
      if ( *v3 != v6 )
      {
        result = v3 - 62;
        if ( *((_BYTE *)v3 - 164) )
        {
          *((_BYTE *)result + 88) |= 1u;
          *v3 = v6;
        }
        else
        {
          v7 = (int *)result[6];
          if ( v7 )
            result = (unsigned int *)sub_100194B0(v7, 248);
          *v3 = v6;
        }
      }
    }
  }
  return result;
}

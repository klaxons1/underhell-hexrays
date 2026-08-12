char *__thiscall sub_100E12F0(_DWORD *this, int a2, char ArgList)
{
  _DWORD *v3; // edi
  char *result; // eax
  int v5; // esi
  int v6; // ebx
  char *v7; // edi
  char Buffer[128]; // [esp+10h] [ebp-88h] BYREF
  _DWORD *v9; // [esp+90h] [ebp-8h]
  char *v10; // [esp+94h] [ebp-4h]

  v3 = this;
  v9 = this;
  sub_100DD850(this);
  result = (char *)v3[44];
  v5 = 0;
  v10 = result;
  if ( (int)result > 0 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v5 < 0 || v5 >= v3[44] || (v7 = *(char **)(v3[41] + v6 + 4)) == 0 )
        v7 = (char *)String;
      sub_10429A00(Buffer, 0x80u, "%s%s", ArgList);
      result = sub_10067DE0(a2, Buffer, v7, 1.0);
      ++v5;
      v6 += 12;
      if ( v5 >= (int)v10 )
        break;
      v3 = v9;
    }
  }
  return result;
}

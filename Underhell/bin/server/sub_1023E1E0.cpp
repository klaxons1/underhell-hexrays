int *__usercall sub_1023E1E0@<eax>(int *result@<eax>, _DWORD *a2@<ecx>)
{
  int i; // ebx
  _DWORD *v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  int v7; // eax
  char *v8; // ecx

  for ( i = a2[7] - 1; i >= 0; --i )
  {
    result = (int *)a2[4];
    v4 = (_DWORD *)result[i];
    if ( v4[17] )
    {
      v5 = v4[13];
      if ( v5 != -1 )
      {
        result = &off_1061BE18[4 * (v4[13] & 0xFFF) + 1];
        v6 = v5 >> 12;
        if ( off_1061BE18[4 * (v4[13] & 0xFFF) + 2] == v6 )
        {
          if ( *result )
          {
            v7 = off_1061BE18[4 * (v4[13] & 0xFFF) + 2] == v6 ? *result : 0;
            result = (int *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                              dword_106B31D0,
                              *(_DWORD *)(v7 + 24));
            if ( (int)result >= 0 )
            {
              v8 = (char *)v4[11];
              if ( !v8 )
                v8 = (char *)String;
              result = (int *)sub_1023AF30((int)result, v4[14], v8);
            }
          }
        }
      }
      v4[17] = 0;
    }
  }
  a2[7] = 0;
  if ( (int)a2[6] >= 0 )
  {
    result = (int *)a2[4];
    if ( result )
    {
      result = (int *)(*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, a2[4]);
      a2[4] = 0;
    }
    a2[5] = 0;
  }
  a2[8] = a2[4];
  a2[12] = 0;
  return result;
}

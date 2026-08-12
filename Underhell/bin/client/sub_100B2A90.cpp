_DWORD *__thiscall sub_100B2A90(void *this, char *String1)
{
  _DWORD *result; // eax
  int v3; // edi
  _DWORD *v4; // esi
  const char *v5; // eax

  result = off_103DC81C;
  v3 = 1;
  if ( *((int *)off_103DC81C + 5) >= 1 )
  {
    while ( 1 )
    {
      result = (_DWORD *)sub_1012D2F0(v3);
      v4 = result;
      if ( result )
      {
        v5 = sub_100421F0(result);
        result = (_DWORD *)_stricmp(String1, v5);
        if ( !result )
        {
          if ( !(*(int (__thiscall **)(_DWORD *))(*v4 + 844))(v4) )
            break;
          result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v4 + 296))(v4);
          if ( result == (_DWORD *)1 )
            break;
        }
      }
      if ( ++v3 > *((_DWORD *)off_103DC81C + 5) )
        return result;
    }
    return (_DWORD *)sub_100B2920((int)this, v3);
  }
  return result;
}

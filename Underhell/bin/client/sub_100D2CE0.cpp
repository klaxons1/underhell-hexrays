_DWORD *sub_100D2CE0()
{
  _DWORD *result; // eax
  unsigned int v1; // ecx
  unsigned int v2; // ecx

  result = (_DWORD *)sub_100422D0();
  if ( result )
  {
    v1 = result[1032];
    if ( v1 != -1 )
    {
      result = (_DWORD *)((char *)off_103DCD74 + 16 * (result[1032] & 0xFFF) + 4);
      v2 = v1 >> 12;
      if ( result[1] == v2 )
      {
        if ( *result )
        {
          if ( result[1] == v2 )
          {
            result = (_DWORD *)*result;
            if ( result )
            {
              result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 332))(result);
              if ( result )
                return (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 40))(result);
            }
          }
        }
      }
    }
  }
  return result;
}

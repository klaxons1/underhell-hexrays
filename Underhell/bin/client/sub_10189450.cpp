int __thiscall sub_10189450(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // esi
  const char *v5; // edi
  const char *v6; // esi
  int v7; // esi
  const char *v8; // eax

  result = strcmp("spec_target_updated", (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2));
  if ( !result )
  {
    result = sub_1005CDB0();
    v4 = result;
    if ( result )
    {
      result = sub_100766B0();
      if ( (unsigned int)(result - 1) <= 0x10 )
      {
        v5 = (const char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 32))(v4, result);
        v6 = Locale;
        if ( sub_1025F510(this[3]) )
          v6 = (const char *)sub_1022B4C0("player", (int)Locale);
        result = _stricmp(v6, v5);
        if ( result )
        {
          v7 = 0;
          result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[3] + 1076))(this[3]);
          if ( result > 0 )
          {
            while ( 1 )
            {
              if ( sub_1025F540(v7) )
              {
                v8 = (const char *)sub_1022B4C0("player", (int)Locale);
                if ( !_stricmp(v8, v5) )
                  break;
              }
              ++v7;
              result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[3] + 1076))(this[3]);
              if ( v7 >= result )
                return result;
            }
            return sub_1025F470(this[3], v7);
          }
        }
      }
    }
  }
  return result;
}

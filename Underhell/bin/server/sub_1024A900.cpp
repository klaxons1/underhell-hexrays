BOOL __thiscall sub_1024A900(void *this, char *String2, int a3)
{
  const char *v4; // eax
  BOOL result; // eax

  result = 0;
  if ( String2 )
  {
    if ( a3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 320))(a3) )
      {
        if ( *(_BYTE *)(*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 404))(this, String2) )
        {
          if ( *(_BYTE *)(*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 404))(this, a3) )
          {
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 404))(this, a3);
            v4 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 404))(this);
            if ( !_stricmp(v4, String2) )
              return 1;
          }
        }
      }
    }
  }
  return result;
}

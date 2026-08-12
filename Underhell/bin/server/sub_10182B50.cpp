int __thiscall sub_10182B50(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *v5; // esi
  int i; // edi
  const char *v7; // eax
  int v8; // [esp+10h] [ebp+8h]

  result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2);
  if ( (_BYTE)result )
  {
    v8 = 0;
    v5 = this + 234;
    do
    {
      if ( !*(v5 - 32) )
        break;
      for ( i = 0; i < *v5; ++i )
      {
        v7 = (const char *)*(v5 - 32);
        if ( !v7 )
          v7 = String;
        (*(void (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)a2 + 1440))(a2, v7, 0);
      }
      result = v8 + 1;
      ++v5;
      v8 = result;
    }
    while ( result < 32 );
  }
  return result;
}

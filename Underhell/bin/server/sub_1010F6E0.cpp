int __cdecl sub_1010F6E0(int *a1, int a2)
{
  int v2; // edi
  int result; // eax
  const char *v4; // esi
  const char *v5; // eax

  v2 = 1;
  if ( *a1 > 1 && (result = dword_1069ABE0, *(_DWORD *)(*(_DWORD *)(dword_1069ABE0 + 28) + 48)) )
  {
    if ( *(int *)(dword_106B31C8 + 20) >= 1 )
    {
      do
      {
        v4 = (const char *)sub_1025FB50(v2);
        if ( v4 && (*(unsigned __int8 (__thiscall **)(const char *))(*(_DWORD *)v4 + 320))(v4) )
        {
          v5 = sub_100634F0(a1, 1);
          if ( strstr(v4 + 4296, v5) )
            (*(void (__thiscall **)(const char *, int, _DWORD))(*(_DWORD *)v4 + 1608))(v4, a2, 0);
        }
        result = dword_106B31C8;
        ++v2;
      }
      while ( v2 <= *(_DWORD *)(dword_106B31C8 + 20) );
    }
  }
  else
  {
    result = sub_10153490();
    if ( result )
      return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)result + 1608))(result, a2, 0);
  }
  return result;
}

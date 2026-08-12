_DWORD *__stdcall sub_101B4410(char *Source, int a2, int a3, int a4)
{
  _DWORD *v4; // eax
  _DWORD *result; // eax
  int v6; // esi

  v4 = (_DWORD *)sub_100DDA40(784);
  if ( !v4 )
    return 0;
  result = sub_101B3F00(v4, a4, Source);
  v6 = (int)result;
  if ( result )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*result + 864))(result, a2, a3) )
    {
      return (_DWORD *)v6;
    }
    else
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 120))(v6, 1);
      return 0;
    }
  }
  return result;
}

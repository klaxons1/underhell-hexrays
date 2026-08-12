_DWORD *__stdcall sub_10135340(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // eax
  _DWORD *result; // eax
  _DWORD *v6; // esi

  v4 = (_DWORD *)sub_100DDA40(296);
  if ( !v4 )
    return 0;
  result = sub_10135290(v4, a4, a1);
  v6 = result;
  if ( result )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(*result + 864))(result, a2, a3) )
    {
      return v6;
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(*v6 + 120))(v6, 1);
      return 0;
    }
  }
  return result;
}

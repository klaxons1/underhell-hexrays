_DWORD *__thiscall sub_10206C10(_DWORD *this, char a2)
{
  _DWORD *result; // eax
  int i; // esi
  _DWORD *v5; // [esp+14h] [ebp-4h]

  result = (_DWORD *)this[65];
  v5 = result;
  if ( result )
  {
    result = sub_1012BC90(&dword_1069E3E0, 0, "func_areaportal");
    for ( i = (int)result; result; i = (int)result )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)i + 316))(i, v5) )
        (*(void (__thiscall **)(int, _DWORD *, _DWORD *, bool, _DWORD))(*(_DWORD *)i + 372))(
          i,
          this,
          this,
          a2 != 0,
          0.0);
      result = sub_1012BC90(&dword_1069E3E0, i, "func_areaportal");
    }
  }
  return result;
}

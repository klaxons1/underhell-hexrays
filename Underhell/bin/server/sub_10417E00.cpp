_DWORD *__stdcall sub_10417E00(int a1)
{
  _DWORD *result; // eax

  result = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, a1);
  if ( result
    || (result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0 )
  {
    result = (_DWORD *)result[3];
    if ( result )
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 20))(result);
      if ( result )
        return (_DWORD *)sub_10223FA0((int)result);
    }
  }
  return result;
}

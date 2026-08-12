_DWORD *__thiscall sub_10118C70(_DWORD *this, _WORD *a2)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // edx

  if ( a2 )
  {
    *a2 = (*(int (__thiscall **)(_DWORD *))(*this + 52))(this);
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 52))(this);
    a2[1] = (_WORD)result;
    return result;
  }
  result = (_DWORD *)this[6];
  if ( result && result[3] != result[2] )
  {
    v4 = result[2];
    v5 = result[3] - v4;
    if ( v5 )
    {
      if ( v5 >= 4 )
      {
        result[1] += 4;
        result[2] = v4 + 4;
        return result;
      }
      result[2] = result[3];
    }
    return (_DWORD *)Warning("Restore underflow!\n");
  }
  return result;
}

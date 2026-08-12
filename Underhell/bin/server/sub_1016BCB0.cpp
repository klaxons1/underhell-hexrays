_DWORD *sub_1016BCB0()
{
  _DWORD *result; // eax
  _DWORD *v1; // esi
  void *v2; // ecx

  result = (_DWORD *)sub_10153490();
  v1 = result;
  if ( result )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 1568))(result);
    if ( result )
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v1 + 1568))(v1);
      v2 = (void *)result[5];
      if ( v2 )
        return memset(v2, 0, 4 * *((unsigned __int16 *)result + 7));
    }
  }
  return result;
}

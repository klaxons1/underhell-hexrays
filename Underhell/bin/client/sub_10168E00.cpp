char *__thiscall sub_10168E00(_DWORD *this, int a2)
{
  char *result; // eax
  char *v4; // esi
  int v5; // edi

  result = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_104131CC + 36))(dword_104131CC, this[26]);
  v4 = result;
  if ( result )
  {
    v5 = (int)(this + 3);
    sub_10168DB0(result, v5);
    return (char *)sub_101689E0(v5, v4);
  }
  return result;
}

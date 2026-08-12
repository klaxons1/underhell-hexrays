int __thiscall sub_10264990(_DWORD *this)
{
  int result; // eax
  unsigned __int16 i; // si
  int v4; // eax
  const char *v5; // edi
  int v6; // eax

  result = sub_10263D00((int)(this + 1));
  for ( i = result; (unsigned __int16)result != 0xFFFF; i = result )
  {
    v4 = this[2] + 16 * i;
    v5 = *(const char **)(v4 + 8);
    v6 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 12) + 8))(*(_DWORD *)(v4 + 12));
    Msg(" %s: %d", v5, v6);
    result = sub_10263DD0(this + 1, i);
  }
  return result;
}

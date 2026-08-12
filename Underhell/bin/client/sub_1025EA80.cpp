char *__thiscall sub_1025EA80(int this, const char *a2, char a3)
{
  char *result; // eax

  *(_BYTE *)(this + 209) = a3;
  result = *(char **)(this + 220);
  if ( result )
  {
    result = (char *)sub_10034930(*(_DWORD *)(this + 220));
    *(_DWORD *)(this + 220) = 0;
  }
  if ( a2 && *a2 )
  {
    *(_DWORD *)(this + 212) = (*(int (__stdcall **)(const char *, _DWORD))(*(_DWORD *)dword_1047CA7C + 24))(
                                a2,
                                *(unsigned __int8 *)(this + 209));
    result = sub_1025E6A0(a2);
    *(_DWORD *)(this + 220) = result;
  }
  else
  {
    *(_DWORD *)(this + 212) = 0;
  }
  return result;
}

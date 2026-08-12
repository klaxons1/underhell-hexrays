char *__thiscall sub_1014C2A0(char *this, const void *a2, char a3)
{
  char *result; // eax

  if ( a3 )
  {
    result = sub_1014C140(this, (int)a2);
    if ( !result )
      return (char *)sub_1014C1A0(this, a2);
  }
  else
  {
    result = sub_1014C140(this, (int)a2);
    if ( result )
    {
      *(_DWORD *)(*((_DWORD *)result + 8) + 36) = *((_DWORD *)result + 9);
      *(_DWORD *)(*((_DWORD *)result + 9) + 32) = *((_DWORD *)result + 8);
      return (char *)sub_10034930((int)result);
    }
  }
  return result;
}

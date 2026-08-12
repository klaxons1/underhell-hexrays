const char *__thiscall sub_10302260(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // eax
  const char *result; // eax

  v3 = this[906];
  if ( !v3 )
    return (const char *)sub_10069860(this, a2);
  if ( a2 >= 1000000000 )
    return (const char *)sub_10069860(this, a2);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 52))(v3);
  v5 = sub_1007DB30((_DWORD *)(v4 + 28), a2);
  result = sub_1007DA40(v5);
  if ( !result )
    return (const char *)sub_10069860(this, a2);
  return result;
}

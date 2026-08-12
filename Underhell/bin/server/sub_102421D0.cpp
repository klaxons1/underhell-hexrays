_DWORD *__usercall sub_102421D0@<eax>(int a1@<ecx>, int a2@<edi>)
{
  _DWORD *result; // eax
  const char *v4; // eax
  _BYTE v5[4]; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v5);
  if ( *result )
  {
    v4 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v5);
    if ( !v4 )
      v4 = String;
    return (_DWORD *)sub_100E8220(a2, v4);
  }
  return result;
}

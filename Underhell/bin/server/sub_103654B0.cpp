char __userpurge sub_103654B0@<al>(unsigned int a1@<ecx>, int *a2@<ebx>, unsigned int a3, int a4, int *a5)
{
  bool v5; // al
  bool v6; // bl
  char result; // al
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v8 = 0;
  if ( a5 )
  {
    v5 = sub_10365020(a1, a2, a3, a4, a5);
    v8 = *a5;
  }
  else
  {
    v5 = sub_10365020(a1, a2, a3, a4, &v8);
  }
  v6 = v5;
  if ( !(*(unsigned __int8 (__thiscall **)(unsigned int))(*(_DWORD *)a3 + 320))(a3) )
    return v6;
  if ( v6 )
    return v6;
  if ( !v8 )
    return v6;
  result = 1;
  if ( *(char *)(v8 + 225) < 2 )
    return v6;
  return result;
}

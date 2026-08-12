unsigned int __cdecl sub_101B54B0(int a1)
{
  _DWORD *v1; // esi
  unsigned int result; // eax
  _DWORD *v3; // ecx
  int v4; // eax

  v1 = 0;
  result = 0;
  v3 = &unk_106B9F48;
  while ( 1 )
  {
    if ( !*v3 && !v1 )
      v1 = v3 - 1;
    if ( *v3 == a1 )
      break;
    ++result;
    v3 += 4;
    if ( result >= 4 )
      goto LABEL_9;
  }
  result = (unsigned int)&unk_106B9F44 + 16 * result;
  v1 = (_DWORD *)result;
LABEL_9:
  if ( v1 )
  {
    if ( *v1 )
    {
      v4 = sub_1023DBA0(v3);
      result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 40))(v4, *v1);
      *v1 = 0;
      v1[1] = 0;
    }
  }
  return result;
}

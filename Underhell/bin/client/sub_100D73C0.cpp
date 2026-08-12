int *__cdecl sub_100D73C0(int *a1)
{
  char *v1; // eax
  int *result; // eax
  int v3; // eax

  if ( *a1 > 1 )
    v1 = (char *)a1[259];
  else
    v1 = (char *)Locale;
  result = sub_100D5DE0((int *)&unk_104325CC, v1);
  if ( dword_104453A8 )
  {
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_104453A8 + 8))(dword_104453A8, "scores");
    v3 = sub_1014D240();
    *(_BYTE *)(v3 + 36) = 0;
    __asm { jmp     edx }
  }
  return result;
}

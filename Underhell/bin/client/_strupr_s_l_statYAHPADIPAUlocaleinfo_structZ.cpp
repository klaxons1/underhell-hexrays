errno_t __usercall _strupr_s_l_stat@<eax>(struct localeinfo_struct *a1@<ebx>, char *a2@<edi>, char *SizeInBytes)
{
  int *v3; // eax
  errno_t v4; // esi
  LCID v5; // ecx
  char *i; // ecx
  char v7; // al
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  void *v12; // esp
  int *v13; // eax
  int v14; // [esp-4h] [ebp-14h]
  int v15; // [esp+0h] [ebp-10h] BYREF
  int cchDest; // [esp+4h] [ebp-Ch]
  void *Memory; // [esp+8h] [ebp-8h]

  if ( !a2 )
    goto LABEL_2;
  if ( strnlen(a2, (size_t)SizeInBytes) >= (unsigned int)SizeInBytes )
  {
    *a2 = 0;
LABEL_2:
    v3 = _errno();
    v14 = 22;
LABEL_3:
    v4 = v14;
    *v3 = v14;
    _invalid_parameter_noinfo();
    return v4;
  }
  v5 = *(_DWORD *)(*(_DWORD *)a1 + 20);
  if ( v5 )
  {
    v9 = __crtLCMapStringA(a1, v5, 0x200u, a2, -1, 0, 0, *(_DWORD *)(*(_DWORD *)a1 + 4), 1);
    v10 = v9;
    cchDest = v9;
    if ( !v9 )
    {
      *_errno() = 42;
      return *_errno();
    }
    if ( (unsigned int)SizeInBytes < v9 )
    {
      *a2 = 0;
      v3 = _errno();
      v14 = 34;
      goto LABEL_3;
    }
    if ( v9 <= 0 || !(0xFFFFFFE0 / v9) )
    {
      Memory = 0;
      goto LABEL_28;
    }
    v11 = v9 + 8;
    if ( (unsigned int)(v10 + 8) > 0x400 )
    {
      v13 = (int *)sub_100DDA40(v10 + 8);
      if ( v13 )
      {
        *v13 = 56797;
        goto LABEL_25;
      }
    }
    else
    {
      v12 = alloca(v11);
      v13 = &v15;
      if ( &v15 )
      {
        v15 = 52428;
LABEL_25:
        v13 += 2;
      }
    }
    v10 = cchDest;
    Memory = v13;
LABEL_28:
    if ( Memory )
    {
      if ( __crtLCMapStringA(
             a1,
             *(_DWORD *)(*(_DWORD *)a1 + 20),
             0x200u,
             a2,
             -1,
             (LPWSTR)Memory,
             v10,
             *(_DWORD *)(*(_DWORD *)a1 + 4),
             1) )
      {
        v4 = strcpy_s(a2, (rsize_t)SizeInBytes, (const char *)Memory);
      }
      else
      {
        *_errno() = 42;
        v4 = 42;
      }
      _freea(Memory);
      return v4;
    }
    *_errno() = 12;
    return *_errno();
  }
  for ( i = a2; *i; ++i )
  {
    v7 = *i;
    if ( *i >= 97 && v7 <= 122 )
      *i = v7 - 32;
  }
  return 0;
}

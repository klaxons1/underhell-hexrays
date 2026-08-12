int __usercall _87except@<eax>(int a1@<ebp>, int a2, int a3, unsigned __int16 *a4)
{
  int v4; // ecx
  bool v5; // zf
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int result; // eax
  int v13; // [esp-88h] [ebp-94h] BYREF
  DWORD v14; // [esp-84h] [ebp-90h]
  double v15[8]; // [esp-80h] [ebp-8Ch] BYREF
  unsigned int v16; // [esp-40h] [ebp-4Ch]
  int v17; // [esp+0h] [ebp-Ch]
  void *v18; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v17 = a1;
  v18 = retaddr;
  v4 = *a4;
  v6 = *(_DWORD *)a3 - 1;
  v5 = *(_DWORD *)a3 == 1;
  v13 = v4;
  if ( v5 )
    goto LABEL_13;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v14 = 4;
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v14 = 17;
    goto LABEL_14;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v14 = 18;
    goto LABEL_14;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
LABEL_13:
    v14 = 8;
LABEL_14:
    if ( !_handle_exc(v14, a3 + 24, v4) )
    {
      if ( a2 == 16 || a2 == 22 || a2 == 29 )
      {
        v15[6] = *(double *)(a3 + 16);
        v16 = v16 & 0xFFFFFFE0 | 3;
      }
      else
      {
        v16 &= ~1u;
      }
      _raise_exc((ULONG_PTR)v15, (int)&v13, v14, a2, a3 + 8, a3 + 24);
    }
    goto LABEL_21;
  }
  v11 = v10 - 2;
  if ( !v11 )
  {
    *(_DWORD *)a3 = 1;
    goto LABEL_21;
  }
  if ( v11 == 1 )
  {
    v14 = 16;
    goto LABEL_14;
  }
LABEL_21:
  _ctrlfp(v13, 0xFFFF);
  if ( *(_DWORD *)a3 == 8 )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  if ( dword_1068F8A0 )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  result = sub_10443D14(a3);
  if ( !result )
    return _set_errno_from_matherr(*(_DWORD *)a3);
  return result;
}

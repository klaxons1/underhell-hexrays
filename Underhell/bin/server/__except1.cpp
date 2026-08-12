double __usercall _except1@<st0>(int a1@<ebp>, DWORD a2, int a3, int a4, int a5, double a6, int a7)
{
  int v7; // eax
  int v9; // [esp+1Ch] [ebp-8Ch] BYREF
  int v10; // [esp+5Ch] [ebp-4Ch]
  int v11; // [esp+9Ch] [ebp-Ch]
  void *v12; // [esp+A0h] [ebp-8h]
  void *retaddr; // [esp+A8h] [ebp+0h]

  v11 = a1;
  v12 = retaddr;
  if ( !_handle_exc(a2, &a6, a7) )
  {
    v10 &= ~1u;
    _raise_exc_ex((ULONG_PTR)&v9, (unsigned int *)&a7, a2, a3, (float *)&a4, (float *)&a6, 0);
  }
  v7 = _errcode(a2);
  if ( !dword_1068F8A0 && v7 )
    return _umatherr(v7, a3, a4, a5, COERCE_UNSIGNED_INT64(0.0), HIDWORD(COERCE_UNSIGNED_INT64(0.0)), a6, a7);
  _set_errno_from_matherr(v7);
  _ctrlfp(a7, 0xFFFF);
  return a6;
}

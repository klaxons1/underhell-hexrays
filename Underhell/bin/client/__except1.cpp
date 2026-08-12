void __usercall _except1(int a1@<ebp>, DWORD a2, int a3, int a4, int a5, double a6, __int16 a7)
{
  __int16 v7; // fps
  int v11; // eax
  __int16 v12; // cx
  int v13; // [esp+1Ch] [ebp-8Ch] BYREF
  int v14; // [esp+5Ch] [ebp-4Ch]
  unsigned int v15; // [esp+98h] [ebp-10h]
  _DWORD v16[3]; // [esp+9Ch] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+A8h] [ebp+0h]

  v16[0] = a1;
  v16[1] = retaddr;
  v15 = (unsigned int)v16 ^ dword_103FDB10;
  if ( !_handle_exc(a2, &a6, a7) )
  {
    v14 &= ~1u;
    _raise_exc_ex(v7, (ULONG_PTR)&v13, (unsigned int *)&a7, a2, a3, (float *)&a4, (float *)&a6, 0);
  }
  v11 = _errcode(a2);
  if ( dword_103FED50 || !v11 )
  {
    _set_errno_from_matherr(v11);
    _ctrlfp(v12);
  }
  else
  {
    _umatherr(v11, a3, a4, a5, COERCE_UNSIGNED_INT64(0.0), HIDWORD(COERCE_UNSIGNED_INT64(0.0)), a6);
  }
  sub_1028BA07((void *)((unsigned int)v16 ^ v15));
}

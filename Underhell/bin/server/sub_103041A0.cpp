_DWORD *__thiscall sub_103041A0(_BYTE *this, int a2)
{
  int (*v3)(void); // edx
  _DWORD *result; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // [esp+4h] [ebp-4h] BYREF

  v3 = *(int (**)(void))(*(_DWORD *)this + 8);
  this[804] = 1;
  v10 = *(_DWORD *)v3();
  result = (_DWORD *)sub_10319100(&v10);
  if ( (int)result < 0 )
  {
    v5 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
    v6 = dword_106E2DA0;
    v7 = dword_106E2DA0;
    if ( dword_106E2DA0 + 1 > dword_106E2D98 )
    {
      sub_102ABFC0(&dword_106E2D94, dword_106E2DA0 - dword_106E2D98 + 1);
      v6 = dword_106E2DA0;
    }
    v8 = dword_106E2D94;
    dword_106E2DA0 = v6 + 1;
    v9 = v6 - v7;
    dword_106E2DA4 = dword_106E2D94;
    if ( v9 > 0 )
    {
      memcpy((void *)(dword_106E2D94 + 4 * v7 + 4), (const void *)(dword_106E2D94 + 4 * v7), 4 * v9);
      v8 = dword_106E2D94;
    }
    result = (_DWORD *)(v8 + 4 * v7);
    if ( result )
      *result = v5;
  }
  return result;
}

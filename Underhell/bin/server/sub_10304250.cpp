_DWORD *__thiscall sub_10304250(_BYTE *this)
{
  _DWORD *result; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // [esp+4h] [ebp-4h] BYREF

  result = (_DWORD *)sub_100E0780((int)this);
  if ( this[804] == 1 )
  {
    v8 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
    result = (_DWORD *)sub_10319100(&v8);
    if ( (int)result < 0 )
    {
      v3 = *(_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 8))(this);
      v4 = dword_106E2DA0;
      v5 = dword_106E2DA0;
      if ( dword_106E2DA0 + 1 > dword_106E2D98 )
      {
        sub_102ABFC0(&dword_106E2D94, dword_106E2DA0 - dword_106E2D98 + 1);
        v4 = dword_106E2DA0;
      }
      v6 = dword_106E2D94;
      dword_106E2DA0 = v4 + 1;
      v7 = v4 - v5;
      dword_106E2DA4 = dword_106E2D94;
      if ( v7 > 0 )
      {
        memcpy((void *)(dword_106E2D94 + 4 * v5 + 4), (const void *)(dword_106E2D94 + 4 * v5), 4 * v7);
        v6 = dword_106E2D94;
      }
      result = (_DWORD *)(v6 + 4 * v5);
      if ( result )
        *result = v3;
    }
  }
  return result;
}

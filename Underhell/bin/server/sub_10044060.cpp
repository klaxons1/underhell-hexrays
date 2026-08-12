char __thiscall sub_10044060(void *this, _DWORD *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  char result; // al
  int v7; // [esp+Ch] [ebp-1Ch]
  float v8[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v4 = (*(int (__thiscall **)(_DWORD *, float *))(*a2 + 504))(a2, v8);
  if ( (unsigned __int8)sub_100B32C0(v4, 0.0, a3) )
    return 1;
  if ( (a2[63] & 0x800) != 0 )
    sub_100DAE60(a2);
  *(float *)&v7 = ((double (__thiscall *)(void *, int))*(_DWORD *)(*(_DWORD *)this + 1948))(this, a3);
  v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 504))(a2);
  result = sub_100B3FD0((int)(a2 + 145), v5, COERCE_FLOAT(v8), 0.0, v7);
  if ( result )
    return 1;
  return result;
}

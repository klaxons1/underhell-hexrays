char __thiscall sub_1005F260(void *this, int a2)
{
  char result; // al
  int v4; // esi

  result = sub_1005D0C0((void *)a2, &a2);
  if ( result )
  {
    v4 = a2;
    if ( *(_BYTE *)(a2 + 45) )
    {
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 4) + 1644))(*(_DWORD *)(a2 + 4), 1001);
      *(_BYTE *)(v4 + 45) = 0;
      sub_1004BA00((int *)v4, 0);
    }
    return (unsigned __int8)sub_1005D7C0((int)this, v4);
  }
  return result;
}

void __thiscall sub_10122040(void *this, int a2)
{
  int v2; // esi

  v2 = a2;
  if ( a2 )
  {
    sub_10121B60(a2);
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 16))(this, v2);
    a2 = v2;
    sub_1012D820(&a2);
    sub_10121B60(v2);
  }
}

int __thiscall sub_1004B510(void *this, int a2, char a3)
{
  int v3; // esi

  v3 = a2;
  if ( a2 < 1000000000 )
  {
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 52))(this);
    v3 = sub_1007DB30(a2);
  }
  return sub_100697A0(v3, a3);
}

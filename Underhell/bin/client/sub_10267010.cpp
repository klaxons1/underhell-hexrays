int __thiscall sub_10267010(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // ecx
  int v6; // esi
  bool v7; // zf
  _DWORD *v8; // eax

  v4 = *(unsigned __int8 *)(a2 + this[65]);
  v5 = this[54];
  v6 = 72 * v4;
  v7 = *(_BYTE *)(72 * v4 + v5 + 24) == 0;
  v8 = (_DWORD *)(72 * v4 + v5);
  if ( v7 && a3 )
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*v8 + 960))(*v8, 107, 1);
  *(_DWORD *)(v6 + this[54] + 20) = a3;
  return sub_10266930(this, a2);
}

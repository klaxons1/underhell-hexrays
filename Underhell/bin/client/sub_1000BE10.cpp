char __thiscall sub_1000BE10(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  int v4; // eax

  v2 = this[500];
  if ( !v2 || v2 == -1 )
    return 1;
  v3 = sub_1000BAC0(this);
  if ( v3 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 504))(v3) && (v4 = sub_10045780(this[492])) != 0 )
    return *(_BYTE *)(v4 + 1332);
  else
    return 0;
}

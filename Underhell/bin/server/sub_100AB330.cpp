void __thiscall sub_100AB330(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  int v4; // eax
  int v5; // edx

  v2 = a2;
  if ( (a2[64] & 0x2000000) != 0
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 284))(v2) )
  {
    a2 = *(_DWORD **)(*(int (__thiscall **)(_DWORD *))(*v2 + 8))(v2);
    v4 = sub_10319100(&a2);
    if ( v4 != -1 )
    {
      v5 = this[4];
      if ( v5 > 0 )
      {
        *(_DWORD *)(this[1] + 4 * v4) = *(_DWORD *)(this[1] + 4 * v5 - 4);
        --this[4];
      }
    }
  }
}

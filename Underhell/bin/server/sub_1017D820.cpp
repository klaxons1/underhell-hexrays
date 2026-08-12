void __thiscall sub_1017D820(_DWORD *this, unsigned int *a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // [esp+8h] [ebp-4h] BYREF

  if ( *a2 )
    v5 = *(_DWORD *)(*(int (__thiscall **)(unsigned int))(*(_DWORD *)*a2 + 8))(*a2);
  else
    v5 = -1;
  v3 = sub_10319100(&v5);
  if ( v3 != -1 )
  {
    v4 = this[219];
    if ( v4 > 0 )
    {
      *(_DWORD *)(this[216] + 4 * v3) = *(_DWORD *)(this[216] + 4 * v4 - 4);
      --this[219];
    }
  }
  sub_1017CA00(this, *a2);
}

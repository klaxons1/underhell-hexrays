int __thiscall sub_10085580(_DWORD *this, float *a2, int a3, int *a4)
{
  int (__thiscall *v5)(int); // edx
  int v6; // edi
  _DWORD v8[4]; // [esp+Ch] [ebp-10h] BYREF

  if ( a3
    && (v5 = *(int (__thiscall **)(int))(*(_DWORD *)a3 + 1672),
        v8[0] = &CNodeFilter::`vftable',
        v8[1] = a2,
        v8[2] = a3,
        v8[3] = v5(a3),
        v6 = sub_100854B0(this, a2, *(_DWORD *)(a3 + 1676), a4),
        v6 >= 0)
    && sub_10084F60((int)v8, *(_DWORD **)(this[2] + 4 * v6))
    && sub_10080610(*(_DWORD **)(a3 + 2588), v6, 147467) )
  {
    return v6;
  }
  else
  {
    return -1;
  }
}

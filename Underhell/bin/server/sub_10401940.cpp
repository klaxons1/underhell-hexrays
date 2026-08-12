char __thiscall sub_10401940(int this, _DWORD *a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  _DWORD *v5; // eax
  const char *v6; // edi
  _DWORD *v7; // eax
  void *v9; // edi
  int v10; // [esp-4h] [ebp-10h]

  if ( *(_BYTE *)(this + 1393) && a2 )
  {
    v3 = *(_DWORD *)(this + 9772);
    if ( v3 == -1
      || (v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 9772) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(this + 9772) & 0xFFF) + 2] != v3 >> 12) )
    {
      v5 = 0;
    }
    else
    {
      v5 = (_DWORD *)*v4;
    }
    if ( v5 != a2 )
      return 0;
    v6 = (const char *)a2[23];
    if ( !v6 )
      v6 = String;
    v10 = (*(int (__thiscall **)(_DWORD *))(*a2 + 856))(a2);
    v7 = (_DWORD *)sub_100D1940((_DWORD *)this);
    if ( !sub_100CF660(v7, (int)v6, v10) )
      return 0;
  }
  v9 = (void *)sub_100D1940((_DWORD *)this);
  if ( v9 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v9 + 320))(v9) )
      sub_101E3110(v9, 0x14u, 0, 1u);
  }
  sub_10401510(this, *(float *)&a2);
  sub_103FEC80(*(float *)&this, 1, 0);
  sub_10401640((_DWORD *)this, *(float *)&a2, 1);
  return sub_102B1C70(this, (int)a2);
}

int __thiscall sub_1032CC60(_DWORD *this, int a2)
{
  unsigned int v3; // eax
  int *v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // ecx

  v3 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  if ( v3 != -1
    && (v4 = &dword_1069E3E4[4 * (v3 & 0xFFF)], v4[1] == v3 >> 12)
    && (v5 = *v4) != 0
    && (v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5), (v7 = v6) != 0)
    && (v8 = *(_DWORD *)(v6 + 424)) != 0
    && (double)(int)this[5] >= ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v8 + 116))(v8)
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 424) + 8))(*(_DWORD *)(v7 + 424))
    && (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 424) + 40))(*(_DWORD *)(v7 + 424)) )
  {
    return sub_102614A0(this, a2);
  }
  else
  {
    return 0;
  }
}

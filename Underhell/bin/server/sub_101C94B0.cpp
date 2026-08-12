int __thiscall sub_101C94B0(int (__cdecl **this)(_DWORD), int a2)
{
  int (__cdecl **v2)(_DWORD); // edi
  unsigned int v3; // esi
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // ecx
  _DWORD v10[2]; // [esp+8h] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v2 = this + 1;
  v10[0] = a2;
  v10[1] = 0;
  if ( !sub_101C90F0(this + 1, (int)v10, &a2, &v11) || (v3 = v11 | (a2 << 16), v3 == -1) )
  {
    if ( sub_101C90F0(v2, (int)v10, &a2, &v11) )
    {
      v3 = v11 | (a2 << 16);
    }
    else
    {
      v4 = a2;
      v3 = (v4 << 16) | sub_10229160(*((_DWORD *)*v2 + 5 * a2 + 3), v10);
    }
    v5 = sub_10184390(16);
    v6 = 20 * HIWORD(v3);
    v7 = 8 * (unsigned __int16)v3;
    *(_DWORD *)(*(_DWORD *)((char *)*v2 + v6) + v7 + 4) = v5;
    v8 = *(_DWORD **)(*(_DWORD *)((char *)*v2 + v6) + v7 + 4);
    *v8 = 0;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
  }
  return *(_DWORD *)(*((_DWORD *)*v2 + 5 * HIWORD(v3)) + 8 * (unsigned __int16)v3 + 4);
}

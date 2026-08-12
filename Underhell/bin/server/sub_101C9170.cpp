int __thiscall sub_101C9170(int (__cdecl **this)(_DWORD), int a2)
{
  int (__cdecl **v2)(_DWORD); // edi
  unsigned int v3; // esi
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // edx
  int v7; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD v11[2]; // [esp+8h] [ebp-Ch] BYREF
  int v12; // [esp+10h] [ebp-4h] BYREF

  v2 = this + 1;
  v11[0] = a2;
  v11[1] = 0;
  if ( !sub_101C90F0(this + 1, (int)v11, &a2, &v12) || (v3 = v12 | (a2 << 16), v3 == -1) )
  {
    if ( sub_101C90F0(v2, (int)v11, &a2, &v12) )
    {
      v3 = v12 | (a2 << 16);
    }
    else
    {
      v4 = a2;
      v3 = (v4 << 16) | sub_10229160(*((_DWORD *)*v2 + 5 * a2 + 3), v11);
    }
    v5 = (_DWORD *)sub_10184390(12);
    if ( v5 )
    {
      *v5 = -1;
      v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    v7 = 20 * HIWORD(v3);
    v8 = 8 * (unsigned __int16)v3;
    *(_DWORD *)(*(_DWORD *)((char *)*v2 + v7) + v8 + 4) = v6;
    v9 = *(_DWORD **)(*(_DWORD *)((char *)*v2 + v7) + v8 + 4);
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
  }
  return *(_DWORD *)(*((_DWORD *)*v2 + 5 * HIWORD(v3)) + 8 * (unsigned __int16)v3 + 4);
}

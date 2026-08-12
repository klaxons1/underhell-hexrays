char __thiscall sub_101C9A40(int (__cdecl **this)(_DWORD), int a2)
{
  _DWORD *v2; // ebx
  int *v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  _DWORD v11[2]; // [esp+4h] [ebp-Ch] BYREF
  int v12; // [esp+Ch] [ebp-4h] BYREF

  v2 = this + 1;
  v11[0] = a2;
  v11[1] = 0;
  LOBYTE(v3) = sub_101C90F0(this + 1, (int)v11, &a2, &v12);
  if ( (_BYTE)v3 )
  {
    v4 = v12 | (a2 << 16);
    if ( v4 != -1 )
    {
      v5 = HIWORD(v4);
      v6 = *(_DWORD *)(*v2 + 20 * HIWORD(v4));
      v7 = (unsigned __int16)v12;
      sub_10184660(*(_DWORD *)(v6 + 8 * (unsigned __int16)v12 + 4));
      v3 = (int *)(*v2 + 20 * v5);
      if ( v7 < v3[3] )
      {
        v8 = v3[3];
        if ( v8 > 0 )
        {
          v9 = *v3;
          *(_DWORD *)(v9 + 8 * v7) = *(_DWORD *)(*v3 + 8 * v8 - 8);
          *(_DWORD *)(v9 + 8 * v7 + 4) = *(_DWORD *)(v9 + 8 * v8 - 4);
          --v3[3];
        }
      }
    }
  }
  return (char)v3;
}

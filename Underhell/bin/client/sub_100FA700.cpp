char __thiscall sub_100FA700(int (__cdecl **this)(_DWORD), int a2)
{
  _DWORD *v2; // ebx
  int *v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // edi
  int v6; // eax
  int v7; // esi
  unsigned __int16 *v8; // ebx
  int v9; // edx
  int v10; // ecx
  unsigned __int16 v12; // [esp-Ch] [ebp-20h]
  _DWORD v13[2]; // [esp+4h] [ebp-10h] BYREF
  _DWORD *v14; // [esp+Ch] [ebp-8h]
  int v15; // [esp+10h] [ebp-4h] BYREF

  v2 = this + 1;
  v13[0] = a2;
  v13[1] = 0;
  v14 = this + 1;
  LOBYTE(v3) = sub_100FA5A0(this + 1, (int)v13, &a2, &v15);
  if ( (_BYTE)v3 )
  {
    v4 = v15 | (a2 << 16);
    if ( v4 != -1 )
    {
      v5 = HIWORD(v4);
      v6 = *(_DWORD *)(*v2 + 20 * HIWORD(v4));
      v7 = (unsigned __int16)v15;
      v8 = *(unsigned __int16 **)(v6 + 8 * (unsigned __int16)v15 + 4);
      if ( v8 )
      {
        v12 = *v8;
        a2 = *v8;
        sub_100F9810(dword_103E1B4C, v12);
        sub_1005A8B0(&dword_103E1B58, a2);
        *(_WORD *)(dword_103E1B58 + 10 * (unsigned __int16)a2 + 8) = word_103E1B68;
        word_103E1B68 = a2;
        sub_10034930((int)v8);
      }
      v3 = (int *)(*v14 + 20 * v5);
      if ( v7 < v3[3] )
      {
        v9 = v3[3];
        if ( v9 > 0 )
        {
          v10 = *v3;
          *(_DWORD *)(v10 + 8 * v7) = *(_DWORD *)(*v3 + 8 * v9 - 8);
          *(_DWORD *)(v10 + 8 * v7 + 4) = *(_DWORD *)(v10 + 8 * v9 - 4);
          --v3[3];
        }
      }
    }
  }
  return (char)v3;
}

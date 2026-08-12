int __thiscall sub_1042CC20(int this, int a2, int *a3)
{
  int result; // eax
  int (__cdecl *v4)(int, _BYTE *); // eax
  _BYTE *v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _BYTE Src[4096]; // [esp+0h] [ebp-1014h] BYREF
  _DWORD v11[4]; // [esp+1000h] [ebp-14h] BYREF
  int v12; // [esp+1010h] [ebp-4h]
  int v13; // [esp+101Ch] [ebp+8h]

  if ( (*(_BYTE *)(this + 32) & 4) != 0 )
  {
    if ( !*(_DWORD *)(this + 28) )
      return 0;
    return (***(int (__thiscall ****)(_DWORD, int, int *))(this + 28))(*(_DWORD *)(this + 28), a2, a3);
  }
  else
  {
    v4 = *(int (__cdecl **)(int, _BYTE *))(this + 28);
    if ( !v4 )
      return 0;
    result = v4(a2, Src);
    v12 = result;
    if ( result > 0 )
    {
      v5 = Src;
      v13 = result;
      do
      {
        sub_104311C0(v5);
        v6 = a3[3];
        v7 = a3[1];
        if ( v6 + 1 > v7 )
          sub_100C86E0(a3, v6 - v7 + 1);
        ++a3[3];
        v8 = *a3;
        v9 = a3[3] - v6 - 1;
        a3[4] = *a3;
        if ( v9 > 0 )
          memcpy((void *)(16 * v6 + v8 + 16), (const void *)(16 * v6 + v8), 16 * v9);
        if ( *a3 + 16 * v6 )
          sub_10431220(v11);
        if ( v11[2] >= 0 )
        {
          if ( v11[0] )
          {
            (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v11[0]);
            v11[0] = 0;
          }
          v11[1] = 0;
        }
        v5 += 64;
        --v13;
      }
      while ( v13 );
      return v12;
    }
  }
  return result;
}

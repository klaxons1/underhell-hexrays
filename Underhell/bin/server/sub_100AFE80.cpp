void __thiscall sub_100AFE80(int this, int a2)
{
  int v3; // esi
  int *v4; // ebx
  _DWORD v5[2]; // [esp+4h] [ebp-Ch] BYREF
  int *v6; // [esp+Ch] [ebp-4h]

  if ( a2 )
  {
    v5[0] = a2;
    *(float *)&v5[1] = -1.0;
    v6 = 0;
    v3 = sub_100ADBC0((unsigned __int8 (__cdecl **)(int, int))this, (int)v5);
    if ( v6 )
    {
      v4 = v6;
      sub_10068150(v6);
      sub_10184660(v4);
    }
    v6 = 0;
    if ( v3 != -1 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(
        g_pMemAlloc,
        *(_DWORD *)(*(_DWORD *)(this + 4) + 28 * v3 + 16));
      sub_100AF840((_DWORD *)this, v3);
    }
  }
}

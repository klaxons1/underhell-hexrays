int __thiscall sub_100CF5F0(int this, int *a2)
{
  int v3; // edi
  int v4; // edx
  int v6; // [esp+8h] [ebp-18h] BYREF
  _DWORD v7[4]; // [esp+Ch] [ebp-14h] BYREF
  unsigned __int8 (__cdecl *v8)(int, int); // [esp+1Ch] [ebp-4h] BYREF

  sub_1022D3E0(v7);
  v6 = *a2;
  sub_100CC430((unsigned __int8 (__cdecl **)(int, int))this, (int)&v6, &v8, &a2);
  v3 = sub_100CE5C0((_DWORD *)this);
  sub_100CE380((_DWORD *)this, v3, (int)v8, (char)a2);
  v4 = *(_DWORD *)(this + 4);
  ++*(_DWORD *)(this + 20);
  if ( v4 + 36 * v3 != -16 )
  {
    *(_DWORD *)(v4 + 36 * v3 + 16) = v6;
    sub_1022D370(v7);
  }
  if ( v7[2] >= 0 && v7[0] )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v7[0]);
  return v3;
}

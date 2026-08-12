int __thiscall sub_1021A400(int this, int a2, int a3)
{
  int result; // eax
  int v4; // ecx
  int v5; // [esp+0h] [ebp-8h] BYREF
  int v6; // [esp+4h] [ebp-4h] BYREF

  if ( !*(_BYTE *)(this + 4) )
    return a3;
  v4 = *(_DWORD *)(this + 8);
  v6 = 4;
  if ( (*(int (__cdecl **)(int, int, _DWORD, int *, int *, int *))(g_pVCR + 72))(v4, a2, 0, &a2, &v5, &v6) )
    return a3;
  result = a3;
  if ( a2 == 4 )
    return v5;
  return result;
}

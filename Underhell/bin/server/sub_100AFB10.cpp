int __thiscall sub_100AFB10(int this, int a2)
{
  int v2; // ebx
  int v4; // edi
  int v5; // edx
  _DWORD *v6; // esi
  int v7; // eax
  unsigned __int8 (__cdecl *v9)(int, int); // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_100ACD70((unsigned __int8 (__cdecl **)(int, int))this, a2, &v9, &a2);
  v4 = sub_100ACE70((_DWORD *)this);
  sub_100AF4E0((_DWORD *)this, v4, (int)v9, a2);
  ++*(_DWORD *)(this + 20);
  v5 = *(_DWORD *)(this + 4);
  v6 = (_DWORD *)(v5 + 28 * v4 + 16);
  if ( v5 + 28 * v4 != -16 )
  {
    *v6 = *(_DWORD *)v2;
    *(float *)(v5 + 28 * v4 + 20) = *(float *)(v2 + 4);
    *(_DWORD *)(v5 + 28 * v4 + 24) = 0;
    if ( *(_DWORD *)(v2 + 8) )
    {
      v7 = sub_10184390(168);
      if ( v7 )
      {
        v6[2] = sub_100657C0(v7, *(_DWORD *)(v2 + 8));
        return v4;
      }
      v6[2] = 0;
    }
  }
  return v4;
}

int __usercall sub_101500D0@<eax>(int a1@<eax>, int a2@<esi>)
{
  int v2; // eax
  int v4; // [esp+0h] [ebp-8h] BYREF

  if ( a1 && (v4 = a1, v2 = sub_100B4B40((unsigned __int8 (__cdecl **)(int, int))a2, (int)&v4), v2 != -1) )
    return *(_DWORD *)(*(_DWORD *)(a2 + 4) + 24 * v2 + 20);
  else
    return 0;
}

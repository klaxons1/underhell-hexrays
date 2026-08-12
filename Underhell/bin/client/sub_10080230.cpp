int __thiscall sub_10080230(int this, int a2, int a3)
{
  int result; // eax
  int v5; // edi
  int v6; // ebx

  sub_1007F3E0(this + 184, a2, a3);
  for ( result = *(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 180))(a2);
        (_WORD)result != 0xFFFF;
        result = *(unsigned __int16 *)(*(_DWORD *)(this + 104) + v5 + 6) )
  {
    v5 = 8 * (unsigned __int16)result;
    v6 = *(_DWORD *)(this + 32) + 36 * *(unsigned __int16 *)(v5 + *(_DWORD *)(this + 104));
    if ( *(_DWORD *)(v6 + 12) != *(_DWORD *)(this + 388) )
    {
      sub_10080190((_DWORD *)this, *(unsigned __int16 *)(v5 + *(_DWORD *)(this + 104)), a3);
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(this + 388);
    }
  }
  return result;
}

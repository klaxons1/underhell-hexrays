_WORD *__thiscall sub_100802C0(int this, int a2, int a3, int a4)
{
  _WORD *result; // eax
  int v6; // ebx
  int v7; // edi
  int v8; // edi
  int v9; // ebx
  int i; // [esp+Ch] [ebp-4h]

  sub_1007F490(this + 184, a2);
  result = sub_1007F6B0(this + 264, a2);
  ++*(_DWORD *)(this + 388);
  v6 = 0;
  for ( i = 0; v6 < a3; i = v6 )
  {
    v7 = *(_DWORD *)(a4 + 4 * v6);
    sub_1007F3E0(this + 184, v7, a2);
    result = (_WORD *)*(unsigned __int16 *)(*(int (__cdecl **)(int))(this + 180))(v7);
    if ( (_WORD)result != 0xFFFF )
    {
      do
      {
        v8 = 8 * (unsigned __int16)result;
        v9 = *(_DWORD *)(this + 32) + 36 * *(unsigned __int16 *)(v8 + *(_DWORD *)(this + 104));
        if ( *(_DWORD *)(v9 + 12) != *(_DWORD *)(this + 388) )
        {
          sub_10080190((_DWORD *)this, *(unsigned __int16 *)(v8 + *(_DWORD *)(this + 104)), a2);
          *(_DWORD *)(v9 + 12) = *(_DWORD *)(this + 388);
        }
        result = (_WORD *)*(unsigned __int16 *)(*(_DWORD *)(this + 104) + v8 + 6);
      }
      while ( (_WORD)result != 0xFFFF );
      v6 = i;
    }
    ++v6;
  }
  return result;
}

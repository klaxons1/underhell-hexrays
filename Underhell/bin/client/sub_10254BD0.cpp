bool __thiscall sub_10254BD0(void *this, int a2)
{
  _WORD *v2; // eax
  bool result; // al

  result = 0;
  if ( *(_DWORD *)(a2 + 12) == 1 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 204))(this) )
    {
      v2 = (_WORD *)sub_1022B600(**(_DWORD ***)a2, "text", (int)&unk_10302674);
      if ( v2 )
      {
        if ( *v2 )
          return 1;
      }
    }
  }
  return result;
}

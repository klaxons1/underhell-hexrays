int __thiscall sub_1025E640(int this, int a2)
{
  int result; // eax
  int v4; // [esp+8h] [ebp-4h] BYREF

  result = sub_10258C50((int *)(this + 220), *(_DWORD *)(this + 232), &a2);
  if ( !*(_BYTE *)(this + 246) )
  {
    if ( a2 )
    {
      (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)a2 + 12))(a2, &v4, &a2);
      return sub_102361A0((int (__thiscall ***)(void *, int, int))this, v4, a2);
    }
  }
  return result;
}

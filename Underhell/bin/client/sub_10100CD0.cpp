int __thiscall sub_10100CD0(int this)
{
  int v2; // eax
  int result; // eax
  int v4; // edi
  int v5; // esi
  int v6; // esi
  int i; // [esp+Ch] [ebp-Ch]
  int v8; // [esp+10h] [ebp-8h]
  int v9; // [esp+14h] [ebp-4h]

  v2 = *(_DWORD *)(this + 12);
  if ( v2 > 0 )
  {
    qmemcpy(*(void **)this, (const void *)(*(_DWORD *)this + 56 * v2 - 56), 0x38u);
    --*(_DWORD *)(this + 12);
  }
  result = *(_DWORD *)(this + 12);
  v9 = 0;
  v8 = result;
  if ( result )
  {
    result /= 2;
    v4 = 0;
    for ( i = result; v4 < i; v9 = v4 )
    {
      v5 = 2 * v9 + 1;
      if ( v5 < v8
        && (*(unsigned __int8 (__cdecl **)(int, int))(this + 20))(*(_DWORD *)this + 56 * v9, *(_DWORD *)this + 56 * v5) )
      {
        v4 = 2 * v9 + 1;
      }
      v6 = 2 * v9 + 2;
      if ( v6 < v8
        && (*(unsigned __int8 (__cdecl **)(int, int))(this + 20))(*(_DWORD *)this + 56 * v4, *(_DWORD *)this + 56 * v6) )
      {
        v4 = 2 * v9 + 2;
      }
      result = v9;
      if ( v4 == v9 )
        break;
      result = sub_100FC460((int *)this, v9, v4);
    }
  }
  return result;
}

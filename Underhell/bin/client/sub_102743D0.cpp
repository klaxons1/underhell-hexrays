int __thiscall sub_102743D0(int this, _DWORD *a2, int *a3, int a4, _DWORD *a5, int a6, int a7)
{
  int *v7; // ebx
  int result; // eax
  int v10; // edi
  int v11; // ebp
  char v12[4]; // [esp+8h] [ebp-4h] BYREF

  v7 = a3;
  if ( *a2 )
  {
    --*a2;
  }
  else
  {
    sub_10236170((int (__thiscall ***)(void *, int, int))this, (int)v12, (int)&a3);
    if ( a7 >= (int)a3 && a7 < (int)a3 + *(_DWORD *)(*(_DWORD *)(this + 268) + 256) )
      return this;
    *a5 += *(_DWORD *)(*(_DWORD *)(this + 268) + 256);
    --*v7;
  }
  v10 = 0;
  v11 = a4 + 20;
  if ( *(int *)(this + 232) <= 0 )
    return 0;
  while ( 1 )
  {
    if ( *v7 > 0 )
    {
      if ( *(_BYTE *)(this + 240) )
      {
        result = sub_102743D0(a2, v7, v11, a5, a6, a7);
        if ( result )
          break;
      }
    }
    if ( ++v10 >= *(_DWORD *)(this + 232) )
      return 0;
  }
  return result;
}

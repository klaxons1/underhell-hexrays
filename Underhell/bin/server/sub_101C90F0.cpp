char __thiscall sub_101C90F0(int (__cdecl **this)(_DWORD), int a2, int *a3, int *a4)
{
  unsigned int v5; // eax
  int v6; // edx
  _DWORD *v7; // ebx
  int v8; // eax
  int v9; // esi
  int v11; // [esp+18h] [ebp+Ch]

  v5 = this[6](a2);
  if ( *((_BYTE *)this + 28) )
    v6 = v5 & (unsigned int)this[8];
  else
    v6 = v5 % (unsigned int)this[3];
  *a3 = v6;
  v7 = (_DWORD *)((char *)*this + 20 * v6);
  v8 = v7[3];
  v9 = 0;
  v11 = v8;
  if ( v8 > 0 )
  {
    do
    {
      if ( ((unsigned __int8 (__cdecl *)(int, int))this[5])(*v7 + 8 * v9, a2) )
        break;
      ++v9;
    }
    while ( v9 < v11 );
    v8 = v11;
  }
  if ( v9 == v8 )
    return 0;
  *a4 = v9;
  return 1;
}

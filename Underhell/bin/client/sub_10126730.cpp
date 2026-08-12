int __thiscall sub_10126730(void *this, int a2)
{
  _WORD *v3; // ecx
  unsigned __int16 v4; // si
  _WORD *v5; // ecx
  int v7; // [esp+Ch] [ebp-8h] BYREF

  v3 = *(_WORD **)this;
  if ( a2 )
  {
    v7 = a2;
    v4 = sub_10125B70(v3, (int)&v7);
  }
  else
  {
    v4 = -1;
  }
  v5 = *(_WORD **)this;
  if ( v4 >= *(int *)(*(_DWORD *)this + 8) || v4 > v5[11] || sub_101257E0(v5, v4) == v4 )
    return -1;
  else
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 4) + 16 * v4 + 12);
}

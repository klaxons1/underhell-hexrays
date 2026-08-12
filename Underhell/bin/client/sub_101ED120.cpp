int __thiscall sub_101ED120(int this, _DWORD *a2)
{
  _DWORD *v2; // edi
  unsigned __int16 v4; // bp
  _DWORD *v5; // ebx
  unsigned __int16 v6; // di
  int v7; // ecx
  int v9; // [esp+8h] [ebp-8h] BYREF
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  if ( (_DWORD *)this != a2 )
  {
    sub_101EB810(this);
    v4 = sub_101EB8D0((int)a2);
    if ( v4 != 0xFFFF )
    {
      while ( 1 )
      {
        v5 = (_DWORD *)(v2[1] + 12 * v4 + 8);
        sub_101EAEB0((_WORD *)this, (int)v5, (unsigned __int16 *)&v10, &v9);
        v6 = sub_101EAFC0(this);
        sub_101EC900(this, v6, v10, v9);
        v7 = *(_DWORD *)(this + 4);
        ++*(_WORD *)(this + 18);
        if ( v7 + 12 * v6 != -8 )
          *(_DWORD *)(v7 + 12 * v6 + 8) = *v5;
        v4 = sub_101EB990(a2, v4);
        if ( v4 == 0xFFFF )
          break;
        v2 = a2;
      }
    }
  }
  return this;
}

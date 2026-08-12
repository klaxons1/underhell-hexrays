bool __thiscall sub_103B35A0(_DWORD *this, int a2, float *a3)
{
  unsigned int v4; // eax
  int *v5; // ecx
  bool result; // al
  int v7; // eax
  int v8; // eax
  _BYTE v9[44]; // [esp+4h] [ebp-54h] BYREF
  float v10; // [esp+30h] [ebp-28h]
  int v11; // [esp+50h] [ebp-8h]
  int savedregs; // [esp+58h] [ebp+0h] BYREF

  v4 = this[950];
  result = 0;
  if ( v4 == -1 || (v5 = &off_1061BE18[4 * (this[950] & 0xFFF) + 1], v5[1] != v4 >> 12) || !*v5 )
  {
    v7 = *(_DWORD *)(a2 + 76);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 220) )
      {
        sub_1002A5F0((int)&savedregs, (int)this, (float *)(a2 + 12), a3, 1174421507, v7, 0, (int)v9);
        if ( 1.0 == v10 )
          return 1;
        v8 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
        if ( v11 == v8 )
          return 1;
      }
    }
  }
  return result;
}

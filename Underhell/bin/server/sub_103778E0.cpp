bool __thiscall sub_103778E0(void *this, int a2, float *a3)
{
  int v4; // ecx
  bool result; // al
  int v6; // eax
  int v7; // eax
  _BYTE v8[44]; // [esp+8h] [ebp-54h] BYREF
  float v9; // [esp+34h] [ebp-28h]
  int v10; // [esp+54h] [ebp-8h]
  int savedregs; // [esp+5Ch] [ebp+0h] BYREF

  v4 = *(_DWORD *)(a2 + 76);
  result = 0;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 220) )
    {
      v6 = sub_100D7680(v4);
      if ( !v6 || (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1080))(this, v6) != 3 )
      {
        sub_1002A5F0((int)&savedregs, (int)this, (float *)(a2 + 12), a3, 1174421507, *(_DWORD *)(a2 + 76), 0, (int)v8);
        if ( 1.0 == v9 )
          return 1;
        v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
        if ( v10 == v7 )
          return 1;
      }
    }
  }
  return result;
}

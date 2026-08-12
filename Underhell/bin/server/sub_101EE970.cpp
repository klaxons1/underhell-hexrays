void __thiscall sub_101EE970(int *this, int a2)
{
  int v3; // esi
  int v4; // ecx
  int v5; // ebx
  int *v6; // esi
  _DWORD *v7; // eax
  float v8; // [esp+4h] [ebp-68h]
  float v9; // [esp+8h] [ebp-64h]
  int v10; // [esp+74h] [ebp+8h]

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  v4 = this[55];
  v10 = abs32(this[55] - v3);
  if ( v3 <= v4 )
  {
    if ( v3 < v4 )
    {
      if ( v3 )
      {
        if ( v4 != v3 )
        {
          (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
          this[55] = v3;
        }
      }
      else
      {
        v5 = this[1002];
        v6 = this + 1002;
        if ( v5 )
        {
          (*(void (__thiscall **)(int *, int *))(*this + 1628))(this, this + 1002);
          *v6 = 0;
        }
        v8 = (float)v10;
        v7 = (_DWORD *)sub_10248110((int)this, (int)this, v8, 0, 0);
        sub_100D9E70(this, (int)v6, v7);
        if ( *v6 != v5 )
        {
          (*(void (__thiscall **)(int *, int *))(*this + 1628))(this, this + 1002);
          *v6 = v5;
        }
      }
    }
  }
  else
  {
    v9 = (float)v10;
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 260))(this, LODWORD(v9), 0);
  }
}

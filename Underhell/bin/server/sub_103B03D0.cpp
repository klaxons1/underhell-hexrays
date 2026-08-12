void __thiscall sub_103B03D0(int *this, int a2)
{
  int *v3; // eax
  int v4; // edx
  _DWORD v5[10]; // [esp+4h] [ebp-50h] BYREF
  int v6; // [esp+2Ch] [ebp-28h]
  int v7; // [esp+30h] [ebp-24h]
  float v8; // [esp+38h] [ebp-1Ch]

  sub_10247EC0(v5);
  if ( this )
  {
    v3 = (int *)(*(int (__thiscall **)(int *))(*this + 8))(this);
    v4 = *this;
    v7 = *v3;
    v6 = *(_DWORD *)(*(int (__thiscall **)(int *))(v4 + 8))(this);
  }
  else
  {
    v7 = -1;
    v6 = -1;
  }
  v8 = (float)this[55];
  sub_100D9E70(this, (int)this, v5);
}

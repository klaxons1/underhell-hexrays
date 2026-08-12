void __thiscall sub_10144570(int this, int a2)
{
  int v3; // [esp+10h] [ebp+8h]
  float v4; // [esp+10h] [ebp+8h]

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  v4 = (float)v3;
  if ( *(_DWORD *)(this + 840) != LODWORD(v4) )
  {
    (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 840);
    *(float *)(this + 840) = v4;
  }
  sub_10144140(this);
}

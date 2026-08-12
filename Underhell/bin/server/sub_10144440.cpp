void __thiscall sub_10144440(int this, int a2)
{
  double v3; // st7
  float *v4; // esi
  float v5; // [esp+10h] [ebp+8h]

  if ( *(_DWORD *)(a2 + 24) == 1 )
    v3 = *(float *)(a2 + 8);
  else
    v3 = 0.0;
  v5 = v3;
  v4 = (float *)(this + 844);
  if ( *(_DWORD *)(this + 844) != LODWORD(v5) )
  {
    (**(void (__thiscall ***)(int, int))(this + 800))(this + 800, this + 844);
    *v4 = v5;
  }
  sub_10144140(this);
}

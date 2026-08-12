void __thiscall sub_100F6FA0(int *this, float a2, int a3)
{
  int v4; // eax
  int v5; // edi

  ++this[45];
  if ( a2 == 0.0 || !a3 )
  {
    --this[45];
  }
  else
  {
    v4 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(a2) + 68))(COERCE_FLOAT(LODWORD(a2)));
    v5 = v4;
    if ( v4 )
    {
      if ( sub_100F6E90(this, v4) >= 0.5 )
        sub_100F5650(a3, a2, v5);
    }
    --this[45];
  }
}

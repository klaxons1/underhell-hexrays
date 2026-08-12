void __thiscall sub_1029A8C0(int this, _BYTE *a2)
{
  _DWORD *v2; // edi
  const char *v4; // eax

  v2 = a2;
  if ( sub_10295660(a2, (int *)&a2) )
  {
    if ( !a2[16] )
      sub_10299D40((int)a2, this, *(float *)(this + 852), *(_BYTE *)(this + 856));
  }
  else
  {
    v4 = sub_100D6390(v2);
    DevMsg("ActBusy goal entity activated for an NPC (%s) that doesn't have the ActBusy behavior\n", v4);
  }
}

int __thiscall sub_102FAC60(_DWORD *this)
{
  int v2; // eax
  int *v3; // ecx

  *this = &CNPC_Alyx::`vftable';
  this[526] = &CNPC_Alyx::`vftable';
  this[905] = &CNPC_Alyx::`vftable';
  this[913] = &CNPC_Alyx::`vftable';
  v2 = dword_106E2934;
  v3 = &dword_106E2934;
  if ( dword_106E2934 )
  {
    while ( (_DWORD *)v2 != this )
    {
      v3 = (int *)(v2 + 5684);
      v2 = *(_DWORD *)(v2 + 5684);
      if ( !v2 )
        goto LABEL_6;
    }
    *v3 = *(_DWORD *)(v2 + 5684);
  }
LABEL_6:
  sub_1010BB10(this + 1475);
  sub_1010BB10(this + 1469);
  sub_1029BE30(this + 1460);
  return sub_102FAB90(this);
}

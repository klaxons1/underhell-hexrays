void __thiscall sub_10051D90(int this)
{
  double v1; // st7
  _DWORD *v2; // eax

  v1 = *(float *)(this + 116);
  ++*(_DWORD *)(this + 112);
  if ( 3.4028235e38 == v1 )
    *(float *)(this + 116) = *(float *)(dword_106B31C8 + 12);
  v2 = *(_DWORD **)(this + 4);
  if ( v2 )
  {
    if ( *(_DWORD *)(dword_10692124 + 48) )
      sub_10029660(v2, (int)"Follow: NoteFailedFollow() (%d, %f)\n");
  }
}

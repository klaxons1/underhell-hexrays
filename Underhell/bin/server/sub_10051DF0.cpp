void __thiscall sub_10051DF0(int this)
{
  _DWORD *v1; // ecx

  *(_DWORD *)(this + 112) = 0;
  *(float *)(this + 116) = 3.4028235e38;
  v1 = *(_DWORD **)(this + 4);
  if ( v1 )
  {
    if ( *(_DWORD *)(dword_10692124 + 48) )
      sub_10029660(v1, (int)"Follow: NoteSuccessfulFollow()\n");
  }
}

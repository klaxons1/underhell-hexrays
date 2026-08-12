char __thiscall sub_10052E10(int this, char a2)
{
  int v3; // eax
  _DWORD *v4; // eax

  v3 = *(_DWORD *)sub_10043EC0(*(_DWORD **)(this + 4));
  if ( v3 == 100002 || v3 == 100003 )
  {
    v4 = *(_DWORD **)(this + 4);
    *(float *)(this + 116) = 3.4028235e38;
    *(_DWORD *)(this + 112) = 0;
    if ( v4 && *(_DWORD *)(dword_10692124 + 48) )
      sub_10029660(v4, (int)"Follow: NoteSuccessfulFollow()\n");
  }
  return sub_10027CD0(*(_DWORD **)(this + 4), a2);
}

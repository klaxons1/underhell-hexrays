void __thiscall sub_1024DD10(int this)
{
  char *v2; // eax
  char *v3; // eax
  char *v4; // eax
  char *v5; // esi

  if ( 0.0 == *(float *)(this + 848) )
    *(float *)(this + 848) = 1.0;
  if ( *(_DWORD *)(this + 876) )
  {
    v2 = *(char **)(this + 876);
    if ( !v2 )
      v2 = (char *)String;
    sub_1023B8B0(v2);
  }
  if ( *(_DWORD *)(this + 880) )
  {
    v3 = *(char **)(this + 880);
    if ( !v3 )
      v3 = (char *)String;
    sub_1023B8B0(v3);
  }
  if ( *(_DWORD *)(this + 884) )
  {
    v4 = *(char **)(this + 884);
    if ( !v4 )
      v4 = (char *)String;
    sub_1023B8B0(v4);
  }
  if ( *(_DWORD *)(this + 888) )
  {
    v5 = *(char **)(this + 888);
    if ( !v5 )
      v5 = (char *)String;
    sub_1023B8B0(v5);
  }
}

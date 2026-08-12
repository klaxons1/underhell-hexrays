void __thiscall sub_10415990(int this)
{
  int v1; // eax
  int v2; // edx

  if ( *(_BYTE *)(this + 2144) )
  {
    v1 = dword_106F13A8;
    v2 = 0;
    if ( dword_106F13A8 )
    {
      while ( v1 != this )
      {
        v2 = v1;
        v1 = *(_DWORD *)(v1 + 2148);
        if ( !v1 )
        {
          *(_DWORD *)(this + 2148) = 0;
          *(_BYTE *)(this + 2144) = 0;
          return;
        }
      }
      if ( v2 )
      {
        *(_DWORD *)(v2 + 2148) = *(_DWORD *)(this + 2148);
        *(_DWORD *)(this + 2148) = 0;
        *(_BYTE *)(this + 2144) = 0;
        return;
      }
      dword_106F13A8 = *(_DWORD *)(this + 2148);
    }
    *(_DWORD *)(this + 2148) = 0;
    *(_BYTE *)(this + 2144) = 0;
  }
}
